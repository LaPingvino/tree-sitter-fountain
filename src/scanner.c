// External scanner for Fountain: decides what each line is.
//
// Fountain is line based and what a line is depends on its neighbours
// (https://fountain.io/syntax):
//   - a character cue is a line in capitals with a blank line before it
//     and a non-blank line after it (or any line forced with @);
//   - a scene heading starts with INT, EXT, EST, INT./EXT, INT/EXT,
//     EXT/INT, I/E (any case) followed by a dot or a space, after a blank
//     line (or any line forced with a single .);
//   - a transition is a line in capitals ending in TO: with blank lines
//     on both sides (or any line forced with >);
//   - > centered <, ~lyrics, = synopses, === page breaks, # sections;
//   - after a cue, lines are parentheticals or dialogue up to a blank
//     line (a line of two spaces keeps the speech going);
//   - the title page is "Key: value" lines at the start of the file, the
//     values inline or on lines below indented by three spaces or a tab.
//
// At the start of each line the scanner reads the line and the next one
// and emits a zero-width marker for the line's kind; the grammar then
// parses the line. It also emits the newlines, the blank lines (extras),
// the indentation that elements other than action ignore, the forcing
// characters, and the end of a section (before a heading with as many or
// fewer #'s, and at the end of the file).

#include "tree_sitter/alloc.h"
#include "tree_sitter/parser.h"

#include <stdbool.h>
#include <stdint.h>
#include <string.h>
#include <wctype.h>

enum TokenType {
  BLANK_LINE,
  NEWLINE,
  INDENT,
  SECTION_END,
  TITLE_KEY_START,
  TITLE_VALUE_START,
  SECTION_START,
  SCENE_START,
  ACTION_START,
  ACTION_CONTINUE,
  CHARACTER_START,
  PARENTHETICAL_START,
  DIALOGUE_START,
  DIALOGUE_LYRIC_START,
  LYRIC_START,
  TRANSITION_START,
  CENTERED_START,
  SYNOPSIS_START,
  PAGE_BREAK,
  FORCE_MARKER,
  DUAL_DIALOGUE_MARKER,
  CENTERED_END,
  ERROR_SENTINEL,
};

#define MAX_DEPTH 64
#define LINE_MAX 1024

typedef struct {
  bool prev_blank;      // the previous line was blank (or this is the start)
  bool in_dialogue;     // after a character cue, before a blank line
  bool in_title;        // within the title page
  bool seen_content;    // a non-blank line has been read
  bool line_classified; // the current line has its marker
  uint8_t force;        // the forcing character the line starts with, or 0
  uint8_t last_kind;    // the token of the last line's marker
  uint8_t depth;        // open sections
  uint8_t levels[MAX_DEPTH];
} Scanner;

// The line being looked at, with what the checks need.
typedef struct {
  int32_t text[LINE_MAX]; // the line without its leading whitespace
  uint32_t len;
  bool truncated;
  bool raw_bang;  // the line itself (not trimmed) starts with !
  bool indented;  // starts with a tab or three spaces
  bool next_blank;
  bool next_indented; // the next line is indented and not blank
  bool page_break;    // only ===: its end is marked
} Line;

static inline void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static inline bool is_space(int32_t c) { return c == ' ' || c == '\t'; }

static inline bool is_eol(TSLexer *lexer) {
  return lexer->eof(lexer) || lexer->lookahead == '\n' ||
         lexer->lookahead == '\r';
}

