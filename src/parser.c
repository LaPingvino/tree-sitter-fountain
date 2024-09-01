#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 25
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym__title_element = 1,
  aux_sym_scene_token1 = 2,
  aux_sym_scene_token2 = 3,
  anon_sym_LF = 4,
  aux_sym_character_token1 = 5,
  aux_sym_parenthetical_token1 = 6,
  aux_sym_speech_token1 = 7,
  aux_sym_action_token1 = 8,
  aux_sym_transition_token1 = 9,
  aux_sym_transition_token2 = 10,
  sym_break = 11,
  sym_synope = 12,
  sym_section = 13,
  sym_note = 14,
  aux_sym_boneyard_token1 = 15,
  sym__line = 16,
  sym_document = 17,
  sym_title_page = 18,
  sym_scene = 19,
  sym_dialogue = 20,
  sym_dialogue_block = 21,
  sym_character = 22,
  sym_parenthetical = 23,
  sym_speech = 24,
  sym_action = 25,
  sym_transition = 26,
  sym_boneyard = 27,
  sym__element = 28,
  aux_sym_document_repeat1 = 29,
  aux_sym_title_page_repeat1 = 30,
  aux_sym_scene_repeat1 = 31,
  aux_sym_dialogue_repeat1 = 32,
  aux_sym_dialogue_block_repeat1 = 33,
  aux_sym_action_repeat1 = 34,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__title_element] = "_title_element",
  [aux_sym_scene_token1] = "scene_token1",
  [aux_sym_scene_token2] = "scene_token2",
  [anon_sym_LF] = "\n",
  [aux_sym_character_token1] = "character_token1",
  [aux_sym_parenthetical_token1] = "parenthetical_token1",
  [aux_sym_speech_token1] = "speech_token1",
  [aux_sym_action_token1] = "action_token1",
  [aux_sym_transition_token1] = "transition_token1",
  [aux_sym_transition_token2] = "transition_token2",
  [sym_break] = "break",
  [sym_synope] = "synope",
  [sym_section] = "section",
  [sym_note] = "note",
  [aux_sym_boneyard_token1] = "boneyard_token1",
  [sym__line] = "_line",
  [sym_document] = "document",
  [sym_title_page] = "title_page",
  [sym_scene] = "scene",
  [sym_dialogue] = "dialogue",
  [sym_dialogue_block] = "dialogue_block",
  [sym_character] = "character",
  [sym_parenthetical] = "parenthetical",
  [sym_speech] = "speech",
  [sym_action] = "action",
  [sym_transition] = "transition",
  [sym_boneyard] = "boneyard",
  [sym__element] = "_element",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_title_page_repeat1] = "title_page_repeat1",
  [aux_sym_scene_repeat1] = "scene_repeat1",
  [aux_sym_dialogue_repeat1] = "dialogue_repeat1",
  [aux_sym_dialogue_block_repeat1] = "dialogue_block_repeat1",
  [aux_sym_action_repeat1] = "action_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__title_element] = sym__title_element,
  [aux_sym_scene_token1] = aux_sym_scene_token1,
  [aux_sym_scene_token2] = aux_sym_scene_token2,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_character_token1] = aux_sym_character_token1,
  [aux_sym_parenthetical_token1] = aux_sym_parenthetical_token1,
  [aux_sym_speech_token1] = aux_sym_speech_token1,
  [aux_sym_action_token1] = aux_sym_action_token1,
  [aux_sym_transition_token1] = aux_sym_transition_token1,
  [aux_sym_transition_token2] = aux_sym_transition_token2,
  [sym_break] = sym_break,
  [sym_synope] = sym_synope,
  [sym_section] = sym_section,
  [sym_note] = sym_note,
  [aux_sym_boneyard_token1] = aux_sym_boneyard_token1,
  [sym__line] = sym__line,
  [sym_document] = sym_document,
  [sym_title_page] = sym_title_page,
  [sym_scene] = sym_scene,
  [sym_dialogue] = sym_dialogue,
  [sym_dialogue_block] = sym_dialogue_block,
  [sym_character] = sym_character,
  [sym_parenthetical] = sym_parenthetical,
  [sym_speech] = sym_speech,
  [sym_action] = sym_action,
  [sym_transition] = sym_transition,
  [sym_boneyard] = sym_boneyard,
  [sym__element] = sym__element,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_title_page_repeat1] = aux_sym_title_page_repeat1,
  [aux_sym_scene_repeat1] = aux_sym_scene_repeat1,
  [aux_sym_dialogue_repeat1] = aux_sym_dialogue_repeat1,
  [aux_sym_dialogue_block_repeat1] = aux_sym_dialogue_block_repeat1,
  [aux_sym_action_repeat1] = aux_sym_action_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__title_element] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_scene_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scene_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_character_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parenthetical_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_speech_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_action_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_transition_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_transition_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_break] = {
    .visible = true,
    .named = true,
  },
  [sym_synope] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_note] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_boneyard_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_title_page] = {
    .visible = true,
    .named = true,
  },
  [sym_scene] = {
    .visible = true,
    .named = true,
  },
  [sym_dialogue] = {
    .visible = true,
    .named = true,
  },
  [sym_dialogue_block] = {
    .visible = true,
    .named = true,
  },
  [sym_character] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthetical] = {
    .visible = true,
    .named = true,
  },
  [sym_speech] = {
    .visible = true,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym_transition] = {
    .visible = true,
    .named = true,
  },
  [sym_boneyard] = {
    .visible = true,
    .named = true,
  },
  [sym__element] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_title_page_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scene_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dialogue_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dialogue_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_action_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_character = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_character] = "character",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_character, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(73);
      ADVANCE_MAP(
        ' ', 42,
        '!', 67,
        '#', 4,
        '(', 54,
        '.', 70,
        '/', 55,
        '=', 62,
        '>', 68,
        'E', 48,
        'I', 53,
        '[', 64,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(74);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == ' ') ADVANCE(43);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(74);
      if (lookahead == '\n') ADVANCE(97);
      if (lookahead == ' ') ADVANCE(43);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(74);
      if (lookahead == ' ') ADVANCE(43);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead == '#') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == ')') ADVANCE(6);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == ')') ADVANCE(7);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(85);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(98);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(99);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(84);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(103);
      if (lookahead == ']') ADVANCE(16);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(97);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(18);
      if (lookahead == ' ') ADVANCE(154);
      if (lookahead == '!') ADVANCE(209);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '=') ADVANCE(204);
      if (lookahead == '>') ADVANCE(210);
      if (lookahead == '@') ADVANCE(211);
      if (lookahead == '[') ADVANCE(206);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '(') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == ')') ADVANCE(7);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '(') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(13);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(29);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'T') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(29);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == ':') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(29);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'O') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(29);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'T') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(29);
      if (lookahead == ':') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == ':') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == 'E') ADVANCE(38);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == 'E') ADVANCE(38);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == 'T') ADVANCE(39);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == 'X') ADVANCE(37);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      ADVANCE_MAP(
        ' ', 42,
        '!', 67,
        '#', 4,
        '(', 54,
        '.', 70,
        '/', 55,
        '=', 62,
        '>', 68,
        'E', 48,
        'I', 53,
        '[', 64,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(40);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 41:
      ADVANCE_MAP(
        ' ', 41,
        '!', 67,
        '#', 4,
        '(', 54,
        '.', 70,
        '/', 55,
        ':', 77,
        '=', 62,
        '>', 68,
        'E', 48,
        'I', 53,
        'T', 47,
        '[', 64,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(40);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 42:
      ADVANCE_MAP(
        ' ', 41,
        '!', 67,
        '#', 4,
        '(', 54,
        '.', 70,
        '/', 55,
        ':', 77,
        '=', 62,
        '>', 68,
        'E', 48,
        'I', 53,
        '[', 64,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(40);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 43:
      if (lookahead == ' ') ADVANCE(77);
      END_STATE();
    case 44:
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == 'T') ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 45:
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == 'T') ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 46:
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == ':') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 47:
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == 'O') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 48:
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == 'S') ADVANCE(50);
      if (lookahead == 'X') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 49:
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == 'T') ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 50:
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == 'T') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 51:
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == ':') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 52:
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == ':') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 53:
      if (lookahead == ' ') ADVANCE(44);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'N') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(58);
      END_STATE();
    case 54:
      if (lookahead == ')') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 55:
      if (lookahead == '*') ADVANCE(57);
      END_STATE();
    case 56:
      if (lookahead == '*') ADVANCE(56);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == '*') ADVANCE(56);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 58:
      if (lookahead == '/') ADVANCE(63);
      END_STATE();
    case 59:
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 60:
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == 'E') ADVANCE(39);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 62:
      if (lookahead == '=') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(39);
      END_STATE();
    case 64:
      if (lookahead == '[') ADVANCE(69);
      END_STATE();
    case 65:
      if (lookahead == ']') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == ']') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 67:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 68:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 69:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 70:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 71:
      if (eof) ADVANCE(73);
      if (lookahead == '\n') SKIP(71);
      if (lookahead == ' ') ADVANCE(118);
      if (lookahead == '!') ADVANCE(209);
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == '=') ADVANCE(204);
      if (lookahead == '>') ADVANCE(210);
      if (lookahead == '@') ADVANCE(211);
      if (lookahead == 'E') ADVANCE(124);
      if (lookahead == 'I') ADVANCE(129);
      if (lookahead == '[') ADVANCE(206);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 72:
      if (eof) ADVANCE(73);
      if (lookahead == '\n') SKIP(72);
      if (lookahead == ' ') ADVANCE(157);
      if (lookahead == '!') ADVANCE(209);
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == '=') ADVANCE(204);
      if (lookahead == '>') ADVANCE(210);
      if (lookahead == '@') ADVANCE(211);
      if (lookahead == 'E') ADVANCE(137);
      if (lookahead == 'I') ADVANCE(141);
      if (lookahead == '[') ADVANCE(206);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\t') ADVANCE(74);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '/') ADVANCE(76);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == 'E') ADVANCE(82);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == 'E') ADVANCE(81);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == 'T') ADVANCE(82);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == 'X') ADVANCE(80);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_scene_token1);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_scene_token2);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(86);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_character_token1);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '\n') ADVANCE(85);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '\n') ADVANCE(84);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(118);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == '@') ADVANCE(211);
      if (lookahead == 'E') ADVANCE(124);
      if (lookahead == 'I') ADVANCE(129);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(127);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(157);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == '@') ADVANCE(211);
      if (lookahead == 'E') ADVANCE(137);
      if (lookahead == 'I') ADVANCE(141);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(154);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '@') ADVANCE(211);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_speech_token1);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_speech_token1);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '(') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_action_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_transition_token1);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_transition_token2);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_transition_token2);
      if (lookahead == '\n') ADVANCE(98);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_break);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_synope);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_section);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_note);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_boneyard_token1);
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '*') ADVANCE(108);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_boneyard_token1);
      if (lookahead == '*') ADVANCE(56);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead == '#') ADVANCE(106);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '*') ADVANCE(108);
      if (lookahead == '/') ADVANCE(104);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '*') ADVANCE(108);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == ')') ADVANCE(150);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == '=') ADVANCE(115);
      if (lookahead != 0) ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead != 0) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead != 0) ADVANCE(114);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(103);
      if (lookahead == ']') ADVANCE(116);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 90,
        ' ', 117,
        '!', 209,
        '#', 106,
        '(', 212,
        '.', 142,
        '/', 198,
        ':', 77,
        '=', 204,
        '>', 210,
        '@', 211,
        'E', 124,
        'I', 129,
        'T', 123,
        '[', 206,
        '^', 148,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 90,
        ' ', 117,
        '!', 209,
        '#', 106,
        '(', 212,
        '.', 142,
        '/', 198,
        ':', 77,
        '=', 204,
        '>', 210,
        '@', 211,
        'E', 124,
        'I', 129,
        '[', 206,
        '^', 148,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == '(') ADVANCE(131);
      if (lookahead == '^') ADVANCE(119);
      if (lookahead != 0) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 87,
        ' ', 125,
        '(', 212,
        '.', 144,
        '/', 205,
        ':', 77,
        'T', 123,
        '^', 148,
      );
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 87,
        ' ', 125,
        '(', 212,
        '.', 144,
        '/', 205,
        ':', 77,
        'T', 163,
        '^', 148,
      );
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(125);
      if (lookahead == '(') ADVANCE(212);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '/') ADVANCE(205);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '^') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(125);
      if (lookahead == '(') ADVANCE(212);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == 'O') ADVANCE(128);
      if (lookahead == '^') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 87,
        ' ', 125,
        '(', 212,
        '.', 144,
        ':', 77,
        'S', 126,
        'X', 126,
        '^', 148,
      );
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(125);
      if (lookahead == '(') ADVANCE(212);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == 'T') ADVANCE(123);
      if (lookahead == '^') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(125);
      if (lookahead == '(') ADVANCE(212);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == 'T') ADVANCE(162);
      if (lookahead == '^') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(125);
      if (lookahead == '(') ADVANCE(212);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '^') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(125);
      if (lookahead == '(') ADVANCE(212);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '^') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 87,
        ' ', 120,
        '(', 202,
        '.', 143,
        '/', 200,
        ':', 75,
        'N', 121,
        '^', 147,
      );
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == '(') ADVANCE(130);
      if (lookahead == ')') ADVANCE(130);
      if (lookahead == '^') ADVANCE(130);
      if (lookahead != 0) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == '(') ADVANCE(130);
      if (lookahead == '^') ADVANCE(130);
      if (lookahead != 0) ADVANCE(130);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(138);
      if (lookahead == '(') ADVANCE(212);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '/') ADVANCE(205);
      if (lookahead == 'T') ADVANCE(136);
      if (lookahead == '^') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(138);
      if (lookahead == '(') ADVANCE(212);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '/') ADVANCE(205);
      if (lookahead == 'T') ADVANCE(170);
      if (lookahead == '^') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(138);
      if (lookahead == '(') ADVANCE(212);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '/') ADVANCE(205);
      if (lookahead == '^') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(138);
      if (lookahead == '(') ADVANCE(212);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == ':') ADVANCE(192);
      if (lookahead == '^') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(138);
      if (lookahead == '(') ADVANCE(212);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'O') ADVANCE(135);
      if (lookahead == '^') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(138);
      if (lookahead == '(') ADVANCE(212);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'S') ADVANCE(139);
      if (lookahead == 'X') ADVANCE(139);
      if (lookahead == '^') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(138);
      if (lookahead == '(') ADVANCE(212);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'T') ADVANCE(136);
      if (lookahead == '^') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(138);
      if (lookahead == '(') ADVANCE(212);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'T') ADVANCE(169);
      if (lookahead == '^') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(138);
      if (lookahead == '(') ADVANCE(212);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '^') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(132);
      if (lookahead == '(') ADVANCE(202);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '/') ADVANCE(200);
      if (lookahead == 'N') ADVANCE(133);
      if (lookahead == '^') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(134);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(149);
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == '^') ADVANCE(152);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(149);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(144);
      if (lookahead == '(') ADVANCE(212);
      if (lookahead == '/') ADVANCE(205);
      if (lookahead == '^') ADVANCE(148);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ') ADVANCE(144);
      if (lookahead == '(') ADVANCE(212);
      if (lookahead == '^') ADVANCE(148);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ')') ADVANCE(145);
      if (lookahead == '^') ADVANCE(146);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ')') ADVANCE(145);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '/') ADVANCE(205);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == ' ') ADVANCE(149);
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == '^') ADVANCE(152);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(149);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == ')') ADVANCE(150);
      if (lookahead == '^') ADVANCE(151);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == ')') ADVANCE(150);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 92,
        ' ', 153,
        '!', 209,
        '(', 212,
        '.', 144,
        '=', 204,
        '>', 210,
        '@', 211,
        'T', 136,
        '[', 206,
        '^', 148,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 92,
        ' ', 153,
        '!', 209,
        '(', 212,
        '.', 144,
        '=', 204,
        '>', 210,
        '@', 211,
        '[', 206,
        '^', 148,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '<') ADVANCE(155);
      if (lookahead != 0) ADVANCE(177);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 91,
        ' ', 156,
        '!', 209,
        '#', 106,
        '(', 212,
        '.', 142,
        '/', 198,
        '=', 204,
        '>', 210,
        '@', 211,
        'E', 137,
        'I', 141,
        'T', 136,
        '[', 206,
        '^', 148,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 91,
        ' ', 156,
        '!', 209,
        '#', 106,
        '(', 212,
        '.', 142,
        '/', 198,
        '=', 204,
        '>', 210,
        '@', 211,
        'E', 137,
        'I', 141,
        '[', 206,
        '^', 148,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 89,
        ' ', 161,
        '(', 190,
        '.', 172,
        '/', 187,
        ':', 82,
        'T', 160,
        '^', 176,
      );
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ' ') ADVANCE(161);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '^') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ' ') ADVANCE(161);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'O') ADVANCE(162);
      if (lookahead == '^') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ' ') ADVANCE(161);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'T') ADVANCE(160);
      if (lookahead == '^') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ' ') ADVANCE(161);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '^') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ' ') ADVANCE(158);
      if (lookahead == '(') ADVANCE(185);
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == ':') ADVANCE(78);
      if (lookahead == '^') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      if (lookahead != 0) ADVANCE(184);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == 'T') ADVANCE(167);
      if (lookahead == '^') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '^') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '^') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == 'O') ADVANCE(166);
      if (lookahead == '^') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == 'T') ADVANCE(167);
      if (lookahead == '^') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == '^') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ' ') ADVANCE(164);
      if (lookahead == '(') ADVANCE(185);
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '^') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead != 0) ADVANCE(184);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ' ') ADVANCE(172);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '^') ADVANCE(176);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(172);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ' ') ADVANCE(172);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == '^') ADVANCE(176);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(172);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == '^') ADVANCE(174);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '<') ADVANCE(155);
      if (lookahead != 0) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == 'E') ADVANCE(180);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == 'T') ADVANCE(181);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead == 'X') ADVANCE(179);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == 'E') ADVANCE(189);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '/') ADVANCE(178);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == 'E') ADVANCE(189);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == 'T') ADVANCE(191);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == 'X') ADVANCE(188);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        ' ', 118,
        '!', 209,
        '#', 106,
        '.', 142,
        '/', 198,
        '=', 204,
        '>', 210,
        '@', 211,
        'E', 124,
        'I', 129,
        '[', 206,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(214);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        ' ', 157,
        '!', 209,
        '#', 106,
        '.', 142,
        '/', 198,
        '=', 204,
        '>', 210,
        '@', 211,
        'E', 137,
        'I', 141,
        '[', 206,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(214);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == ' ') ADVANCE(154);
      if (lookahead == '!') ADVANCE(209);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '=') ADVANCE(204);
      if (lookahead == '>') ADVANCE(210);
      if (lookahead == '@') ADVANCE(211);
      if (lookahead == '[') ADVANCE(206);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(214);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == ')') ADVANCE(145);
      if (lookahead == 'E') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == ')') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '/') ADVANCE(205);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '/') ADVANCE(205);
      if (lookahead == 'E') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '/') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '=') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(114);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'E') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '[') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == ']') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == ']') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(119);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(214);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 71},
  [2] = {.lex_state = 72},
  [3] = {.lex_state = 72},
  [4] = {.lex_state = 72},
  [5] = {.lex_state = 72},
  [6] = {.lex_state = 72},
  [7] = {.lex_state = 72},
  [8] = {.lex_state = 18},
  [9] = {.lex_state = 72},
  [10] = {.lex_state = 72},
  [11] = {.lex_state = 71},
  [12] = {.lex_state = 71},
  [13] = {.lex_state = 72},
  [14] = {.lex_state = 72},
  [15] = {.lex_state = 72},
  [16] = {.lex_state = 72},
  [17] = {.lex_state = 72},
  [18] = {.lex_state = 19},
  [19] = {.lex_state = 19},
  [20] = {.lex_state = 22},
  [21] = {.lex_state = 19},
  [22] = {.lex_state = 19},
  [23] = {.lex_state = 22},
  [24] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__title_element] = ACTIONS(1),
    [aux_sym_scene_token1] = ACTIONS(1),
    [aux_sym_scene_token2] = ACTIONS(1),
    [aux_sym_parenthetical_token1] = ACTIONS(1),
    [aux_sym_action_token1] = ACTIONS(1),
    [aux_sym_transition_token1] = ACTIONS(1),
    [aux_sym_transition_token2] = ACTIONS(1),
    [sym_break] = ACTIONS(1),
    [sym_synope] = ACTIONS(1),
    [sym_section] = ACTIONS(1),
    [sym_note] = ACTIONS(1),
    [aux_sym_boneyard_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(24),
    [sym_title_page] = STATE(3),
    [sym_scene] = STATE(5),
    [sym_dialogue] = STATE(5),
    [sym_dialogue_block] = STATE(10),
    [sym_character] = STATE(20),
    [sym_action] = STATE(5),
    [sym_transition] = STATE(5),
    [sym_boneyard] = STATE(5),
    [sym__element] = STATE(5),
    [aux_sym_document_repeat1] = STATE(5),
    [aux_sym_title_page_repeat1] = STATE(12),
    [aux_sym_dialogue_repeat1] = STATE(10),
    [aux_sym_action_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__title_element] = ACTIONS(5),
    [aux_sym_scene_token1] = ACTIONS(7),
    [aux_sym_scene_token2] = ACTIONS(7),
    [aux_sym_character_token1] = ACTIONS(9),
    [aux_sym_action_token1] = ACTIONS(11),
    [aux_sym_transition_token1] = ACTIONS(13),
    [aux_sym_transition_token2] = ACTIONS(13),
    [sym_break] = ACTIONS(15),
    [sym_synope] = ACTIONS(15),
    [sym_section] = ACTIONS(15),
    [sym_note] = ACTIONS(15),
    [aux_sym_boneyard_token1] = ACTIONS(17),
    [sym__line] = ACTIONS(11),
  },
  [2] = {
    [sym_scene] = STATE(2),
    [sym_dialogue] = STATE(2),
    [sym_dialogue_block] = STATE(10),
    [sym_character] = STATE(20),
    [sym_action] = STATE(2),
    [sym_transition] = STATE(2),
    [sym_boneyard] = STATE(2),
    [sym__element] = STATE(2),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_dialogue_repeat1] = STATE(10),
    [aux_sym_action_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(19),
    [aux_sym_scene_token1] = ACTIONS(21),
    [aux_sym_scene_token2] = ACTIONS(21),
    [aux_sym_character_token1] = ACTIONS(24),
    [aux_sym_action_token1] = ACTIONS(27),
    [aux_sym_transition_token1] = ACTIONS(30),
    [aux_sym_transition_token2] = ACTIONS(30),
    [sym_break] = ACTIONS(33),
    [sym_synope] = ACTIONS(33),
    [sym_section] = ACTIONS(33),
    [sym_note] = ACTIONS(33),
    [aux_sym_boneyard_token1] = ACTIONS(36),
    [sym__line] = ACTIONS(27),
  },
  [3] = {
    [sym_scene] = STATE(4),
    [sym_dialogue] = STATE(4),
    [sym_dialogue_block] = STATE(10),
    [sym_character] = STATE(20),
    [sym_action] = STATE(4),
    [sym_transition] = STATE(4),
    [sym_boneyard] = STATE(4),
    [sym__element] = STATE(4),
    [aux_sym_document_repeat1] = STATE(4),
    [aux_sym_dialogue_repeat1] = STATE(10),
    [aux_sym_action_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(39),
    [aux_sym_scene_token1] = ACTIONS(7),
    [aux_sym_scene_token2] = ACTIONS(7),
    [aux_sym_character_token1] = ACTIONS(9),
    [aux_sym_action_token1] = ACTIONS(11),
    [aux_sym_transition_token1] = ACTIONS(13),
    [aux_sym_transition_token2] = ACTIONS(13),
    [sym_break] = ACTIONS(41),
    [sym_synope] = ACTIONS(41),
    [sym_section] = ACTIONS(41),
    [sym_note] = ACTIONS(41),
    [aux_sym_boneyard_token1] = ACTIONS(17),
    [sym__line] = ACTIONS(11),
  },
  [4] = {
    [sym_scene] = STATE(2),
    [sym_dialogue] = STATE(2),
    [sym_dialogue_block] = STATE(10),
    [sym_character] = STATE(20),
    [sym_action] = STATE(2),
    [sym_transition] = STATE(2),
    [sym_boneyard] = STATE(2),
    [sym__element] = STATE(2),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_dialogue_repeat1] = STATE(10),
    [aux_sym_action_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(43),
    [aux_sym_scene_token1] = ACTIONS(7),
    [aux_sym_scene_token2] = ACTIONS(7),
    [aux_sym_character_token1] = ACTIONS(9),
    [aux_sym_action_token1] = ACTIONS(11),
    [aux_sym_transition_token1] = ACTIONS(13),
    [aux_sym_transition_token2] = ACTIONS(13),
    [sym_break] = ACTIONS(45),
    [sym_synope] = ACTIONS(45),
    [sym_section] = ACTIONS(45),
    [sym_note] = ACTIONS(45),
    [aux_sym_boneyard_token1] = ACTIONS(17),
    [sym__line] = ACTIONS(11),
  },
  [5] = {
    [sym_scene] = STATE(2),
    [sym_dialogue] = STATE(2),
    [sym_dialogue_block] = STATE(10),
    [sym_character] = STATE(20),
    [sym_action] = STATE(2),
    [sym_transition] = STATE(2),
    [sym_boneyard] = STATE(2),
    [sym__element] = STATE(2),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_dialogue_repeat1] = STATE(10),
    [aux_sym_action_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(39),
    [aux_sym_scene_token1] = ACTIONS(7),
    [aux_sym_scene_token2] = ACTIONS(7),
    [aux_sym_character_token1] = ACTIONS(9),
    [aux_sym_action_token1] = ACTIONS(11),
    [aux_sym_transition_token1] = ACTIONS(13),
    [aux_sym_transition_token2] = ACTIONS(13),
    [sym_break] = ACTIONS(45),
    [sym_synope] = ACTIONS(45),
    [sym_section] = ACTIONS(45),
    [sym_note] = ACTIONS(45),
    [aux_sym_boneyard_token1] = ACTIONS(17),
    [sym__line] = ACTIONS(11),
  },
  [6] = {
    [sym_dialogue] = STATE(7),
    [sym_dialogue_block] = STATE(10),
    [sym_character] = STATE(20),
    [sym_action] = STATE(7),
    [sym_transition] = STATE(7),
    [sym__element] = STATE(7),
    [aux_sym_scene_repeat1] = STATE(7),
    [aux_sym_dialogue_repeat1] = STATE(10),
    [aux_sym_action_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(47),
    [aux_sym_scene_token1] = ACTIONS(49),
    [aux_sym_scene_token2] = ACTIONS(49),
    [aux_sym_character_token1] = ACTIONS(9),
    [aux_sym_action_token1] = ACTIONS(11),
    [aux_sym_transition_token1] = ACTIONS(13),
    [aux_sym_transition_token2] = ACTIONS(13),
    [sym_break] = ACTIONS(51),
    [sym_synope] = ACTIONS(51),
    [sym_section] = ACTIONS(49),
    [sym_note] = ACTIONS(51),
    [aux_sym_boneyard_token1] = ACTIONS(49),
    [sym__line] = ACTIONS(11),
  },
  [7] = {
    [sym_dialogue] = STATE(7),
    [sym_dialogue_block] = STATE(10),
    [sym_character] = STATE(20),
    [sym_action] = STATE(7),
    [sym_transition] = STATE(7),
    [sym__element] = STATE(7),
    [aux_sym_scene_repeat1] = STATE(7),
    [aux_sym_dialogue_repeat1] = STATE(10),
    [aux_sym_action_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(53),
    [aux_sym_scene_token1] = ACTIONS(55),
    [aux_sym_scene_token2] = ACTIONS(55),
    [aux_sym_character_token1] = ACTIONS(57),
    [aux_sym_action_token1] = ACTIONS(60),
    [aux_sym_transition_token1] = ACTIONS(63),
    [aux_sym_transition_token2] = ACTIONS(63),
    [sym_break] = ACTIONS(66),
    [sym_synope] = ACTIONS(66),
    [sym_section] = ACTIONS(55),
    [sym_note] = ACTIONS(66),
    [aux_sym_boneyard_token1] = ACTIONS(55),
    [sym__line] = ACTIONS(60),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(9), 1,
      aux_sym_character_token1,
    STATE(13), 1,
      aux_sym_action_repeat1,
    STATE(20), 1,
      sym_character,
    ACTIONS(11), 2,
      aux_sym_action_token1,
      sym__line,
    ACTIONS(13), 2,
      aux_sym_transition_token1,
      aux_sym_transition_token2,
    STATE(10), 2,
      sym_dialogue_block,
      aux_sym_dialogue_repeat1,
    ACTIONS(69), 3,
      sym_break,
      sym_synope,
      sym_note,
    STATE(6), 5,
      sym_dialogue,
      sym_action,
      sym_transition,
      sym__element,
      aux_sym_scene_repeat1,
  [34] = 5,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      aux_sym_character_token1,
    STATE(20), 1,
      sym_character,
    STATE(9), 2,
      sym_dialogue_block,
      aux_sym_dialogue_repeat1,
    ACTIONS(73), 11,
      aux_sym_scene_token1,
      aux_sym_scene_token2,
      aux_sym_action_token1,
      aux_sym_transition_token1,
      aux_sym_transition_token2,
      sym_break,
      sym_synope,
      sym_section,
      sym_note,
      aux_sym_boneyard_token1,
      sym__line,
  [61] = 5,
    ACTIONS(9), 1,
      aux_sym_character_token1,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym_character,
    STATE(9), 2,
      sym_dialogue_block,
      aux_sym_dialogue_repeat1,
    ACTIONS(80), 11,
      aux_sym_scene_token1,
      aux_sym_scene_token2,
      aux_sym_action_token1,
      aux_sym_transition_token1,
      aux_sym_transition_token2,
      sym_break,
      sym_synope,
      sym_section,
      sym_note,
      aux_sym_boneyard_token1,
      sym__line,
  [88] = 4,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 1,
      sym__title_element,
    STATE(11), 1,
      aux_sym_title_page_repeat1,
    ACTIONS(87), 12,
      aux_sym_scene_token1,
      aux_sym_scene_token2,
      aux_sym_character_token1,
      aux_sym_action_token1,
      aux_sym_transition_token1,
      aux_sym_transition_token2,
      sym_break,
      sym_synope,
      sym_section,
      sym_note,
      aux_sym_boneyard_token1,
      sym__line,
  [112] = 4,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      sym__title_element,
    STATE(11), 1,
      aux_sym_title_page_repeat1,
    ACTIONS(93), 12,
      aux_sym_scene_token1,
      aux_sym_scene_token2,
      aux_sym_character_token1,
      aux_sym_action_token1,
      aux_sym_transition_token1,
      aux_sym_transition_token2,
      sym_break,
      sym_synope,
      sym_section,
      sym_note,
      aux_sym_boneyard_token1,
      sym__line,
  [136] = 4,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      aux_sym_action_repeat1,
    ACTIONS(99), 2,
      aux_sym_action_token1,
      sym__line,
    ACTIONS(97), 10,
      aux_sym_scene_token1,
      aux_sym_scene_token2,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      aux_sym_transition_token2,
      sym_break,
      sym_synope,
      sym_section,
      sym_note,
      aux_sym_boneyard_token1,
  [159] = 4,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      aux_sym_action_repeat1,
    ACTIONS(105), 2,
      aux_sym_action_token1,
      sym__line,
    ACTIONS(103), 10,
      aux_sym_scene_token1,
      aux_sym_scene_token2,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      aux_sym_transition_token2,
      sym_break,
      sym_synope,
      sym_section,
      sym_note,
      aux_sym_boneyard_token1,
  [182] = 2,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    ACTIONS(110), 12,
      aux_sym_scene_token1,
      aux_sym_scene_token2,
      aux_sym_character_token1,
      aux_sym_action_token1,
      aux_sym_transition_token1,
      aux_sym_transition_token2,
      sym_break,
      sym_synope,
      sym_section,
      sym_note,
      aux_sym_boneyard_token1,
      sym__line,
  [200] = 2,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    ACTIONS(114), 12,
      aux_sym_scene_token1,
      aux_sym_scene_token2,
      aux_sym_character_token1,
      aux_sym_action_token1,
      aux_sym_transition_token1,
      aux_sym_transition_token2,
      sym_break,
      sym_synope,
      sym_section,
      sym_note,
      aux_sym_boneyard_token1,
      sym__line,
  [218] = 2,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 12,
      aux_sym_scene_token1,
      aux_sym_scene_token2,
      aux_sym_character_token1,
      aux_sym_action_token1,
      aux_sym_transition_token1,
      aux_sym_transition_token2,
      sym_break,
      sym_synope,
      sym_section,
      sym_note,
      aux_sym_boneyard_token1,
      sym__line,
  [236] = 4,
    ACTIONS(120), 1,
      anon_sym_LF,
    ACTIONS(122), 1,
      aux_sym_parenthetical_token1,
    ACTIONS(124), 1,
      aux_sym_speech_token1,
    STATE(19), 3,
      sym_parenthetical,
      sym_speech,
      aux_sym_dialogue_block_repeat1,
  [251] = 4,
    ACTIONS(126), 1,
      anon_sym_LF,
    ACTIONS(128), 1,
      aux_sym_parenthetical_token1,
    ACTIONS(131), 1,
      aux_sym_speech_token1,
    STATE(19), 3,
      sym_parenthetical,
      sym_speech,
      aux_sym_dialogue_block_repeat1,
  [266] = 3,
    ACTIONS(122), 1,
      aux_sym_parenthetical_token1,
    ACTIONS(124), 1,
      aux_sym_speech_token1,
    STATE(18), 3,
      sym_parenthetical,
      sym_speech,
      aux_sym_dialogue_block_repeat1,
  [278] = 1,
    ACTIONS(134), 3,
      anon_sym_LF,
      aux_sym_parenthetical_token1,
      aux_sym_speech_token1,
  [284] = 1,
    ACTIONS(136), 3,
      anon_sym_LF,
      aux_sym_parenthetical_token1,
      aux_sym_speech_token1,
  [290] = 1,
    ACTIONS(138), 2,
      aux_sym_parenthetical_token1,
      aux_sym_speech_token1,
  [295] = 1,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 34,
  [SMALL_STATE(10)] = 61,
  [SMALL_STATE(11)] = 88,
  [SMALL_STATE(12)] = 112,
  [SMALL_STATE(13)] = 136,
  [SMALL_STATE(14)] = 159,
  [SMALL_STATE(15)] = 182,
  [SMALL_STATE(16)] = 200,
  [SMALL_STATE(17)] = 218,
  [SMALL_STATE(18)] = 236,
  [SMALL_STATE(19)] = 251,
  [SMALL_STATE(20)] = 266,
  [SMALL_STATE(21)] = 278,
  [SMALL_STATE(22)] = 284,
  [SMALL_STATE(23)] = 290,
  [SMALL_STATE(24)] = 295,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scene_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_scene_repeat1, 2, 0, 0),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scene_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scene_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scene_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scene_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialogue, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dialogue, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_page, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_page, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boneyard, 1, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boneyard, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transition, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transition, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialogue_block, 3, 0, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dialogue_block, 3, 0, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthetical, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_speech, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_fountain(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
