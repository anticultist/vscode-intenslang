#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 53
#define LARGE_STATE_COUNT 21
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  sym_identifier = 1,
  anon_sym_SEMI = 2,
  sym_comment = 3,
  anon_sym_DQUOTE = 4,
  aux_sym_string_token1 = 5,
  sym_number = 6,
  sym_true = 7,
  sym_false = 8,
  sym_eoln = 9,
  sym_invalid = 10,
  sym_none = 11,
  sym_primitive_type = 12,
  anon_sym_REASON_ACTIVATE = 13,
  anon_sym_REASON_CLEAR = 14,
  anon_sym_REASON_CLOSE = 15,
  anon_sym_REASON_CONNECTION = 16,
  anon_sym_REASON_DROP = 17,
  anon_sym_REASON_DUPLICATE = 18,
  anon_sym_REASON_INPUT = 19,
  anon_sym_REASON_INSERT = 20,
  anon_sym_REASON_MOVE = 21,
  anon_sym_REASON_OPEN = 22,
  anon_sym_REASON_PACK = 23,
  anon_sym_REASON_REMOVE = 24,
  anon_sym_REASON_REMOVE_CONNECTION = 25,
  anon_sym_REASON_REMOVE_ELEMENT = 26,
  anon_sym_REASON_SELECT = 27,
  anon_sym_REASON_SELECT_POINT = 28,
  anon_sym_REASON_SELECT_RECTANGLE = 29,
  anon_sym_REASON_UNSELECT = 30,
  anon_sym_COMMA = 31,
  anon_sym_LBRACE = 32,
  aux_sym_parameter_block_token1 = 33,
  anon_sym_RBRACE = 34,
  anon_sym_DATAPOOL = 35,
  anon_sym_END = 36,
  sym_source_file = 37,
  sym__high_level_blocks = 38,
  sym__expression = 39,
  sym_string = 40,
  sym_reason = 41,
  sym_variable_definition = 42,
  sym_parameter_block = 43,
  sym_datapool_block = 44,
  sym__datapool_block_expression = 45,
  aux_sym_source_file_repeat1 = 46,
  aux_sym_string_repeat1 = 47,
  aux_sym_variable_definition_repeat1 = 48,
  aux_sym_parameter_block_repeat1 = 49,
  aux_sym_datapool_block_repeat1 = 50,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "variable_identifier",
  [anon_sym_SEMI] = ";",
  [sym_comment] = "comment",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_number] = "number",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_eoln] = "eoln",
  [sym_invalid] = "invalid",
  [sym_none] = "none",
  [sym_primitive_type] = "primitive_type",
  [anon_sym_REASON_ACTIVATE] = "REASON_ACTIVATE",
  [anon_sym_REASON_CLEAR] = "REASON_CLEAR",
  [anon_sym_REASON_CLOSE] = "REASON_CLOSE",
  [anon_sym_REASON_CONNECTION] = "REASON_CONNECTION",
  [anon_sym_REASON_DROP] = "REASON_DROP",
  [anon_sym_REASON_DUPLICATE] = "REASON_DUPLICATE",
  [anon_sym_REASON_INPUT] = "REASON_INPUT",
  [anon_sym_REASON_INSERT] = "REASON_INSERT",
  [anon_sym_REASON_MOVE] = "REASON_MOVE",
  [anon_sym_REASON_OPEN] = "REASON_OPEN",
  [anon_sym_REASON_PACK] = "REASON_PACK",
  [anon_sym_REASON_REMOVE] = "REASON_REMOVE",
  [anon_sym_REASON_REMOVE_CONNECTION] = "REASON_REMOVE_CONNECTION",
  [anon_sym_REASON_REMOVE_ELEMENT] = "REASON_REMOVE_ELEMENT",
  [anon_sym_REASON_SELECT] = "REASON_SELECT",
  [anon_sym_REASON_SELECT_POINT] = "REASON_SELECT_POINT",
  [anon_sym_REASON_SELECT_RECTANGLE] = "REASON_SELECT_RECTANGLE",
  [anon_sym_REASON_UNSELECT] = "REASON_UNSELECT",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE] = "{",
  [aux_sym_parameter_block_token1] = "parameter",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DATAPOOL] = "DATAPOOL",
  [anon_sym_END] = "END",
  [sym_source_file] = "source_file",
  [sym__high_level_blocks] = "_high_level_blocks",
  [sym__expression] = "_expression",
  [sym_string] = "string",
  [sym_reason] = "reason",
  [sym_variable_definition] = "variable_definition",
  [sym_parameter_block] = "parameter_block",
  [sym_datapool_block] = "datapool_block",
  [sym__datapool_block_expression] = "_datapool_block_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_variable_definition_repeat1] = "variable_definition_repeat1",
  [aux_sym_parameter_block_repeat1] = "parameter_block_repeat1",
  [aux_sym_datapool_block_repeat1] = "datapool_block_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_comment] = sym_comment,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_number] = sym_number,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_eoln] = sym_eoln,
  [sym_invalid] = sym_invalid,
  [sym_none] = sym_none,
  [sym_primitive_type] = sym_primitive_type,
  [anon_sym_REASON_ACTIVATE] = anon_sym_REASON_ACTIVATE,
  [anon_sym_REASON_CLEAR] = anon_sym_REASON_CLEAR,
  [anon_sym_REASON_CLOSE] = anon_sym_REASON_CLOSE,
  [anon_sym_REASON_CONNECTION] = anon_sym_REASON_CONNECTION,
  [anon_sym_REASON_DROP] = anon_sym_REASON_DROP,
  [anon_sym_REASON_DUPLICATE] = anon_sym_REASON_DUPLICATE,
  [anon_sym_REASON_INPUT] = anon_sym_REASON_INPUT,
  [anon_sym_REASON_INSERT] = anon_sym_REASON_INSERT,
  [anon_sym_REASON_MOVE] = anon_sym_REASON_MOVE,
  [anon_sym_REASON_OPEN] = anon_sym_REASON_OPEN,
  [anon_sym_REASON_PACK] = anon_sym_REASON_PACK,
  [anon_sym_REASON_REMOVE] = anon_sym_REASON_REMOVE,
  [anon_sym_REASON_REMOVE_CONNECTION] = anon_sym_REASON_REMOVE_CONNECTION,
  [anon_sym_REASON_REMOVE_ELEMENT] = anon_sym_REASON_REMOVE_ELEMENT,
  [anon_sym_REASON_SELECT] = anon_sym_REASON_SELECT,
  [anon_sym_REASON_SELECT_POINT] = anon_sym_REASON_SELECT_POINT,
  [anon_sym_REASON_SELECT_RECTANGLE] = anon_sym_REASON_SELECT_RECTANGLE,
  [anon_sym_REASON_UNSELECT] = anon_sym_REASON_UNSELECT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym_parameter_block_token1] = aux_sym_parameter_block_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DATAPOOL] = anon_sym_DATAPOOL,
  [anon_sym_END] = anon_sym_END,
  [sym_source_file] = sym_source_file,
  [sym__high_level_blocks] = sym__high_level_blocks,
  [sym__expression] = sym__expression,
  [sym_string] = sym_string,
  [sym_reason] = sym_reason,
  [sym_variable_definition] = sym_variable_definition,
  [sym_parameter_block] = sym_parameter_block,
  [sym_datapool_block] = sym_datapool_block,
  [sym__datapool_block_expression] = sym__datapool_block_expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_variable_definition_repeat1] = aux_sym_variable_definition_repeat1,
  [aux_sym_parameter_block_repeat1] = aux_sym_parameter_block_repeat1,
  [aux_sym_datapool_block_repeat1] = aux_sym_datapool_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_eoln] = {
    .visible = true,
    .named = true,
  },
  [sym_invalid] = {
    .visible = true,
    .named = true,
  },
  [sym_none] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_REASON_ACTIVATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REASON_CLEAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REASON_CLOSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REASON_CONNECTION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REASON_DROP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REASON_DUPLICATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REASON_INPUT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REASON_INSERT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REASON_MOVE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REASON_OPEN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REASON_PACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REASON_REMOVE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REASON_REMOVE_CONNECTION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REASON_REMOVE_ELEMENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REASON_SELECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REASON_SELECT_POINT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REASON_SELECT_RECTANGLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REASON_UNSELECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_parameter_block_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DATAPOOL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__high_level_blocks] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_reason] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_block] = {
    .visible = true,
    .named = true,
  },
  [sym_datapool_block] = {
    .visible = true,
    .named = true,
  },
  [sym__datapool_block_expression] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_datapool_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
  field_type = 2,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[7] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 3},
  [6] = {.index = 10, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
    {field_type, 0},
  [2] =
    {field_name, 1},
  [3] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [5] =
    {field_name, 2},
    {field_type, 0},
  [7] =
    {field_name, 1},
    {field_name, 3, .inherited = true},
    {field_type, 0},
  [10] =
    {field_name, 2},
    {field_name, 4, .inherited = true},
    {field_type, 0},
};