// Letter case. Grammars run as WebAssembly in editors (Zed), where the C
// library's iswupper and friends may know only ASCII, so the scripts
// screenplays are mostly written in (Latin, Greek, Cyrillic) are handled
// here, the same everywhere.
static int case_of(int32_t c) { // 1 capital, -1 small, 0 neither
  if (c < 128) {
    if (c >= 'A' && c <= 'Z') return 1;
    if (c >= 'a' && c <= 'z') return -1;
    return 0;
  }
  if (c >= 0xC0 && c <= 0xDE && c != 0xD7) return 1;
  if (c >= 0xDF && c <= 0xFF && c != 0xF7) return -1;
  if (c >= 0x100 && c <= 0x137) return (c & 1) ? -1 : 1;
  if (c == 0x138) return -1;
  if (c >= 0x139 && c <= 0x148) return (c & 1) ? 1 : -1;
  if (c == 0x149) return -1;
  if (c >= 0x14A && c <= 0x177) return (c & 1) ? -1 : 1;
  if (c == 0x178 || c == 0x179 || c == 0x17B || c == 0x17D) return 1;
  if (c == 0x17A || c == 0x17C || c == 0x17E || c == 0x17F) return -1;
  if (c >= 0x391 && c <= 0x3AB && c != 0x3A2) return 1;
  if (c >= 0x3AC && c <= 0x3CE) return -1;
  if (c >= 0x400 && c <= 0x42F) return 1;
  if (c >= 0x430 && c <= 0x45F) return -1;
  if (c >= 0x460 && c <= 0x4FF) return (c & 1) ? -1 : 1;
  if (iswupper((wint_t)c)) return 1;
  if (iswlower((wint_t)c)) return -1;
  return 0;
}

static inline bool is_upper(int32_t c) { return case_of(c) > 0; }

static inline bool is_lower(int32_t c) { return case_of(c) < 0; }

// To capitals, for the scene heading prefixes (ASCII only).
static inline int32_t upper(int32_t c) {
  if (c >= 'a' && c <= 'z') return c - 'a' + 'A';
  return c;
}

static inline bool is_alnum(int32_t c) {
  if (c < 128)
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
           (c >= '0' && c <= '9');
  return iswalnum((wint_t)c);
}

// The line without [[notes]] and /* boneyard */ written within it, and
// without whitespace at either end.
static uint32_t strip(const Line *line, int32_t *out) {
  uint32_t n = 0;
  for (uint32_t i = 0; i < line->len; i++) {
    int32_t c = line->text[i];
    if (c == '[' && i + 1 < line->len && line->text[i + 1] == '[') {
      uint32_t j = i + 2;
      while (j + 1 < line->len &&
             !(line->text[j] == ']' && line->text[j + 1] == ']'))
        j++;
      if (j + 1 < line->len) {
        i = j + 1;
        continue;
      }
    }
    if (c == '/' && i + 1 < line->len && line->text[i + 1] == '*') {
      uint32_t j = i + 2;
      while (j + 1 < line->len &&
             !(line->text[j] == '*' && line->text[j + 1] == '/'))
        j++;
      i = j + 1; // an open boneyard runs to the end of the line
      continue;
    }
    out[n++] = c;
  }
  while (n > 0 && is_space(out[n - 1])) n--;
  uint32_t start = 0;
  while (start < n && is_space(out[start])) start++;
  if (start > 0) {
    memmove(out, out + start, (n - start) * sizeof(int32_t));
    n -= start;
  }
  return n;
}

// No small letters and at least one capital.
static bool all_caps(const int32_t *s, uint32_t n) {
  bool capital = false;
  for (uint32_t i = 0; i < n; i++) {
    if (is_lower(s[i])) return false;
    if (is_upper(s[i])) capital = true;
  }
  return capital;
}

// Scene heading prefixes as Fountain has them, in any case.
static const char *SCENE_PREFIXES[] = {
    "INT./EXT", "INT/EXT", "EXT./INT", "EXT/INT", "INT", "EXT", "EST", "I/E",
};

