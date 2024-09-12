#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 34
#define LARGE_STATE_COUNT 17
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym__title_element = 1,
  aux_sym_scene_token1 = 2,
  aux_sym_scene_token2 = 3,
  anon_sym_LF = 4,
  aux_sym__noncharacter_token1 = 5,
  sym_character = 6,
  aux_sym_parenthetical_token1 = 7,
  aux_sym_speech_token1 = 8,
  aux_sym_action_token1 = 9,
  aux_sym_transition_token1 = 10,
  aux_sym_transition_token2 = 11,
  sym_break = 12,
  sym_synopse = 13,
  aux_sym_section1_token1 = 14,
  aux_sym_section2_token1 = 15,
  aux_sym_section3_token1 = 16,
  sym_note = 17,
  aux_sym_boneyard_token1 = 18,
  sym__line = 19,
  sym_document = 20,
  sym_title_page = 21,
  sym_scene = 22,
  sym_dialogue = 23,
  sym_dialogue_block = 24,
  sym__noncharacter = 25,
  sym_parenthetical = 26,
  sym_speech = 27,
  sym_action = 28,
  sym_transition = 29,
  sym_section1 = 30,
  sym_section2 = 31,
  sym_section3 = 32,
  sym_section = 33,
  sym_boneyard = 34,
  sym__element = 35,
  aux_sym_document_repeat1 = 36,
  aux_sym_title_page_repeat1 = 37,
  aux_sym_scene_repeat1 = 38,
  aux_sym_dialogue_repeat1 = 39,
  aux_sym_dialogue_block_repeat1 = 40,
  aux_sym_action_repeat1 = 41,
  aux_sym_section1_repeat1 = 42,
  aux_sym_section2_repeat1 = 43,
  aux_sym_section3_repeat1 = 44,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__title_element] = "_title_element",
  [aux_sym_scene_token1] = "scene_token1",
  [aux_sym_scene_token2] = "scene_token2",
  [anon_sym_LF] = "\n",
  [aux_sym__noncharacter_token1] = "_noncharacter_token1",
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
  [sym__noncharacter] = "_noncharacter",
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
  [aux_sym__noncharacter_token1] = aux_sym__noncharacter_token1,
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
  [sym__noncharacter] = sym__noncharacter,
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
  [aux_sym__noncharacter_token1] = {
    .visible = false,
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
  [sym__noncharacter] = {
    .visible = false,
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

static TSCharacterRange sym_character_character_set_1[] = {
  {' ', ' '}, {'\'', '\''}, {'.', '.'}, {'0', '9'}, {'@', 'Z'}, {0xc0, 0xd6}, {0xd8, 0xde}, {0x100, 0x100},
  {0x102, 0x102}, {0x104, 0x104}, {0x106, 0x106}, {0x108, 0x108}, {0x10a, 0x10a}, {0x10c, 0x10c}, {0x10e, 0x10e}, {0x110, 0x110},
  {0x112, 0x112}, {0x114, 0x114}, {0x116, 0x116}, {0x118, 0x118}, {0x11a, 0x11a}, {0x11c, 0x11c}, {0x11e, 0x11e}, {0x120, 0x120},
  {0x122, 0x122}, {0x124, 0x124}, {0x126, 0x126}, {0x128, 0x128}, {0x12a, 0x12a}, {0x12c, 0x12c}, {0x12e, 0x12e}, {0x130, 0x130},
  {0x132, 0x132}, {0x134, 0x134}, {0x136, 0x136}, {0x139, 0x139}, {0x13b, 0x13b}, {0x13d, 0x13d}, {0x13f, 0x13f}, {0x141, 0x141},
  {0x143, 0x143}, {0x145, 0x145}, {0x147, 0x147}, {0x14a, 0x14a}, {0x14c, 0x14c}, {0x14e, 0x14e}, {0x150, 0x150}, {0x152, 0x152},
  {0x154, 0x154}, {0x156, 0x156}, {0x158, 0x158}, {0x15a, 0x15a}, {0x15c, 0x15c}, {0x15e, 0x15e}, {0x160, 0x160}, {0x162, 0x162},
  {0x164, 0x164}, {0x166, 0x166}, {0x168, 0x168}, {0x16a, 0x16a}, {0x16c, 0x16c}, {0x16e, 0x16e}, {0x170, 0x170}, {0x172, 0x172},
  {0x174, 0x174}, {0x176, 0x176}, {0x178, 0x179}, {0x17b, 0x17b}, {0x17d, 0x17d}, {0x181, 0x182}, {0x184, 0x184}, {0x186, 0x187},
  {0x189, 0x18b}, {0x18e, 0x191}, {0x193, 0x194}, {0x196, 0x198}, {0x19c, 0x19d}, {0x19f, 0x1a0}, {0x1a2, 0x1a2}, {0x1a4, 0x1a4},
  {0x1a6, 0x1a7}, {0x1a9, 0x1a9}, {0x1ac, 0x1ac}, {0x1ae, 0x1af}, {0x1b1, 0x1b3}, {0x1b5, 0x1b5}, {0x1b7, 0x1b8}, {0x1bc, 0x1bc},
  {0x1c4, 0x1c4}, {0x1c7, 0x1c7}, {0x1ca, 0x1ca}, {0x1cd, 0x1cd}, {0x1cf, 0x1cf}, {0x1d1, 0x1d1}, {0x1d3, 0x1d3}, {0x1d5, 0x1d5},
  {0x1d7, 0x1d7}, {0x1d9, 0x1d9}, {0x1db, 0x1db}, {0x1de, 0x1de}, {0x1e0, 0x1e0}, {0x1e2, 0x1e2}, {0x1e4, 0x1e4}, {0x1e6, 0x1e6},
  {0x1e8, 0x1e8}, {0x1ea, 0x1ea}, {0x1ec, 0x1ec}, {0x1ee, 0x1ee}, {0x1f1, 0x1f1}, {0x1f4, 0x1f4}, {0x1f6, 0x1f8}, {0x1fa, 0x1fa},
  {0x1fc, 0x1fc}, {0x1fe, 0x1fe}, {0x200, 0x200}, {0x202, 0x202}, {0x204, 0x204}, {0x206, 0x206}, {0x208, 0x208}, {0x20a, 0x20a},
  {0x20c, 0x20c}, {0x20e, 0x20e}, {0x210, 0x210}, {0x212, 0x212}, {0x214, 0x214}, {0x216, 0x216}, {0x218, 0x218}, {0x21a, 0x21a},
  {0x21c, 0x21c}, {0x21e, 0x21e}, {0x220, 0x220}, {0x222, 0x222}, {0x224, 0x224}, {0x226, 0x226}, {0x228, 0x228}, {0x22a, 0x22a},
  {0x22c, 0x22c}, {0x22e, 0x22e}, {0x230, 0x230}, {0x232, 0x232}, {0x23a, 0x23b}, {0x23d, 0x23e}, {0x241, 0x241}, {0x243, 0x246},
  {0x248, 0x248}, {0x24a, 0x24a}, {0x24c, 0x24c}, {0x24e, 0x24e}, {0x370, 0x370}, {0x372, 0x372}, {0x376, 0x376}, {0x37f, 0x37f},
  {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x38f}, {0x391, 0x3a1}, {0x3a3, 0x3ab}, {0x3cf, 0x3cf}, {0x3d2, 0x3d4},
  {0x3d8, 0x3d8}, {0x3da, 0x3da}, {0x3dc, 0x3dc}, {0x3de, 0x3de}, {0x3e0, 0x3e0}, {0x3e2, 0x3e2}, {0x3e4, 0x3e4}, {0x3e6, 0x3e6},
  {0x3e8, 0x3e8}, {0x3ea, 0x3ea}, {0x3ec, 0x3ec}, {0x3ee, 0x3ee}, {0x3f4, 0x3f4}, {0x3f7, 0x3f7}, {0x3f9, 0x3fa}, {0x3fd, 0x42f},
  {0x460, 0x460}, {0x462, 0x462}, {0x464, 0x464}, {0x466, 0x466}, {0x468, 0x468}, {0x46a, 0x46a}, {0x46c, 0x46c}, {0x46e, 0x46e},
  {0x470, 0x470}, {0x472, 0x472}, {0x474, 0x474}, {0x476, 0x476}, {0x478, 0x478}, {0x47a, 0x47a}, {0x47c, 0x47c}, {0x47e, 0x47e},
  {0x480, 0x480}, {0x48a, 0x48a}, {0x48c, 0x48c}, {0x48e, 0x48e}, {0x490, 0x490}, {0x492, 0x492}, {0x494, 0x494}, {0x496, 0x496},
  {0x498, 0x498}, {0x49a, 0x49a}, {0x49c, 0x49c}, {0x49e, 0x49e}, {0x4a0, 0x4a0}, {0x4a2, 0x4a2}, {0x4a4, 0x4a4}, {0x4a6, 0x4a6},
  {0x4a8, 0x4a8}, {0x4aa, 0x4aa}, {0x4ac, 0x4ac}, {0x4ae, 0x4ae}, {0x4b0, 0x4b0}, {0x4b2, 0x4b2}, {0x4b4, 0x4b4}, {0x4b6, 0x4b6},
  {0x4b8, 0x4b8}, {0x4ba, 0x4ba}, {0x4bc, 0x4bc}, {0x4be, 0x4be}, {0x4c0, 0x4c1}, {0x4c3, 0x4c3}, {0x4c5, 0x4c5}, {0x4c7, 0x4c7},
  {0x4c9, 0x4c9}, {0x4cb, 0x4cb}, {0x4cd, 0x4cd}, {0x4d0, 0x4d0}, {0x4d2, 0x4d2}, {0x4d4, 0x4d4}, {0x4d6, 0x4d6}, {0x4d8, 0x4d8},
  {0x4da, 0x4da}, {0x4dc, 0x4dc}, {0x4de, 0x4de}, {0x4e0, 0x4e0}, {0x4e2, 0x4e2}, {0x4e4, 0x4e4}, {0x4e6, 0x4e6}, {0x4e8, 0x4e8},
  {0x4ea, 0x4ea}, {0x4ec, 0x4ec}, {0x4ee, 0x4ee}, {0x4f0, 0x4f0}, {0x4f2, 0x4f2}, {0x4f4, 0x4f4}, {0x4f6, 0x4f6}, {0x4f8, 0x4f8},
  {0x4fa, 0x4fa}, {0x4fc, 0x4fc}, {0x4fe, 0x4fe}, {0x500, 0x500}, {0x502, 0x502}, {0x504, 0x504}, {0x506, 0x506}, {0x508, 0x508},
  {0x50a, 0x50a}, {0x50c, 0x50c}, {0x50e, 0x50e}, {0x510, 0x510}, {0x512, 0x512}, {0x514, 0x514}, {0x516, 0x516}, {0x518, 0x518},
  {0x51a, 0x51a}, {0x51c, 0x51c}, {0x51e, 0x51e}, {0x520, 0x520}, {0x522, 0x522}, {0x524, 0x524}, {0x526, 0x526}, {0x528, 0x528},
  {0x52a, 0x52a}, {0x52c, 0x52c}, {0x52e, 0x52e}, {0x531, 0x556}, {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x13a0, 0x13f5},
  {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1e00, 0x1e00}, {0x1e02, 0x1e02}, {0x1e04, 0x1e04}, {0x1e06, 0x1e06}, {0x1e08, 0x1e08}, {0x1e0a, 0x1e0a},
  {0x1e0c, 0x1e0c}, {0x1e0e, 0x1e0e}, {0x1e10, 0x1e10}, {0x1e12, 0x1e12}, {0x1e14, 0x1e14}, {0x1e16, 0x1e16}, {0x1e18, 0x1e18}, {0x1e1a, 0x1e1a},
  {0x1e1c, 0x1e1c}, {0x1e1e, 0x1e1e}, {0x1e20, 0x1e20}, {0x1e22, 0x1e22}, {0x1e24, 0x1e24}, {0x1e26, 0x1e26}, {0x1e28, 0x1e28}, {0x1e2a, 0x1e2a},
  {0x1e2c, 0x1e2c}, {0x1e2e, 0x1e2e}, {0x1e30, 0x1e30}, {0x1e32, 0x1e32}, {0x1e34, 0x1e34}, {0x1e36, 0x1e36}, {0x1e38, 0x1e38}, {0x1e3a, 0x1e3a},
  {0x1e3c, 0x1e3c}, {0x1e3e, 0x1e3e}, {0x1e40, 0x1e40}, {0x1e42, 0x1e42}, {0x1e44, 0x1e44}, {0x1e46, 0x1e46}, {0x1e48, 0x1e48}, {0x1e4a, 0x1e4a},
  {0x1e4c, 0x1e4c}, {0x1e4e, 0x1e4e}, {0x1e50, 0x1e50}, {0x1e52, 0x1e52}, {0x1e54, 0x1e54}, {0x1e56, 0x1e56}, {0x1e58, 0x1e58}, {0x1e5a, 0x1e5a},
  {0x1e5c, 0x1e5c}, {0x1e5e, 0x1e5e}, {0x1e60, 0x1e60}, {0x1e62, 0x1e62}, {0x1e64, 0x1e64}, {0x1e66, 0x1e66}, {0x1e68, 0x1e68}, {0x1e6a, 0x1e6a},
  {0x1e6c, 0x1e6c}, {0x1e6e, 0x1e6e}, {0x1e70, 0x1e70}, {0x1e72, 0x1e72}, {0x1e74, 0x1e74}, {0x1e76, 0x1e76}, {0x1e78, 0x1e78}, {0x1e7a, 0x1e7a},
  {0x1e7c, 0x1e7c}, {0x1e7e, 0x1e7e}, {0x1e80, 0x1e80}, {0x1e82, 0x1e82}, {0x1e84, 0x1e84}, {0x1e86, 0x1e86}, {0x1e88, 0x1e88}, {0x1e8a, 0x1e8a},
  {0x1e8c, 0x1e8c}, {0x1e8e, 0x1e8e}, {0x1e90, 0x1e90}, {0x1e92, 0x1e92}, {0x1e94, 0x1e94}, {0x1e9e, 0x1e9e}, {0x1ea0, 0x1ea0}, {0x1ea2, 0x1ea2},
  {0x1ea4, 0x1ea4}, {0x1ea6, 0x1ea6}, {0x1ea8, 0x1ea8}, {0x1eaa, 0x1eaa}, {0x1eac, 0x1eac}, {0x1eae, 0x1eae}, {0x1eb0, 0x1eb0}, {0x1eb2, 0x1eb2},
  {0x1eb4, 0x1eb4}, {0x1eb6, 0x1eb6}, {0x1eb8, 0x1eb8}, {0x1eba, 0x1eba}, {0x1ebc, 0x1ebc}, {0x1ebe, 0x1ebe}, {0x1ec0, 0x1ec0}, {0x1ec2, 0x1ec2},
  {0x1ec4, 0x1ec4}, {0x1ec6, 0x1ec6}, {0x1ec8, 0x1ec8}, {0x1eca, 0x1eca}, {0x1ecc, 0x1ecc}, {0x1ece, 0x1ece}, {0x1ed0, 0x1ed0}, {0x1ed2, 0x1ed2},
  {0x1ed4, 0x1ed4}, {0x1ed6, 0x1ed6}, {0x1ed8, 0x1ed8}, {0x1eda, 0x1eda}, {0x1edc, 0x1edc}, {0x1ede, 0x1ede}, {0x1ee0, 0x1ee0}, {0x1ee2, 0x1ee2},
  {0x1ee4, 0x1ee4}, {0x1ee6, 0x1ee6}, {0x1ee8, 0x1ee8}, {0x1eea, 0x1eea}, {0x1eec, 0x1eec}, {0x1eee, 0x1eee}, {0x1ef0, 0x1ef0}, {0x1ef2, 0x1ef2},
  {0x1ef4, 0x1ef4}, {0x1ef6, 0x1ef6}, {0x1ef8, 0x1ef8}, {0x1efa, 0x1efa}, {0x1efc, 0x1efc}, {0x1efe, 0x1efe}, {0x1f08, 0x1f0f}, {0x1f18, 0x1f1d},
  {0x1f28, 0x1f2f}, {0x1f38, 0x1f3f}, {0x1f48, 0x1f4d}, {0x1f59, 0x1f59}, {0x1f5b, 0x1f5b}, {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f5f}, {0x1f68, 0x1f6f},
  {0x1fb8, 0x1fbb}, {0x1fc8, 0x1fcb}, {0x1fd8, 0x1fdb}, {0x1fe8, 0x1fec}, {0x1ff8, 0x1ffb}, {0x2102, 0x2102}, {0x2107, 0x2107}, {0x210b, 0x210d},
  {0x2110, 0x2112}, {0x2115, 0x2115}, {0x2119, 0x211d}, {0x2124, 0x2124}, {0x2126, 0x2126}, {0x2128, 0x2128}, {0x212a, 0x212d}, {0x2130, 0x2133},
  {0x213e, 0x213f}, {0x2145, 0x2145}, {0x2183, 0x2183}, {0x2c00, 0x2c2f}, {0x2c60, 0x2c60}, {0x2c62, 0x2c64}, {0x2c67, 0x2c67}, {0x2c69, 0x2c69},
  {0x2c6b, 0x2c6b}, {0x2c6d, 0x2c70}, {0x2c72, 0x2c72}, {0x2c75, 0x2c75}, {0x2c7e, 0x2c80}, {0x2c82, 0x2c82}, {0x2c84, 0x2c84}, {0x2c86, 0x2c86},
  {0x2c88, 0x2c88}, {0x2c8a, 0x2c8a}, {0x2c8c, 0x2c8c}, {0x2c8e, 0x2c8e}, {0x2c90, 0x2c90}, {0x2c92, 0x2c92}, {0x2c94, 0x2c94}, {0x2c96, 0x2c96},
  {0x2c98, 0x2c98}, {0x2c9a, 0x2c9a}, {0x2c9c, 0x2c9c}, {0x2c9e, 0x2c9e}, {0x2ca0, 0x2ca0}, {0x2ca2, 0x2ca2}, {0x2ca4, 0x2ca4}, {0x2ca6, 0x2ca6},
  {0x2ca8, 0x2ca8}, {0x2caa, 0x2caa}, {0x2cac, 0x2cac}, {0x2cae, 0x2cae}, {0x2cb0, 0x2cb0}, {0x2cb2, 0x2cb2}, {0x2cb4, 0x2cb4}, {0x2cb6, 0x2cb6},
  {0x2cb8, 0x2cb8}, {0x2cba, 0x2cba}, {0x2cbc, 0x2cbc}, {0x2cbe, 0x2cbe}, {0x2cc0, 0x2cc0}, {0x2cc2, 0x2cc2}, {0x2cc4, 0x2cc4}, {0x2cc6, 0x2cc6},
  {0x2cc8, 0x2cc8}, {0x2cca, 0x2cca}, {0x2ccc, 0x2ccc}, {0x2cce, 0x2cce}, {0x2cd0, 0x2cd0}, {0x2cd2, 0x2cd2}, {0x2cd4, 0x2cd4}, {0x2cd6, 0x2cd6},
  {0x2cd8, 0x2cd8}, {0x2cda, 0x2cda}, {0x2cdc, 0x2cdc}, {0x2cde, 0x2cde}, {0x2ce0, 0x2ce0}, {0x2ce2, 0x2ce2}, {0x2ceb, 0x2ceb}, {0x2ced, 0x2ced},
  {0x2cf2, 0x2cf2}, {0xa640, 0xa640}, {0xa642, 0xa642}, {0xa644, 0xa644}, {0xa646, 0xa646}, {0xa648, 0xa648}, {0xa64a, 0xa64a}, {0xa64c, 0xa64c},
  {0xa64e, 0xa64e}, {0xa650, 0xa650}, {0xa652, 0xa652}, {0xa654, 0xa654}, {0xa656, 0xa656}, {0xa658, 0xa658}, {0xa65a, 0xa65a}, {0xa65c, 0xa65c},
  {0xa65e, 0xa65e}, {0xa660, 0xa660}, {0xa662, 0xa662}, {0xa664, 0xa664}, {0xa666, 0xa666}, {0xa668, 0xa668}, {0xa66a, 0xa66a}, {0xa66c, 0xa66c},
  {0xa680, 0xa680}, {0xa682, 0xa682}, {0xa684, 0xa684}, {0xa686, 0xa686}, {0xa688, 0xa688}, {0xa68a, 0xa68a}, {0xa68c, 0xa68c}, {0xa68e, 0xa68e},
  {0xa690, 0xa690}, {0xa692, 0xa692}, {0xa694, 0xa694}, {0xa696, 0xa696}, {0xa698, 0xa698}, {0xa69a, 0xa69a}, {0xa722, 0xa722}, {0xa724, 0xa724},
  {0xa726, 0xa726}, {0xa728, 0xa728}, {0xa72a, 0xa72a}, {0xa72c, 0xa72c}, {0xa72e, 0xa72e}, {0xa732, 0xa732}, {0xa734, 0xa734}, {0xa736, 0xa736},
  {0xa738, 0xa738}, {0xa73a, 0xa73a}, {0xa73c, 0xa73c}, {0xa73e, 0xa73e}, {0xa740, 0xa740}, {0xa742, 0xa742}, {0xa744, 0xa744}, {0xa746, 0xa746},
  {0xa748, 0xa748}, {0xa74a, 0xa74a}, {0xa74c, 0xa74c}, {0xa74e, 0xa74e}, {0xa750, 0xa750}, {0xa752, 0xa752}, {0xa754, 0xa754}, {0xa756, 0xa756},
  {0xa758, 0xa758}, {0xa75a, 0xa75a}, {0xa75c, 0xa75c}, {0xa75e, 0xa75e}, {0xa760, 0xa760}, {0xa762, 0xa762}, {0xa764, 0xa764}, {0xa766, 0xa766},
  {0xa768, 0xa768}, {0xa76a, 0xa76a}, {0xa76c, 0xa76c}, {0xa76e, 0xa76e}, {0xa779, 0xa779}, {0xa77b, 0xa77b}, {0xa77d, 0xa77e}, {0xa780, 0xa780},
  {0xa782, 0xa782}, {0xa784, 0xa784}, {0xa786, 0xa786}, {0xa78b, 0xa78b}, {0xa78d, 0xa78d}, {0xa790, 0xa790}, {0xa792, 0xa792}, {0xa796, 0xa796},
  {0xa798, 0xa798}, {0xa79a, 0xa79a}, {0xa79c, 0xa79c}, {0xa79e, 0xa79e}, {0xa7a0, 0xa7a0}, {0xa7a2, 0xa7a2}, {0xa7a4, 0xa7a4}, {0xa7a6, 0xa7a6},
  {0xa7a8, 0xa7a8}, {0xa7aa, 0xa7ae}, {0xa7b0, 0xa7b4}, {0xa7b6, 0xa7b6}, {0xa7b8, 0xa7b8}, {0xa7ba, 0xa7ba}, {0xa7bc, 0xa7bc}, {0xa7be, 0xa7be},
  {0xa7c0, 0xa7c0}, {0xa7c2, 0xa7c2}, {0xa7c4, 0xa7c7}, {0xa7c9, 0xa7c9}, {0xa7d0, 0xa7d0}, {0xa7d6, 0xa7d6}, {0xa7d8, 0xa7d8}, {0xa7f5, 0xa7f5},
  {0xff21, 0xff3a}, {0x10400, 0x10427}, {0x104b0, 0x104d3}, {0x10570, 0x1057a}, {0x1057c, 0x1058a}, {0x1058c, 0x10592}, {0x10594, 0x10595},
};

static TSCharacterRange sym_character_character_set_3[] = {
  {' ', ' '}, {'#', '#'}, {'\'', '\''}, {'.', '.'}, {'0', '9'}, {'A', 'Z'}, {0xc0, 0xd6}, {0xd8, 0xde},
  {0x100, 0x100}, {0x102, 0x102}, {0x104, 0x104}, {0x106, 0x106}, {0x108, 0x108}, {0x10a, 0x10a}, {0x10c, 0x10c}, {0x10e, 0x10e},
  {0x110, 0x110}, {0x112, 0x112}, {0x114, 0x114}, {0x116, 0x116}, {0x118, 0x118}, {0x11a, 0x11a}, {0x11c, 0x11c}, {0x11e, 0x11e},
  {0x120, 0x120}, {0x122, 0x122}, {0x124, 0x124}, {0x126, 0x126}, {0x128, 0x128}, {0x12a, 0x12a}, {0x12c, 0x12c}, {0x12e, 0x12e},
  {0x130, 0x130}, {0x132, 0x132}, {0x134, 0x134}, {0x136, 0x136}, {0x139, 0x139}, {0x13b, 0x13b}, {0x13d, 0x13d}, {0x13f, 0x13f},
  {0x141, 0x141}, {0x143, 0x143}, {0x145, 0x145}, {0x147, 0x147}, {0x14a, 0x14a}, {0x14c, 0x14c}, {0x14e, 0x14e}, {0x150, 0x150},
  {0x152, 0x152}, {0x154, 0x154}, {0x156, 0x156}, {0x158, 0x158}, {0x15a, 0x15a}, {0x15c, 0x15c}, {0x15e, 0x15e}, {0x160, 0x160},
  {0x162, 0x162}, {0x164, 0x164}, {0x166, 0x166}, {0x168, 0x168}, {0x16a, 0x16a}, {0x16c, 0x16c}, {0x16e, 0x16e}, {0x170, 0x170},
  {0x172, 0x172}, {0x174, 0x174}, {0x176, 0x176}, {0x178, 0x179}, {0x17b, 0x17b}, {0x17d, 0x17d}, {0x181, 0x182}, {0x184, 0x184},
  {0x186, 0x187}, {0x189, 0x18b}, {0x18e, 0x191}, {0x193, 0x194}, {0x196, 0x198}, {0x19c, 0x19d}, {0x19f, 0x1a0}, {0x1a2, 0x1a2},
  {0x1a4, 0x1a4}, {0x1a6, 0x1a7}, {0x1a9, 0x1a9}, {0x1ac, 0x1ac}, {0x1ae, 0x1af}, {0x1b1, 0x1b3}, {0x1b5, 0x1b5}, {0x1b7, 0x1b8},
  {0x1bc, 0x1bc}, {0x1c4, 0x1c4}, {0x1c7, 0x1c7}, {0x1ca, 0x1ca}, {0x1cd, 0x1cd}, {0x1cf, 0x1cf}, {0x1d1, 0x1d1}, {0x1d3, 0x1d3},
  {0x1d5, 0x1d5}, {0x1d7, 0x1d7}, {0x1d9, 0x1d9}, {0x1db, 0x1db}, {0x1de, 0x1de}, {0x1e0, 0x1e0}, {0x1e2, 0x1e2}, {0x1e4, 0x1e4},
  {0x1e6, 0x1e6}, {0x1e8, 0x1e8}, {0x1ea, 0x1ea}, {0x1ec, 0x1ec}, {0x1ee, 0x1ee}, {0x1f1, 0x1f1}, {0x1f4, 0x1f4}, {0x1f6, 0x1f8},
  {0x1fa, 0x1fa}, {0x1fc, 0x1fc}, {0x1fe, 0x1fe}, {0x200, 0x200}, {0x202, 0x202}, {0x204, 0x204}, {0x206, 0x206}, {0x208, 0x208},
  {0x20a, 0x20a}, {0x20c, 0x20c}, {0x20e, 0x20e}, {0x210, 0x210}, {0x212, 0x212}, {0x214, 0x214}, {0x216, 0x216}, {0x218, 0x218},
  {0x21a, 0x21a}, {0x21c, 0x21c}, {0x21e, 0x21e}, {0x220, 0x220}, {0x222, 0x222}, {0x224, 0x224}, {0x226, 0x226}, {0x228, 0x228},
  {0x22a, 0x22a}, {0x22c, 0x22c}, {0x22e, 0x22e}, {0x230, 0x230}, {0x232, 0x232}, {0x23a, 0x23b}, {0x23d, 0x23e}, {0x241, 0x241},
  {0x243, 0x246}, {0x248, 0x248}, {0x24a, 0x24a}, {0x24c, 0x24c}, {0x24e, 0x24e}, {0x370, 0x370}, {0x372, 0x372}, {0x376, 0x376},
  {0x37f, 0x37f}, {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x38f}, {0x391, 0x3a1}, {0x3a3, 0x3ab}, {0x3cf, 0x3cf},
  {0x3d2, 0x3d4}, {0x3d8, 0x3d8}, {0x3da, 0x3da}, {0x3dc, 0x3dc}, {0x3de, 0x3de}, {0x3e0, 0x3e0}, {0x3e2, 0x3e2}, {0x3e4, 0x3e4},
  {0x3e6, 0x3e6}, {0x3e8, 0x3e8}, {0x3ea, 0x3ea}, {0x3ec, 0x3ec}, {0x3ee, 0x3ee}, {0x3f4, 0x3f4}, {0x3f7, 0x3f7}, {0x3f9, 0x3fa},
  {0x3fd, 0x42f}, {0x460, 0x460}, {0x462, 0x462}, {0x464, 0x464}, {0x466, 0x466}, {0x468, 0x468}, {0x46a, 0x46a}, {0x46c, 0x46c},
  {0x46e, 0x46e}, {0x470, 0x470}, {0x472, 0x472}, {0x474, 0x474}, {0x476, 0x476}, {0x478, 0x478}, {0x47a, 0x47a}, {0x47c, 0x47c},
  {0x47e, 0x47e}, {0x480, 0x480}, {0x48a, 0x48a}, {0x48c, 0x48c}, {0x48e, 0x48e}, {0x490, 0x490}, {0x492, 0x492}, {0x494, 0x494},
  {0x496, 0x496}, {0x498, 0x498}, {0x49a, 0x49a}, {0x49c, 0x49c}, {0x49e, 0x49e}, {0x4a0, 0x4a0}, {0x4a2, 0x4a2}, {0x4a4, 0x4a4},
  {0x4a6, 0x4a6}, {0x4a8, 0x4a8}, {0x4aa, 0x4aa}, {0x4ac, 0x4ac}, {0x4ae, 0x4ae}, {0x4b0, 0x4b0}, {0x4b2, 0x4b2}, {0x4b4, 0x4b4},
  {0x4b6, 0x4b6}, {0x4b8, 0x4b8}, {0x4ba, 0x4ba}, {0x4bc, 0x4bc}, {0x4be, 0x4be}, {0x4c0, 0x4c1}, {0x4c3, 0x4c3}, {0x4c5, 0x4c5},
  {0x4c7, 0x4c7}, {0x4c9, 0x4c9}, {0x4cb, 0x4cb}, {0x4cd, 0x4cd}, {0x4d0, 0x4d0}, {0x4d2, 0x4d2}, {0x4d4, 0x4d4}, {0x4d6, 0x4d6},
  {0x4d8, 0x4d8}, {0x4da, 0x4da}, {0x4dc, 0x4dc}, {0x4de, 0x4de}, {0x4e0, 0x4e0}, {0x4e2, 0x4e2}, {0x4e4, 0x4e4}, {0x4e6, 0x4e6},
  {0x4e8, 0x4e8}, {0x4ea, 0x4ea}, {0x4ec, 0x4ec}, {0x4ee, 0x4ee}, {0x4f0, 0x4f0}, {0x4f2, 0x4f2}, {0x4f4, 0x4f4}, {0x4f6, 0x4f6},
  {0x4f8, 0x4f8}, {0x4fa, 0x4fa}, {0x4fc, 0x4fc}, {0x4fe, 0x4fe}, {0x500, 0x500}, {0x502, 0x502}, {0x504, 0x504}, {0x506, 0x506},
  {0x508, 0x508}, {0x50a, 0x50a}, {0x50c, 0x50c}, {0x50e, 0x50e}, {0x510, 0x510}, {0x512, 0x512}, {0x514, 0x514}, {0x516, 0x516},
  {0x518, 0x518}, {0x51a, 0x51a}, {0x51c, 0x51c}, {0x51e, 0x51e}, {0x520, 0x520}, {0x522, 0x522}, {0x524, 0x524}, {0x526, 0x526},
  {0x528, 0x528}, {0x52a, 0x52a}, {0x52c, 0x52c}, {0x52e, 0x52e}, {0x531, 0x556}, {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd},
  {0x13a0, 0x13f5}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1e00, 0x1e00}, {0x1e02, 0x1e02}, {0x1e04, 0x1e04}, {0x1e06, 0x1e06}, {0x1e08, 0x1e08},
  {0x1e0a, 0x1e0a}, {0x1e0c, 0x1e0c}, {0x1e0e, 0x1e0e}, {0x1e10, 0x1e10}, {0x1e12, 0x1e12}, {0x1e14, 0x1e14}, {0x1e16, 0x1e16}, {0x1e18, 0x1e18},
  {0x1e1a, 0x1e1a}, {0x1e1c, 0x1e1c}, {0x1e1e, 0x1e1e}, {0x1e20, 0x1e20}, {0x1e22, 0x1e22}, {0x1e24, 0x1e24}, {0x1e26, 0x1e26}, {0x1e28, 0x1e28},
  {0x1e2a, 0x1e2a}, {0x1e2c, 0x1e2c}, {0x1e2e, 0x1e2e}, {0x1e30, 0x1e30}, {0x1e32, 0x1e32}, {0x1e34, 0x1e34}, {0x1e36, 0x1e36}, {0x1e38, 0x1e38},
  {0x1e3a, 0x1e3a}, {0x1e3c, 0x1e3c}, {0x1e3e, 0x1e3e}, {0x1e40, 0x1e40}, {0x1e42, 0x1e42}, {0x1e44, 0x1e44}, {0x1e46, 0x1e46}, {0x1e48, 0x1e48},
  {0x1e4a, 0x1e4a}, {0x1e4c, 0x1e4c}, {0x1e4e, 0x1e4e}, {0x1e50, 0x1e50}, {0x1e52, 0x1e52}, {0x1e54, 0x1e54}, {0x1e56, 0x1e56}, {0x1e58, 0x1e58},
  {0x1e5a, 0x1e5a}, {0x1e5c, 0x1e5c}, {0x1e5e, 0x1e5e}, {0x1e60, 0x1e60}, {0x1e62, 0x1e62}, {0x1e64, 0x1e64}, {0x1e66, 0x1e66}, {0x1e68, 0x1e68},
  {0x1e6a, 0x1e6a}, {0x1e6c, 0x1e6c}, {0x1e6e, 0x1e6e}, {0x1e70, 0x1e70}, {0x1e72, 0x1e72}, {0x1e74, 0x1e74}, {0x1e76, 0x1e76}, {0x1e78, 0x1e78},
  {0x1e7a, 0x1e7a}, {0x1e7c, 0x1e7c}, {0x1e7e, 0x1e7e}, {0x1e80, 0x1e80}, {0x1e82, 0x1e82}, {0x1e84, 0x1e84}, {0x1e86, 0x1e86}, {0x1e88, 0x1e88},
  {0x1e8a, 0x1e8a}, {0x1e8c, 0x1e8c}, {0x1e8e, 0x1e8e}, {0x1e90, 0x1e90}, {0x1e92, 0x1e92}, {0x1e94, 0x1e94}, {0x1e9e, 0x1e9e}, {0x1ea0, 0x1ea0},
  {0x1ea2, 0x1ea2}, {0x1ea4, 0x1ea4}, {0x1ea6, 0x1ea6}, {0x1ea8, 0x1ea8}, {0x1eaa, 0x1eaa}, {0x1eac, 0x1eac}, {0x1eae, 0x1eae}, {0x1eb0, 0x1eb0},
  {0x1eb2, 0x1eb2}, {0x1eb4, 0x1eb4}, {0x1eb6, 0x1eb6}, {0x1eb8, 0x1eb8}, {0x1eba, 0x1eba}, {0x1ebc, 0x1ebc}, {0x1ebe, 0x1ebe}, {0x1ec0, 0x1ec0},
  {0x1ec2, 0x1ec2}, {0x1ec4, 0x1ec4}, {0x1ec6, 0x1ec6}, {0x1ec8, 0x1ec8}, {0x1eca, 0x1eca}, {0x1ecc, 0x1ecc}, {0x1ece, 0x1ece}, {0x1ed0, 0x1ed0},
  {0x1ed2, 0x1ed2}, {0x1ed4, 0x1ed4}, {0x1ed6, 0x1ed6}, {0x1ed8, 0x1ed8}, {0x1eda, 0x1eda}, {0x1edc, 0x1edc}, {0x1ede, 0x1ede}, {0x1ee0, 0x1ee0},
  {0x1ee2, 0x1ee2}, {0x1ee4, 0x1ee4}, {0x1ee6, 0x1ee6}, {0x1ee8, 0x1ee8}, {0x1eea, 0x1eea}, {0x1eec, 0x1eec}, {0x1eee, 0x1eee}, {0x1ef0, 0x1ef0},
  {0x1ef2, 0x1ef2}, {0x1ef4, 0x1ef4}, {0x1ef6, 0x1ef6}, {0x1ef8, 0x1ef8}, {0x1efa, 0x1efa}, {0x1efc, 0x1efc}, {0x1efe, 0x1efe}, {0x1f08, 0x1f0f},
  {0x1f18, 0x1f1d}, {0x1f28, 0x1f2f}, {0x1f38, 0x1f3f}, {0x1f48, 0x1f4d}, {0x1f59, 0x1f59}, {0x1f5b, 0x1f5b}, {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f5f},
  {0x1f68, 0x1f6f}, {0x1fb8, 0x1fbb}, {0x1fc8, 0x1fcb}, {0x1fd8, 0x1fdb}, {0x1fe8, 0x1fec}, {0x1ff8, 0x1ffb}, {0x2102, 0x2102}, {0x2107, 0x2107},
  {0x210b, 0x210d}, {0x2110, 0x2112}, {0x2115, 0x2115}, {0x2119, 0x211d}, {0x2124, 0x2124}, {0x2126, 0x2126}, {0x2128, 0x2128}, {0x212a, 0x212d},
  {0x2130, 0x2133}, {0x213e, 0x213f}, {0x2145, 0x2145}, {0x2183, 0x2183}, {0x2c00, 0x2c2f}, {0x2c60, 0x2c60}, {0x2c62, 0x2c64}, {0x2c67, 0x2c67},
  {0x2c69, 0x2c69}, {0x2c6b, 0x2c6b}, {0x2c6d, 0x2c70}, {0x2c72, 0x2c72}, {0x2c75, 0x2c75}, {0x2c7e, 0x2c80}, {0x2c82, 0x2c82}, {0x2c84, 0x2c84},
  {0x2c86, 0x2c86}, {0x2c88, 0x2c88}, {0x2c8a, 0x2c8a}, {0x2c8c, 0x2c8c}, {0x2c8e, 0x2c8e}, {0x2c90, 0x2c90}, {0x2c92, 0x2c92}, {0x2c94, 0x2c94},
  {0x2c96, 0x2c96}, {0x2c98, 0x2c98}, {0x2c9a, 0x2c9a}, {0x2c9c, 0x2c9c}, {0x2c9e, 0x2c9e}, {0x2ca0, 0x2ca0}, {0x2ca2, 0x2ca2}, {0x2ca4, 0x2ca4},
  {0x2ca6, 0x2ca6}, {0x2ca8, 0x2ca8}, {0x2caa, 0x2caa}, {0x2cac, 0x2cac}, {0x2cae, 0x2cae}, {0x2cb0, 0x2cb0}, {0x2cb2, 0x2cb2}, {0x2cb4, 0x2cb4},
  {0x2cb6, 0x2cb6}, {0x2cb8, 0x2cb8}, {0x2cba, 0x2cba}, {0x2cbc, 0x2cbc}, {0x2cbe, 0x2cbe}, {0x2cc0, 0x2cc0}, {0x2cc2, 0x2cc2}, {0x2cc4, 0x2cc4},
  {0x2cc6, 0x2cc6}, {0x2cc8, 0x2cc8}, {0x2cca, 0x2cca}, {0x2ccc, 0x2ccc}, {0x2cce, 0x2cce}, {0x2cd0, 0x2cd0}, {0x2cd2, 0x2cd2}, {0x2cd4, 0x2cd4},
  {0x2cd6, 0x2cd6}, {0x2cd8, 0x2cd8}, {0x2cda, 0x2cda}, {0x2cdc, 0x2cdc}, {0x2cde, 0x2cde}, {0x2ce0, 0x2ce0}, {0x2ce2, 0x2ce2}, {0x2ceb, 0x2ceb},
  {0x2ced, 0x2ced}, {0x2cf2, 0x2cf2}, {0xa640, 0xa640}, {0xa642, 0xa642}, {0xa644, 0xa644}, {0xa646, 0xa646}, {0xa648, 0xa648}, {0xa64a, 0xa64a},
  {0xa64c, 0xa64c}, {0xa64e, 0xa64e}, {0xa650, 0xa650}, {0xa652, 0xa652}, {0xa654, 0xa654}, {0xa656, 0xa656}, {0xa658, 0xa658}, {0xa65a, 0xa65a},
  {0xa65c, 0xa65c}, {0xa65e, 0xa65e}, {0xa660, 0xa660}, {0xa662, 0xa662}, {0xa664, 0xa664}, {0xa666, 0xa666}, {0xa668, 0xa668}, {0xa66a, 0xa66a},
  {0xa66c, 0xa66c}, {0xa680, 0xa680}, {0xa682, 0xa682}, {0xa684, 0xa684}, {0xa686, 0xa686}, {0xa688, 0xa688}, {0xa68a, 0xa68a}, {0xa68c, 0xa68c},
  {0xa68e, 0xa68e}, {0xa690, 0xa690}, {0xa692, 0xa692}, {0xa694, 0xa694}, {0xa696, 0xa696}, {0xa698, 0xa698}, {0xa69a, 0xa69a}, {0xa722, 0xa722},
  {0xa724, 0xa724}, {0xa726, 0xa726}, {0xa728, 0xa728}, {0xa72a, 0xa72a}, {0xa72c, 0xa72c}, {0xa72e, 0xa72e}, {0xa732, 0xa732}, {0xa734, 0xa734},
  {0xa736, 0xa736}, {0xa738, 0xa738}, {0xa73a, 0xa73a}, {0xa73c, 0xa73c}, {0xa73e, 0xa73e}, {0xa740, 0xa740}, {0xa742, 0xa742}, {0xa744, 0xa744},
  {0xa746, 0xa746}, {0xa748, 0xa748}, {0xa74a, 0xa74a}, {0xa74c, 0xa74c}, {0xa74e, 0xa74e}, {0xa750, 0xa750}, {0xa752, 0xa752}, {0xa754, 0xa754},
  {0xa756, 0xa756}, {0xa758, 0xa758}, {0xa75a, 0xa75a}, {0xa75c, 0xa75c}, {0xa75e, 0xa75e}, {0xa760, 0xa760}, {0xa762, 0xa762}, {0xa764, 0xa764},
  {0xa766, 0xa766}, {0xa768, 0xa768}, {0xa76a, 0xa76a}, {0xa76c, 0xa76c}, {0xa76e, 0xa76e}, {0xa779, 0xa779}, {0xa77b, 0xa77b}, {0xa77d, 0xa77e},
  {0xa780, 0xa780}, {0xa782, 0xa782}, {0xa784, 0xa784}, {0xa786, 0xa786}, {0xa78b, 0xa78b}, {0xa78d, 0xa78d}, {0xa790, 0xa790}, {0xa792, 0xa792},
  {0xa796, 0xa796}, {0xa798, 0xa798}, {0xa79a, 0xa79a}, {0xa79c, 0xa79c}, {0xa79e, 0xa79e}, {0xa7a0, 0xa7a0}, {0xa7a2, 0xa7a2}, {0xa7a4, 0xa7a4},
  {0xa7a6, 0xa7a6}, {0xa7a8, 0xa7a8}, {0xa7aa, 0xa7ae}, {0xa7b0, 0xa7b4}, {0xa7b6, 0xa7b6}, {0xa7b8, 0xa7b8}, {0xa7ba, 0xa7ba}, {0xa7bc, 0xa7bc},
  {0xa7be, 0xa7be}, {0xa7c0, 0xa7c0}, {0xa7c2, 0xa7c2}, {0xa7c4, 0xa7c7}, {0xa7c9, 0xa7c9}, {0xa7d0, 0xa7d0}, {0xa7d6, 0xa7d6}, {0xa7d8, 0xa7d8},
  {0xa7f5, 0xa7f5}, {0xff21, 0xff3a}, {0x10400, 0x10427}, {0x104b0, 0x104d3}, {0x10570, 0x1057a}, {0x1057c, 0x1058a}, {0x1058c, 0x10592}, {0x10594, 0x10595},
};

static TSCharacterRange sym_character_character_set_5[] = {
  {'\n', '\n'}, {' ', ' '}, {'#', '#'}, {'\'', '('}, {'.', '.'}, {'0', '9'}, {'A', 'Z'}, {'^', '^'},
  {0xc0, 0xd6}, {0xd8, 0xde}, {0x100, 0x100}, {0x102, 0x102}, {0x104, 0x104}, {0x106, 0x106}, {0x108, 0x108}, {0x10a, 0x10a},
  {0x10c, 0x10c}, {0x10e, 0x10e}, {0x110, 0x110}, {0x112, 0x112}, {0x114, 0x114}, {0x116, 0x116}, {0x118, 0x118}, {0x11a, 0x11a},
  {0x11c, 0x11c}, {0x11e, 0x11e}, {0x120, 0x120}, {0x122, 0x122}, {0x124, 0x124}, {0x126, 0x126}, {0x128, 0x128}, {0x12a, 0x12a},
  {0x12c, 0x12c}, {0x12e, 0x12e}, {0x130, 0x130}, {0x132, 0x132}, {0x134, 0x134}, {0x136, 0x136}, {0x139, 0x139}, {0x13b, 0x13b},
  {0x13d, 0x13d}, {0x13f, 0x13f}, {0x141, 0x141}, {0x143, 0x143}, {0x145, 0x145}, {0x147, 0x147}, {0x14a, 0x14a}, {0x14c, 0x14c},
  {0x14e, 0x14e}, {0x150, 0x150}, {0x152, 0x152}, {0x154, 0x154}, {0x156, 0x156}, {0x158, 0x158}, {0x15a, 0x15a}, {0x15c, 0x15c},
  {0x15e, 0x15e}, {0x160, 0x160}, {0x162, 0x162}, {0x164, 0x164}, {0x166, 0x166}, {0x168, 0x168}, {0x16a, 0x16a}, {0x16c, 0x16c},
  {0x16e, 0x16e}, {0x170, 0x170}, {0x172, 0x172}, {0x174, 0x174}, {0x176, 0x176}, {0x178, 0x179}, {0x17b, 0x17b}, {0x17d, 0x17d},
  {0x181, 0x182}, {0x184, 0x184}, {0x186, 0x187}, {0x189, 0x18b}, {0x18e, 0x191}, {0x193, 0x194}, {0x196, 0x198}, {0x19c, 0x19d},
  {0x19f, 0x1a0}, {0x1a2, 0x1a2}, {0x1a4, 0x1a4}, {0x1a6, 0x1a7}, {0x1a9, 0x1a9}, {0x1ac, 0x1ac}, {0x1ae, 0x1af}, {0x1b1, 0x1b3},
  {0x1b5, 0x1b5}, {0x1b7, 0x1b8}, {0x1bc, 0x1bc}, {0x1c4, 0x1c4}, {0x1c7, 0x1c7}, {0x1ca, 0x1ca}, {0x1cd, 0x1cd}, {0x1cf, 0x1cf},
  {0x1d1, 0x1d1}, {0x1d3, 0x1d3}, {0x1d5, 0x1d5}, {0x1d7, 0x1d7}, {0x1d9, 0x1d9}, {0x1db, 0x1db}, {0x1de, 0x1de}, {0x1e0, 0x1e0},
  {0x1e2, 0x1e2}, {0x1e4, 0x1e4}, {0x1e6, 0x1e6}, {0x1e8, 0x1e8}, {0x1ea, 0x1ea}, {0x1ec, 0x1ec}, {0x1ee, 0x1ee}, {0x1f1, 0x1f1},
  {0x1f4, 0x1f4}, {0x1f6, 0x1f8}, {0x1fa, 0x1fa}, {0x1fc, 0x1fc}, {0x1fe, 0x1fe}, {0x200, 0x200}, {0x202, 0x202}, {0x204, 0x204},
  {0x206, 0x206}, {0x208, 0x208}, {0x20a, 0x20a}, {0x20c, 0x20c}, {0x20e, 0x20e}, {0x210, 0x210}, {0x212, 0x212}, {0x214, 0x214},
  {0x216, 0x216}, {0x218, 0x218}, {0x21a, 0x21a}, {0x21c, 0x21c}, {0x21e, 0x21e}, {0x220, 0x220}, {0x222, 0x222}, {0x224, 0x224},
  {0x226, 0x226}, {0x228, 0x228}, {0x22a, 0x22a}, {0x22c, 0x22c}, {0x22e, 0x22e}, {0x230, 0x230}, {0x232, 0x232}, {0x23a, 0x23b},
  {0x23d, 0x23e}, {0x241, 0x241}, {0x243, 0x246}, {0x248, 0x248}, {0x24a, 0x24a}, {0x24c, 0x24c}, {0x24e, 0x24e}, {0x370, 0x370},
  {0x372, 0x372}, {0x376, 0x376}, {0x37f, 0x37f}, {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x38f}, {0x391, 0x3a1},
  {0x3a3, 0x3ab}, {0x3cf, 0x3cf}, {0x3d2, 0x3d4}, {0x3d8, 0x3d8}, {0x3da, 0x3da}, {0x3dc, 0x3dc}, {0x3de, 0x3de}, {0x3e0, 0x3e0},
  {0x3e2, 0x3e2}, {0x3e4, 0x3e4}, {0x3e6, 0x3e6}, {0x3e8, 0x3e8}, {0x3ea, 0x3ea}, {0x3ec, 0x3ec}, {0x3ee, 0x3ee}, {0x3f4, 0x3f4},
  {0x3f7, 0x3f7}, {0x3f9, 0x3fa}, {0x3fd, 0x42f}, {0x460, 0x460}, {0x462, 0x462}, {0x464, 0x464}, {0x466, 0x466}, {0x468, 0x468},
  {0x46a, 0x46a}, {0x46c, 0x46c}, {0x46e, 0x46e}, {0x470, 0x470}, {0x472, 0x472}, {0x474, 0x474}, {0x476, 0x476}, {0x478, 0x478},
  {0x47a, 0x47a}, {0x47c, 0x47c}, {0x47e, 0x47e}, {0x480, 0x480}, {0x48a, 0x48a}, {0x48c, 0x48c}, {0x48e, 0x48e}, {0x490, 0x490},
  {0x492, 0x492}, {0x494, 0x494}, {0x496, 0x496}, {0x498, 0x498}, {0x49a, 0x49a}, {0x49c, 0x49c}, {0x49e, 0x49e}, {0x4a0, 0x4a0},
  {0x4a2, 0x4a2}, {0x4a4, 0x4a4}, {0x4a6, 0x4a6}, {0x4a8, 0x4a8}, {0x4aa, 0x4aa}, {0x4ac, 0x4ac}, {0x4ae, 0x4ae}, {0x4b0, 0x4b0},
  {0x4b2, 0x4b2}, {0x4b4, 0x4b4}, {0x4b6, 0x4b6}, {0x4b8, 0x4b8}, {0x4ba, 0x4ba}, {0x4bc, 0x4bc}, {0x4be, 0x4be}, {0x4c0, 0x4c1},
  {0x4c3, 0x4c3}, {0x4c5, 0x4c5}, {0x4c7, 0x4c7}, {0x4c9, 0x4c9}, {0x4cb, 0x4cb}, {0x4cd, 0x4cd}, {0x4d0, 0x4d0}, {0x4d2, 0x4d2},
  {0x4d4, 0x4d4}, {0x4d6, 0x4d6}, {0x4d8, 0x4d8}, {0x4da, 0x4da}, {0x4dc, 0x4dc}, {0x4de, 0x4de}, {0x4e0, 0x4e0}, {0x4e2, 0x4e2},
  {0x4e4, 0x4e4}, {0x4e6, 0x4e6}, {0x4e8, 0x4e8}, {0x4ea, 0x4ea}, {0x4ec, 0x4ec}, {0x4ee, 0x4ee}, {0x4f0, 0x4f0}, {0x4f2, 0x4f2},
  {0x4f4, 0x4f4}, {0x4f6, 0x4f6}, {0x4f8, 0x4f8}, {0x4fa, 0x4fa}, {0x4fc, 0x4fc}, {0x4fe, 0x4fe}, {0x500, 0x500}, {0x502, 0x502},
  {0x504, 0x504}, {0x506, 0x506}, {0x508, 0x508}, {0x50a, 0x50a}, {0x50c, 0x50c}, {0x50e, 0x50e}, {0x510, 0x510}, {0x512, 0x512},
  {0x514, 0x514}, {0x516, 0x516}, {0x518, 0x518}, {0x51a, 0x51a}, {0x51c, 0x51c}, {0x51e, 0x51e}, {0x520, 0x520}, {0x522, 0x522},
  {0x524, 0x524}, {0x526, 0x526}, {0x528, 0x528}, {0x52a, 0x52a}, {0x52c, 0x52c}, {0x52e, 0x52e}, {0x531, 0x556}, {0x10a0, 0x10c5},
  {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x13a0, 0x13f5}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1e00, 0x1e00}, {0x1e02, 0x1e02}, {0x1e04, 0x1e04},
  {0x1e06, 0x1e06}, {0x1e08, 0x1e08}, {0x1e0a, 0x1e0a}, {0x1e0c, 0x1e0c}, {0x1e0e, 0x1e0e}, {0x1e10, 0x1e10}, {0x1e12, 0x1e12}, {0x1e14, 0x1e14},
  {0x1e16, 0x1e16}, {0x1e18, 0x1e18}, {0x1e1a, 0x1e1a}, {0x1e1c, 0x1e1c}, {0x1e1e, 0x1e1e}, {0x1e20, 0x1e20}, {0x1e22, 0x1e22}, {0x1e24, 0x1e24},
  {0x1e26, 0x1e26}, {0x1e28, 0x1e28}, {0x1e2a, 0x1e2a}, {0x1e2c, 0x1e2c}, {0x1e2e, 0x1e2e}, {0x1e30, 0x1e30}, {0x1e32, 0x1e32}, {0x1e34, 0x1e34},
  {0x1e36, 0x1e36}, {0x1e38, 0x1e38}, {0x1e3a, 0x1e3a}, {0x1e3c, 0x1e3c}, {0x1e3e, 0x1e3e}, {0x1e40, 0x1e40}, {0x1e42, 0x1e42}, {0x1e44, 0x1e44},
  {0x1e46, 0x1e46}, {0x1e48, 0x1e48}, {0x1e4a, 0x1e4a}, {0x1e4c, 0x1e4c}, {0x1e4e, 0x1e4e}, {0x1e50, 0x1e50}, {0x1e52, 0x1e52}, {0x1e54, 0x1e54},
  {0x1e56, 0x1e56}, {0x1e58, 0x1e58}, {0x1e5a, 0x1e5a}, {0x1e5c, 0x1e5c}, {0x1e5e, 0x1e5e}, {0x1e60, 0x1e60}, {0x1e62, 0x1e62}, {0x1e64, 0x1e64},
  {0x1e66, 0x1e66}, {0x1e68, 0x1e68}, {0x1e6a, 0x1e6a}, {0x1e6c, 0x1e6c}, {0x1e6e, 0x1e6e}, {0x1e70, 0x1e70}, {0x1e72, 0x1e72}, {0x1e74, 0x1e74},
  {0x1e76, 0x1e76}, {0x1e78, 0x1e78}, {0x1e7a, 0x1e7a}, {0x1e7c, 0x1e7c}, {0x1e7e, 0x1e7e}, {0x1e80, 0x1e80}, {0x1e82, 0x1e82}, {0x1e84, 0x1e84},
  {0x1e86, 0x1e86}, {0x1e88, 0x1e88}, {0x1e8a, 0x1e8a}, {0x1e8c, 0x1e8c}, {0x1e8e, 0x1e8e}, {0x1e90, 0x1e90}, {0x1e92, 0x1e92}, {0x1e94, 0x1e94},
  {0x1e9e, 0x1e9e}, {0x1ea0, 0x1ea0}, {0x1ea2, 0x1ea2}, {0x1ea4, 0x1ea4}, {0x1ea6, 0x1ea6}, {0x1ea8, 0x1ea8}, {0x1eaa, 0x1eaa}, {0x1eac, 0x1eac},
  {0x1eae, 0x1eae}, {0x1eb0, 0x1eb0}, {0x1eb2, 0x1eb2}, {0x1eb4, 0x1eb4}, {0x1eb6, 0x1eb6}, {0x1eb8, 0x1eb8}, {0x1eba, 0x1eba}, {0x1ebc, 0x1ebc},
  {0x1ebe, 0x1ebe}, {0x1ec0, 0x1ec0}, {0x1ec2, 0x1ec2}, {0x1ec4, 0x1ec4}, {0x1ec6, 0x1ec6}, {0x1ec8, 0x1ec8}, {0x1eca, 0x1eca}, {0x1ecc, 0x1ecc},
  {0x1ece, 0x1ece}, {0x1ed0, 0x1ed0}, {0x1ed2, 0x1ed2}, {0x1ed4, 0x1ed4}, {0x1ed6, 0x1ed6}, {0x1ed8, 0x1ed8}, {0x1eda, 0x1eda}, {0x1edc, 0x1edc},
  {0x1ede, 0x1ede}, {0x1ee0, 0x1ee0}, {0x1ee2, 0x1ee2}, {0x1ee4, 0x1ee4}, {0x1ee6, 0x1ee6}, {0x1ee8, 0x1ee8}, {0x1eea, 0x1eea}, {0x1eec, 0x1eec},
  {0x1eee, 0x1eee}, {0x1ef0, 0x1ef0}, {0x1ef2, 0x1ef2}, {0x1ef4, 0x1ef4}, {0x1ef6, 0x1ef6}, {0x1ef8, 0x1ef8}, {0x1efa, 0x1efa}, {0x1efc, 0x1efc},
  {0x1efe, 0x1efe}, {0x1f08, 0x1f0f}, {0x1f18, 0x1f1d}, {0x1f28, 0x1f2f}, {0x1f38, 0x1f3f}, {0x1f48, 0x1f4d}, {0x1f59, 0x1f59}, {0x1f5b, 0x1f5b},
  {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f5f}, {0x1f68, 0x1f6f}, {0x1fb8, 0x1fbb}, {0x1fc8, 0x1fcb}, {0x1fd8, 0x1fdb}, {0x1fe8, 0x1fec}, {0x1ff8, 0x1ffb},
  {0x2102, 0x2102}, {0x2107, 0x2107}, {0x210b, 0x210d}, {0x2110, 0x2112}, {0x2115, 0x2115}, {0x2119, 0x211d}, {0x2124, 0x2124}, {0x2126, 0x2126},
  {0x2128, 0x2128}, {0x212a, 0x212d}, {0x2130, 0x2133}, {0x213e, 0x213f}, {0x2145, 0x2145}, {0x2183, 0x2183}, {0x2c00, 0x2c2f}, {0x2c60, 0x2c60},
  {0x2c62, 0x2c64}, {0x2c67, 0x2c67}, {0x2c69, 0x2c69}, {0x2c6b, 0x2c6b}, {0x2c6d, 0x2c70}, {0x2c72, 0x2c72}, {0x2c75, 0x2c75}, {0x2c7e, 0x2c80},
  {0x2c82, 0x2c82}, {0x2c84, 0x2c84}, {0x2c86, 0x2c86}, {0x2c88, 0x2c88}, {0x2c8a, 0x2c8a}, {0x2c8c, 0x2c8c}, {0x2c8e, 0x2c8e}, {0x2c90, 0x2c90},
  {0x2c92, 0x2c92}, {0x2c94, 0x2c94}, {0x2c96, 0x2c96}, {0x2c98, 0x2c98}, {0x2c9a, 0x2c9a}, {0x2c9c, 0x2c9c}, {0x2c9e, 0x2c9e}, {0x2ca0, 0x2ca0},
  {0x2ca2, 0x2ca2}, {0x2ca4, 0x2ca4}, {0x2ca6, 0x2ca6}, {0x2ca8, 0x2ca8}, {0x2caa, 0x2caa}, {0x2cac, 0x2cac}, {0x2cae, 0x2cae}, {0x2cb0, 0x2cb0},
  {0x2cb2, 0x2cb2}, {0x2cb4, 0x2cb4}, {0x2cb6, 0x2cb6}, {0x2cb8, 0x2cb8}, {0x2cba, 0x2cba}, {0x2cbc, 0x2cbc}, {0x2cbe, 0x2cbe}, {0x2cc0, 0x2cc0},
  {0x2cc2, 0x2cc2}, {0x2cc4, 0x2cc4}, {0x2cc6, 0x2cc6}, {0x2cc8, 0x2cc8}, {0x2cca, 0x2cca}, {0x2ccc, 0x2ccc}, {0x2cce, 0x2cce}, {0x2cd0, 0x2cd0},
  {0x2cd2, 0x2cd2}, {0x2cd4, 0x2cd4}, {0x2cd6, 0x2cd6}, {0x2cd8, 0x2cd8}, {0x2cda, 0x2cda}, {0x2cdc, 0x2cdc}, {0x2cde, 0x2cde}, {0x2ce0, 0x2ce0},
  {0x2ce2, 0x2ce2}, {0x2ceb, 0x2ceb}, {0x2ced, 0x2ced}, {0x2cf2, 0x2cf2}, {0xa640, 0xa640}, {0xa642, 0xa642}, {0xa644, 0xa644}, {0xa646, 0xa646},
  {0xa648, 0xa648}, {0xa64a, 0xa64a}, {0xa64c, 0xa64c}, {0xa64e, 0xa64e}, {0xa650, 0xa650}, {0xa652, 0xa652}, {0xa654, 0xa654}, {0xa656, 0xa656},
  {0xa658, 0xa658}, {0xa65a, 0xa65a}, {0xa65c, 0xa65c}, {0xa65e, 0xa65e}, {0xa660, 0xa660}, {0xa662, 0xa662}, {0xa664, 0xa664}, {0xa666, 0xa666},
  {0xa668, 0xa668}, {0xa66a, 0xa66a}, {0xa66c, 0xa66c}, {0xa680, 0xa680}, {0xa682, 0xa682}, {0xa684, 0xa684}, {0xa686, 0xa686}, {0xa688, 0xa688},
  {0xa68a, 0xa68a}, {0xa68c, 0xa68c}, {0xa68e, 0xa68e}, {0xa690, 0xa690}, {0xa692, 0xa692}, {0xa694, 0xa694}, {0xa696, 0xa696}, {0xa698, 0xa698},
  {0xa69a, 0xa69a}, {0xa722, 0xa722}, {0xa724, 0xa724}, {0xa726, 0xa726}, {0xa728, 0xa728}, {0xa72a, 0xa72a}, {0xa72c, 0xa72c}, {0xa72e, 0xa72e},
  {0xa732, 0xa732}, {0xa734, 0xa734}, {0xa736, 0xa736}, {0xa738, 0xa738}, {0xa73a, 0xa73a}, {0xa73c, 0xa73c}, {0xa73e, 0xa73e}, {0xa740, 0xa740},
  {0xa742, 0xa742}, {0xa744, 0xa744}, {0xa746, 0xa746}, {0xa748, 0xa748}, {0xa74a, 0xa74a}, {0xa74c, 0xa74c}, {0xa74e, 0xa74e}, {0xa750, 0xa750},
  {0xa752, 0xa752}, {0xa754, 0xa754}, {0xa756, 0xa756}, {0xa758, 0xa758}, {0xa75a, 0xa75a}, {0xa75c, 0xa75c}, {0xa75e, 0xa75e}, {0xa760, 0xa760},
  {0xa762, 0xa762}, {0xa764, 0xa764}, {0xa766, 0xa766}, {0xa768, 0xa768}, {0xa76a, 0xa76a}, {0xa76c, 0xa76c}, {0xa76e, 0xa76e}, {0xa779, 0xa779},
  {0xa77b, 0xa77b}, {0xa77d, 0xa77e}, {0xa780, 0xa780}, {0xa782, 0xa782}, {0xa784, 0xa784}, {0xa786, 0xa786}, {0xa78b, 0xa78b}, {0xa78d, 0xa78d},
  {0xa790, 0xa790}, {0xa792, 0xa792}, {0xa796, 0xa796}, {0xa798, 0xa798}, {0xa79a, 0xa79a}, {0xa79c, 0xa79c}, {0xa79e, 0xa79e}, {0xa7a0, 0xa7a0},
  {0xa7a2, 0xa7a2}, {0xa7a4, 0xa7a4}, {0xa7a6, 0xa7a6}, {0xa7a8, 0xa7a8}, {0xa7aa, 0xa7ae}, {0xa7b0, 0xa7b4}, {0xa7b6, 0xa7b6}, {0xa7b8, 0xa7b8},
  {0xa7ba, 0xa7ba}, {0xa7bc, 0xa7bc}, {0xa7be, 0xa7be}, {0xa7c0, 0xa7c0}, {0xa7c2, 0xa7c2}, {0xa7c4, 0xa7c7}, {0xa7c9, 0xa7c9}, {0xa7d0, 0xa7d0},
  {0xa7d6, 0xa7d6}, {0xa7d8, 0xa7d8}, {0xa7f5, 0xa7f5}, {0xff21, 0xff3a}, {0x10400, 0x10427}, {0x104b0, 0x104d3}, {0x10570, 0x1057a}, {0x1057c, 0x1058a},
  {0x1058c, 0x10592}, {0x10594, 0x10595},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(90);
      ADVANCE_MAP(
        ' ', 53,
        '!', 82,
        '#', 68,
        '(', 69,
        '.', 86,
        '/', 70,
        '=', 77,
        '>', 83,
        'E', 59,
        'I', 64,
        '[', 79,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(91);
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == ' ') ADVANCE(54);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(91);
      if (lookahead == ' ') ADVANCE(54);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(92);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '.') ADVANCE(34);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(122);
      if (lookahead == ')') ADVANCE(5);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(122);
      if (lookahead == ')') ADVANCE(6);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(106);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(133);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(127);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(128);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == 'T') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == ':') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == 'T') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == ':') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == 'O') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '.') ADVANCE(34);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == 'T') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '.') ADVANCE(34);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == ':') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '.') ADVANCE(34);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == ' ') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '.') ADVANCE(34);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == 'E') ADVANCE(33);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '.') ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == 'E') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '.') ADVANCE(34);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == 'T') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '.') ADVANCE(34);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == 'X') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '.') ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '.') ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '.') ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(134);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(126);
      END_STATE();
    case 38:
      ADVANCE_MAP(
        '\n', 109,
        ' ', 176,
        '!', 302,
        '#', 137,
        '\'', 279,
        '.', 280,
        '/', 289,
        '=', 296,
        '>', 303,
        '@', 304,
        'E', 273,
        'I', 275,
        '[', 298,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(274);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      if (set_contains(sym_character_character_set_3, 616, lookahead)) ADVANCE(301);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(108);
      END_STATE();
    case 40:
      if (lookahead == '\n') SKIP(40);
      if (lookahead == ' ') ADVANCE(261);
      if (lookahead == '!') ADVANCE(302);
      if (lookahead == '=') ADVANCE(296);
      if (lookahead == '>') ADVANCE(303);
      if (lookahead == '@') ADVANCE(304);
      if (lookahead == '[') ADVANCE(298);
      if (lookahead == '\'' ||
          lookahead == '.') ADVANCE(279);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(277);
      if (set_contains(sym_character_character_set_1, 615, lookahead)) ADVANCE(301);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 41:
      ADVANCE_MAP(
        '\n', 111,
        ' ', 261,
        '!', 302,
        '=', 296,
        '>', 303,
        '@', 304,
        '[', 298,
        '\'', 279,
        '.', 279,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(277);
      if (set_contains(sym_character_character_set_1, 615, lookahead)) ADVANCE(301);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(107);
      if (lookahead == '(') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == ')') ADVANCE(6);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == '\n') SKIP(45);
      if (lookahead == '(') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(124);
      if (lookahead == '(') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '<') ADVANCE(47);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 48:
      ADVANCE_MAP(
        '\n', 110,
        ' ', 259,
        '!', 302,
        '#', 137,
        '\'', 279,
        '.', 280,
        '/', 289,
        '=', 296,
        '>', 303,
        '@', 304,
        'E', 276,
        'I', 278,
        '[', 298,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(277);
      if (set_contains(sym_character_character_set_3, 616, lookahead)) ADVANCE(301);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(14);
      END_STATE();
    case 50:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '<') ADVANCE(47);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 51:
      ADVANCE_MAP(
        ' ', 53,
        '!', 82,
        '#', 68,
        '(', 69,
        '.', 86,
        '/', 70,
        '=', 77,
        '>', 83,
        'E', 59,
        'I', 64,
        '[', 79,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(51);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 52:
      ADVANCE_MAP(
        ' ', 52,
        '!', 82,
        '#', 68,
        '(', 69,
        '.', 86,
        '/', 70,
        ':', 95,
        '=', 77,
        '>', 83,
        'E', 59,
        'I', 64,
        'T', 58,
        '[', 79,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(51);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 53:
      ADVANCE_MAP(
        ' ', 52,
        '!', 82,
        '#', 68,
        '(', 69,
        '.', 86,
        '/', 70,
        ':', 95,
        '=', 77,
        '>', 83,
        'E', 59,
        'I', 64,
        '[', 79,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(51);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 54:
      if (lookahead == ' ') ADVANCE(95);
      END_STATE();
    case 55:
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == 'T') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 56:
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == 'T') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 57:
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 58:
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == 'O') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 59:
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == 'S') ADVANCE(61);
      if (lookahead == 'X') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 60:
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == 'T') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 61:
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == 'T') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 62:
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == ':') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 63:
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == ':') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 64:
      if (lookahead == ' ') ADVANCE(55);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'N') ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(73);
      END_STATE();
    case 65:
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == ':') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 66:
      if (lookahead == ' ') ADVANCE(16);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 67:
      if (lookahead == '#') ADVANCE(87);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 68:
      if (lookahead == '#') ADVANCE(67);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 69:
      if (lookahead == ')') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 70:
      if (lookahead == '*') ADVANCE(72);
      END_STATE();
    case 71:
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == '*') ADVANCE(71);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 73:
      if (lookahead == '/') ADVANCE(78);
      END_STATE();
    case 74:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 75:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == 'E') ADVANCE(85);
      END_STATE();
    case 76:
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 77:
      if (lookahead == '=') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 78:
      if (lookahead == 'E') ADVANCE(85);
      END_STATE();
    case 79:
      if (lookahead == '[') ADVANCE(84);
      END_STATE();
    case 80:
      if (lookahead == ']') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == ']') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 82:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 83:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 84:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 85:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 86:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 87:
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(13);
      END_STATE();
    case 88:
      if (eof) ADVANCE(90);
      if (lookahead == '\n') SKIP(88);
      if (lookahead == ' ') ADVANCE(176);
      if (lookahead == '!') ADVANCE(302);
      if (lookahead == '#') ADVANCE(137);
      if (lookahead == '\'') ADVANCE(279);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '/') ADVANCE(289);
      if (lookahead == '=') ADVANCE(296);
      if (lookahead == '>') ADVANCE(303);
      if (lookahead == '@') ADVANCE(304);
      if (lookahead == 'E') ADVANCE(273);
      if (lookahead == 'I') ADVANCE(275);
      if (lookahead == '[') ADVANCE(298);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(274);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      if (set_contains(sym_character_character_set_3, 616, lookahead)) ADVANCE(301);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 89:
      if (eof) ADVANCE(90);
      if (lookahead == '\n') SKIP(89);
      if (lookahead == ' ') ADVANCE(259);
      if (lookahead == '!') ADVANCE(302);
      if (lookahead == '#') ADVANCE(137);
      if (lookahead == '\'') ADVANCE(279);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '/') ADVANCE(289);
      if (lookahead == '=') ADVANCE(296);
      if (lookahead == '>') ADVANCE(303);
      if (lookahead == '@') ADVANCE(304);
      if (lookahead == 'E') ADVANCE(276);
      if (lookahead == 'I') ADVANCE(278);
      if (lookahead == '[') ADVANCE(298);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(277);
      if (set_contains(sym_character_character_set_3, 616, lookahead)) ADVANCE(301);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\t') ADVANCE(91);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\t') ADVANCE(92);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == 'E') ADVANCE(96);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == 'E') ADVANCE(99);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == 'T') ADVANCE(101);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == 'X') ADVANCE(98);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '.') ADVANCE(100);
      if (lookahead == '/') ADVANCE(97);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '.') ADVANCE(100);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__title_element);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_scene_token1);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '.') ADVANCE(34);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_scene_token2);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(107);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(42);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__noncharacter_token1);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__noncharacter_token1);
      if (lookahead == ' ') ADVANCE(176);
      if (lookahead == '\'') ADVANCE(279);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == 'E') ADVANCE(273);
      if (lookahead == 'I') ADVANCE(275);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(283);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(274);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__noncharacter_token1);
      if (lookahead == ' ') ADVANCE(259);
      if (lookahead == '\'') ADVANCE(279);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == 'E') ADVANCE(276);
      if (lookahead == 'I') ADVANCE(278);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(277);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__noncharacter_token1);
      if (lookahead == ' ') ADVANCE(261);
      if (lookahead == '\'' ||
          lookahead == '.') ADVANCE(279);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(277);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == '\n') ADVANCE(106);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == '\n') ADVANCE(133);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '.') ADVANCE(34);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == ' ') ADVANCE(176);
      if (lookahead == '\'') ADVANCE(279);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '@') ADVANCE(304);
      if (lookahead == 'E') ADVANCE(273);
      if (lookahead == 'I') ADVANCE(275);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(274);
      if (set_contains(sym_character_character_set_1, 615, lookahead)) ADVANCE(301);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == '\n') ADVANCE(108);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == ' ') ADVANCE(261);
      if (lookahead == '@') ADVANCE(304);
      if (lookahead == '\'' ||
          lookahead == '.') ADVANCE(279);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(277);
      if (set_contains(sym_character_character_set_1, 615, lookahead)) ADVANCE(301);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead == ' ') ADVANCE(259);
      if (lookahead == '\'') ADVANCE(279);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '@') ADVANCE(304);
      if (lookahead == 'E') ADVANCE(276);
      if (lookahead == 'I') ADVANCE(278);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(277);
      if (set_contains(sym_character_character_set_1, 615, lookahead)) ADVANCE(301);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_speech_token1);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_speech_token1);
      if (lookahead == '(') ADVANCE(43);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(44);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_action_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_transition_token1);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_transition_token2);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_transition_token2);
      if (lookahead == '\n') ADVANCE(127);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_break);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_synopse);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_section1_token1);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_section2_token1);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_section3_token1);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_note);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_boneyard_token1);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '*') ADVANCE(138);
      if (lookahead != 0) ADVANCE(139);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_boneyard_token1);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == '#') ADVANCE(271);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '*') ADVANCE(138);
      if (lookahead == '/') ADVANCE(135);
      if (lookahead != 0) ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '*') ADVANCE(138);
      if (lookahead != 0) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == ')') ADVANCE(218);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == ')') ADVANCE(267);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '=') ADVANCE(151);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == ')') ADVANCE(220);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead != 0) ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(133);
      if (lookahead == ')') ADVANCE(222);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(133);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(133);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == ')') ADVANCE(255);
      if (lookahead == '.') ADVANCE(160);
      if (lookahead != 0) ADVANCE(160);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == ')') ADVANCE(253);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == 'E') ADVANCE(158);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == ')') ADVANCE(253);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == 'T') ADVANCE(155);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == ')') ADVANCE(253);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == 'X') ADVANCE(157);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == ')') ADVANCE(253);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == ')') ADVANCE(253);
      if (lookahead == '.') ADVANCE(159);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '.') ADVANCE(159);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '.') ADVANCE(159);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == 'E') ADVANCE(168);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == 'T') ADVANCE(164);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == 'X') ADVANCE(167);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '.') ADVANCE(169);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '.') ADVANCE(169);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == 'E') ADVANCE(168);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '.') ADVANCE(169);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '.') ADVANCE(169);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '.') ADVANCE(169);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(134);
      if (lookahead == ']') ADVANCE(175);
      if (lookahead != 0) ADVANCE(300);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 38,
        ' ', 177,
        '!', 302,
        '#', 178,
        '\'', 180,
        '.', 205,
        '/', 289,
        ':', 95,
        '=', 296,
        '>', 303,
        '@', 304,
        'E', 185,
        'I', 190,
        '[', 298,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(188);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      if (set_contains(sym_character_character_set_3, 616, lookahead)) ADVANCE(209);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 118,
        ' ', 177,
        '!', 302,
        '#', 178,
        '\'', 180,
        '(', 306,
        '.', 205,
        '/', 289,
        ':', 95,
        '=', 296,
        '>', 303,
        '@', 304,
        'E', 185,
        'I', 190,
        'T', 184,
        '[', 298,
        '^', 226,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(188);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(209);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == ' ') ADVANCE(213);
      if (lookahead == '#') ADVANCE(264);
      if (lookahead == '(') ADVANCE(142);
      if (lookahead == '^') ADVANCE(225);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(213);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == ' ') ADVANCE(180);
      if (lookahead == '(') ADVANCE(306);
      if (lookahead == '/') ADVANCE(297);
      if (lookahead == '^') ADVANCE(226);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(180);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(209);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == ' ') ADVANCE(180);
      if (lookahead == '(') ADVANCE(306);
      if (lookahead == '^') ADVANCE(226);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(180);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(209);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 119,
        ' ', 186,
        '(', 306,
        '/', 297,
        ':', 95,
        'T', 184,
        '^', 226,
        '\'', 180,
        '.', 180,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(188);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(209);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 119,
        ' ', 186,
        '(', 306,
        '/', 297,
        ':', 95,
        'T', 192,
        '^', 226,
        '\'', 180,
        '.', 180,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(188);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(209);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 119,
        ' ', 186,
        '(', 306,
        '/', 297,
        ':', 95,
        '^', 226,
        '\'', 180,
        '.', 180,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(188);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(209);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 119,
        ' ', 186,
        '(', 306,
        ':', 95,
        'O', 189,
        '^', 226,
        '\'', 180,
        '.', 180,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(188);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(209);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 119,
        ' ', 186,
        '(', 306,
        ':', 95,
        'S', 187,
        'X', 187,
        '^', 226,
        '\'', 180,
        '.', 180,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(188);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(209);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 119,
        ' ', 186,
        '(', 306,
        ':', 95,
        'T', 184,
        '^', 226,
        '\'', 180,
        '.', 180,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(188);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(209);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 119,
        ' ', 186,
        '(', 306,
        ':', 95,
        'T', 191,
        '^', 226,
        '\'', 180,
        '.', 180,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(188);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(209);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == ' ') ADVANCE(186);
      if (lookahead == '(') ADVANCE(306);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == '^') ADVANCE(226);
      if (lookahead == '\'' ||
          lookahead == '.') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(188);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(209);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == ' ') ADVANCE(186);
      if (lookahead == '(') ADVANCE(306);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == '^') ADVANCE(226);
      if (lookahead == '\'' ||
          lookahead == '.') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(188);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(209);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 119,
        ' ', 181,
        '(', 293,
        '/', 291,
        ':', 93,
        'N', 182,
        '^', 224,
        '\'', 179,
        '.', 179,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(183);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(208);
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == '(') ADVANCE(163);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '^') ADVANCE(258);
      if (lookahead == '\'' ||
          lookahead == '.') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(235);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(244);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 119,
        ' ', 232,
        '(', 162,
        '/', 171,
        ':', 102,
        '^', 257,
        '\'', 237,
        '.', 237,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(233);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(243);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 119,
        ' ', 199,
        '(', 306,
        '/', 297,
        'T', 197,
        '^', 226,
        '\'', 180,
        '.', 180,
      );
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(201);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(209);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 119,
        ' ', 199,
        '(', 306,
        '/', 297,
        'T', 204,
        '^', 226,
        '\'', 180,
        '.', 180,
      );
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(201);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(209);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == ' ') ADVANCE(199);
      if (lookahead == '(') ADVANCE(306);
      if (lookahead == '/') ADVANCE(297);
      if (lookahead == '^') ADVANCE(226);
      if (lookahead == '\'' ||
          lookahead == '.') ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(201);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(209);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == ' ') ADVANCE(199);
      if (lookahead == '(') ADVANCE(306);
      if (lookahead == ':') ADVANCE(282);
      if (lookahead == '^') ADVANCE(226);
      if (lookahead == '\'' ||
          lookahead == '.') ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(201);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(209);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == ' ') ADVANCE(199);
      if (lookahead == '(') ADVANCE(306);
      if (lookahead == 'O') ADVANCE(196);
      if (lookahead == '^') ADVANCE(226);
      if (lookahead == '\'' ||
          lookahead == '.') ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(201);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(209);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 119,
        ' ', 199,
        '(', 306,
        'S', 200,
        'X', 200,
        '^', 226,
        '\'', 180,
        '.', 180,
      );
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(201);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(209);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == ' ') ADVANCE(199);
      if (lookahead == '(') ADVANCE(306);
      if (lookahead == 'T') ADVANCE(197);
      if (lookahead == '^') ADVANCE(226);
      if (lookahead == '\'' ||
          lookahead == '.') ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(201);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(209);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == ' ') ADVANCE(199);
      if (lookahead == '(') ADVANCE(306);
      if (lookahead == 'T') ADVANCE(203);
      if (lookahead == '^') ADVANCE(226);
      if (lookahead == '\'' ||
          lookahead == '.') ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(201);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(209);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == ' ') ADVANCE(199);
      if (lookahead == '(') ADVANCE(306);
      if (lookahead == '^') ADVANCE(226);
      if (lookahead == '\'' ||
          lookahead == '.') ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(201);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(209);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 119,
        ' ', 193,
        '(', 293,
        '/', 291,
        'N', 194,
        '^', 224,
        '\'', 179,
        '.', 179,
      );
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(195);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(208);
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == ' ') ADVANCE(251);
      if (lookahead == '(') ADVANCE(163);
      if (lookahead == '^') ADVANCE(258);
      if (lookahead == '\'' ||
          lookahead == '.') ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(244);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == ' ') ADVANCE(249);
      if (lookahead == '(') ADVANCE(162);
      if (lookahead == '/') ADVANCE(171);
      if (lookahead == '^') ADVANCE(257);
      if (lookahead == '\'' ||
          lookahead == '.') ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(250);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(243);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == ' ') ADVANCE(266);
      if (lookahead == '(') ADVANCE(145);
      if (lookahead == '^') ADVANCE(269);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(266);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(265);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == ' ') ADVANCE(207);
      if (lookahead == '(') ADVANCE(306);
      if (lookahead == '/') ADVANCE(297);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == '^') ADVANCE(226);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(209);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == ' ') ADVANCE(207);
      if (lookahead == '(') ADVANCE(306);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == '^') ADVANCE(226);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(209);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == ' ') ADVANCE(209);
      if (lookahead == '(') ADVANCE(306);
      if (lookahead == '/') ADVANCE(297);
      if (lookahead == '^') ADVANCE(226);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(209);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == ' ') ADVANCE(209);
      if (lookahead == '(') ADVANCE(306);
      if (lookahead == '^') ADVANCE(226);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(209);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == ' ') ADVANCE(210);
      if (lookahead == '(') ADVANCE(212);
      if (lookahead == '^') ADVANCE(210);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == ' ') ADVANCE(211);
      if (lookahead == '(') ADVANCE(211);
      if (lookahead == ')') ADVANCE(211);
      if (lookahead == '^') ADVANCE(211);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == ' ') ADVANCE(211);
      if (lookahead == '(') ADVANCE(211);
      if (lookahead == '^') ADVANCE(211);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == ' ') ADVANCE(213);
      if (lookahead == '(') ADVANCE(142);
      if (lookahead == '^') ADVANCE(225);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(213);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == ' ') ADVANCE(214);
      if (lookahead == '(') ADVANCE(149);
      if (lookahead == '^') ADVANCE(227);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(214);
      if (lookahead != 0) ADVANCE(150);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == ' ') ADVANCE(215);
      if (lookahead == '(') ADVANCE(153);
      if (lookahead == '^') ADVANCE(228);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(215);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == ')') ADVANCE(216);
      if (lookahead == '^') ADVANCE(217);
      if (lookahead != 0) ADVANCE(287);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == ')') ADVANCE(216);
      if (lookahead != 0) ADVANCE(287);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == ')') ADVANCE(218);
      if (lookahead == '^') ADVANCE(219);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == ')') ADVANCE(218);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == ')') ADVANCE(220);
      if (lookahead == '^') ADVANCE(221);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == ')') ADVANCE(220);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == ')') ADVANCE(222);
      if (lookahead == '^') ADVANCE(223);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == ')') ADVANCE(222);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '/') ADVANCE(297);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead != 0) ADVANCE(150);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 117,
        ' ', 230,
        '\'', 236,
        '(', 161,
        '.', 180,
        ':', 100,
        'O', 231,
        '^', 256,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(231);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(242);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 117,
        ' ', 230,
        '\'', 236,
        '(', 161,
        '.', 180,
        ':', 100,
        'T', 229,
        '^', 256,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(231);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(242);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == ' ') ADVANCE(230);
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '^') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(231);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(242);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 117,
        ' ', 230,
        '\'', 236,
        '(', 161,
        '.', 236,
        '/', 166,
        ':', 100,
        'T', 229,
        '^', 256,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(231);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(242);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 117,
        ' ', 230,
        '\'', 236,
        '(', 161,
        '.', 236,
        '/', 166,
        ':', 100,
        '^', 256,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(231);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(242);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 117,
        ' ', 230,
        '\'', 236,
        '(', 161,
        '.', 236,
        ':', 100,
        'T', 229,
        '^', 256,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(231);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(242);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == ' ') ADVANCE(230);
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '^') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(231);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(242);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == ' ') ADVANCE(236);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == '^') ADVANCE(256);
      if (lookahead == '\'' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(236);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(242);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == ' ') ADVANCE(236);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '^') ADVANCE(256);
      if (lookahead == '\'' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(236);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(242);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == ' ') ADVANCE(236);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == '^') ADVANCE(256);
      if (lookahead == '\'' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(236);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(242);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == ' ') ADVANCE(239);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == '.') ADVANCE(209);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '^') ADVANCE(256);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(239);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(242);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == ' ') ADVANCE(239);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == '.') ADVANCE(242);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '^') ADVANCE(256);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(239);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(242);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == ' ') ADVANCE(239);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == '.') ADVANCE(242);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '^') ADVANCE(256);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(239);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(242);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == ' ') ADVANCE(242);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == '.') ADVANCE(209);
      if (lookahead == '^') ADVANCE(256);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(242);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == ' ') ADVANCE(242);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == '.') ADVANCE(242);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '^') ADVANCE(256);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(242);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == ' ') ADVANCE(242);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == '.') ADVANCE(242);
      if (lookahead == '^') ADVANCE(256);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(242);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == ':') ADVANCE(169);
      if (lookahead == '^') ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(248);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(242);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == 'O') ADVANCE(245);
      if (lookahead == '^') ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(248);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(242);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == 'T') ADVANCE(246);
      if (lookahead == '^') ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(248);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(242);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == '^') ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(248);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(242);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 117,
        ' ', 247,
        '\'', 236,
        '(', 161,
        '.', 236,
        '/', 166,
        'T', 246,
        '^', 256,
      );
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(248);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(242);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '^') ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(248);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(242);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == 'T') ADVANCE(246);
      if (lookahead == '^') ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(248);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(242);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == '^') ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(248);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(242);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == ')') ADVANCE(253);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == '^') ADVANCE(254);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == ')') ADVANCE(253);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == ')') ADVANCE(253);
      if (lookahead == '.') ADVANCE(159);
      if (lookahead == '^') ADVANCE(254);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '.') ADVANCE(169);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '.') ADVANCE(169);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 48,
        ' ', 260,
        '!', 302,
        '#', 178,
        '\'', 180,
        '.', 205,
        '/', 289,
        '=', 296,
        '>', 303,
        '@', 304,
        'E', 198,
        'I', 202,
        '[', 298,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(201);
      if (set_contains(sym_character_character_set_3, 616, lookahead)) ADVANCE(209);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 121,
        ' ', 260,
        '!', 302,
        '#', 178,
        '\'', 180,
        '(', 306,
        '.', 205,
        '/', 289,
        '=', 296,
        '>', 303,
        '@', 304,
        'E', 198,
        'I', 202,
        'T', 197,
        '[', 298,
        '^', 226,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(201);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(209);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 41,
        ' ', 262,
        '!', 302,
        '#', 209,
        '=', 296,
        '>', 303,
        '@', 304,
        '[', 298,
        '\'', 180,
        '.', 180,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(201);
      if (set_contains(sym_character_character_set_3, 616, lookahead)) ADVANCE(209);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        '\n', 120,
        ' ', 262,
        '!', 302,
        '#', 209,
        '(', 306,
        '=', 296,
        '>', 303,
        '@', 304,
        'T', 197,
        '[', 298,
        '^', 226,
        '\'', 180,
        '.', 180,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(201);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(209);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '<') ADVANCE(263);
      if (lookahead != 0) ADVANCE(272);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == ' ') ADVANCE(214);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '(') ADVANCE(149);
      if (lookahead == '^') ADVANCE(227);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(214);
      if (lookahead != 0) ADVANCE(150);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == '(') ADVANCE(145);
      if (lookahead == '^') ADVANCE(269);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(265);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == ' ') ADVANCE(266);
      if (lookahead == '(') ADVANCE(145);
      if (lookahead == '^') ADVANCE(269);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(266);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(265);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == ')') ADVANCE(267);
      if (lookahead == '^') ADVANCE(268);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == ')') ADVANCE(267);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(116);
      if (lookahead == ' ') ADVANCE(215);
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '(') ADVANCE(153);
      if (lookahead == '^') ADVANCE(228);
      if (set_contains(sym_character_character_set_5, 618, lookahead)) ADVANCE(215);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '#') ADVANCE(281);
      if (lookahead != 0) ADVANCE(150);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '<') ADVANCE(263);
      if (lookahead != 0) ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == ' ') ADVANCE(186);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == 'S') ADVANCE(187);
      if (lookahead == 'X') ADVANCE(187);
      if (lookahead == '\'' ||
          lookahead == '.') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(188);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      if (set_contains(sym_character_character_set_3, 616, lookahead)) ADVANCE(209);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == ' ') ADVANCE(186);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == '\'' ||
          lookahead == '.') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(188);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      if (set_contains(sym_character_character_set_3, 616, lookahead)) ADVANCE(209);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == ' ') ADVANCE(181);
      if (lookahead == '/') ADVANCE(291);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'N') ADVANCE(182);
      if (lookahead == '\'' ||
          lookahead == '.') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(183);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      if (set_contains(sym_character_character_set_3, 616, lookahead)) ADVANCE(208);
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == ' ') ADVANCE(199);
      if (lookahead == 'S') ADVANCE(200);
      if (lookahead == 'X') ADVANCE(200);
      if (lookahead == '\'' ||
          lookahead == '.') ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(201);
      if (set_contains(sym_character_character_set_3, 616, lookahead)) ADVANCE(209);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == ' ') ADVANCE(199);
      if (lookahead == '\'' ||
          lookahead == '.') ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(201);
      if (set_contains(sym_character_character_set_3, 616, lookahead)) ADVANCE(209);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == ' ') ADVANCE(193);
      if (lookahead == '/') ADVANCE(291);
      if (lookahead == 'N') ADVANCE(194);
      if (lookahead == '\'' ||
          lookahead == '.') ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(195);
      if (set_contains(sym_character_character_set_3, 616, lookahead)) ADVANCE(208);
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(180);
      if (set_contains(sym_character_character_set_3, 616, lookahead)) ADVANCE(209);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(266);
      if (set_contains(sym_character_character_set_3, 616, lookahead)) ADVANCE(265);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '#') ADVANCE(308);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        ' ', 176,
        '!', 302,
        '#', 137,
        '\'', 279,
        '.', 280,
        '/', 289,
        '=', 296,
        '>', 303,
        '@', 304,
        'E', 273,
        'I', 275,
        '[', 298,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(274);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      if (set_contains(sym_character_character_set_3, 616, lookahead)) ADVANCE(301);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(308);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        ' ', 259,
        '!', 302,
        '#', 137,
        '\'', 279,
        '.', 280,
        '/', 289,
        '=', 296,
        '>', 303,
        '@', 304,
        'E', 276,
        'I', 278,
        '[', 298,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(277);
      if (set_contains(sym_character_character_set_3, 616, lookahead)) ADVANCE(301);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(308);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__line);
      ADVANCE_MAP(
        ' ', 261,
        '!', 302,
        '=', 296,
        '>', 303,
        '@', 304,
        '[', 298,
        '\'', 279,
        '.', 279,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(277);
      if (set_contains(sym_character_character_set_1, 615, lookahead)) ADVANCE(301);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(308);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == ')') ADVANCE(216);
      if (lookahead == 'E') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(287);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == ')') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == ')') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(160);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '*') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(308);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '/') ADVANCE(297);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(308);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '/') ADVANCE(297);
      if (lookahead == 'E') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(308);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '/') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(308);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '/') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(287);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      if (set_contains(sym_character_character_set_3, 616, lookahead)) ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(308);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(308);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '=') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == 'E') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(308);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '[') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(308);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == ']') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(300);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == ']') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__line);
      if (set_contains(sym_character_character_set_3, 616, lookahead)) ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(308);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(210);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(300);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(287);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(174);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(308);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 88},
  [2] = {.lex_state = 89},
  [3] = {.lex_state = 89},
  [4] = {.lex_state = 89},
  [5] = {.lex_state = 89},
  [6] = {.lex_state = 89},
  [7] = {.lex_state = 89},
  [8] = {.lex_state = 89},
  [9] = {.lex_state = 89},
  [10] = {.lex_state = 89},
  [11] = {.lex_state = 89},
  [12] = {.lex_state = 89},
  [13] = {.lex_state = 89},
  [14] = {.lex_state = 89},
  [15] = {.lex_state = 89},
  [16] = {.lex_state = 89},
  [17] = {.lex_state = 89},
  [18] = {.lex_state = 40},
  [19] = {.lex_state = 89},
  [20] = {.lex_state = 88},
  [21] = {.lex_state = 88},
  [22] = {.lex_state = 89},
  [23] = {.lex_state = 89},
  [24] = {.lex_state = 89},
  [25] = {.lex_state = 89},
  [26] = {.lex_state = 89},
  [27] = {.lex_state = 89},
  [28] = {.lex_state = 42},
  [29] = {.lex_state = 42},
  [30] = {.lex_state = 45},
  [31] = {.lex_state = 42},
  [32] = {.lex_state = 42},
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
    [sym_dialogue_block] = STATE(19),
    [sym__noncharacter] = STATE(17),
    [sym_action] = STATE(5),
    [sym_transition] = STATE(5),
    [sym_section1] = STATE(24),
    [sym_section2] = STATE(24),
    [sym_section3] = STATE(24),
    [sym_section] = STATE(5),
    [sym_boneyard] = STATE(5),
    [sym__element] = STATE(5),
    [aux_sym_document_repeat1] = STATE(5),
    [aux_sym_title_page_repeat1] = STATE(20),
    [aux_sym_dialogue_repeat1] = STATE(19),
    [aux_sym_action_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__title_element] = ACTIONS(5),
    [aux_sym_scene_token1] = ACTIONS(7),
    [aux_sym_scene_token2] = ACTIONS(7),
    [aux_sym__noncharacter_token1] = ACTIONS(9),
    [sym_character] = ACTIONS(11),
    [aux_sym_action_token1] = ACTIONS(9),
    [aux_sym_transition_token1] = ACTIONS(13),
    [aux_sym_transition_token2] = ACTIONS(13),
    [sym_break] = ACTIONS(15),
    [sym_synopse] = ACTIONS(15),
    [aux_sym_section1_token1] = ACTIONS(17),
    [aux_sym_section2_token1] = ACTIONS(19),
    [aux_sym_section3_token1] = ACTIONS(21),
    [sym_note] = ACTIONS(15),
    [aux_sym_boneyard_token1] = ACTIONS(23),
    [sym__line] = ACTIONS(9),
  },
  [2] = {
    [sym_scene] = STATE(2),
    [sym_dialogue] = STATE(2),
    [sym_dialogue_block] = STATE(19),
    [sym__noncharacter] = STATE(17),
    [sym_action] = STATE(2),
    [sym_transition] = STATE(2),
    [sym_section1] = STATE(24),
    [sym_section2] = STATE(24),
    [sym_section3] = STATE(24),
    [sym_section] = STATE(2),
    [sym_boneyard] = STATE(2),
    [sym__element] = STATE(2),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_dialogue_repeat1] = STATE(19),
    [aux_sym_action_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(25),
    [aux_sym_scene_token1] = ACTIONS(27),
    [aux_sym_scene_token2] = ACTIONS(27),
    [aux_sym__noncharacter_token1] = ACTIONS(30),
    [sym_character] = ACTIONS(33),
    [aux_sym_action_token1] = ACTIONS(30),
    [aux_sym_transition_token1] = ACTIONS(36),
    [aux_sym_transition_token2] = ACTIONS(36),
    [sym_break] = ACTIONS(39),
    [sym_synopse] = ACTIONS(39),
    [aux_sym_section1_token1] = ACTIONS(42),
    [aux_sym_section2_token1] = ACTIONS(45),
    [aux_sym_section3_token1] = ACTIONS(48),
    [sym_note] = ACTIONS(39),
    [aux_sym_boneyard_token1] = ACTIONS(51),
    [sym__line] = ACTIONS(30),
  },
  [3] = {
    [sym_scene] = STATE(2),
    [sym_dialogue] = STATE(2),
    [sym_dialogue_block] = STATE(19),
    [sym__noncharacter] = STATE(17),
    [sym_action] = STATE(2),
    [sym_transition] = STATE(2),
    [sym_section1] = STATE(24),
    [sym_section2] = STATE(24),
    [sym_section3] = STATE(24),
    [sym_section] = STATE(2),
    [sym_boneyard] = STATE(2),
    [sym__element] = STATE(2),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_dialogue_repeat1] = STATE(19),
    [aux_sym_action_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(54),
    [aux_sym_scene_token1] = ACTIONS(7),
    [aux_sym_scene_token2] = ACTIONS(7),
    [aux_sym__noncharacter_token1] = ACTIONS(9),
    [sym_character] = ACTIONS(11),
    [aux_sym_action_token1] = ACTIONS(9),
    [aux_sym_transition_token1] = ACTIONS(13),
    [aux_sym_transition_token2] = ACTIONS(13),
    [sym_break] = ACTIONS(56),
    [sym_synopse] = ACTIONS(56),
    [aux_sym_section1_token1] = ACTIONS(17),
    [aux_sym_section2_token1] = ACTIONS(19),
    [aux_sym_section3_token1] = ACTIONS(21),
    [sym_note] = ACTIONS(56),
    [aux_sym_boneyard_token1] = ACTIONS(23),
    [sym__line] = ACTIONS(9),
  },
  [4] = {
    [sym_scene] = STATE(3),
    [sym_dialogue] = STATE(3),
    [sym_dialogue_block] = STATE(19),
    [sym__noncharacter] = STATE(17),
    [sym_action] = STATE(3),
    [sym_transition] = STATE(3),
    [sym_section1] = STATE(24),
    [sym_section2] = STATE(24),
    [sym_section3] = STATE(24),
    [sym_section] = STATE(3),
    [sym_boneyard] = STATE(3),
    [sym__element] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_dialogue_repeat1] = STATE(19),
    [aux_sym_action_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(58),
    [aux_sym_scene_token1] = ACTIONS(7),
    [aux_sym_scene_token2] = ACTIONS(7),
    [aux_sym__noncharacter_token1] = ACTIONS(9),
    [sym_character] = ACTIONS(11),
    [aux_sym_action_token1] = ACTIONS(9),
    [aux_sym_transition_token1] = ACTIONS(13),
    [aux_sym_transition_token2] = ACTIONS(13),
    [sym_break] = ACTIONS(60),
    [sym_synopse] = ACTIONS(60),
    [aux_sym_section1_token1] = ACTIONS(17),
    [aux_sym_section2_token1] = ACTIONS(19),
    [aux_sym_section3_token1] = ACTIONS(21),
    [sym_note] = ACTIONS(60),
    [aux_sym_boneyard_token1] = ACTIONS(23),
    [sym__line] = ACTIONS(9),
  },
  [5] = {
    [sym_scene] = STATE(2),
    [sym_dialogue] = STATE(2),
    [sym_dialogue_block] = STATE(19),
    [sym__noncharacter] = STATE(17),
    [sym_action] = STATE(2),
    [sym_transition] = STATE(2),
    [sym_section1] = STATE(24),
    [sym_section2] = STATE(24),
    [sym_section3] = STATE(24),
    [sym_section] = STATE(2),
    [sym_boneyard] = STATE(2),
    [sym__element] = STATE(2),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_dialogue_repeat1] = STATE(19),
    [aux_sym_action_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(58),
    [aux_sym_scene_token1] = ACTIONS(7),
    [aux_sym_scene_token2] = ACTIONS(7),
    [aux_sym__noncharacter_token1] = ACTIONS(9),
    [sym_character] = ACTIONS(11),
    [aux_sym_action_token1] = ACTIONS(9),
    [aux_sym_transition_token1] = ACTIONS(13),
    [aux_sym_transition_token2] = ACTIONS(13),
    [sym_break] = ACTIONS(56),
    [sym_synopse] = ACTIONS(56),
    [aux_sym_section1_token1] = ACTIONS(17),
    [aux_sym_section2_token1] = ACTIONS(19),
    [aux_sym_section3_token1] = ACTIONS(21),
    [sym_note] = ACTIONS(56),
    [aux_sym_boneyard_token1] = ACTIONS(23),
    [sym__line] = ACTIONS(9),
  },
  [6] = {
    [sym_scene] = STATE(6),
    [sym_dialogue] = STATE(6),
    [sym_dialogue_block] = STATE(19),
    [sym__noncharacter] = STATE(17),
    [sym_action] = STATE(6),
    [sym_transition] = STATE(6),
    [sym_section2] = STATE(6),
    [sym_section3] = STATE(6),
    [sym_boneyard] = STATE(6),
    [sym__element] = STATE(6),
    [aux_sym_dialogue_repeat1] = STATE(19),
    [aux_sym_action_repeat1] = STATE(17),
    [aux_sym_section1_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(62),
    [aux_sym_scene_token1] = ACTIONS(64),
    [aux_sym_scene_token2] = ACTIONS(64),
    [aux_sym__noncharacter_token1] = ACTIONS(67),
    [sym_character] = ACTIONS(70),
    [aux_sym_action_token1] = ACTIONS(67),
    [aux_sym_transition_token1] = ACTIONS(73),
    [aux_sym_transition_token2] = ACTIONS(73),
    [sym_break] = ACTIONS(76),
    [sym_synopse] = ACTIONS(76),
    [aux_sym_section1_token1] = ACTIONS(79),
    [aux_sym_section2_token1] = ACTIONS(81),
    [aux_sym_section3_token1] = ACTIONS(84),
    [sym_note] = ACTIONS(76),
    [aux_sym_boneyard_token1] = ACTIONS(87),
    [sym__line] = ACTIONS(67),
  },
  [7] = {
    [sym_scene] = STATE(8),
    [sym_dialogue] = STATE(8),
    [sym_dialogue_block] = STATE(19),
    [sym__noncharacter] = STATE(17),
    [sym_action] = STATE(8),
    [sym_transition] = STATE(8),
    [sym_section2] = STATE(8),
    [sym_section3] = STATE(8),
    [sym_boneyard] = STATE(8),
    [sym__element] = STATE(8),
    [aux_sym_dialogue_repeat1] = STATE(19),
    [aux_sym_action_repeat1] = STATE(17),
    [aux_sym_section1_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(90),
    [aux_sym_scene_token1] = ACTIONS(7),
    [aux_sym_scene_token2] = ACTIONS(7),
    [aux_sym__noncharacter_token1] = ACTIONS(9),
    [sym_character] = ACTIONS(11),
    [aux_sym_action_token1] = ACTIONS(9),
    [aux_sym_transition_token1] = ACTIONS(13),
    [aux_sym_transition_token2] = ACTIONS(13),
    [sym_break] = ACTIONS(92),
    [sym_synopse] = ACTIONS(92),
    [aux_sym_section1_token1] = ACTIONS(94),
    [aux_sym_section2_token1] = ACTIONS(19),
    [aux_sym_section3_token1] = ACTIONS(21),
    [sym_note] = ACTIONS(92),
    [aux_sym_boneyard_token1] = ACTIONS(23),
    [sym__line] = ACTIONS(9),
  },
  [8] = {
    [sym_scene] = STATE(6),
    [sym_dialogue] = STATE(6),
    [sym_dialogue_block] = STATE(19),
    [sym__noncharacter] = STATE(17),
    [sym_action] = STATE(6),
    [sym_transition] = STATE(6),
    [sym_section2] = STATE(6),
    [sym_section3] = STATE(6),
    [sym_boneyard] = STATE(6),
    [sym__element] = STATE(6),
    [aux_sym_dialogue_repeat1] = STATE(19),
    [aux_sym_action_repeat1] = STATE(17),
    [aux_sym_section1_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(96),
    [aux_sym_scene_token1] = ACTIONS(7),
    [aux_sym_scene_token2] = ACTIONS(7),
    [aux_sym__noncharacter_token1] = ACTIONS(9),
    [sym_character] = ACTIONS(11),
    [aux_sym_action_token1] = ACTIONS(9),
    [aux_sym_transition_token1] = ACTIONS(13),
    [aux_sym_transition_token2] = ACTIONS(13),
    [sym_break] = ACTIONS(98),
    [sym_synopse] = ACTIONS(98),
    [aux_sym_section1_token1] = ACTIONS(100),
    [aux_sym_section2_token1] = ACTIONS(19),
    [aux_sym_section3_token1] = ACTIONS(21),
    [sym_note] = ACTIONS(98),
    [aux_sym_boneyard_token1] = ACTIONS(23),
    [sym__line] = ACTIONS(9),
  },
  [9] = {
    [sym_scene] = STATE(9),
    [sym_dialogue] = STATE(9),
    [sym_dialogue_block] = STATE(19),
    [sym__noncharacter] = STATE(17),
    [sym_action] = STATE(9),
    [sym_transition] = STATE(9),
    [sym_section3] = STATE(9),
    [sym_boneyard] = STATE(9),
    [sym__element] = STATE(9),
    [aux_sym_dialogue_repeat1] = STATE(19),
    [aux_sym_action_repeat1] = STATE(17),
    [aux_sym_section2_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(102),
    [aux_sym_scene_token1] = ACTIONS(104),
    [aux_sym_scene_token2] = ACTIONS(104),
    [aux_sym__noncharacter_token1] = ACTIONS(107),
    [sym_character] = ACTIONS(110),
    [aux_sym_action_token1] = ACTIONS(107),
    [aux_sym_transition_token1] = ACTIONS(113),
    [aux_sym_transition_token2] = ACTIONS(113),
    [sym_break] = ACTIONS(116),
    [sym_synopse] = ACTIONS(116),
    [aux_sym_section1_token1] = ACTIONS(119),
    [aux_sym_section2_token1] = ACTIONS(119),
    [aux_sym_section3_token1] = ACTIONS(121),
    [sym_note] = ACTIONS(116),
    [aux_sym_boneyard_token1] = ACTIONS(124),
    [sym__line] = ACTIONS(107),
  },
  [10] = {
    [sym_scene] = STATE(11),
    [sym_dialogue] = STATE(11),
    [sym_dialogue_block] = STATE(19),
    [sym__noncharacter] = STATE(17),
    [sym_action] = STATE(11),
    [sym_transition] = STATE(11),
    [sym_section3] = STATE(11),
    [sym_boneyard] = STATE(11),
    [sym__element] = STATE(11),
    [aux_sym_dialogue_repeat1] = STATE(19),
    [aux_sym_action_repeat1] = STATE(17),
    [aux_sym_section2_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(127),
    [aux_sym_scene_token1] = ACTIONS(7),
    [aux_sym_scene_token2] = ACTIONS(7),
    [aux_sym__noncharacter_token1] = ACTIONS(9),
    [sym_character] = ACTIONS(11),
    [aux_sym_action_token1] = ACTIONS(9),
    [aux_sym_transition_token1] = ACTIONS(13),
    [aux_sym_transition_token2] = ACTIONS(13),
    [sym_break] = ACTIONS(129),
    [sym_synopse] = ACTIONS(129),
    [aux_sym_section1_token1] = ACTIONS(131),
    [aux_sym_section2_token1] = ACTIONS(131),
    [aux_sym_section3_token1] = ACTIONS(21),
    [sym_note] = ACTIONS(129),
    [aux_sym_boneyard_token1] = ACTIONS(23),
    [sym__line] = ACTIONS(9),
  },
  [11] = {
    [sym_scene] = STATE(9),
    [sym_dialogue] = STATE(9),
    [sym_dialogue_block] = STATE(19),
    [sym__noncharacter] = STATE(17),
    [sym_action] = STATE(9),
    [sym_transition] = STATE(9),
    [sym_section3] = STATE(9),
    [sym_boneyard] = STATE(9),
    [sym__element] = STATE(9),
    [aux_sym_dialogue_repeat1] = STATE(19),
    [aux_sym_action_repeat1] = STATE(17),
    [aux_sym_section2_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(133),
    [aux_sym_scene_token1] = ACTIONS(7),
    [aux_sym_scene_token2] = ACTIONS(7),
    [aux_sym__noncharacter_token1] = ACTIONS(9),
    [sym_character] = ACTIONS(11),
    [aux_sym_action_token1] = ACTIONS(9),
    [aux_sym_transition_token1] = ACTIONS(13),
    [aux_sym_transition_token2] = ACTIONS(13),
    [sym_break] = ACTIONS(135),
    [sym_synopse] = ACTIONS(135),
    [aux_sym_section1_token1] = ACTIONS(137),
    [aux_sym_section2_token1] = ACTIONS(137),
    [aux_sym_section3_token1] = ACTIONS(21),
    [sym_note] = ACTIONS(135),
    [aux_sym_boneyard_token1] = ACTIONS(23),
    [sym__line] = ACTIONS(9),
  },
  [12] = {
    [sym_scene] = STATE(12),
    [sym_dialogue] = STATE(12),
    [sym_dialogue_block] = STATE(19),
    [sym__noncharacter] = STATE(17),
    [sym_action] = STATE(12),
    [sym_transition] = STATE(12),
    [sym_boneyard] = STATE(12),
    [sym__element] = STATE(12),
    [aux_sym_dialogue_repeat1] = STATE(19),
    [aux_sym_action_repeat1] = STATE(17),
    [aux_sym_section3_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(139),
    [aux_sym_scene_token1] = ACTIONS(141),
    [aux_sym_scene_token2] = ACTIONS(141),
    [aux_sym__noncharacter_token1] = ACTIONS(144),
    [sym_character] = ACTIONS(147),
    [aux_sym_action_token1] = ACTIONS(144),
    [aux_sym_transition_token1] = ACTIONS(150),
    [aux_sym_transition_token2] = ACTIONS(150),
    [sym_break] = ACTIONS(153),
    [sym_synopse] = ACTIONS(153),
    [aux_sym_section1_token1] = ACTIONS(156),
    [aux_sym_section2_token1] = ACTIONS(156),
    [aux_sym_section3_token1] = ACTIONS(156),
    [sym_note] = ACTIONS(153),
    [aux_sym_boneyard_token1] = ACTIONS(158),
    [sym__line] = ACTIONS(144),
  },
  [13] = {
    [sym_scene] = STATE(14),
    [sym_dialogue] = STATE(14),
    [sym_dialogue_block] = STATE(19),
    [sym__noncharacter] = STATE(17),
    [sym_action] = STATE(14),
    [sym_transition] = STATE(14),
    [sym_boneyard] = STATE(14),
    [sym__element] = STATE(14),
    [aux_sym_dialogue_repeat1] = STATE(19),
    [aux_sym_action_repeat1] = STATE(17),
    [aux_sym_section3_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(161),
    [aux_sym_scene_token1] = ACTIONS(7),
    [aux_sym_scene_token2] = ACTIONS(7),
    [aux_sym__noncharacter_token1] = ACTIONS(9),
    [sym_character] = ACTIONS(11),
    [aux_sym_action_token1] = ACTIONS(9),
    [aux_sym_transition_token1] = ACTIONS(13),
    [aux_sym_transition_token2] = ACTIONS(13),
    [sym_break] = ACTIONS(163),
    [sym_synopse] = ACTIONS(163),
    [aux_sym_section1_token1] = ACTIONS(165),
    [aux_sym_section2_token1] = ACTIONS(165),
    [aux_sym_section3_token1] = ACTIONS(165),
    [sym_note] = ACTIONS(163),
    [aux_sym_boneyard_token1] = ACTIONS(23),
    [sym__line] = ACTIONS(9),
  },
  [14] = {
    [sym_scene] = STATE(12),
    [sym_dialogue] = STATE(12),
    [sym_dialogue_block] = STATE(19),
    [sym__noncharacter] = STATE(17),
    [sym_action] = STATE(12),
    [sym_transition] = STATE(12),
    [sym_boneyard] = STATE(12),
    [sym__element] = STATE(12),
    [aux_sym_dialogue_repeat1] = STATE(19),
    [aux_sym_action_repeat1] = STATE(17),
    [aux_sym_section3_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(167),
    [aux_sym_scene_token1] = ACTIONS(7),
    [aux_sym_scene_token2] = ACTIONS(7),
    [aux_sym__noncharacter_token1] = ACTIONS(9),
    [sym_character] = ACTIONS(11),
    [aux_sym_action_token1] = ACTIONS(9),
    [aux_sym_transition_token1] = ACTIONS(13),
    [aux_sym_transition_token2] = ACTIONS(13),
    [sym_break] = ACTIONS(169),
    [sym_synopse] = ACTIONS(169),
    [aux_sym_section1_token1] = ACTIONS(171),
    [aux_sym_section2_token1] = ACTIONS(171),
    [aux_sym_section3_token1] = ACTIONS(171),
    [sym_note] = ACTIONS(169),
    [aux_sym_boneyard_token1] = ACTIONS(23),
    [sym__line] = ACTIONS(9),
  },
  [15] = {
    [sym_dialogue] = STATE(16),
    [sym_dialogue_block] = STATE(19),
    [sym__noncharacter] = STATE(17),
    [sym_action] = STATE(16),
    [sym_transition] = STATE(16),
    [sym__element] = STATE(16),
    [aux_sym_scene_repeat1] = STATE(16),
    [aux_sym_dialogue_repeat1] = STATE(19),
    [aux_sym_action_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(173),
    [aux_sym_scene_token1] = ACTIONS(175),
    [aux_sym_scene_token2] = ACTIONS(175),
    [aux_sym__noncharacter_token1] = ACTIONS(9),
    [sym_character] = ACTIONS(11),
    [aux_sym_action_token1] = ACTIONS(9),
    [aux_sym_transition_token1] = ACTIONS(13),
    [aux_sym_transition_token2] = ACTIONS(13),
    [sym_break] = ACTIONS(177),
    [sym_synopse] = ACTIONS(177),
    [aux_sym_section1_token1] = ACTIONS(175),
    [aux_sym_section2_token1] = ACTIONS(175),
    [aux_sym_section3_token1] = ACTIONS(175),
    [sym_note] = ACTIONS(177),
    [aux_sym_boneyard_token1] = ACTIONS(175),
    [sym__line] = ACTIONS(9),
  },
  [16] = {
    [sym_dialogue] = STATE(16),
    [sym_dialogue_block] = STATE(19),
    [sym__noncharacter] = STATE(17),
    [sym_action] = STATE(16),
    [sym_transition] = STATE(16),
    [sym__element] = STATE(16),
    [aux_sym_scene_repeat1] = STATE(16),
    [aux_sym_dialogue_repeat1] = STATE(19),
    [aux_sym_action_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(179),
    [aux_sym_scene_token1] = ACTIONS(181),
    [aux_sym_scene_token2] = ACTIONS(181),
    [aux_sym__noncharacter_token1] = ACTIONS(183),
    [sym_character] = ACTIONS(186),
    [aux_sym_action_token1] = ACTIONS(183),
    [aux_sym_transition_token1] = ACTIONS(189),
    [aux_sym_transition_token2] = ACTIONS(189),
    [sym_break] = ACTIONS(192),
    [sym_synopse] = ACTIONS(192),
    [aux_sym_section1_token1] = ACTIONS(181),
    [aux_sym_section2_token1] = ACTIONS(181),
    [aux_sym_section3_token1] = ACTIONS(181),
    [sym_note] = ACTIONS(192),
    [aux_sym_boneyard_token1] = ACTIONS(181),
    [sym__line] = ACTIONS(183),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    STATE(23), 2,
      sym__noncharacter,
      aux_sym_action_repeat1,
    ACTIONS(199), 3,
      aux_sym__noncharacter_token1,
      aux_sym_action_token1,
      sym__line,
    ACTIONS(197), 12,
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
  [27] = 7,
    ACTIONS(11), 1,
      sym_character,
    ACTIONS(13), 2,
      aux_sym_transition_token1,
      aux_sym_transition_token2,
    STATE(17), 2,
      sym__noncharacter,
      aux_sym_action_repeat1,
    STATE(19), 2,
      sym_dialogue_block,
      aux_sym_dialogue_repeat1,
    ACTIONS(9), 3,
      aux_sym__noncharacter_token1,
      aux_sym_action_token1,
      sym__line,
    ACTIONS(201), 3,
      sym_break,
      sym_synopse,
      sym_note,
    STATE(15), 5,
      sym_dialogue,
      sym_action,
      sym_transition,
      sym__element,
      aux_sym_scene_repeat1,
  [60] = 4,
    ACTIONS(11), 1,
      sym_character,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    STATE(22), 2,
      sym_dialogue_block,
      aux_sym_dialogue_repeat1,
    ACTIONS(205), 14,
      aux_sym_scene_token1,
      aux_sym_scene_token2,
      aux_sym__noncharacter_token1,
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
  [87] = 4,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    ACTIONS(209), 1,
      sym__title_element,
    STATE(21), 1,
      aux_sym_title_page_repeat1,
    ACTIONS(211), 15,
      aux_sym_scene_token1,
      aux_sym_scene_token2,
      aux_sym__noncharacter_token1,
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
  [114] = 4,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    ACTIONS(215), 1,
      sym__title_element,
    STATE(21), 1,
      aux_sym_title_page_repeat1,
    ACTIONS(218), 15,
      aux_sym_scene_token1,
      aux_sym_scene_token2,
      aux_sym__noncharacter_token1,
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
  [141] = 4,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    ACTIONS(224), 1,
      sym_character,
    STATE(22), 2,
      sym_dialogue_block,
      aux_sym_dialogue_repeat1,
    ACTIONS(222), 14,
      aux_sym_scene_token1,
      aux_sym_scene_token2,
      aux_sym__noncharacter_token1,
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
  [168] = 4,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    STATE(23), 2,
      sym__noncharacter,
      aux_sym_action_repeat1,
    ACTIONS(231), 3,
      aux_sym__noncharacter_token1,
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
  [195] = 2,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
    ACTIONS(236), 15,
      aux_sym_scene_token1,
      aux_sym_scene_token2,
      aux_sym__noncharacter_token1,
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
  [216] = 2,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
    ACTIONS(240), 15,
      aux_sym_scene_token1,
      aux_sym_scene_token2,
      aux_sym__noncharacter_token1,
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
  [237] = 2,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
    ACTIONS(244), 15,
      aux_sym_scene_token1,
      aux_sym_scene_token2,
      aux_sym__noncharacter_token1,
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
  [258] = 2,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    ACTIONS(248), 15,
      aux_sym_scene_token1,
      aux_sym_scene_token2,
      aux_sym__noncharacter_token1,
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
  [279] = 4,
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
  [294] = 4,
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
  [309] = 3,
    ACTIONS(252), 1,
      aux_sym_parenthetical_token1,
    ACTIONS(254), 1,
      aux_sym_speech_token1,
    STATE(28), 3,
      sym_parenthetical,
      sym_speech,
      aux_sym_dialogue_block_repeat1,
  [321] = 1,
    ACTIONS(264), 3,
      anon_sym_LF,
      aux_sym_parenthetical_token1,
      aux_sym_speech_token1,
  [327] = 1,
    ACTIONS(266), 3,
      anon_sym_LF,
      aux_sym_parenthetical_token1,
      aux_sym_speech_token1,
  [333] = 1,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(17)] = 0,
  [SMALL_STATE(18)] = 27,
  [SMALL_STATE(19)] = 60,
  [SMALL_STATE(20)] = 87,
  [SMALL_STATE(21)] = 114,
  [SMALL_STATE(22)] = 141,
  [SMALL_STATE(23)] = 168,
  [SMALL_STATE(24)] = 195,
  [SMALL_STATE(25)] = 216,
  [SMALL_STATE(26)] = 237,
  [SMALL_STATE(27)] = 258,
  [SMALL_STATE(28)] = 279,
  [SMALL_STATE(29)] = 294,
  [SMALL_STATE(30)] = 309,
  [SMALL_STATE(31)] = 321,
  [SMALL_STATE(32)] = 327,
  [SMALL_STATE(33)] = 333,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
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
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section1_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section1_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section1_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
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
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section2_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section2_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section2_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
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
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section3_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section3_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section3_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
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
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scene_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scene_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scene_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scene_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 1, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialogue, 1, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dialogue, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_page, 1, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_page, 1, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
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
