#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 34
#define LARGE_STATE_COUNT 17
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym__title_element = 1,
  aux_sym_scene_token1 = 2,
  aux_sym_scene_token2 = 3,
  anon_sym_LF = 4,
  sym_character = 5,
  aux_sym_parenthetical_token1 = 6,
  aux_sym_speech_token1 = 7,
  aux_sym_action_token1 = 8,
  aux_sym_transition_token1 = 9,
  aux_sym_transition_token2 = 10,
  sym_break = 11,
  sym_synopse = 12,
  aux_sym_section1_token1 = 13,
  aux_sym_section2_token1 = 14,
  aux_sym_section3_token1 = 15,
  sym_note = 16,
  aux_sym_boneyard_token1 = 17,
  sym__line = 18,
  sym_document = 19,
  sym_title_page = 20,
  sym_scene = 21,
  sym_dialogue = 22,
  sym_dialogue_block = 23,
  sym_parenthetical = 24,
  sym_speech = 25,
  sym_action = 26,
  sym_transition = 27,
  sym_section1 = 28,
  sym_section2 = 29,
  sym_section3 = 30,
  sym_section = 31,
  sym_boneyard = 32,
  sym__element = 33,
  aux_sym_document_repeat1 = 34,
  aux_sym_title_page_repeat1 = 35,
  aux_sym_scene_repeat1 = 36,
  aux_sym_dialogue_repeat1 = 37,
  aux_sym_dialogue_block_repeat1 = 38,
  aux_sym_action_repeat1 = 39,
  aux_sym_section1_repeat1 = 40,
  aux_sym_section2_repeat1 = 41,
  aux_sym_section3_repeat1 = 42,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__title_element] = "_title_element",
  [aux_sym_scene_token1] = "scene_token1",
  [aux_sym_scene_token2] = "scene_token2",
  [anon_sym_LF] = "\n",
  [sym_character] = "character",
  [aux_sym_parenthetical_token1] = "parenthetical_token1",
  [aux_sym_speech_token1] = "speech_token1",
  [aux_sym_action_token1] = "action_token1",
  [aux_sym_transition_token1] = "transition_token1",
  [aux_sym_transition_token2] = "transition_token2",
  [sym_break] = "break",
  [sym_synopse] = "synopse",
  [aux_sym_section1_token1] = "section1_token1",
  [aux_sym_section2_token1] = "section2_token1",
  [aux_sym_section3_token1] = "section3_token1",
  [sym_note] = "note",
  [aux_sym_boneyard_token1] = "boneyard_token1",
  [sym__line] = "_line",
  [sym_document] = "document",
  [sym_title_page] = "title_page",
  [sym_scene] = "scene",
  [sym_dialogue] = "dialogue",
  [sym_dialogue_block] = "dialogue_block",
  [sym_parenthetical] = "parenthetical",
  [sym_speech] = "speech",
  [sym_action] = "action",
  [sym_transition] = "transition",
  [sym_section1] = "section1",
  [sym_section2] = "section2",
  [sym_section3] = "section3",
  [sym_section] = "section",
  [sym_boneyard] = "boneyard",
  [sym__element] = "_element",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_title_page_repeat1] = "title_page_repeat1",
  [aux_sym_scene_repeat1] = "scene_repeat1",
  [aux_sym_dialogue_repeat1] = "dialogue_repeat1",
  [aux_sym_dialogue_block_repeat1] = "dialogue_block_repeat1",
  [aux_sym_action_repeat1] = "action_repeat1",
  [aux_sym_section1_repeat1] = "section1_repeat1",
  [aux_sym_section2_repeat1] = "section2_repeat1",
  [aux_sym_section3_repeat1] = "section3_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__title_element] = sym__title_element,
  [aux_sym_scene_token1] = aux_sym_scene_token1,
  [aux_sym_scene_token2] = aux_sym_scene_token2,
  [anon_sym_LF] = anon_sym_LF,
  [sym_character] = sym_character,
  [aux_sym_parenthetical_token1] = aux_sym_parenthetical_token1,
  [aux_sym_speech_token1] = aux_sym_speech_token1,
  [aux_sym_action_token1] = aux_sym_action_token1,
  [aux_sym_transition_token1] = aux_sym_transition_token1,
  [aux_sym_transition_token2] = aux_sym_transition_token2,
  [sym_break] = sym_break,
  [sym_synopse] = sym_synopse,
  [aux_sym_section1_token1] = aux_sym_section1_token1,
  [aux_sym_section2_token1] = aux_sym_section2_token1,
  [aux_sym_section3_token1] = aux_sym_section3_token1,
  [sym_note] = sym_note,
  [aux_sym_boneyard_token1] = aux_sym_boneyard_token1,
  [sym__line] = sym__line,
  [sym_document] = sym_document,
  [sym_title_page] = sym_title_page,
  [sym_scene] = sym_scene,
  [sym_dialogue] = sym_dialogue,
  [sym_dialogue_block] = sym_dialogue_block,
  [sym_parenthetical] = sym_parenthetical,
  [sym_speech] = sym_speech,
  [sym_action] = sym_action,
  [sym_transition] = sym_transition,
  [sym_section1] = sym_section1,
  [sym_section2] = sym_section2,
  [sym_section3] = sym_section3,
  [sym_section] = sym_section,
  [sym_boneyard] = sym_boneyard,
  [sym__element] = sym__element,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_title_page_repeat1] = aux_sym_title_page_repeat1,
  [aux_sym_scene_repeat1] = aux_sym_scene_repeat1,
  [aux_sym_dialogue_repeat1] = aux_sym_dialogue_repeat1,
  [aux_sym_dialogue_block_repeat1] = aux_sym_dialogue_block_repeat1,
  [aux_sym_action_repeat1] = aux_sym_action_repeat1,
  [aux_sym_section1_repeat1] = aux_sym_section1_repeat1,
  [aux_sym_section2_repeat1] = aux_sym_section2_repeat1,
  [aux_sym_section3_repeat1] = aux_sym_section3_repeat1,
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
  [sym_character] = {
    .visible = true,
    .named = true,
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
  [sym_synopse] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_section1_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section2_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section3_token1] = {
    .visible = false,
    .named = false,
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
  [sym_section1] = {
    .visible = true,
    .named = true,
  },
  [sym_section2] = {
    .visible = true,
    .named = true,
  },
  [sym_section3] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
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
  [aux_sym_section1_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section2_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section3_repeat1] = {
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
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(77);
      ADVANCE_MAP(
        ' ', 43,
        '!', 70,
        '#', 56,
        '(', 57,
        '.', 73,
        '/', 58,
        '=', 65,
        '>', 71,
        'E', 49,
        'I', 54,
        '[', 67,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(78);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == ' ') ADVANCE(44);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(78);
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == ' ') ADVANCE(44);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(78);
      if (lookahead == ' ') ADVANCE(44);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(97);
      if (lookahead == ')') ADVANCE(5);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(97);
      if (lookahead == ')') ADVANCE(6);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(107);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(89);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(102);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(103);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(88);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == ']') ADVANCE(17);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(101);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(19);
      if (lookahead == ' ') ADVANCE(162);
      if (lookahead == '!') ADVANCE(219);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '=') ADVANCE(214);
      if (lookahead == '>') ADVANCE(220);
      if (lookahead == '@') ADVANCE(221);
      if (lookahead == '[') ADVANCE(216);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(148);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '(') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == ')') ADVANCE(6);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '(') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '<') ADVANCE(24);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(14);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '<') ADVANCE(24);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(30);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'T') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(30);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == ':') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(30);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'O') ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(30);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'T') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(30);
      if (lookahead == ':') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == ':') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == 'E') ADVANCE(39);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == 'E') ADVANCE(39);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == 'T') ADVANCE(40);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == 'X') ADVANCE(38);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 41:
      ADVANCE_MAP(
        ' ', 43,
        '!', 70,
        '#', 56,
        '(', 57,
        '.', 73,
        '/', 58,
        '=', 65,
        '>', 71,
        'E', 49,
        'I', 54,
        '[', 67,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(41);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 42:
      ADVANCE_MAP(
        ' ', 42,
        '!', 70,
        '#', 56,
        '(', 57,
        '.', 73,
        '/', 58,
        ':', 81,
        '=', 65,
        '>', 71,
        'E', 49,
        'I', 54,
        'T', 48,
        '[', 67,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(41);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 43:
      ADVANCE_MAP(
        ' ', 42,
        '!', 70,
        '#', 56,
        '(', 57,
        '.', 73,
        '/', 58,
        ':', 81,
        '=', 65,
        '>', 71,
        'E', 49,
        'I', 54,
        '[', 67,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(41);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 44:
      if (lookahead == ' ') ADVANCE(81);
      END_STATE();
    case 45:
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == 'T') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 46:
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == 'T') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 47:
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 48:
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == 'O') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 49:
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == 'S') ADVANCE(51);
      if (lookahead == 'X') ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 50:
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == 'T') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 51:
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == 'T') ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 52:
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead == ':') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 53:
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead == ':') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 54:
      if (lookahead == ' ') ADVANCE(45);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == 'N') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 55:
      if (lookahead == '#') ADVANCE(74);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(55);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 57:
      if (lookahead == ')') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 58:
      if (lookahead == '*') ADVANCE(60);
      END_STATE();
    case 59:
      if (lookahead == '*') ADVANCE(59);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == '*') ADVANCE(59);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 61:
      if (lookahead == '/') ADVANCE(66);
      END_STATE();
    case 62:
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 63:
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == 'E') ADVANCE(40);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 65:
      if (lookahead == '=') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(40);
      END_STATE();
    case 67:
      if (lookahead == '[') ADVANCE(72);
      END_STATE();
    case 68:
      if (lookahead == ']') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == ']') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 70:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    case 71:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 72:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 73:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 74:
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(13);
      END_STATE();
    case 75:
      if (eof) ADVANCE(77);
      if (lookahead == '\n') SKIP(75);
      if (lookahead == ' ') ADVANCE(126);
      if (lookahead == '!') ADVANCE(219);
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '/') ADVANCE(208);
      if (lookahead == '=') ADVANCE(214);
      if (lookahead == '>') ADVANCE(220);
      if (lookahead == '@') ADVANCE(221);
      if (lookahead == 'E') ADVANCE(132);
      if (lookahead == 'I') ADVANCE(137);
      if (lookahead == '[') ADVANCE(216);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 76:
      if (eof) ADVANCE(77);
      if (lookahead == '\n') SKIP(76);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == '!') ADVANCE(219);
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '/') ADVANCE(208);
      if (lookahead == '=') ADVANCE(214);
      if (lookahead == '>') ADVANCE(220);
      if (lookahead == '@') ADVANCE(221);
      if (lookahead == 'E') ADVANCE(145);
      if (lookahead == 'I') ADVANCE(149);
      if (lookahead == '[') ADVANCE(216);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(148);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\t') ADVANCE(78);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == 'E') ADVANCE(86);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == 'E') ADVANCE(85);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == 'T') ADVANCE(86);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == 'X') ADVANCE(84);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_scene_token1);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_scene_token2);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(90);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == '\n') ADVANCE(89);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == '\n') ADVANCE(88);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == ' ') ADVANCE(126);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '@') ADVANCE(221);
      if (lookahead == 'E') ADVANCE(132);
      if (lookahead == 'I') ADVANCE(137);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(135);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '@') ADVANCE(221);
      if (lookahead == 'E') ADVANCE(145);
      if (lookahead == 'I') ADVANCE(149);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(148);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == ' ') ADVANCE(162);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '@') ADVANCE(221);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(148);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_speech_token1);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_speech_token1);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '(') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_action_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_transition_token1);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_transition_token2);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_transition_token2);
      if (lookahead == '\n') ADVANCE(102);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_break);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_synopse);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_section1_token1);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_section2_token1);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_section3_token1);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_note);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_boneyard_token1);
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == '*') ADVANCE(113);
      if (lookahead != 0) ADVANCE(114);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_boneyard_token1);
      if (lookahead == '*') ADVANCE(59);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead != 0) ADVANCE(115);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == '*') ADVANCE(113);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead != 0) ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == '*') ADVANCE(113);
      if (lookahead != 0) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead != 0) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == ')') ADVANCE(158);
      if (lookahead != 0) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead != 0) ADVANCE(116);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead != 0) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '=') ADVANCE(122);
      if (lookahead != 0) ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead != 0) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(107);
      if (lookahead != 0) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead != 0) ADVANCE(120);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == ']') ADVANCE(124);
      if (lookahead != 0) ADVANCE(218);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 94,
        ' ', 125,
        '!', 219,
        '#', 112,
        '(', 222,
        '.', 150,
        '/', 208,
        ':', 81,
        '=', 214,
        '>', 220,
        '@', 221,
        'E', 132,
        'I', 137,
        'T', 131,
        '[', 216,
        '^', 156,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 94,
        ' ', 125,
        '!', 219,
        '#', 112,
        '(', 222,
        '.', 150,
        '/', 208,
        ':', 81,
        '=', 214,
        '>', 220,
        '@', 221,
        'E', 132,
        'I', 137,
        '[', 216,
        '^', 156,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == '(') ADVANCE(139);
      if (lookahead == '^') ADVANCE(127);
      if (lookahead != 0) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 91,
        ' ', 133,
        '(', 222,
        '.', 152,
        '/', 215,
        ':', 81,
        'T', 131,
        '^', 156,
      );
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 91,
        ' ', 133,
        '(', 222,
        '.', 152,
        '/', 215,
        ':', 81,
        'T', 171,
        '^', 156,
      );
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == ' ') ADVANCE(133);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == '^') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == ' ') ADVANCE(133);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == 'O') ADVANCE(136);
      if (lookahead == '^') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 91,
        ' ', 133,
        '(', 222,
        '.', 152,
        ':', 81,
        'S', 134,
        'X', 134,
        '^', 156,
      );
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == ' ') ADVANCE(133);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == 'T') ADVANCE(131);
      if (lookahead == '^') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == ' ') ADVANCE(133);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == 'T') ADVANCE(170);
      if (lookahead == '^') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == ' ') ADVANCE(133);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == '^') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == ' ') ADVANCE(133);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == '^') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 91,
        ' ', 128,
        '(', 212,
        '.', 151,
        '/', 210,
        ':', 79,
        'N', 129,
        '^', 155,
      );
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == ' ') ADVANCE(138);
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '^') ADVANCE(138);
      if (lookahead != 0) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == ' ') ADVANCE(138);
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == '^') ADVANCE(138);
      if (lookahead != 0) ADVANCE(138);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == ' ') ADVANCE(146);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead == 'T') ADVANCE(144);
      if (lookahead == '^') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(148);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == ' ') ADVANCE(146);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead == 'T') ADVANCE(178);
      if (lookahead == '^') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(148);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == ' ') ADVANCE(146);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead == '^') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(148);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == ' ') ADVANCE(146);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == '^') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(148);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == ' ') ADVANCE(146);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'O') ADVANCE(143);
      if (lookahead == '^') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(148);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == ' ') ADVANCE(146);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'S') ADVANCE(147);
      if (lookahead == 'X') ADVANCE(147);
      if (lookahead == '^') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(148);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == ' ') ADVANCE(146);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'T') ADVANCE(144);
      if (lookahead == '^') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(148);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == ' ') ADVANCE(146);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'T') ADVANCE(177);
      if (lookahead == '^') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(148);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == ' ') ADVANCE(146);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '^') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(148);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead == '(') ADVANCE(212);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(210);
      if (lookahead == 'N') ADVANCE(141);
      if (lookahead == '^') ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(142);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == ' ') ADVANCE(157);
      if (lookahead == '(') ADVANCE(117);
      if (lookahead == '^') ADVANCE(160);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(157);
      if (lookahead != 0) ADVANCE(118);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == ' ') ADVANCE(152);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead == '^') ADVANCE(156);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == ' ') ADVANCE(152);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == '^') ADVANCE(156);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == ')') ADVANCE(153);
      if (lookahead == '^') ADVANCE(154);
      if (lookahead != 0) ADVANCE(207);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == ')') ADVANCE(153);
      if (lookahead != 0) ADVANCE(207);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == ' ') ADVANCE(157);
      if (lookahead == '(') ADVANCE(117);
      if (lookahead == '^') ADVANCE(160);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(157);
      if (lookahead != 0) ADVANCE(118);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == ')') ADVANCE(158);
      if (lookahead == '^') ADVANCE(159);
      if (lookahead != 0) ADVANCE(116);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == ')') ADVANCE(158);
      if (lookahead != 0) ADVANCE(116);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead != 0) ADVANCE(118);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 96,
        ' ', 161,
        '!', 219,
        '(', 222,
        '.', 152,
        '=', 214,
        '>', 220,
        '@', 221,
        'T', 144,
        '[', 216,
        '^', 156,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(148);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 96,
        ' ', 161,
        '!', 219,
        '(', 222,
        '.', 152,
        '=', 214,
        '>', 220,
        '@', 221,
        '[', 216,
        '^', 156,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(148);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '<') ADVANCE(163);
      if (lookahead != 0) ADVANCE(186);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 95,
        ' ', 164,
        '!', 219,
        '#', 112,
        '(', 222,
        '.', 150,
        '/', 208,
        '=', 214,
        '>', 220,
        '@', 221,
        'E', 145,
        'I', 149,
        'T', 144,
        '[', 216,
        '^', 156,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(148);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 95,
        ' ', 164,
        '!', 219,
        '#', 112,
        '(', 222,
        '.', 150,
        '/', 208,
        '=', 214,
        '>', 220,
        '@', 221,
        'E', 145,
        'I', 149,
        '[', 216,
        '^', 156,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(148);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 93,
        ' ', 169,
        '(', 199,
        '.', 180,
        '/', 196,
        ':', 86,
        'T', 168,
        '^', 184,
      );
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == ' ') ADVANCE(169);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '^') ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == ' ') ADVANCE(169);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'O') ADVANCE(170);
      if (lookahead == '^') ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == ' ') ADVANCE(169);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'T') ADVANCE(168);
      if (lookahead == '^') ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == ' ') ADVANCE(169);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '^') ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == ' ') ADVANCE(166);
      if (lookahead == '(') ADVANCE(194);
      if (lookahead == '.') ADVANCE(179);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '^') ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == ' ') ADVANCE(176);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == 'T') ADVANCE(175);
      if (lookahead == '^') ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == ' ') ADVANCE(176);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == '^') ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == ' ') ADVANCE(176);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == '^') ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == ' ') ADVANCE(176);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == 'O') ADVANCE(174);
      if (lookahead == '^') ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == ' ') ADVANCE(176);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == 'T') ADVANCE(175);
      if (lookahead == '^') ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == ' ') ADVANCE(176);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == '^') ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == ' ') ADVANCE(172);
      if (lookahead == '(') ADVANCE(194);
      if (lookahead == '.') ADVANCE(179);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == '^') ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(173);
      if (lookahead != 0) ADVANCE(193);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == ' ') ADVANCE(180);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == '^') ADVANCE(184);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(180);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == ' ') ADVANCE(180);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == '^') ADVANCE(184);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(180);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == ')') ADVANCE(181);
      if (lookahead == '^') ADVANCE(182);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == ')') ADVANCE(181);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '#') ADVANCE(202);
      if (lookahead != 0) ADVANCE(121);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '<') ADVANCE(163);
      if (lookahead != 0) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == ')') ADVANCE(181);
      if (lookahead == 'E') ADVANCE(189);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == ')') ADVANCE(181);
      if (lookahead == 'T') ADVANCE(190);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == ')') ADVANCE(181);
      if (lookahead == 'X') ADVANCE(188);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == ')') ADVANCE(181);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == 'E') ADVANCE(198);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == 'E') ADVANCE(198);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == 'T') ADVANCE(200);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == 'X') ADVANCE(197);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '#') ADVANCE(224);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        ' ', 126,
        '!', 219,
        '#', 112,
        '.', 150,
        '/', 208,
        '=', 214,
        '>', 220,
        '@', 221,
        'E', 132,
        'I', 137,
        '[', 216,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(224);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        ' ', 165,
        '!', 219,
        '#', 112,
        '.', 150,
        '/', 208,
        '=', 214,
        '>', 220,
        '@', 221,
        'E', 145,
        'I', 149,
        '[', 216,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(224);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == ' ') ADVANCE(162);
      if (lookahead == '!') ADVANCE(219);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '=') ADVANCE(214);
      if (lookahead == '>') ADVANCE(220);
      if (lookahead == '@') ADVANCE(221);
      if (lookahead == '[') ADVANCE(216);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(224);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == ')') ADVANCE(153);
      if (lookahead == 'E') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == ')') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '*') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(224);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(224);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead == 'E') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(224);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(224);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '/') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(207);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(224);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '=') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(120);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'E') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(224);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '[') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(224);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == ']') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == ']') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(127);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(207);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(218);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(224);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 75},
  [2] = {.lex_state = 76},
  [3] = {.lex_state = 76},
  [4] = {.lex_state = 76},
  [5] = {.lex_state = 76},
  [6] = {.lex_state = 76},
  [7] = {.lex_state = 76},
  [8] = {.lex_state = 76},
  [9] = {.lex_state = 76},
  [10] = {.lex_state = 76},
  [11] = {.lex_state = 76},
  [12] = {.lex_state = 76},
  [13] = {.lex_state = 76},
  [14] = {.lex_state = 76},
  [15] = {.lex_state = 76},
  [16] = {.lex_state = 76},
  [17] = {.lex_state = 76},
  [18] = {.lex_state = 75},
  [19] = {.lex_state = 75},
  [20] = {.lex_state = 76},
  [21] = {.lex_state = 76},
  [22] = {.lex_state = 19},
  [23] = {.lex_state = 76},
  [24] = {.lex_state = 76},
  [25] = {.lex_state = 76},
  [26] = {.lex_state = 76},
  [27] = {.lex_state = 76},
  [28] = {.lex_state = 20},
  [29] = {.lex_state = 20},
  [30] = {.lex_state = 23},
  [31] = {.lex_state = 20},
  [32] = {.lex_state = 20},
  [33] = {.lex_state = 0},
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
    [sym_synopse] = ACTIONS(1),
    [aux_sym_section1_token1] = ACTIONS(1),
    [aux_sym_section2_token1] = ACTIONS(1),
    [aux_sym_section3_token1] = ACTIONS(1),
    [sym_note] = ACTIONS(1),
    [aux_sym_boneyard_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(33),
    [sym_title_page] = STATE(4),
    [sym_scene] = STATE(5),
    [sym_dialogue] = STATE(5),
    [sym_dialogue_block] = STATE(17),
    [sym_action] = STATE(5),
    [sym_transition] = STATE(5),
    [sym_section1] = STATE(24),
    [sym_section2] = STATE(24),
    [sym_section3] = STATE(24),
    [sym_section] = STATE(5),
    [sym_boneyard] = STATE(5),
    [sym__element] = STATE(5),
    [aux_sym_document_repeat1] = STATE(5),
    [aux_sym_title_page_repeat1] = STATE(18),
    [aux_sym_dialogue_repeat1] = STATE(17),
    [aux_sym_action_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__title_element] = ACTIONS(5),
    [aux_sym_scene_token1] = ACTIONS(7),
    [aux_sym_scene_token2] = ACTIONS(7),
    [sym_character] = ACTIONS(9),
    [aux_sym_action_token1] = ACTIONS(11),
    [aux_sym_transition_token1] = ACTIONS(13),
    [aux_sym_transition_token2] = ACTIONS(13),
    [sym_break] = ACTIONS(15),
    [sym_synopse] = ACTIONS(15),
    [aux_sym_section1_token1] = ACTIONS(17),
    [aux_sym_section2_token1] = ACTIONS(19),
    [aux_sym_section3_token1] = ACTIONS(21),
    [sym_note] = ACTIONS(15),
    [aux_sym_boneyard_token1] = ACTIONS(23),
    [sym__line] = ACTIONS(11),
  },
  [2] = {
    [sym_scene] = STATE(2),
    [sym_dialogue] = STATE(2),
    [sym_dialogue_block] = STATE(17),
    [sym_action] = STATE(2),
    [sym_transition] = STATE(2),
    [sym_section1] = STATE(24),
    [sym_section2] = STATE(24),
    [sym_section3] = STATE(24),
    [sym_section] = STATE(2),
    [sym_boneyard] = STATE(2),
    [sym__element] = STATE(2),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_dialogue_repeat1] = STATE(17),
    [aux_sym_action_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(25),
    [aux_sym_scene_token1] = ACTIONS(27),
    [aux_sym_scene_token2] = ACTIONS(27),
    [sym_character] = ACTIONS(30),
    [aux_sym_action_token1] = ACTIONS(33),
    [aux_sym_transition_token1] = ACTIONS(36),
    [aux_sym_transition_token2] = ACTIONS(36),
    [sym_break] = ACTIONS(39),
    [sym_synopse] = ACTIONS(39),
    [aux_sym_section1_token1] = ACTIONS(42),
    [aux_sym_section2_token1] = ACTIONS(45),
    [aux_sym_section3_token1] = ACTIONS(48),
    [sym_note] = ACTIONS(39),
    [aux_sym_boneyard_token1] = ACTIONS(51),
    [sym__line] = ACTIONS(33),
  },
  [3] = {
    [sym_scene] = STATE(2),
    [sym_dialogue] = STATE(2),
    [sym_dialogue_block] = STATE(17),
    [sym_action] = STATE(2),
    [sym_transition] = STATE(2),
    [sym_section1] = STATE(24),
    [sym_section2] = STATE(24),
    [sym_section3] = STATE(24),
    [sym_section] = STATE(2),
    [sym_boneyard] = STATE(2),
    [sym__element] = STATE(2),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_dialogue_repeat1] = STATE(17),
    [aux_sym_action_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(54),
    [aux_sym_scene_token1] = ACTIONS(7),
    [aux_sym_scene_token2] = ACTIONS(7),
    [sym_character] = ACTIONS(9),
    [aux_sym_action_token1] = ACTIONS(11),
    [aux_sym_transition_token1] = ACTIONS(13),
    [aux_sym_transition_token2] = ACTIONS(13),
    [sym_break] = ACTIONS(56),
    [sym_synopse] = ACTIONS(56),
    [aux_sym_section1_token1] = ACTIONS(17),
    [aux_sym_section2_token1] = ACTIONS(19),
    [aux_sym_section3_token1] = ACTIONS(21),
    [sym_note] = ACTIONS(56),
    [aux_sym_boneyard_token1] = ACTIONS(23),
    [sym__line] = ACTIONS(11),
  },
  [4] = {
    [sym_scene] = STATE(3),
    [sym_dialogue] = STATE(3),
    [sym_dialogue_block] = STATE(17),
    [sym_action] = STATE(3),
    [sym_transition] = STATE(3),
    [sym_section1] = STATE(24),
    [sym_section2] = STATE(24),
    [sym_section3] = STATE(24),
    [sym_section] = STATE(3),
    [sym_boneyard] = STATE(3),
    [sym__element] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_dialogue_repeat1] = STATE(17),
    [aux_sym_action_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(58),
    [aux_sym_scene_token1] = ACTIONS(7),
    [aux_sym_scene_token2] = ACTIONS(7),
    [sym_character] = ACTIONS(9),
    [aux_sym_action_token1] = ACTIONS(11),
    [aux_sym_transition_token1] = ACTIONS(13),
    [aux_sym_transition_token2] = ACTIONS(13),
    [sym_break] = ACTIONS(60),
    [sym_synopse] = ACTIONS(60),
    [aux_sym_section1_token1] = ACTIONS(17),
    [aux_sym_section2_token1] = ACTIONS(19),
    [aux_sym_section3_token1] = ACTIONS(21),
    [sym_note] = ACTIONS(60),
    [aux_sym_boneyard_token1] = ACTIONS(23),
    [sym__line] = ACTIONS(11),
  },
  [5] = {
    [sym_scene] = STATE(2),
    [sym_dialogue] = STATE(2),
    [sym_dialogue_block] = STATE(17),
    [sym_action] = STATE(2),
    [sym_transition] = STATE(2),
    [sym_section1] = STATE(24),
    [sym_section2] = STATE(24),
    [sym_section3] = STATE(24),
    [sym_section] = STATE(2),
    [sym_boneyard] = STATE(2),
    [sym__element] = STATE(2),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_dialogue_repeat1] = STATE(17),
    [aux_sym_action_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(58),
    [aux_sym_scene_token1] = ACTIONS(7),
    [aux_sym_scene_token2] = ACTIONS(7),
    [sym_character] = ACTIONS(9),
    [aux_sym_action_token1] = ACTIONS(11),
    [aux_sym_transition_token1] = ACTIONS(13),
    [aux_sym_transition_token2] = ACTIONS(13),
    [sym_break] = ACTIONS(56),
    [sym_synopse] = ACTIONS(56),
    [aux_sym_section1_token1] = ACTIONS(17),
    [aux_sym_section2_token1] = ACTIONS(19),
    [aux_sym_section3_token1] = ACTIONS(21),
    [sym_note] = ACTIONS(56),
    [aux_sym_boneyard_token1] = ACTIONS(23),
    [sym__line] = ACTIONS(11),
  },
  [6] = {
    [sym_scene] = STATE(6),
    [sym_dialogue] = STATE(6),
    [sym_dialogue_block] = STATE(17),
    [sym_action] = STATE(6),
    [sym_transition] = STATE(6),
    [sym_section2] = STATE(6),
    [sym_section3] = STATE(6),
    [sym_boneyard] = STATE(6),
    [sym__element] = STATE(6),
    [aux_sym_dialogue_repeat1] = STATE(17),
    [aux_sym_action_repeat1] = STATE(21),
    [aux_sym_section1_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(62),
    [aux_sym_scene_token1] = ACTIONS(64),
    [aux_sym_scene_token2] = ACTIONS(64),
    [sym_character] = ACTIONS(67),
    [aux_sym_action_token1] = ACTIONS(70),
    [aux_sym_transition_token1] = ACTIONS(73),
    [aux_sym_transition_token2] = ACTIONS(73),
    [sym_break] = ACTIONS(76),
    [sym_synopse] = ACTIONS(76),
    [aux_sym_section1_token1] = ACTIONS(79),
    [aux_sym_section2_token1] = ACTIONS(81),
    [aux_sym_section3_token1] = ACTIONS(84),
    [sym_note] = ACTIONS(76),
    [aux_sym_boneyard_token1] = ACTIONS(87),
    [sym__line] = ACTIONS(70),
  },
  [7] = {
    [sym_scene] = STATE(8),
    [sym_dialogue] = STATE(8),
    [sym_dialogue_block] = STATE(17),
    [sym_action] = STATE(8),
    [sym_transition] = STATE(8),
    [sym_section2] = STATE(8),
    [sym_section3] = STATE(8),
    [sym_boneyard] = STATE(8),
    [sym__element] = STATE(8),
    [aux_sym_dialogue_repeat1] = STATE(17),
    [aux_sym_action_repeat1] = STATE(21),
    [aux_sym_section1_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(90),
    [aux_sym_scene_token1] = ACTIONS(7),
    [aux_sym_scene_token2] = ACTIONS(7),
    [sym_character] = ACTIONS(9),
    [aux_sym_action_token1] = ACTIONS(11),
    [aux_sym_transition_token1] = ACTIONS(13),
    [aux_sym_transition_token2] = ACTIONS(13),
    [sym_break] = ACTIONS(92),
    [sym_synopse] = ACTIONS(92),
    [aux_sym_section1_token1] = ACTIONS(94),
    [aux_sym_section2_token1] = ACTIONS(19),
    [aux_sym_section3_token1] = ACTIONS(21),
    [sym_note] = ACTIONS(92),
    [aux_sym_boneyard_token1] = ACTIONS(23),
    [sym__line] = ACTIONS(11),
  },
  [8] = {
    [sym_scene] = STATE(6),
    [sym_dialogue] = STATE(6),
    [sym_dialogue_block] = STATE(17),
    [sym_action] = STATE(6),
    [sym_transition] = STATE(6),
    [sym_section2] = STATE(6),
    [sym_section3] = STATE(6),
    [sym_boneyard] = STATE(6),
    [sym__element] = STATE(6),
    [aux_sym_dialogue_repeat1] = STATE(17),
    [aux_sym_action_repeat1] = STATE(21),
    [aux_sym_section1_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(96),
    [aux_sym_scene_token1] = ACTIONS(7),
    [aux_sym_scene_token2] = ACTIONS(7),
    [sym_character] = ACTIONS(9),
    [aux_sym_action_token1] = ACTIONS(11),
    [aux_sym_transition_token1] = ACTIONS(13),
    [aux_sym_transition_token2] = ACTIONS(13),
    [sym_break] = ACTIONS(98),
    [sym_synopse] = ACTIONS(98),
    [aux_sym_section1_token1] = ACTIONS(100),
    [aux_sym_section2_token1] = ACTIONS(19),
    [aux_sym_section3_token1] = ACTIONS(21),
    [sym_note] = ACTIONS(98),
    [aux_sym_boneyard_token1] = ACTIONS(23),
    [sym__line] = ACTIONS(11),
  },
  [9] = {
    [sym_scene] = STATE(9),
    [sym_dialogue] = STATE(9),
    [sym_dialogue_block] = STATE(17),
    [sym_action] = STATE(9),
    [sym_transition] = STATE(9),
    [sym_section3] = STATE(9),
    [sym_boneyard] = STATE(9),
    [sym__element] = STATE(9),
    [aux_sym_dialogue_repeat1] = STATE(17),
    [aux_sym_action_repeat1] = STATE(21),
    [aux_sym_section2_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(102),
    [aux_sym_scene_token1] = ACTIONS(104),
    [aux_sym_scene_token2] = ACTIONS(104),
    [sym_character] = ACTIONS(107),
    [aux_sym_action_token1] = ACTIONS(110),
    [aux_sym_transition_token1] = ACTIONS(113),
    [aux_sym_transition_token2] = ACTIONS(113),
    [sym_break] = ACTIONS(116),
    [sym_synopse] = ACTIONS(116),
    [aux_sym_section1_token1] = ACTIONS(119),
    [aux_sym_section2_token1] = ACTIONS(119),
    [aux_sym_section3_token1] = ACTIONS(121),
    [sym_note] = ACTIONS(116),
    [aux_sym_boneyard_token1] = ACTIONS(124),
    [sym__line] = ACTIONS(110),
  },
  [10] = {
    [sym_scene] = STATE(11),
    [sym_dialogue] = STATE(11),
    [sym_dialogue_block] = STATE(17),
    [sym_action] = STATE(11),
    [sym_transition] = STATE(11),
    [sym_section3] = STATE(11),
    [sym_boneyard] = STATE(11),
    [sym__element] = STATE(11),
    [aux_sym_dialogue_repeat1] = STATE(17),
    [aux_sym_action_repeat1] = STATE(21),
    [aux_sym_section2_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(127),
    [aux_sym_scene_token1] = ACTIONS(7),
    [aux_sym_scene_token2] = ACTIONS(7),
    [sym_character] = ACTIONS(9),
    [aux_sym_action_token1] = ACTIONS(11),
    [aux_sym_transition_token1] = ACTIONS(13),
    [aux_sym_transition_token2] = ACTIONS(13),
    [sym_break] = ACTIONS(129),
    [sym_synopse] = ACTIONS(129),
    [aux_sym_section1_token1] = ACTIONS(131),
    [aux_sym_section2_token1] = ACTIONS(131),
    [aux_sym_section3_token1] = ACTIONS(21),
    [sym_note] = ACTIONS(129),
    [aux_sym_boneyard_token1] = ACTIONS(23),
    [sym__line] = ACTIONS(11),
  },
  [11] = {
    [sym_scene] = STATE(9),
    [sym_dialogue] = STATE(9),
    [sym_dialogue_block] = STATE(17),
    [sym_action] = STATE(9),
    [sym_transition] = STATE(9),
    [sym_section3] = STATE(9),
    [sym_boneyard] = STATE(9),
    [sym__element] = STATE(9),
    [aux_sym_dialogue_repeat1] = STATE(17),
    [aux_sym_action_repeat1] = STATE(21),
    [aux_sym_section2_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(133),
    [aux_sym_scene_token1] = ACTIONS(7),
    [aux_sym_scene_token2] = ACTIONS(7),
    [sym_character] = ACTIONS(9),
    [aux_sym_action_token1] = ACTIONS(11),
    [aux_sym_transition_token1] = ACTIONS(13),
    [aux_sym_transition_token2] = ACTIONS(13),
    [sym_break] = ACTIONS(135),
    [sym_synopse] = ACTIONS(135),
    [aux_sym_section1_token1] = ACTIONS(137),
    [aux_sym_section2_token1] = ACTIONS(137),
    [aux_sym_section3_token1] = ACTIONS(21),
    [sym_note] = ACTIONS(135),
    [aux_sym_boneyard_token1] = ACTIONS(23),
    [sym__line] = ACTIONS(11),
  },
  [12] = {
    [sym_scene] = STATE(12),
    [sym_dialogue] = STATE(12),
    [sym_dialogue_block] = STATE(17),
    [sym_action] = STATE(12),
    [sym_transition] = STATE(12),
    [sym_boneyard] = STATE(12),
    [sym__element] = STATE(12),
    [aux_sym_dialogue_repeat1] = STATE(17),
    [aux_sym_action_repeat1] = STATE(21),
    [aux_sym_section3_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(139),
    [aux_sym_scene_token1] = ACTIONS(141),
    [aux_sym_scene_token2] = ACTIONS(141),
    [sym_character] = ACTIONS(144),
    [aux_sym_action_token1] = ACTIONS(147),
    [aux_sym_transition_token1] = ACTIONS(150),
    [aux_sym_transition_token2] = ACTIONS(150),
    [sym_break] = ACTIONS(153),
    [sym_synopse] = ACTIONS(153),
    [aux_sym_section1_token1] = ACTIONS(156),
    [aux_sym_section2_token1] = ACTIONS(156),
    [aux_sym_section3_token1] = ACTIONS(156),
    [sym_note] = ACTIONS(153),
    [aux_sym_boneyard_token1] = ACTIONS(158),
    [sym__line] = ACTIONS(147),
  },
  [13] = {
    [sym_scene] = STATE(14),
    [sym_dialogue] = STATE(14),
    [sym_dialogue_block] = STATE(17),
    [sym_action] = STATE(14),
    [sym_transition] = STATE(14),
    [sym_boneyard] = STATE(14),
    [sym__element] = STATE(14),
    [aux_sym_dialogue_repeat1] = STATE(17),
    [aux_sym_action_repeat1] = STATE(21),
    [aux_sym_section3_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(161),
    [aux_sym_scene_token1] = ACTIONS(7),
    [aux_sym_scene_token2] = ACTIONS(7),
    [sym_character] = ACTIONS(9),
    [aux_sym_action_token1] = ACTIONS(11),
    [aux_sym_transition_token1] = ACTIONS(13),
    [aux_sym_transition_token2] = ACTIONS(13),
    [sym_break] = ACTIONS(163),
    [sym_synopse] = ACTIONS(163),
    [aux_sym_section1_token1] = ACTIONS(165),
    [aux_sym_section2_token1] = ACTIONS(165),
    [aux_sym_section3_token1] = ACTIONS(165),
    [sym_note] = ACTIONS(163),
    [aux_sym_boneyard_token1] = ACTIONS(23),
    [sym__line] = ACTIONS(11),
  },
  [14] = {
    [sym_scene] = STATE(12),
    [sym_dialogue] = STATE(12),
    [sym_dialogue_block] = STATE(17),
    [sym_action] = STATE(12),
    [sym_transition] = STATE(12),
    [sym_boneyard] = STATE(12),
    [sym__element] = STATE(12),
    [aux_sym_dialogue_repeat1] = STATE(17),
    [aux_sym_action_repeat1] = STATE(21),
    [aux_sym_section3_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(167),
    [aux_sym_scene_token1] = ACTIONS(7),
    [aux_sym_scene_token2] = ACTIONS(7),
    [sym_character] = ACTIONS(9),
    [aux_sym_action_token1] = ACTIONS(11),
    [aux_sym_transition_token1] = ACTIONS(13),
    [aux_sym_transition_token2] = ACTIONS(13),
    [sym_break] = ACTIONS(169),
    [sym_synopse] = ACTIONS(169),
    [aux_sym_section1_token1] = ACTIONS(171),
    [aux_sym_section2_token1] = ACTIONS(171),
    [aux_sym_section3_token1] = ACTIONS(171),
    [sym_note] = ACTIONS(169),
    [aux_sym_boneyard_token1] = ACTIONS(23),
    [sym__line] = ACTIONS(11),
  },
  [15] = {
    [sym_dialogue] = STATE(16),
    [sym_dialogue_block] = STATE(17),
    [sym_action] = STATE(16),
    [sym_transition] = STATE(16),
    [sym__element] = STATE(16),
    [aux_sym_scene_repeat1] = STATE(16),
    [aux_sym_dialogue_repeat1] = STATE(17),
    [aux_sym_action_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(173),
    [aux_sym_scene_token1] = ACTIONS(175),
    [aux_sym_scene_token2] = ACTIONS(175),
    [sym_character] = ACTIONS(9),
    [aux_sym_action_token1] = ACTIONS(11),
    [aux_sym_transition_token1] = ACTIONS(13),
    [aux_sym_transition_token2] = ACTIONS(13),
    [sym_break] = ACTIONS(177),
    [sym_synopse] = ACTIONS(177),
    [aux_sym_section1_token1] = ACTIONS(175),
    [aux_sym_section2_token1] = ACTIONS(175),
    [aux_sym_section3_token1] = ACTIONS(175),
    [sym_note] = ACTIONS(177),
    [aux_sym_boneyard_token1] = ACTIONS(175),
    [sym__line] = ACTIONS(11),
  },
  [16] = {
    [sym_dialogue] = STATE(16),
    [sym_dialogue_block] = STATE(17),
    [sym_action] = STATE(16),
    [sym_transition] = STATE(16),
    [sym__element] = STATE(16),
    [aux_sym_scene_repeat1] = STATE(16),
    [aux_sym_dialogue_repeat1] = STATE(17),
    [aux_sym_action_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(179),
    [aux_sym_scene_token1] = ACTIONS(181),
    [aux_sym_scene_token2] = ACTIONS(181),
    [sym_character] = ACTIONS(183),
    [aux_sym_action_token1] = ACTIONS(186),
    [aux_sym_transition_token1] = ACTIONS(189),
    [aux_sym_transition_token2] = ACTIONS(189),
    [sym_break] = ACTIONS(192),
    [sym_synopse] = ACTIONS(192),
    [aux_sym_section1_token1] = ACTIONS(181),
    [aux_sym_section2_token1] = ACTIONS(181),
    [aux_sym_section3_token1] = ACTIONS(181),
    [sym_note] = ACTIONS(192),
    [aux_sym_boneyard_token1] = ACTIONS(181),
    [sym__line] = ACTIONS(186),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(9), 1,
      sym_character,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    STATE(20), 2,
      sym_dialogue_block,
      aux_sym_dialogue_repeat1,
    ACTIONS(197), 13,
      aux_sym_scene_token1,
      aux_sym_scene_token2,
      aux_sym_action_token1,
      aux_sym_transition_token1,
      aux_sym_transition_token2,
      sym_break,
      sym_synopse,
      aux_sym_section1_token1,
      aux_sym_section2_token1,
      aux_sym_section3_token1,
      sym_note,
      aux_sym_boneyard_token1,
      sym__line,
  [26] = 4,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(201), 1,
      sym__title_element,
    STATE(19), 1,
      aux_sym_title_page_repeat1,
    ACTIONS(203), 14,
      aux_sym_scene_token1,
      aux_sym_scene_token2,
      sym_character,
      aux_sym_action_token1,
      aux_sym_transition_token1,
      aux_sym_transition_token2,
      sym_break,
      sym_synopse,
      aux_sym_section1_token1,
      aux_sym_section2_token1,
      aux_sym_section3_token1,
      sym_note,
      aux_sym_boneyard_token1,
      sym__line,
  [52] = 4,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    ACTIONS(207), 1,
      sym__title_element,
    STATE(19), 1,
      aux_sym_title_page_repeat1,
    ACTIONS(210), 14,
      aux_sym_scene_token1,
      aux_sym_scene_token2,
      sym_character,
      aux_sym_action_token1,
      aux_sym_transition_token1,
      aux_sym_transition_token2,
      sym_break,
      sym_synopse,
      aux_sym_section1_token1,
      aux_sym_section2_token1,
      aux_sym_section3_token1,
      sym_note,
      aux_sym_boneyard_token1,
      sym__line,
  [78] = 4,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    ACTIONS(216), 1,
      sym_character,
    STATE(20), 2,
      sym_dialogue_block,
      aux_sym_dialogue_repeat1,
    ACTIONS(214), 13,
      aux_sym_scene_token1,
      aux_sym_scene_token2,
      aux_sym_action_token1,
      aux_sym_transition_token1,
      aux_sym_transition_token2,
      sym_break,
      sym_synopse,
      aux_sym_section1_token1,
      aux_sym_section2_token1,
      aux_sym_section3_token1,
      sym_note,
      aux_sym_boneyard_token1,
      sym__line,
  [104] = 4,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      aux_sym_action_repeat1,
    ACTIONS(223), 2,
      aux_sym_action_token1,
      sym__line,
    ACTIONS(221), 12,
      aux_sym_scene_token1,
      aux_sym_scene_token2,
      sym_character,
      aux_sym_transition_token1,
      aux_sym_transition_token2,
      sym_break,
      sym_synopse,
      aux_sym_section1_token1,
      aux_sym_section2_token1,
      aux_sym_section3_token1,
      sym_note,
      aux_sym_boneyard_token1,
  [129] = 7,
    ACTIONS(9), 1,
      sym_character,
    STATE(21), 1,
      aux_sym_action_repeat1,
    ACTIONS(11), 2,
      aux_sym_action_token1,
      sym__line,
    ACTIONS(13), 2,
      aux_sym_transition_token1,
      aux_sym_transition_token2,
    STATE(17), 2,
      sym_dialogue_block,
      aux_sym_dialogue_repeat1,
    ACTIONS(225), 3,
      sym_break,
      sym_synopse,
      sym_note,
    STATE(15), 5,
      sym_dialogue,
      sym_action,
      sym_transition,
      sym__element,
      aux_sym_scene_repeat1,
  [160] = 4,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      aux_sym_action_repeat1,
    ACTIONS(231), 2,
      aux_sym_action_token1,
      sym__line,
    ACTIONS(229), 12,
      aux_sym_scene_token1,
      aux_sym_scene_token2,
      sym_character,
      aux_sym_transition_token1,
      aux_sym_transition_token2,
      sym_break,
      sym_synopse,
      aux_sym_section1_token1,
      aux_sym_section2_token1,
      aux_sym_section3_token1,
      sym_note,
      aux_sym_boneyard_token1,
  [185] = 2,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
    ACTIONS(236), 14,
      aux_sym_scene_token1,
      aux_sym_scene_token2,
      sym_character,
      aux_sym_action_token1,
      aux_sym_transition_token1,
      aux_sym_transition_token2,
      sym_break,
      sym_synopse,
      aux_sym_section1_token1,
      aux_sym_section2_token1,
      aux_sym_section3_token1,
      sym_note,
      aux_sym_boneyard_token1,
      sym__line,
  [205] = 2,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
    ACTIONS(240), 14,
      aux_sym_scene_token1,
      aux_sym_scene_token2,
      sym_character,
      aux_sym_action_token1,
      aux_sym_transition_token1,
      aux_sym_transition_token2,
      sym_break,
      sym_synopse,
      aux_sym_section1_token1,
      aux_sym_section2_token1,
      aux_sym_section3_token1,
      sym_note,
      aux_sym_boneyard_token1,
      sym__line,
  [225] = 2,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
    ACTIONS(244), 14,
      aux_sym_scene_token1,
      aux_sym_scene_token2,
      sym_character,
      aux_sym_action_token1,
      aux_sym_transition_token1,
      aux_sym_transition_token2,
      sym_break,
      sym_synopse,
      aux_sym_section1_token1,
      aux_sym_section2_token1,
      aux_sym_section3_token1,
      sym_note,
      aux_sym_boneyard_token1,
      sym__line,
  [245] = 2,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    ACTIONS(248), 14,
      aux_sym_scene_token1,
      aux_sym_scene_token2,
      sym_character,
      aux_sym_action_token1,
      aux_sym_transition_token1,
      aux_sym_transition_token2,
      sym_break,
      sym_synopse,
      aux_sym_section1_token1,
      aux_sym_section2_token1,
      aux_sym_section3_token1,
      sym_note,
      aux_sym_boneyard_token1,
      sym__line,
  [265] = 4,
    ACTIONS(250), 1,
      anon_sym_LF,
    ACTIONS(252), 1,
      aux_sym_parenthetical_token1,
    ACTIONS(254), 1,
      aux_sym_speech_token1,
    STATE(29), 3,
      sym_parenthetical,
      sym_speech,
      aux_sym_dialogue_block_repeat1,
  [280] = 4,
    ACTIONS(256), 1,
      anon_sym_LF,
    ACTIONS(258), 1,
      aux_sym_parenthetical_token1,
    ACTIONS(261), 1,
      aux_sym_speech_token1,
    STATE(29), 3,
      sym_parenthetical,
      sym_speech,
      aux_sym_dialogue_block_repeat1,
  [295] = 3,
    ACTIONS(252), 1,
      aux_sym_parenthetical_token1,
    ACTIONS(254), 1,
      aux_sym_speech_token1,
    STATE(28), 3,
      sym_parenthetical,
      sym_speech,
      aux_sym_dialogue_block_repeat1,
  [307] = 1,
    ACTIONS(264), 3,
      anon_sym_LF,
      aux_sym_parenthetical_token1,
      aux_sym_speech_token1,
  [313] = 1,
    ACTIONS(266), 3,
      anon_sym_LF,
      aux_sym_parenthetical_token1,
      aux_sym_speech_token1,
  [319] = 1,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(17)] = 0,
  [SMALL_STATE(18)] = 26,
  [SMALL_STATE(19)] = 52,
  [SMALL_STATE(20)] = 78,
  [SMALL_STATE(21)] = 104,
  [SMALL_STATE(22)] = 129,
  [SMALL_STATE(23)] = 160,
  [SMALL_STATE(24)] = 185,
  [SMALL_STATE(25)] = 205,
  [SMALL_STATE(26)] = 225,
  [SMALL_STATE(27)] = 245,
  [SMALL_STATE(28)] = 265,
  [SMALL_STATE(29)] = 280,
  [SMALL_STATE(30)] = 295,
  [SMALL_STATE(31)] = 307,
  [SMALL_STATE(32)] = 313,
  [SMALL_STATE(33)] = 319,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section1_repeat1, 2, 0, 0),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section1_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section1_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section1_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section1_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section1_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section1_repeat1, 2, 0, 0),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section1_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section1_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section1_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section1, 1, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section1, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section1, 2, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section1, 2, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section2_repeat1, 2, 0, 0),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section2_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section2_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section2_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section2_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section2_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section2_repeat1, 2, 0, 0),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section2_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section2_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section2, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section2, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section2, 2, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section2, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section3_repeat1, 2, 0, 0),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section3_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section3_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section3_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section3_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section3_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section3_repeat1, 2, 0, 0),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section3_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section3, 1, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section3, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section3, 2, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section3, 2, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene, 2, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene, 2, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scene_repeat1, 2, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_scene_repeat1, 2, 0, 0),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scene_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scene_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scene_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scene_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialogue, 1, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dialogue, 1, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_page, 1, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_page, 1, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 1, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 1, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialogue_block, 3, 0, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dialogue_block, 3, 0, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boneyard, 1, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boneyard, 1, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transition, 1, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transition, 1, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthetical, 1, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_speech, 1, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