// Lexington's scene heading prefixes for other languages (its rules
// package), in capitals only: "Open the door." is action, "OPEN. PLEIN"
// a Dutch scene heading.
static const char *SCENE_PREFIXES_OTHER[] = {
    // it, nl, de
    "INT./EST", "INT/EST", "EST/INT", "EST./INT", "BIN./BUI", "BUI./BIN",
    "BIN/BUI", "BI/BU", "BIN", "BUI", "BI", "BU", "OPEN", "ETABL",
    // eo
    "EN./EKST", "EKST./EN", "EN/EKST", "EKST/EN", "EN.", "ENE", "EKST", "EK",
    // ru
    "ИНТ./НАТ", "НАТ./ИНТ", "ИНТ/НАТ", "НАТ/ИНТ", "ИНТ", "НАТ", "ЭКСТ", "И/Н",
    "Н/И",
    // ar (after Hekaya), he, zh
    "داخلي/خارجي", "خارجي/داخلي", "لقطة تأسيسية", "داخلي", "خارجي", "د/خ",
    "פנים/חוץ", "חוץ/פנים", "פנים", "חוץ", "内景/外景", "外景/内景", "内景",
    "外景",
    // ja: hashira start with a circle
    "○", "◯",
    // tok
    "INSA/KON", "KON/INSA", "INSA", "KON", "I./K", "I/K", "K./I", "K/I",
};

// Decodes UTF-8 into code points; returns their number.
static uint32_t decode(const char *s, int32_t *out, uint32_t max) {
  const unsigned char *p = (const unsigned char *)s;
  uint32_t n = 0;
  while (*p && n < max) {
    int32_t c;
    if (*p < 0x80) {
      c = *p++;
    } else if ((*p & 0xE0) == 0xC0) {
      c = (*p++ & 0x1F) << 6;
      c |= (*p++ & 0x3F);
    } else if ((*p & 0xF0) == 0xE0) {
      c = (*p++ & 0x0F) << 12;
      c |= (*p++ & 0x3F) << 6;
      c |= (*p++ & 0x3F);
    } else {
      c = (*p++ & 0x07) << 18;
      c |= (*p++ & 0x3F) << 12;
      c |= (*p++ & 0x3F) << 6;
      c |= (*p++ & 0x3F);
    }
    out[n++] = c;
  }
  return n;
}

// s starts with the prefix, followed by a dot or a space, or by anything
// when the prefix ends in a sign (○喫茶店) or a dot (EN.).
static bool starts_scene(const int32_t *s, uint32_t n, const char *prefix,
                         bool any_case) {
  int32_t p[32];
  uint32_t k = decode(prefix, p, 32);
  if (n <= k) return false;
  for (uint32_t i = 0; i < k; i++) {
    if ((any_case ? upper(s[i]) : s[i]) != p[i]) return false;
  }
  if (s[k] == '.' || s[k] == ' ' || s[k] == '\t') return true;
  if (p[k - 1] == '.') return is_space(s[k]);
  return !is_alnum(p[k - 1]) && p[k - 1] != '.';
}

static bool is_scene_heading(const int32_t *s, uint32_t n) {
  for (unsigned i = 0; i < sizeof(SCENE_PREFIXES) / sizeof(*SCENE_PREFIXES);
       i++)
    if (starts_scene(s, n, SCENE_PREFIXES[i], true)) return true;
  for (unsigned i = 0;
       i < sizeof(SCENE_PREFIXES_OTHER) / sizeof(*SCENE_PREFIXES_OTHER); i++)
    if (starts_scene(s, n, SCENE_PREFIXES_OTHER[i], false)) return true;
  return false;
}

// A character cue: capitals before any (extension), ignoring a ^.
static bool is_cue(const int32_t *s, uint32_t n) {
  while (n > 0 && (s[n - 1] == '^' || is_space(s[n - 1]))) n--;
  uint32_t name = 0;
  while (name < n && s[name] != '(') name++;
  if (name == 0) return false;
  if (!all_caps(s, name)) return false;
  // a name has a letter: "23" is no cue, "R2D2" is
  for (uint32_t i = 0; i < name; i++)
    if (is_upper(s[i])) return true;
  return false;
}