static TSSymbol ts_alias_sequences[7][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(151);
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == ',') ADVANCE(355);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ';') ADVANCE(298);
      if (lookahead == 'C') ADVANCE(175);
      if (lookahead == 'E') ADVANCE(228);
      if (lookahead == 'F') ADVANCE(156);
      if (lookahead == 'I') ADVANCE(229);
      if (lookahead == 'N') ADVANCE(249);
      if (lookahead == 'R') ADVANCE(189);
      if (lookahead == 'S') ADVANCE(281);
      if (lookahead == 'T') ADVANCE(265);
      if (lookahead == '{') ADVANCE(356);
      if (lookahead == '}') ADVANCE(358);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead != 0) ADVANCE(303);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(301);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(301);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ';') ADVANCE(298);
      if (lookahead == 'C') ADVANCE(29);
      if (lookahead == 'E') ADVANCE(81);
      if (lookahead == 'F') ADVANCE(11);
      if (lookahead == 'I') ADVANCE(82);
      if (lookahead == 'N') ADVANCE(100);
      if (lookahead == 'R') ADVANCE(43);
      if (lookahead == 'S') ADVANCE(131);
      if (lookahead == 'T') ADVANCE(115);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 5:
      if (lookahead == ',') ADVANCE(355);
      if (lookahead == ';') ADVANCE(298);
      if (lookahead == '{') ADVANCE(356);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(299);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(68);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(318);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(19);
      if (lookahead == 'C') ADVANCE(69);
      if (lookahead == 'D') ADVANCE(119);
      if (lookahead == 'I') ADVANCE(85);
      if (lookahead == 'M') ADVANCE(99);
      if (lookahead == 'O') ADVANCE(114);
      if (lookahead == 'P') ADVANCE(12);
      if (lookahead == 'R') ADVANCE(35);
      if (lookahead == 'S') ADVANCE(50);
      if (lookahead == 'U') ADVANCE(94);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(133);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(67);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(118);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(71);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(136);
      END_STATE();
    case 16:
      if (lookahead == 'A') ADVANCE(91);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(137);
      END_STATE();
    case 18:
      if (lookahead == 'C') ADVANCE(66);
      END_STATE();
    case 19:
      if (lookahead == 'C') ADVANCE(132);
      END_STATE();
    case 20:
      if (lookahead == 'C') ADVANCE(126);
      END_STATE();
    case 21:
      if (lookahead == 'C') ADVANCE(127);
      END_STATE();
    case 22:
      if (lookahead == 'C') ADVANCE(135);
      END_STATE();
    case 23:
      if (lookahead == 'C') ADVANCE(134);
      END_STATE();
    case 24:
      if (lookahead == 'C') ADVANCE(17);
      END_STATE();
    case 25:
      if (lookahead == 'C') ADVANCE(108);
      if (lookahead == 'E') ADVANCE(76);
      END_STATE();
    case 26:
      if (lookahead == 'C') ADVANCE(138);
      END_STATE();
    case 27:
      if (lookahead == 'D') ADVANCE(359);
      END_STATE();
    case 28:
      if (lookahead == 'D') ADVANCE(314);
      END_STATE();
    case 29:
      if (lookahead == 'D') ADVANCE(10);
      if (lookahead == 'O') ADVANCE(70);
      END_STATE();
    case 30:
      if (lookahead == 'E') ADVANCE(57);
      END_STATE();
    case 31:
      if (lookahead == 'E') ADVANCE(316);
      END_STATE();
    case 32:
      if (lookahead == 'E') ADVANCE(308);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(310);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(144);
      END_STATE();
    case 35:
      if (lookahead == 'E') ADVANCE(80);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(335);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(323);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(342);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(319);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(329);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(351);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(79);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(7);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(117);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(120);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(13);
      if (lookahead == 'O') ADVANCE(122);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(86);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(93);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(20);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(75);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(21);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(22);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(23);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(78);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(26);
      END_STATE();
    case 56:
      if (lookahead == 'G') ADVANCE(318);
      END_STATE();
    case 57:
      if (lookahead == 'G') ADVANCE(44);
      END_STATE();
    case 58:
      if (lookahead == 'G') ADVANCE(77);
      END_STATE();
    case 59:
      if (lookahead == 'I') ADVANCE(28);
      END_STATE();
    case 60:
      if (lookahead == 'I') ADVANCE(143);
      END_STATE();
    case 61:
      if (lookahead == 'I') ADVANCE(24);
      END_STATE();
    case 62:
      if (lookahead == 'I') ADVANCE(89);
      END_STATE();
    case 63:
      if (lookahead == 'I') ADVANCE(92);
      END_STATE();
    case 64:
      if (lookahead == 'I') ADVANCE(104);
      END_STATE();
    case 65:
      if (lookahead == 'I') ADVANCE(105);
      END_STATE();
    case 66:
      if (lookahead == 'K') ADVANCE(339);
      END_STATE();
    case 67:
      if (lookahead == 'L') ADVANCE(121);
      END_STATE();
    case 68:
      if (lookahead == 'L') ADVANCE(318);
      if (lookahead == 'S') ADVANCE(103);
      END_STATE();
    case 69:
      if (lookahead == 'L') ADVANCE(46);
      if (lookahead == 'O') ADVANCE(95);
      END_STATE();
    case 70:
      if (lookahead == 'L') ADVANCE(101);
      if (lookahead == 'M') ADVANCE(111);
      END_STATE();
    case 71:
      if (lookahead == 'L') ADVANCE(59);
      END_STATE();
    case 72:
      if (lookahead == 'L') ADVANCE(83);
      END_STATE();
    case 73:
      if (lookahead == 'L') ADVANCE(61);
      END_STATE();
    case 74:
      if (lookahead == 'L') ADVANCE(34);
      END_STATE();
    case 75:
      if (lookahead == 'L') ADVANCE(49);
      END_STATE();
    case 76:
      if (lookahead == 'L') ADVANCE(42);
      END_STATE();
    case 77:
      if (lookahead == 'L') ADVANCE(41);
      END_STATE();
    case 78:
      if (lookahead == 'L') ADVANCE(51);
      END_STATE();
    case 79:
      if (lookahead == 'M') ADVANCE(48);
      END_STATE();
    case 80:
      if (lookahead == 'M') ADVANCE(107);
      END_STATE();
    case 81:
      if (lookahead == 'N') ADVANCE(27);
      if (lookahead == 'O') ADVANCE(72);
      END_STATE();
    case 82:
      if (lookahead == 'N') ADVANCE(130);
      END_STATE();
    case 83:
      if (lookahead == 'N') ADVANCE(312);
      END_STATE();
    case 84:
      if (lookahead == 'N') ADVANCE(145);
      END_STATE();
    case 85:
      if (lookahead == 'N') ADVANCE(110);
      END_STATE();
    case 86:
      if (lookahead == 'N') ADVANCE(337);
      END_STATE();
    case 87:
      if (lookahead == 'N') ADVANCE(325);
      END_STATE();
    case 88:
      if (lookahead == 'N') ADVANCE(343);
      END_STATE();
    case 89:
      if (lookahead == 'N') ADVANCE(56);
      END_STATE();
    case 90:
      if (lookahead == 'N') ADVANCE(31);
      END_STATE();
    case 91:
      if (lookahead == 'N') ADVANCE(58);
      END_STATE();
    case 92:
      if (lookahead == 'N') ADVANCE(128);
      END_STATE();
    case 93:
      if (lookahead == 'N') ADVANCE(129);
      END_STATE();
    case 94:
      if (lookahead == 'N') ADVANCE(123);
      END_STATE();
    case 95:
      if (lookahead == 'N') ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == 'N') ADVANCE(53);
      END_STATE();
    case 97:
      if (lookahead == 'N') ADVANCE(55);
      END_STATE();
    case 98:
      if (lookahead == 'N') ADVANCE(97);
      END_STATE();
    case 99:
      if (lookahead == 'O') ADVANCE(141);
      END_STATE();
    case 100:
      if (lookahead == 'O') ADVANCE(90);
      END_STATE();
    case 101:
      if (lookahead == 'O') ADVANCE(117);
      END_STATE();
    case 102:
      if (lookahead == 'O') ADVANCE(109);
      END_STATE();
    case 103:
      if (lookahead == 'O') ADVANCE(84);
      END_STATE();
    case 104:
      if (lookahead == 'O') ADVANCE(87);
      END_STATE();
    case 105:
      if (lookahead == 'O') ADVANCE(88);
      END_STATE();
    case 106:
      if (lookahead == 'O') ADVANCE(63);
      END_STATE();
    case 107:
      if (lookahead == 'O') ADVANCE(142);
      END_STATE();
    case 108:
      if (lookahead == 'O') ADVANCE(98);
      END_STATE();
    case 109:
      if (lookahead == 'P') ADVANCE(327);
      END_STATE();
    case 110:
      if (lookahead == 'P') ADVANCE(140);
      if (lookahead == 'S') ADVANCE(45);
      END_STATE();
    case 111:
      if (lookahead == 'P') ADVANCE(74);
      END_STATE();
    case 112:
      if (lookahead == 'P') ADVANCE(106);
      if (lookahead == 'R') ADVANCE(52);
      END_STATE();
    case 113:
      if (lookahead == 'P') ADVANCE(73);
      END_STATE();
    case 114:
      if (lookahead == 'P') ADVANCE(47);
      END_STATE();
    case 115:
      if (lookahead == 'R') ADVANCE(139);
      END_STATE();
    case 116:
      if (lookahead == 'R') ADVANCE(62);
      END_STATE();
    case 117:
      if (lookahead == 'R') ADVANCE(318);
      END_STATE();
    case 118:
      if (lookahead == 'R') ADVANCE(321);
      END_STATE();
    case 119:
      if (lookahead == 'R') ADVANCE(102);
      if (lookahead == 'U') ADVANCE(113);
      END_STATE();
    case 120:
      if (lookahead == 'R') ADVANCE(125);
      END_STATE();
    case 121:
      if (lookahead == 'S') ADVANCE(33);
      END_STATE();
    case 122:
      if (lookahead == 'S') ADVANCE(37);
      END_STATE();
    case 123:
      if (lookahead == 'S') ADVANCE(54);
      END_STATE();
    case 124:
      if (lookahead == 'T') ADVANCE(331);
      END_STATE();
    case 125:
      if (lookahead == 'T') ADVANCE(333);
      END_STATE();
    case 126:
      if (lookahead == 'T') ADVANCE(348);
      END_STATE();
    case 127:
      if (lookahead == 'T') ADVANCE(353);
      END_STATE();
    case 128:
      if (lookahead == 'T') ADVANCE(349);
      END_STATE();
    case 129:
      if (lookahead == 'T') ADVANCE(345);
      END_STATE();
    case 130:
      if (lookahead == 'T') ADVANCE(30);
      if (lookahead == 'V') ADVANCE(14);
      END_STATE();
    case 131:
      if (lookahead == 'T') ADVANCE(116);
      END_STATE();
    case 132:
      if (lookahead == 'T') ADVANCE(60);
      END_STATE();
    case 133:
      if (lookahead == 'T') ADVANCE(8);
      END_STATE();
    case 134:
      if (lookahead == 'T') ADVANCE(64);
      END_STATE();
    case 135:
      if (lookahead == 'T') ADVANCE(16);
      END_STATE();
    case 136:
      if (lookahead == 'T') ADVANCE(39);
      END_STATE();
    case 137:
      if (lookahead == 'T') ADVANCE(40);
      END_STATE();
    case 138:
      if (lookahead == 'T') ADVANCE(65);
      END_STATE();
    case 139:
      if (lookahead == 'U') ADVANCE(32);
      END_STATE();
    case 140:
      if (lookahead == 'U') ADVANCE(124);
      END_STATE();
    case 141:
      if (lookahead == 'V') ADVANCE(36);
      END_STATE();
    case 142:
      if (lookahead == 'V') ADVANCE(38);
      END_STATE();
    case 143:
      if (lookahead == 'V') ADVANCE(15);
      END_STATE();
    case 144:
      if (lookahead == 'X') ADVANCE(318);
      END_STATE();
    case 145:
      if (lookahead == '_') ADVANCE(9);
      END_STATE();
    case 146:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 147:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(147)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 148:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 150:
      if (eof) ADVANCE(151);
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ';') ADVANCE(298);
      if (lookahead == 'E') ADVANCE(247);
      if (lookahead == 'F') ADVANCE(156);
      if (lookahead == 'I') ADVANCE(239);
      if (lookahead == 'N') ADVANCE(249);
      if (lookahead == 'R') ADVANCE(193);
      if (lookahead == 'T') ADVANCE(265);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(150)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(297);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(214);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(165);
      if (lookahead == 'C') ADVANCE(216);
      if (lookahead == 'D') ADVANCE(268);
      if (lookahead == 'I') ADVANCE(232);
      if (lookahead == 'M') ADVANCE(248);
      if (lookahead == 'O') ADVANCE(263);
      if (lookahead == 'P') ADVANCE(158);
      if (lookahead == 'R') ADVANCE(181);
      if (lookahead == 'S') ADVANCE(197);
      if (lookahead == 'U') ADVANCE(242);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(283);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(215);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(272);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(164);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(267);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(218);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(286);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(238);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(287);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(213);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(282);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(276);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(277);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(285);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(284);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(163);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(257);
      if (lookahead == 'E') ADVANCE(223);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(288);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(360);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(315);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(155);
      if (lookahead == 'O') ADVANCE(217);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(204);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(317);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(309);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(311);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(295);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(227);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(336);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(324);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(341);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(320);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(330);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(352);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(226);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(153);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(264);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(269);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(159);
      if (lookahead == 'O') ADVANCE(271);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(157);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(233);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(241);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(166);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(222);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(167);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(168);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(169);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(225);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(172);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(297);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(190);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(224);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(174);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(294);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(170);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(236);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(240);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(253);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(254);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(340);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(297);
      if (lookahead == 'S') ADVANCE(252);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(270);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(192);
      if (lookahead == 'O') ADVANCE(243);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(250);
      if (lookahead == 'M') ADVANCE(260);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(206);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(230);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(208);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(180);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(196);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(188);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(187);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(198);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(195);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(256);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(173);
      if (lookahead == 'O') ADVANCE(219);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(280);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(313);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(296);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(259);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(338);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(326);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(344);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(203);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(177);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(205);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(293);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(278);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(279);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(273);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(244);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(200);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(202);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(245);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(219);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(291);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(237);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(264);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(258);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(231);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(234);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(235);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(210);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(292);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(246);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(328);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(290);
      if (lookahead == 'S') ADVANCE(191);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(221);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(255);
      if (lookahead == 'R') ADVANCE(199);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(220);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(194);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(297);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(289);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(209);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(322);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(251);
      if (lookahead == 'U') ADVANCE(262);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(275);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(179);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(183);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(252);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(201);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(332);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(334);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(347);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(354);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(350);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(346);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(176);
      if (lookahead == 'V') ADVANCE(160);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(266);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(207);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(152);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(211);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(162);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(185);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(186);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(212);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(178);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(274);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(182);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(184);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(160);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(161);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(297);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(303);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(305);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_eoln);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_eoln);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_invalid);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_invalid);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_none);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_none);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_primitive_type);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_REASON_ACTIVATE);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_REASON_ACTIVATE);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_REASON_CLEAR);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_REASON_CLEAR);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_REASON_CLOSE);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_REASON_CLOSE);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_REASON_CONNECTION);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_REASON_CONNECTION);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_REASON_DROP);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_REASON_DROP);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_REASON_DUPLICATE);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_REASON_DUPLICATE);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_REASON_INPUT);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_REASON_INPUT);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_REASON_INSERT);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_REASON_INSERT);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_REASON_MOVE);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_REASON_MOVE);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_REASON_OPEN);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_REASON_OPEN);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_REASON_PACK);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_REASON_PACK);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_REASON_REMOVE);
      if (lookahead == '_') ADVANCE(171);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_REASON_REMOVE);
      if (lookahead == '_') ADVANCE(25);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_REASON_REMOVE_CONNECTION);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_REASON_REMOVE_CONNECTION);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_REASON_REMOVE_ELEMENT);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_REASON_REMOVE_ELEMENT);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_REASON_SELECT);
      if (lookahead == '_') ADVANCE(261);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_REASON_SELECT);
      if (lookahead == '_') ADVANCE(112);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_REASON_SELECT_POINT);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_REASON_SELECT_POINT);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_REASON_SELECT_RECTANGLE);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_REASON_SELECT_RECTANGLE);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_REASON_UNSELECT);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_REASON_UNSELECT);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_parameter_block_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'D') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'A') ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == 'T') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == 'P') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 'O') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == 'O') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 'L') ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_DATAPOOL);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 150},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 150},
  [6] = {.lex_state = 150},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 150},
  [13] = {.lex_state = 150},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 150},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 150},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 150},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 147},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 147},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_eoln] = ACTIONS(1),
    [sym_invalid] = ACTIONS(1),
    [sym_none] = ACTIONS(1),
    [sym_primitive_type] = ACTIONS(1),
    [anon_sym_REASON_ACTIVATE] = ACTIONS(1),
    [anon_sym_REASON_CLEAR] = ACTIONS(1),
    [anon_sym_REASON_CLOSE] = ACTIONS(1),
    [anon_sym_REASON_CONNECTION] = ACTIONS(1),
    [anon_sym_REASON_DROP] = ACTIONS(1),
    [anon_sym_REASON_DUPLICATE] = ACTIONS(1),
    [anon_sym_REASON_INPUT] = ACTIONS(1),
    [anon_sym_REASON_INSERT] = ACTIONS(1),
    [anon_sym_REASON_MOVE] = ACTIONS(1),
    [anon_sym_REASON_OPEN] = ACTIONS(1),
    [anon_sym_REASON_PACK] = ACTIONS(1),
    [anon_sym_REASON_REMOVE] = ACTIONS(1),
    [anon_sym_REASON_REMOVE_CONNECTION] = ACTIONS(1),
    [anon_sym_REASON_REMOVE_ELEMENT] = ACTIONS(1),
    [anon_sym_REASON_SELECT] = ACTIONS(1),
    [anon_sym_REASON_SELECT_POINT] = ACTIONS(1),
    [anon_sym_REASON_SELECT_RECTANGLE] = ACTIONS(1),
    [anon_sym_REASON_UNSELECT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DATAPOOL] = ACTIONS(1),
    [anon_sym_END] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(50),
    [sym__high_level_blocks] = STATE(6),
    [sym__expression] = STATE(6),
    [sym_string] = STATE(6),
    [sym_reason] = STATE(6),
    [sym_datapool_block] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_number] = ACTIONS(5),
    [sym_true] = ACTIONS(5),
    [sym_false] = ACTIONS(5),
    [sym_eoln] = ACTIONS(5),
    [sym_invalid] = ACTIONS(5),
    [sym_none] = ACTIONS(5),
    [anon_sym_REASON_ACTIVATE] = ACTIONS(9),
    [anon_sym_REASON_CLEAR] = ACTIONS(9),
    [anon_sym_REASON_CLOSE] = ACTIONS(9),
    [anon_sym_REASON_CONNECTION] = ACTIONS(9),
    [anon_sym_REASON_DROP] = ACTIONS(9),
    [anon_sym_REASON_DUPLICATE] = ACTIONS(9),
    [anon_sym_REASON_INPUT] = ACTIONS(9),
    [anon_sym_REASON_INSERT] = ACTIONS(9),
    [anon_sym_REASON_MOVE] = ACTIONS(9),
    [anon_sym_REASON_OPEN] = ACTIONS(9),
    [anon_sym_REASON_PACK] = ACTIONS(9),
    [anon_sym_REASON_REMOVE] = ACTIONS(11),
    [anon_sym_REASON_REMOVE_CONNECTION] = ACTIONS(9),
    [anon_sym_REASON_REMOVE_ELEMENT] = ACTIONS(9),
    [anon_sym_REASON_SELECT] = ACTIONS(11),
    [anon_sym_REASON_SELECT_POINT] = ACTIONS(9),
    [anon_sym_REASON_SELECT_RECTANGLE] = ACTIONS(9),
    [anon_sym_REASON_UNSELECT] = ACTIONS(9),
    [anon_sym_DATAPOOL] = ACTIONS(13),
  },
  [2] = {
    [sym__expression] = STATE(3),
    [sym_string] = STATE(3),
    [sym_reason] = STATE(3),
    [sym_variable_definition] = STATE(3),
    [sym__datapool_block_expression] = STATE(3),
    [aux_sym_datapool_block_repeat1] = STATE(3),
    [anon_sym_SEMI] = ACTIONS(15),
    [sym_comment] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(15),
    [sym_true] = ACTIONS(15),
    [sym_false] = ACTIONS(15),
    [sym_eoln] = ACTIONS(15),
    [sym_invalid] = ACTIONS(15),
    [sym_none] = ACTIONS(15),
    [sym_primitive_type] = ACTIONS(19),
    [anon_sym_REASON_ACTIVATE] = ACTIONS(21),
    [anon_sym_REASON_CLEAR] = ACTIONS(21),
    [anon_sym_REASON_CLOSE] = ACTIONS(21),
    [anon_sym_REASON_CONNECTION] = ACTIONS(21),
    [anon_sym_REASON_DROP] = ACTIONS(21),
    [anon_sym_REASON_DUPLICATE] = ACTIONS(21),
    [anon_sym_REASON_INPUT] = ACTIONS(21),
    [anon_sym_REASON_INSERT] = ACTIONS(21),
    [anon_sym_REASON_MOVE] = ACTIONS(21),
    [anon_sym_REASON_OPEN] = ACTIONS(21),
    [anon_sym_REASON_PACK] = ACTIONS(21),
    [anon_sym_REASON_REMOVE] = ACTIONS(23),
    [anon_sym_REASON_REMOVE_CONNECTION] = ACTIONS(21),
    [anon_sym_REASON_REMOVE_ELEMENT] = ACTIONS(21),
    [anon_sym_REASON_SELECT] = ACTIONS(23),
    [anon_sym_REASON_SELECT_POINT] = ACTIONS(21),
    [anon_sym_REASON_SELECT_RECTANGLE] = ACTIONS(21),
    [anon_sym_REASON_UNSELECT] = ACTIONS(21),
    [anon_sym_END] = ACTIONS(25),
  },
  [3] = {
    [sym__expression] = STATE(3),
    [sym_string] = STATE(3),
    [sym_reason] = STATE(3),
    [sym_variable_definition] = STATE(3),
    [sym__datapool_block_expression] = STATE(3),
    [aux_sym_datapool_block_repeat1] = STATE(3),
    [anon_sym_SEMI] = ACTIONS(27),
    [sym_comment] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(30),
    [sym_number] = ACTIONS(27),
    [sym_true] = ACTIONS(27),
    [sym_false] = ACTIONS(27),
    [sym_eoln] = ACTIONS(27),
    [sym_invalid] = ACTIONS(27),
    [sym_none] = ACTIONS(27),
    [sym_primitive_type] = ACTIONS(33),
    [anon_sym_REASON_ACTIVATE] = ACTIONS(36),
    [anon_sym_REASON_CLEAR] = ACTIONS(36),
    [anon_sym_REASON_CLOSE] = ACTIONS(36),
    [anon_sym_REASON_CONNECTION] = ACTIONS(36),
    [anon_sym_REASON_DROP] = ACTIONS(36),
    [anon_sym_REASON_DUPLICATE] = ACTIONS(36),
    [anon_sym_REASON_INPUT] = ACTIONS(36),
    [anon_sym_REASON_INSERT] = ACTIONS(36),
    [anon_sym_REASON_MOVE] = ACTIONS(36),
    [anon_sym_REASON_OPEN] = ACTIONS(36),
    [anon_sym_REASON_PACK] = ACTIONS(36),
    [anon_sym_REASON_REMOVE] = ACTIONS(39),
    [anon_sym_REASON_REMOVE_CONNECTION] = ACTIONS(36),
    [anon_sym_REASON_REMOVE_ELEMENT] = ACTIONS(36),
    [anon_sym_REASON_SELECT] = ACTIONS(39),
    [anon_sym_REASON_SELECT_POINT] = ACTIONS(36),
    [anon_sym_REASON_SELECT_RECTANGLE] = ACTIONS(36),
    [anon_sym_REASON_UNSELECT] = ACTIONS(36),
    [anon_sym_END] = ACTIONS(42),
  },
  [4] = {
    [sym__expression] = STATE(2),
    [sym_string] = STATE(2),
    [sym_reason] = STATE(2),
    [sym_variable_definition] = STATE(2),
    [sym__datapool_block_expression] = STATE(2),
    [aux_sym_datapool_block_repeat1] = STATE(2),
    [anon_sym_SEMI] = ACTIONS(44),
    [sym_comment] = ACTIONS(44),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(44),
    [sym_true] = ACTIONS(44),
    [sym_false] = ACTIONS(44),
    [sym_eoln] = ACTIONS(44),
    [sym_invalid] = ACTIONS(44),
    [sym_none] = ACTIONS(44),
    [sym_primitive_type] = ACTIONS(19),
    [anon_sym_REASON_ACTIVATE] = ACTIONS(21),
    [anon_sym_REASON_CLEAR] = ACTIONS(21),
    [anon_sym_REASON_CLOSE] = ACTIONS(21),
    [anon_sym_REASON_CONNECTION] = ACTIONS(21),
    [anon_sym_REASON_DROP] = ACTIONS(21),
    [anon_sym_REASON_DUPLICATE] = ACTIONS(21),
    [anon_sym_REASON_INPUT] = ACTIONS(21),
    [anon_sym_REASON_INSERT] = ACTIONS(21),
    [anon_sym_REASON_MOVE] = ACTIONS(21),
    [anon_sym_REASON_OPEN] = ACTIONS(21),
    [anon_sym_REASON_PACK] = ACTIONS(21),
    [anon_sym_REASON_REMOVE] = ACTIONS(23),
    [anon_sym_REASON_REMOVE_CONNECTION] = ACTIONS(21),
    [anon_sym_REASON_REMOVE_ELEMENT] = ACTIONS(21),
    [anon_sym_REASON_SELECT] = ACTIONS(23),
    [anon_sym_REASON_SELECT_POINT] = ACTIONS(21),
    [anon_sym_REASON_SELECT_RECTANGLE] = ACTIONS(21),
    [anon_sym_REASON_UNSELECT] = ACTIONS(21),
    [anon_sym_END] = ACTIONS(46),
  },
  [5] = {
    [sym__high_level_blocks] = STATE(5),
    [sym__expression] = STATE(5),
    [sym_string] = STATE(5),
    [sym_reason] = STATE(5),
    [sym_datapool_block] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(48),
    [anon_sym_SEMI] = ACTIONS(50),
    [sym_comment] = ACTIONS(50),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [sym_number] = ACTIONS(50),
    [sym_true] = ACTIONS(50),
    [sym_false] = ACTIONS(50),
    [sym_eoln] = ACTIONS(50),
    [sym_invalid] = ACTIONS(50),
    [sym_none] = ACTIONS(50),
    [anon_sym_REASON_ACTIVATE] = ACTIONS(56),
    [anon_sym_REASON_CLEAR] = ACTIONS(56),
    [anon_sym_REASON_CLOSE] = ACTIONS(56),
    [anon_sym_REASON_CONNECTION] = ACTIONS(56),
    [anon_sym_REASON_DROP] = ACTIONS(56),
    [anon_sym_REASON_DUPLICATE] = ACTIONS(56),
    [anon_sym_REASON_INPUT] = ACTIONS(56),
    [anon_sym_REASON_INSERT] = ACTIONS(56),
    [anon_sym_REASON_MOVE] = ACTIONS(56),
    [anon_sym_REASON_OPEN] = ACTIONS(56),
    [anon_sym_REASON_PACK] = ACTIONS(56),
    [anon_sym_REASON_REMOVE] = ACTIONS(59),
    [anon_sym_REASON_REMOVE_CONNECTION] = ACTIONS(56),
    [anon_sym_REASON_REMOVE_ELEMENT] = ACTIONS(56),
    [anon_sym_REASON_SELECT] = ACTIONS(59),
    [anon_sym_REASON_SELECT_POINT] = ACTIONS(56),
    [anon_sym_REASON_SELECT_RECTANGLE] = ACTIONS(56),
    [anon_sym_REASON_UNSELECT] = ACTIONS(56),
    [anon_sym_DATAPOOL] = ACTIONS(62),
  },
  [6] = {
    [sym__high_level_blocks] = STATE(5),
    [sym__expression] = STATE(5),
    [sym_string] = STATE(5),
    [sym_reason] = STATE(5),
    [sym_datapool_block] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(67),
    [sym_comment] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_number] = ACTIONS(67),
    [sym_true] = ACTIONS(67),
    [sym_false] = ACTIONS(67),
    [sym_eoln] = ACTIONS(67),
    [sym_invalid] = ACTIONS(67),
    [sym_none] = ACTIONS(67),
    [anon_sym_REASON_ACTIVATE] = ACTIONS(9),
    [anon_sym_REASON_CLEAR] = ACTIONS(9),
    [anon_sym_REASON_CLOSE] = ACTIONS(9),
    [anon_sym_REASON_CONNECTION] = ACTIONS(9),
    [anon_sym_REASON_DROP] = ACTIONS(9),
    [anon_sym_REASON_DUPLICATE] = ACTIONS(9),
    [anon_sym_REASON_INPUT] = ACTIONS(9),
    [anon_sym_REASON_INSERT] = ACTIONS(9),
    [anon_sym_REASON_MOVE] = ACTIONS(9),
    [anon_sym_REASON_OPEN] = ACTIONS(9),
    [anon_sym_REASON_PACK] = ACTIONS(9),
    [anon_sym_REASON_REMOVE] = ACTIONS(11),
    [anon_sym_REASON_REMOVE_CONNECTION] = ACTIONS(9),
    [anon_sym_REASON_REMOVE_ELEMENT] = ACTIONS(9),
    [anon_sym_REASON_SELECT] = ACTIONS(11),
    [anon_sym_REASON_SELECT_POINT] = ACTIONS(9),
    [anon_sym_REASON_SELECT_RECTANGLE] = ACTIONS(9),
    [anon_sym_REASON_UNSELECT] = ACTIONS(9),
    [anon_sym_DATAPOOL] = ACTIONS(13),
  },
  [7] = {
    [anon_sym_SEMI] = ACTIONS(69),
    [sym_comment] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(69),
    [sym_true] = ACTIONS(69),
    [sym_false] = ACTIONS(69),
    [sym_eoln] = ACTIONS(69),
    [sym_invalid] = ACTIONS(69),
    [sym_none] = ACTIONS(69),
    [sym_primitive_type] = ACTIONS(69),
    [anon_sym_REASON_ACTIVATE] = ACTIONS(69),
    [anon_sym_REASON_CLEAR] = ACTIONS(69),
    [anon_sym_REASON_CLOSE] = ACTIONS(69),
    [anon_sym_REASON_CONNECTION] = ACTIONS(69),
    [anon_sym_REASON_DROP] = ACTIONS(69),
    [anon_sym_REASON_DUPLICATE] = ACTIONS(69),
    [anon_sym_REASON_INPUT] = ACTIONS(69),
    [anon_sym_REASON_INSERT] = ACTIONS(69),
    [anon_sym_REASON_MOVE] = ACTIONS(69),
    [anon_sym_REASON_OPEN] = ACTIONS(69),
    [anon_sym_REASON_PACK] = ACTIONS(69),
    [anon_sym_REASON_REMOVE] = ACTIONS(71),
    [anon_sym_REASON_REMOVE_CONNECTION] = ACTIONS(69),
    [anon_sym_REASON_REMOVE_ELEMENT] = ACTIONS(69),
    [anon_sym_REASON_SELECT] = ACTIONS(71),
    [anon_sym_REASON_SELECT_POINT] = ACTIONS(69),
    [anon_sym_REASON_SELECT_RECTANGLE] = ACTIONS(69),
    [anon_sym_REASON_UNSELECT] = ACTIONS(69),
    [anon_sym_END] = ACTIONS(69),
  },
  [8] = {
    [anon_sym_SEMI] = ACTIONS(73),
    [sym_comment] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [sym_number] = ACTIONS(73),
    [sym_true] = ACTIONS(73),
    [sym_false] = ACTIONS(73),
    [sym_eoln] = ACTIONS(73),
    [sym_invalid] = ACTIONS(73),
    [sym_none] = ACTIONS(73),
    [sym_primitive_type] = ACTIONS(73),
    [anon_sym_REASON_ACTIVATE] = ACTIONS(73),
    [anon_sym_REASON_CLEAR] = ACTIONS(73),
    [anon_sym_REASON_CLOSE] = ACTIONS(73),
    [anon_sym_REASON_CONNECTION] = ACTIONS(73),
    [anon_sym_REASON_DROP] = ACTIONS(73),
    [anon_sym_REASON_DUPLICATE] = ACTIONS(73),
    [anon_sym_REASON_INPUT] = ACTIONS(73),
    [anon_sym_REASON_INSERT] = ACTIONS(73),
    [anon_sym_REASON_MOVE] = ACTIONS(73),
    [anon_sym_REASON_OPEN] = ACTIONS(73),
    [anon_sym_REASON_PACK] = ACTIONS(73),
    [anon_sym_REASON_REMOVE] = ACTIONS(75),
    [anon_sym_REASON_REMOVE_CONNECTION] = ACTIONS(73),
    [anon_sym_REASON_REMOVE_ELEMENT] = ACTIONS(73),
    [anon_sym_REASON_SELECT] = ACTIONS(75),
    [anon_sym_REASON_SELECT_POINT] = ACTIONS(73),
    [anon_sym_REASON_SELECT_RECTANGLE] = ACTIONS(73),
    [anon_sym_REASON_UNSELECT] = ACTIONS(73),
    [anon_sym_END] = ACTIONS(73),
  },
  [9] = {
    [anon_sym_SEMI] = ACTIONS(77),
    [sym_comment] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [sym_number] = ACTIONS(77),
    [sym_true] = ACTIONS(77),
    [sym_false] = ACTIONS(77),
    [sym_eoln] = ACTIONS(77),
    [sym_invalid] = ACTIONS(77),
    [sym_none] = ACTIONS(77),
    [sym_primitive_type] = ACTIONS(77),
    [anon_sym_REASON_ACTIVATE] = ACTIONS(77),
    [anon_sym_REASON_CLEAR] = ACTIONS(77),
    [anon_sym_REASON_CLOSE] = ACTIONS(77),
    [anon_sym_REASON_CONNECTION] = ACTIONS(77),
    [anon_sym_REASON_DROP] = ACTIONS(77),
    [anon_sym_REASON_DUPLICATE] = ACTIONS(77),
    [anon_sym_REASON_INPUT] = ACTIONS(77),
    [anon_sym_REASON_INSERT] = ACTIONS(77),
    [anon_sym_REASON_MOVE] = ACTIONS(77),
    [anon_sym_REASON_OPEN] = ACTIONS(77),
    [anon_sym_REASON_PACK] = ACTIONS(77),
    [anon_sym_REASON_REMOVE] = ACTIONS(79),
    [anon_sym_REASON_REMOVE_CONNECTION] = ACTIONS(77),
    [anon_sym_REASON_REMOVE_ELEMENT] = ACTIONS(77),
    [anon_sym_REASON_SELECT] = ACTIONS(79),
    [anon_sym_REASON_SELECT_POINT] = ACTIONS(77),
    [anon_sym_REASON_SELECT_RECTANGLE] = ACTIONS(77),
    [anon_sym_REASON_UNSELECT] = ACTIONS(77),
    [anon_sym_END] = ACTIONS(77),
  },
  [10] = {
    [anon_sym_SEMI] = ACTIONS(81),
    [sym_comment] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym_number] = ACTIONS(81),
    [sym_true] = ACTIONS(81),
    [sym_false] = ACTIONS(81),
    [sym_eoln] = ACTIONS(81),
    [sym_invalid] = ACTIONS(81),
    [sym_none] = ACTIONS(81),
    [sym_primitive_type] = ACTIONS(81),
    [anon_sym_REASON_ACTIVATE] = ACTIONS(81),
    [anon_sym_REASON_CLEAR] = ACTIONS(81),
    [anon_sym_REASON_CLOSE] = ACTIONS(81),
    [anon_sym_REASON_CONNECTION] = ACTIONS(81),
    [anon_sym_REASON_DROP] = ACTIONS(81),
    [anon_sym_REASON_DUPLICATE] = ACTIONS(81),
    [anon_sym_REASON_INPUT] = ACTIONS(81),
    [anon_sym_REASON_INSERT] = ACTIONS(81),
    [anon_sym_REASON_MOVE] = ACTIONS(81),
    [anon_sym_REASON_OPEN] = ACTIONS(81),
    [anon_sym_REASON_PACK] = ACTIONS(81),
    [anon_sym_REASON_REMOVE] = ACTIONS(83),
    [anon_sym_REASON_REMOVE_CONNECTION] = ACTIONS(81),
    [anon_sym_REASON_REMOVE_ELEMENT] = ACTIONS(81),
    [anon_sym_REASON_SELECT] = ACTIONS(83),
    [anon_sym_REASON_SELECT_POINT] = ACTIONS(81),
    [anon_sym_REASON_SELECT_RECTANGLE] = ACTIONS(81),
    [anon_sym_REASON_UNSELECT] = ACTIONS(81),
    [anon_sym_END] = ACTIONS(81),
  },
  [11] = {
    [anon_sym_SEMI] = ACTIONS(85),
    [sym_comment] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_number] = ACTIONS(85),
    [sym_true] = ACTIONS(85),
    [sym_false] = ACTIONS(85),
    [sym_eoln] = ACTIONS(85),
    [sym_invalid] = ACTIONS(85),
    [sym_none] = ACTIONS(85),
    [sym_primitive_type] = ACTIONS(85),
    [anon_sym_REASON_ACTIVATE] = ACTIONS(85),
    [anon_sym_REASON_CLEAR] = ACTIONS(85),
    [anon_sym_REASON_CLOSE] = ACTIONS(85),
    [anon_sym_REASON_CONNECTION] = ACTIONS(85),
    [anon_sym_REASON_DROP] = ACTIONS(85),
    [anon_sym_REASON_DUPLICATE] = ACTIONS(85),
    [anon_sym_REASON_INPUT] = ACTIONS(85),
    [anon_sym_REASON_INSERT] = ACTIONS(85),
    [anon_sym_REASON_MOVE] = ACTIONS(85),
    [anon_sym_REASON_OPEN] = ACTIONS(85),
    [anon_sym_REASON_PACK] = ACTIONS(85),
    [anon_sym_REASON_REMOVE] = ACTIONS(87),
    [anon_sym_REASON_REMOVE_CONNECTION] = ACTIONS(85),
    [anon_sym_REASON_REMOVE_ELEMENT] = ACTIONS(85),
    [anon_sym_REASON_SELECT] = ACTIONS(87),
    [anon_sym_REASON_SELECT_POINT] = ACTIONS(85),
    [anon_sym_REASON_SELECT_RECTANGLE] = ACTIONS(85),
    [anon_sym_REASON_UNSELECT] = ACTIONS(85),
    [anon_sym_END] = ACTIONS(85),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_SEMI] = ACTIONS(89),
    [sym_comment] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [sym_number] = ACTIONS(89),
    [sym_true] = ACTIONS(89),
    [sym_false] = ACTIONS(89),
    [sym_eoln] = ACTIONS(89),
    [sym_invalid] = ACTIONS(89),
    [sym_none] = ACTIONS(89),
    [anon_sym_REASON_ACTIVATE] = ACTIONS(89),
    [anon_sym_REASON_CLEAR] = ACTIONS(89),
    [anon_sym_REASON_CLOSE] = ACTIONS(89),
    [anon_sym_REASON_CONNECTION] = ACTIONS(89),
    [anon_sym_REASON_DROP] = ACTIONS(89),
    [anon_sym_REASON_DUPLICATE] = ACTIONS(89),
    [anon_sym_REASON_INPUT] = ACTIONS(89),
    [anon_sym_REASON_INSERT] = ACTIONS(89),
    [anon_sym_REASON_MOVE] = ACTIONS(89),
    [anon_sym_REASON_OPEN] = ACTIONS(89),
    [anon_sym_REASON_PACK] = ACTIONS(89),
    [anon_sym_REASON_REMOVE] = ACTIONS(91),
    [anon_sym_REASON_REMOVE_CONNECTION] = ACTIONS(89),
    [anon_sym_REASON_REMOVE_ELEMENT] = ACTIONS(89),
    [anon_sym_REASON_SELECT] = ACTIONS(91),
    [anon_sym_REASON_SELECT_POINT] = ACTIONS(89),
    [anon_sym_REASON_SELECT_RECTANGLE] = ACTIONS(89),
    [anon_sym_REASON_UNSELECT] = ACTIONS(89),
    [anon_sym_DATAPOOL] = ACTIONS(89),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_SEMI] = ACTIONS(85),
    [sym_comment] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_number] = ACTIONS(85),
    [sym_true] = ACTIONS(85),
    [sym_false] = ACTIONS(85),
    [sym_eoln] = ACTIONS(85),
    [sym_invalid] = ACTIONS(85),
    [sym_none] = ACTIONS(85),
    [anon_sym_REASON_ACTIVATE] = ACTIONS(85),
    [anon_sym_REASON_CLEAR] = ACTIONS(85),
    [anon_sym_REASON_CLOSE] = ACTIONS(85),
    [anon_sym_REASON_CONNECTION] = ACTIONS(85),
    [anon_sym_REASON_DROP] = ACTIONS(85),
    [anon_sym_REASON_DUPLICATE] = ACTIONS(85),
    [anon_sym_REASON_INPUT] = ACTIONS(85),
    [anon_sym_REASON_INSERT] = ACTIONS(85),
    [anon_sym_REASON_MOVE] = ACTIONS(85),
    [anon_sym_REASON_OPEN] = ACTIONS(85),
    [anon_sym_REASON_PACK] = ACTIONS(85),
    [anon_sym_REASON_REMOVE] = ACTIONS(87),
    [anon_sym_REASON_REMOVE_CONNECTION] = ACTIONS(85),
    [anon_sym_REASON_REMOVE_ELEMENT] = ACTIONS(85),
    [anon_sym_REASON_SELECT] = ACTIONS(87),
    [anon_sym_REASON_SELECT_POINT] = ACTIONS(85),
    [anon_sym_REASON_SELECT_RECTANGLE] = ACTIONS(85),
    [anon_sym_REASON_UNSELECT] = ACTIONS(85),
    [anon_sym_DATAPOOL] = ACTIONS(85),
  },
  [14] = {
    [anon_sym_SEMI] = ACTIONS(93),
    [sym_comment] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [sym_number] = ACTIONS(93),
    [sym_true] = ACTIONS(93),
    [sym_false] = ACTIONS(93),
    [sym_eoln] = ACTIONS(93),
    [sym_invalid] = ACTIONS(93),
    [sym_none] = ACTIONS(93),
    [sym_primitive_type] = ACTIONS(93),
    [anon_sym_REASON_ACTIVATE] = ACTIONS(93),
    [anon_sym_REASON_CLEAR] = ACTIONS(93),
    [anon_sym_REASON_CLOSE] = ACTIONS(93),
    [anon_sym_REASON_CONNECTION] = ACTIONS(93),
    [anon_sym_REASON_DROP] = ACTIONS(93),
    [anon_sym_REASON_DUPLICATE] = ACTIONS(93),
    [anon_sym_REASON_INPUT] = ACTIONS(93),
    [anon_sym_REASON_INSERT] = ACTIONS(93),
    [anon_sym_REASON_MOVE] = ACTIONS(93),
    [anon_sym_REASON_OPEN] = ACTIONS(93),
    [anon_sym_REASON_PACK] = ACTIONS(93),
    [anon_sym_REASON_REMOVE] = ACTIONS(95),
    [anon_sym_REASON_REMOVE_CONNECTION] = ACTIONS(93),
    [anon_sym_REASON_REMOVE_ELEMENT] = ACTIONS(93),
    [anon_sym_REASON_SELECT] = ACTIONS(95),
    [anon_sym_REASON_SELECT_POINT] = ACTIONS(93),
    [anon_sym_REASON_SELECT_RECTANGLE] = ACTIONS(93),
    [anon_sym_REASON_UNSELECT] = ACTIONS(93),
    [anon_sym_END] = ACTIONS(93),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(97),
    [sym_comment] = ACTIONS(97),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_number] = ACTIONS(97),
    [sym_true] = ACTIONS(97),
    [sym_false] = ACTIONS(97),
    [sym_eoln] = ACTIONS(97),
    [sym_invalid] = ACTIONS(97),
    [sym_none] = ACTIONS(97),
    [anon_sym_REASON_ACTIVATE] = ACTIONS(97),
    [anon_sym_REASON_CLEAR] = ACTIONS(97),
    [anon_sym_REASON_CLOSE] = ACTIONS(97),
    [anon_sym_REASON_CONNECTION] = ACTIONS(97),
    [anon_sym_REASON_DROP] = ACTIONS(97),
    [anon_sym_REASON_DUPLICATE] = ACTIONS(97),
    [anon_sym_REASON_INPUT] = ACTIONS(97),
    [anon_sym_REASON_INSERT] = ACTIONS(97),
    [anon_sym_REASON_MOVE] = ACTIONS(97),
    [anon_sym_REASON_OPEN] = ACTIONS(97),
    [anon_sym_REASON_PACK] = ACTIONS(97),
    [anon_sym_REASON_REMOVE] = ACTIONS(99),
    [anon_sym_REASON_REMOVE_CONNECTION] = ACTIONS(97),
    [anon_sym_REASON_REMOVE_ELEMENT] = ACTIONS(97),
    [anon_sym_REASON_SELECT] = ACTIONS(99),
    [anon_sym_REASON_SELECT_POINT] = ACTIONS(97),
    [anon_sym_REASON_SELECT_RECTANGLE] = ACTIONS(97),
    [anon_sym_REASON_UNSELECT] = ACTIONS(97),
    [anon_sym_DATAPOOL] = ACTIONS(97),
  },
  [16] = {
    [anon_sym_SEMI] = ACTIONS(101),
    [sym_comment] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_number] = ACTIONS(101),
    [sym_true] = ACTIONS(101),
    [sym_false] = ACTIONS(101),
    [sym_eoln] = ACTIONS(101),
    [sym_invalid] = ACTIONS(101),
    [sym_none] = ACTIONS(101),
    [sym_primitive_type] = ACTIONS(101),
    [anon_sym_REASON_ACTIVATE] = ACTIONS(101),
    [anon_sym_REASON_CLEAR] = ACTIONS(101),
    [anon_sym_REASON_CLOSE] = ACTIONS(101),
    [anon_sym_REASON_CONNECTION] = ACTIONS(101),
    [anon_sym_REASON_DROP] = ACTIONS(101),
    [anon_sym_REASON_DUPLICATE] = ACTIONS(101),
    [anon_sym_REASON_INPUT] = ACTIONS(101),
    [anon_sym_REASON_INSERT] = ACTIONS(101),
    [anon_sym_REASON_MOVE] = ACTIONS(101),
    [anon_sym_REASON_OPEN] = ACTIONS(101),
    [anon_sym_REASON_PACK] = ACTIONS(101),
    [anon_sym_REASON_REMOVE] = ACTIONS(103),
    [anon_sym_REASON_REMOVE_CONNECTION] = ACTIONS(101),
    [anon_sym_REASON_REMOVE_ELEMENT] = ACTIONS(101),
    [anon_sym_REASON_SELECT] = ACTIONS(103),
    [anon_sym_REASON_SELECT_POINT] = ACTIONS(101),
    [anon_sym_REASON_SELECT_RECTANGLE] = ACTIONS(101),
    [anon_sym_REASON_UNSELECT] = ACTIONS(101),
    [anon_sym_END] = ACTIONS(101),
  },
  [17] = {
    [anon_sym_SEMI] = ACTIONS(105),
    [sym_comment] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [sym_number] = ACTIONS(105),
    [sym_true] = ACTIONS(105),
    [sym_false] = ACTIONS(105),
    [sym_eoln] = ACTIONS(105),
    [sym_invalid] = ACTIONS(105),
    [sym_none] = ACTIONS(105),
    [sym_primitive_type] = ACTIONS(105),
    [anon_sym_REASON_ACTIVATE] = ACTIONS(105),
    [anon_sym_REASON_CLEAR] = ACTIONS(105),
    [anon_sym_REASON_CLOSE] = ACTIONS(105),
    [anon_sym_REASON_CONNECTION] = ACTIONS(105),
    [anon_sym_REASON_DROP] = ACTIONS(105),
    [anon_sym_REASON_DUPLICATE] = ACTIONS(105),
    [anon_sym_REASON_INPUT] = ACTIONS(105),
    [anon_sym_REASON_INSERT] = ACTIONS(105),
    [anon_sym_REASON_MOVE] = ACTIONS(105),
    [anon_sym_REASON_OPEN] = ACTIONS(105),
    [anon_sym_REASON_PACK] = ACTIONS(105),
    [anon_sym_REASON_REMOVE] = ACTIONS(107),
    [anon_sym_REASON_REMOVE_CONNECTION] = ACTIONS(105),
    [anon_sym_REASON_REMOVE_ELEMENT] = ACTIONS(105),
    [anon_sym_REASON_SELECT] = ACTIONS(107),
    [anon_sym_REASON_SELECT_POINT] = ACTIONS(105),
    [anon_sym_REASON_SELECT_RECTANGLE] = ACTIONS(105),
    [anon_sym_REASON_UNSELECT] = ACTIONS(105),
    [anon_sym_END] = ACTIONS(105),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(109),
    [anon_sym_SEMI] = ACTIONS(109),
    [sym_comment] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [sym_number] = ACTIONS(109),
    [sym_true] = ACTIONS(109),
    [sym_false] = ACTIONS(109),
    [sym_eoln] = ACTIONS(109),
    [sym_invalid] = ACTIONS(109),
    [sym_none] = ACTIONS(109),
    [anon_sym_REASON_ACTIVATE] = ACTIONS(109),
    [anon_sym_REASON_CLEAR] = ACTIONS(109),
    [anon_sym_REASON_CLOSE] = ACTIONS(109),
    [anon_sym_REASON_CONNECTION] = ACTIONS(109),
    [anon_sym_REASON_DROP] = ACTIONS(109),
    [anon_sym_REASON_DUPLICATE] = ACTIONS(109),
    [anon_sym_REASON_INPUT] = ACTIONS(109),
    [anon_sym_REASON_INSERT] = ACTIONS(109),
    [anon_sym_REASON_MOVE] = ACTIONS(109),
    [anon_sym_REASON_OPEN] = ACTIONS(109),
    [anon_sym_REASON_PACK] = ACTIONS(109),
    [anon_sym_REASON_REMOVE] = ACTIONS(111),
    [anon_sym_REASON_REMOVE_CONNECTION] = ACTIONS(109),
    [anon_sym_REASON_REMOVE_ELEMENT] = ACTIONS(109),
    [anon_sym_REASON_SELECT] = ACTIONS(111),
    [anon_sym_REASON_SELECT_POINT] = ACTIONS(109),
    [anon_sym_REASON_SELECT_RECTANGLE] = ACTIONS(109),
    [anon_sym_REASON_UNSELECT] = ACTIONS(109),
    [anon_sym_DATAPOOL] = ACTIONS(109),
  },
  [19] = {
    [anon_sym_SEMI] = ACTIONS(89),
    [sym_comment] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [sym_number] = ACTIONS(89),
    [sym_true] = ACTIONS(89),
    [sym_false] = ACTIONS(89),
    [sym_eoln] = ACTIONS(89),
    [sym_invalid] = ACTIONS(89),
    [sym_none] = ACTIONS(89),
    [sym_primitive_type] = ACTIONS(89),
    [anon_sym_REASON_ACTIVATE] = ACTIONS(89),
    [anon_sym_REASON_CLEAR] = ACTIONS(89),
    [anon_sym_REASON_CLOSE] = ACTIONS(89),
    [anon_sym_REASON_CONNECTION] = ACTIONS(89),
    [anon_sym_REASON_DROP] = ACTIONS(89),
    [anon_sym_REASON_DUPLICATE] = ACTIONS(89),
    [anon_sym_REASON_INPUT] = ACTIONS(89),
    [anon_sym_REASON_INSERT] = ACTIONS(89),
    [anon_sym_REASON_MOVE] = ACTIONS(89),
    [anon_sym_REASON_OPEN] = ACTIONS(89),
    [anon_sym_REASON_PACK] = ACTIONS(89),
    [anon_sym_REASON_REMOVE] = ACTIONS(91),
    [anon_sym_REASON_REMOVE_CONNECTION] = ACTIONS(89),
    [anon_sym_REASON_REMOVE_ELEMENT] = ACTIONS(89),
    [anon_sym_REASON_SELECT] = ACTIONS(91),
    [anon_sym_REASON_SELECT_POINT] = ACTIONS(89),
    [anon_sym_REASON_SELECT_RECTANGLE] = ACTIONS(89),
    [anon_sym_REASON_UNSELECT] = ACTIONS(89),
    [anon_sym_END] = ACTIONS(89),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(73),
    [sym_comment] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [sym_number] = ACTIONS(73),
    [sym_true] = ACTIONS(73),
    [sym_false] = ACTIONS(73),
    [sym_eoln] = ACTIONS(73),
    [sym_invalid] = ACTIONS(73),
    [sym_none] = ACTIONS(73),
    [anon_sym_REASON_ACTIVATE] = ACTIONS(73),
    [anon_sym_REASON_CLEAR] = ACTIONS(73),
    [anon_sym_REASON_CLOSE] = ACTIONS(73),
    [anon_sym_REASON_CONNECTION] = ACTIONS(73),
    [anon_sym_REASON_DROP] = ACTIONS(73),
    [anon_sym_REASON_DUPLICATE] = ACTIONS(73),
    [anon_sym_REASON_INPUT] = ACTIONS(73),
    [anon_sym_REASON_INSERT] = ACTIONS(73),
    [anon_sym_REASON_MOVE] = ACTIONS(73),
    [anon_sym_REASON_OPEN] = ACTIONS(73),
    [anon_sym_REASON_PACK] = ACTIONS(73),
    [anon_sym_REASON_REMOVE] = ACTIONS(75),
    [anon_sym_REASON_REMOVE_CONNECTION] = ACTIONS(73),
    [anon_sym_REASON_REMOVE_ELEMENT] = ACTIONS(73),
    [anon_sym_REASON_SELECT] = ACTIONS(75),
    [anon_sym_REASON_SELECT_POINT] = ACTIONS(73),
    [anon_sym_REASON_SELECT_RECTANGLE] = ACTIONS(73),
    [anon_sym_REASON_UNSELECT] = ACTIONS(73),
    [anon_sym_DATAPOOL] = ACTIONS(73),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(113), 1,
      anon_sym_SEMI,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    ACTIONS(117), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_parameter_block,
    STATE(28), 1,
      aux_sym_variable_definition_repeat1,
  [16] = 5,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    ACTIONS(117), 1,
      anon_sym_LBRACE,
    ACTIONS(119), 1,
      anon_sym_SEMI,
    STATE(39), 1,
      aux_sym_variable_definition_repeat1,
    STATE(41), 1,
      sym_parameter_block,
  [32] = 3,
    ACTIONS(117), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_parameter_block,
    ACTIONS(121), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [43] = 1,
    ACTIONS(123), 3,
      sym_identifier,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [49] = 3,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    ACTIONS(125), 1,
      anon_sym_SEMI,
    STATE(37), 1,
      aux_sym_variable_definition_repeat1,
  [59] = 3,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      aux_sym_parameter_block_repeat1,
  [69] = 3,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      aux_sym_string_token1,
    STATE(33), 1,
      aux_sym_string_repeat1,
  [79] = 3,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    ACTIONS(125), 1,
      anon_sym_SEMI,
    STATE(32), 1,
      aux_sym_variable_definition_repeat1,
  [89] = 3,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      aux_sym_string_token1,
    STATE(38), 1,
      aux_sym_string_repeat1,
  [99] = 3,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      aux_sym_string_token1,
    STATE(29), 1,
      aux_sym_string_repeat1,
  [109] = 3,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    ACTIONS(143), 1,
      anon_sym_SEMI,
    STATE(32), 1,
      aux_sym_variable_definition_repeat1,
  [119] = 3,
    ACTIONS(145), 1,
      anon_sym_SEMI,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym_variable_definition_repeat1,
  [129] = 3,
    ACTIONS(137), 1,
      aux_sym_string_token1,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
    STATE(38), 1,
      aux_sym_string_repeat1,
  [139] = 1,
    ACTIONS(152), 3,
      sym_identifier,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [145] = 3,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      aux_sym_parameter_block_repeat1,
  [155] = 3,
    ACTIONS(117), 1,
      anon_sym_LBRACE,
    ACTIONS(156), 1,
      sym_identifier,
    STATE(48), 1,
      sym_parameter_block,
  [165] = 3,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    ACTIONS(158), 1,
      anon_sym_SEMI,
    STATE(32), 1,
      aux_sym_variable_definition_repeat1,
  [175] = 3,
    ACTIONS(160), 1,
      anon_sym_DQUOTE,
    ACTIONS(162), 1,
      aux_sym_string_token1,
    STATE(38), 1,
      aux_sym_string_repeat1,
  [185] = 3,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    ACTIONS(165), 1,
      anon_sym_SEMI,
    STATE(32), 1,
      aux_sym_variable_definition_repeat1,
  [195] = 3,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      aux_sym_parameter_block_repeat1,
  [205] = 3,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    ACTIONS(165), 1,
      anon_sym_SEMI,
    STATE(31), 1,
      aux_sym_variable_definition_repeat1,
  [215] = 1,
    ACTIONS(170), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [220] = 1,
    ACTIONS(172), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [225] = 1,
    ACTIONS(174), 1,
      sym_identifier,
  [229] = 1,
    ACTIONS(176), 1,
      anon_sym_DATAPOOL,
  [233] = 1,
    ACTIONS(178), 1,
      aux_sym_parameter_block_token1,
  [237] = 1,
    ACTIONS(180), 1,
      anon_sym_DATAPOOL,
  [241] = 1,
    ACTIONS(182), 1,
      sym_identifier,
  [245] = 1,
    ACTIONS(184), 1,
      aux_sym_parameter_block_token1,
  [249] = 1,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
  [253] = 1,
    ACTIONS(188), 1,
      anon_sym_SEMI,
  [257] = 1,
    ACTIONS(190), 1,
      anon_sym_SEMI,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(21)] = 0,
  [SMALL_STATE(22)] = 16,
  [SMALL_STATE(23)] = 32,
  [SMALL_STATE(24)] = 43,
  [SMALL_STATE(25)] = 49,
  [SMALL_STATE(26)] = 59,
  [SMALL_STATE(27)] = 69,
  [SMALL_STATE(28)] = 79,
  [SMALL_STATE(29)] = 89,
  [SMALL_STATE(30)] = 99,
  [SMALL_STATE(31)] = 109,
  [SMALL_STATE(32)] = 119,
  [SMALL_STATE(33)] = 129,
  [SMALL_STATE(34)] = 139,
  [SMALL_STATE(35)] = 145,
  [SMALL_STATE(36)] = 155,
  [SMALL_STATE(37)] = 165,
  [SMALL_STATE(38)] = 175,
  [SMALL_STATE(39)] = 185,
  [SMALL_STATE(40)] = 195,
  [SMALL_STATE(41)] = 205,
  [SMALL_STATE(42)] = 215,
  [SMALL_STATE(43)] = 220,
  [SMALL_STATE(44)] = 225,
  [SMALL_STATE(45)] = 229,
  [SMALL_STATE(46)] = 233,
  [SMALL_STATE(47)] = 237,
  [SMALL_STATE(48)] = 241,
  [SMALL_STATE(49)] = 245,
  [SMALL_STATE(50)] = 249,
  [SMALL_STATE(51)] = 253,
  [SMALL_STATE(52)] = 257,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(3),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(30),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(36),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(8),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(8),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5, .production_id = 4),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5, .production_id = 4),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reason, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reason, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6, .production_id = 6),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 6, .production_id = 6),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3, .production_id = 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 3, .production_id = 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5, .production_id = 5),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5, .production_id = 5),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datapool_block, 5),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datapool_block, 5),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4, .production_id = 4),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 4, .production_id = 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4, .production_id = 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 4, .production_id = 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datapool_block, 4),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datapool_block, 4),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2, .production_id = 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_block, 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2, .production_id = 3),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2, .production_id = 3), SHIFT_REPEAT(44),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_block, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(38),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_block_repeat1, 2), SHIFT_REPEAT(49),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_block_repeat1, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 3, .production_id = 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [186] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_intens(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .field_count = FIELD_COUNT,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .field_names = ts_field_names,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