static bool is_transition(const int32_t *s, uint32_t n) {
  return n >= 3 && s[n - 3] == 'T' && s[n - 2] == 'O' && s[n - 1] == ':' &&
         all_caps(s, n);
}

// "Key: value": a key starting with a letter or digit; with nothing
// after the colon, the key is in capitals only if the value follows on
// indented lines (so "FADE IN:" is no title page field).
static bool is_title_field(const Line *line, const int32_t *s, uint32_t n) {
  if (line->indented || n == 0 || !is_alnum(s[0])) return false;
  uint32_t colon = 0;
  while (colon < n && s[colon] != ':') colon++;
  if (colon == n) return false;
  if (is_scene_heading(s, n)) return false;
  bool value = false;
  for (uint32_t i = colon + 1; i < n; i++)
    if (!is_space(s[i])) value = true;
  bool small = false;
  for (uint32_t i = 0; i < colon; i++)
    if (is_lower(s[i])) small = true;
  if (value || small) return true;
  return line->next_indented;
}

// Section level of a stripped line starting with #.
static uint8_t section_level(const int32_t *s, uint32_t n) {
  uint32_t level = 0;
  while (level < n && s[level] == '#') level++;
  return level > 255 ? 255 : (uint8_t)level;
}

// Reads a line from a [[ and reports whether it holds only notes; the
// lexer is left at its end.
static bool note_only_line(TSLexer *lexer) {
  bool only = true;
  while (!is_eol(lexer)) {
    if (is_space(lexer->lookahead)) {
      advance(lexer);
      continue;
    }
    if (lexer->lookahead != '[') {
      only = false;
      break;
    }
    advance(lexer);
    if (lexer->lookahead != '[') {
      only = false;
      break;
    }
    advance(lexer);
    bool closed = false;
    while (!is_eol(lexer)) {
      int32_t c = lexer->lookahead;
      advance(lexer);
      if (c == ']' && lexer->lookahead == ']') {
        advance(lexer);
        closed = true;
        break;
      }
    }
    if (!closed) {
      only = false;
      break;
    }
  }
  while (!is_eol(lexer)) advance(lexer);
  return only;
}

// Reads the rest of the line (the lexer is past its leading whitespace)
// and looks at the next one.
static void read_line(TSLexer *lexer, Line *line) {
  while (!is_eol(lexer)) {
    if (line->len < LINE_MAX) {
      line->text[line->len++] = lexer->lookahead;
    } else {
      line->truncated = true;
    }
    advance(lexer);
  }
  while (line->len > 0 && is_space(line->text[line->len - 1])) line->len--;
  // a page break (===) is a token of its own: it ends here
  if (line->len >= 3) {
    bool equals = true;
    for (uint32_t i = 0; i < line->len && equals; i++)
      if (line->text[i] != '=') equals = false;
    if (equals) {
      lexer->mark_end(lexer);
      line->page_break = true;
    }
  }
  // the next line; lines of only [[notes]] are passed over ("NAME" with
  // a note below it and a blank line after that is no cue)
  for (int lines = 0; lines < 16; lines++) {
    if (lexer->eof(lexer)) {
      line->next_blank = true;
      return;
    }
    if (lexer->lookahead == '\r') advance(lexer);
    if (lexer->lookahead == '\n') advance(lexer);
    unsigned spaces = 0;
    bool tab = false;
    bool first = true;
    while (is_space(lexer->lookahead) && !lexer->eof(lexer)) {
      if (first && lexer->lookahead == '\t') tab = true;
      if (lexer->lookahead == ' ') spaces++;
      first = false;
      advance(lexer);
    }
    line->next_blank = is_eol(lexer);
    line->next_indented = !line->next_blank && (tab || spaces >= 3);
    if (line->next_blank || !note_only_line(lexer)) return;
  }
}

static bool emit(Scanner *scanner, TSLexer *lexer, enum TokenType token) {
  lexer->result_symbol = token;
  scanner->line_classified = true;
  scanner->seen_content = true;
  scanner->last_kind = (uint8_t)token;
  switch (token) {
    case CHARACTER_START:
      scanner->in_dialogue = true;
      break;
    case PARENTHETICAL_START:
    case DIALOGUE_START:
    case DIALOGUE_LYRIC_START:
      break;
    default:
      scanner->in_dialogue = false;
  }
  if (token != TITLE_KEY_START && token != TITLE_VALUE_START)
    scanner->in_title = false;
  return true;
}

static bool scan_line_start(Scanner *scanner, TSLexer *lexer,
                            const bool *valid) {
  lexer->mark_end(lexer);

  bool tab_first = lexer->lookahead == '\t';
  unsigned spaces = 0, ws = 0;
  while (is_space(lexer->lookahead) && !lexer->eof(lexer)) {
    if (lexer->lookahead == ' ') spaces++;
    ws++;
    advance(lexer);
  }

  // a blank line, or a line of two spaces within dialogue
  if (is_eol(lexer)) {
    if (scanner->in_dialogue && spaces >= 2 && !lexer->eof(lexer) &&
        valid[DIALOGUE_START]) {
      scanner->force = 0;
      return emit(scanner, lexer, DIALOGUE_START);
    }
    if (lexer->eof(lexer)) {
      if (ws > 0 && valid[BLANK_LINE]) {
        lexer->mark_end(lexer);
        lexer->result_symbol = BLANK_LINE;
        scanner->prev_blank = true;
        scanner->in_dialogue = false;
        return true;
      }
      if (valid[SECTION_END] && scanner->depth > 0) {
        scanner->depth--;
        lexer->result_symbol = SECTION_END;
        return true;
      }
      return false;
    }
    if (!valid[BLANK_LINE]) return false;
    if (lexer->lookahead == '\r') advance(lexer);
    if (lexer->lookahead == '\n') advance(lexer);
    lexer->mark_end(lexer);
    lexer->result_symbol = BLANK_LINE;
    scanner->prev_blank = true;
    scanner->in_dialogue = false;
    if (scanner->seen_content) scanner->in_title = false;
    return true;
  }

  Line *line = ts_calloc(1, sizeof(Line));
  int32_t *s = ts_malloc(LINE_MAX * sizeof(int32_t));
  line->raw_bang = ws == 0 && lexer->lookahead == '!';
  line->indented = tab_first || spaces >= 3;
  read_line(lexer, line);
  uint32_t n = strip(line, s);
  const int32_t *t = line->text; // trimmed at the start, notes kept
  uint32_t tn = line->len;
  int32_t c0 = tn > 0 ? t[0] : 0, c1 = tn > 1 ? t[1] : 0;

  enum TokenType kind = ACTION_START;
  uint8_t force = 0;
  bool decided = false;

#define DECIDE(k, f) \
  do {               \
    kind = (k);      \
    force = (f);     \
    decided = true;  \
  } while (0)

  // the end of sections, before a heading of the same or a higher level
  if (c0 == '#' && valid[SECTION_END] && scanner->depth > 0 &&
      section_level(t, tn) <= scanner->levels[scanner->depth - 1]) {
    ts_free(line);
    ts_free(s);
    scanner->depth--;
    lexer->result_symbol = SECTION_END;
    return true;
  }

  // the title page
  if (valid[TITLE_KEY_START] && (!scanner->seen_content || scanner->in_title)) {
    if (is_title_field(line, t, tn)) {
      scanner->in_title = true;
      DECIDE(TITLE_KEY_START, 0);
    } else if (scanner->in_title && line->indented &&
               valid[TITLE_VALUE_START]) {
      DECIDE(TITLE_VALUE_START, 0);
    }
  }
  if (!decided) scanner->in_title = false;

  bool dialogue = scanner->in_dialogue;
  if (decided) {
  } else if (c0 == '/' && c1 == '*') {
    DECIDE(dialogue ? DIALOGUE_START : ACTION_START, 0);
  } else if (line->raw_bang) {
    DECIDE(ACTION_START, '!');
  } else if (c0 == '@') {
    DECIDE(CHARACTER_START, '@');
  } else if (c0 == '~') {
    DECIDE(dialogue ? DIALOGUE_LYRIC_START : LYRIC_START, '~');
  } else if (c0 == '.' && c1 != '.' && tn > 1) {
    DECIDE(SCENE_START, '.');
  } else if (c0 == '>') {
    if (n > 1 && s[n - 1] == '<' && t[tn - 1] == '<') {
      DECIDE(CENTERED_START, '>');
    } else {
      DECIDE(TRANSITION_START, '>');
    }
  } else if (c0 == '#') {
    DECIDE(SECTION_START, 0);
  } else if (c0 == '=') {
    bool all = tn >= 3;
    for (uint32_t i = 0; i < tn && all; i++)
      if (t[i] != '=') all = false;
    if (all) {
      DECIDE(PAGE_BREAK, 0);
    } else {
      DECIDE(SYNOPSIS_START, '=');
    }
  } else if (n == 0) {
    // only notes (or a boneyard)
    DECIDE(dialogue ? DIALOGUE_START : ACTION_START, 0);
  } else if (dialogue) {
    if (c0 == '(' && t[tn - 1] == ')') {
      DECIDE(PARENTHETICAL_START, 0);
    } else {
      DECIDE(DIALOGUE_START, 0);
    }
  } else if (line->truncated) {
    DECIDE(ACTION_START, 0);
  } else if (scanner->prev_blank && is_scene_heading(s, n)) {
    DECIDE(SCENE_START, 0);
  } else if (scanner->prev_blank && line->next_blank && is_transition(s, n)) {
    DECIDE(TRANSITION_START, 0);
  } else if (scanner->prev_blank && !line->next_blank && is_cue(s, n)) {
    DECIDE(CHARACTER_START, 0);
  }
#undef DECIDE

  uint8_t level = c0 == '#' ? section_level(t, tn) : 0;
  bool page_break = line->page_break;
  ts_free(line);
  ts_free(s);

  if (kind == ACTION_START && scanner->last_kind == ACTION_START &&
      !scanner->prev_blank && valid[ACTION_CONTINUE])
    kind = ACTION_CONTINUE;
  // what is not possible here is action, as a last resort
  if (!valid[kind]) {
    if (valid[ACTION_CONTINUE] && scanner->last_kind == ACTION_START &&
        !scanner->prev_blank) {
      kind = ACTION_CONTINUE;
    } else if (valid[ACTION_START]) {
      kind = ACTION_START;
    } else if (valid[DIALOGUE_START]) {
      kind = DIALOGUE_START;
    } else {
      return false;
    }
    force = 0;
  }

  if (kind == SECTION_START) {
    if (scanner->depth < MAX_DEPTH) {
      scanner->levels[scanner->depth] = level;
      scanner->depth++;
    } else {
      // too deep to keep: close it at the next heading of any level
      scanner->levels[MAX_DEPTH - 1] = 255;
    }
  }

  if (kind != PAGE_BREAK && page_break) {
    // read_line marked the end of a page break that is not one here
    return false;
  }
  scanner->force = force;
  if (kind == ACTION_CONTINUE) {
    emit(scanner, lexer, ACTION_CONTINUE);
    scanner->last_kind = ACTION_START;
    return true;
  }
  return emit(scanner, lexer, kind);
}

static bool scan(Scanner *scanner, TSLexer *lexer, const bool *valid) {
  bool error = valid[ERROR_SENTINEL];

  if (lexer->get_column(lexer) == 0 && !scanner->line_classified) {
    return scan_line_start(scanner, lexer, valid);
  }

  if (valid[NEWLINE] && scanner->line_classified && is_eol(lexer)) {
    if (lexer->lookahead == '\r') advance(lexer);
    if (lexer->lookahead == '\n') advance(lexer);
    lexer->mark_end(lexer);
    lexer->result_symbol = NEWLINE;
    scanner->line_classified = false;
    scanner->prev_blank = false;
    scanner->force = 0;
    return true;
  }

  if (valid[FORCE_MARKER] && scanner->force != 0 &&
      lexer->lookahead == scanner->force) {
    advance(lexer);
    lexer->mark_end(lexer);
    lexer->result_symbol = FORCE_MARKER;
    scanner->force = 0;
    return true;
  }

  if (valid[INDENT] && is_space(lexer->lookahead) && !error) {
    while (is_space(lexer->lookahead)) advance(lexer);
    lexer->mark_end(lexer);
    lexer->result_symbol = INDENT;
    return true;
  }

  if ((valid[CENTERED_END] && lexer->lookahead == '<') ||
      (valid[DUAL_DIALOGUE_MARKER] && lexer->lookahead == '^')) {
    enum TokenType token =
        lexer->lookahead == '<' ? CENTERED_END : DUAL_DIALOGUE_MARKER;
    advance(lexer);
    lexer->mark_end(lexer);
    // only at the end of the line (notes may follow)
    while (is_space(lexer->lookahead)) advance(lexer);
    if (is_eol(lexer)) {
      lexer->mark_end(lexer);
      lexer->result_symbol = token;
      return true;
    }
    if (lexer->lookahead == '[') {
      lexer->result_symbol = token;
      return true;
    }
    return false;
  }

  return false;
}

void *tree_sitter_fountain_external_scanner_create(void) {
  Scanner *scanner = ts_calloc(1, sizeof(Scanner));
  scanner->prev_blank = true;
  return scanner;
}

void tree_sitter_fountain_external_scanner_destroy(void *payload) {
  ts_free(payload);
}

unsigned tree_sitter_fountain_external_scanner_serialize(void *payload,
                                                         char *buffer) {
  Scanner *scanner = payload;
  unsigned n = 0;
  buffer[n++] = (char)scanner->prev_blank;
  buffer[n++] = (char)scanner->in_dialogue;
  buffer[n++] = (char)scanner->in_title;
  buffer[n++] = (char)scanner->seen_content;
  buffer[n++] = (char)scanner->line_classified;
  buffer[n++] = (char)scanner->force;
  buffer[n++] = (char)scanner->last_kind;
  buffer[n++] = (char)scanner->depth;
  memcpy(buffer + n, scanner->levels, scanner->depth);
  n += scanner->depth;
  return n;
}

void tree_sitter_fountain_external_scanner_deserialize(void *payload,
                                                       const char *buffer,
                                                       unsigned length) {
  Scanner *scanner = payload;
  memset(scanner, 0, sizeof(Scanner));
  scanner->prev_blank = true;
  if (length < 8) return;
  unsigned n = 0;
  scanner->prev_blank = buffer[n++];
  scanner->in_dialogue = buffer[n++];
  scanner->in_title = buffer[n++];
  scanner->seen_content = buffer[n++];
  scanner->line_classified = buffer[n++];
  scanner->force = (uint8_t)buffer[n++];
  scanner->last_kind = (uint8_t)buffer[n++];
  scanner->depth = (uint8_t)buffer[n++];
  if (scanner->depth > MAX_DEPTH) scanner->depth = MAX_DEPTH;
  if (n + scanner->depth <= length)
    memcpy(scanner->levels, buffer + n, scanner->depth);
}

bool tree_sitter_fountain_external_scanner_scan(void *payload, TSLexer *lexer,
                                                const bool *valid_symbols) {
  return scan(payload, lexer, valid_symbols);
}
