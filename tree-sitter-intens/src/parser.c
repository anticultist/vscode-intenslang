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
#define STATE_COUNT 107
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 75
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
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
  anon_sym_LANGUAGE = 35,
  anon_sym_END = 36,
  anon_sym_DATAPOOL = 37,
  anon_sym_STREAMER = 38,
  anon_sym_OPERATOR = 39,
  anon_sym_FUNCTIONS = 40,
  anon_sym_UI_MANAGER = 41,
  anon_sym_DB_MANAGER = 42,
  sym_source_file = 43,
  sym__high_level_blocks = 44,
  sym__expression = 45,
  sym_string = 46,
  sym_reason = 47,
  sym_variable_definition = 48,
  sym_parameter_block = 49,
  sym_language_block = 50,
  sym__language_block_expression = 51,
  sym_datapool_block = 52,
  sym__datapool_block_expression = 53,
  sym_streamer_block = 54,
  sym__streamer_block_expression = 55,
  sym_operator_block = 56,
  sym__operator_block_expression = 57,
  sym_functions_block = 58,
  sym__functions_block_expression = 59,
  sym_ui_manager_block = 60,
  sym__ui_manager_block_expression = 61,
  sym_db_manager_block = 62,
  sym__db_manager_block_expression = 63,
  aux_sym_source_file_repeat1 = 64,
  aux_sym_string_repeat1 = 65,
  aux_sym_variable_definition_repeat1 = 66,
  aux_sym_parameter_block_repeat1 = 67,
  aux_sym_language_block_repeat1 = 68,
  aux_sym_datapool_block_repeat1 = 69,
  aux_sym_streamer_block_repeat1 = 70,
  aux_sym_operator_block_repeat1 = 71,
  aux_sym_functions_block_repeat1 = 72,
  aux_sym_ui_manager_block_repeat1 = 73,
  aux_sym_db_manager_block_repeat1 = 74,
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
  [anon_sym_LANGUAGE] = "LANGUAGE",
  [anon_sym_END] = "END",
  [anon_sym_DATAPOOL] = "DATAPOOL",
  [anon_sym_STREAMER] = "STREAMER",
  [anon_sym_OPERATOR] = "OPERATOR",
  [anon_sym_FUNCTIONS] = "FUNCTIONS",
  [anon_sym_UI_MANAGER] = "UI_MANAGER",
  [anon_sym_DB_MANAGER] = "DB_MANAGER",
  [sym_source_file] = "source_file",
  [sym__high_level_blocks] = "_high_level_blocks",
  [sym__expression] = "_expression",
  [sym_string] = "string",
  [sym_reason] = "reason",
  [sym_variable_definition] = "variable_definition",
  [sym_parameter_block] = "parameter_block",
  [sym_language_block] = "language_block",
  [sym__language_block_expression] = "_language_block_expression",
  [sym_datapool_block] = "datapool_block",
  [sym__datapool_block_expression] = "_datapool_block_expression",
  [sym_streamer_block] = "streamer_block",
  [sym__streamer_block_expression] = "_streamer_block_expression",
  [sym_operator_block] = "operator_block",
  [sym__operator_block_expression] = "_operator_block_expression",
  [sym_functions_block] = "functions_block",
  [sym__functions_block_expression] = "_functions_block_expression",
  [sym_ui_manager_block] = "ui_manager_block",
  [sym__ui_manager_block_expression] = "_ui_manager_block_expression",
  [sym_db_manager_block] = "db_manager_block",
  [sym__db_manager_block_expression] = "_db_manager_block_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_variable_definition_repeat1] = "variable_definition_repeat1",
  [aux_sym_parameter_block_repeat1] = "parameter_block_repeat1",
  [aux_sym_language_block_repeat1] = "language_block_repeat1",
  [aux_sym_datapool_block_repeat1] = "datapool_block_repeat1",
  [aux_sym_streamer_block_repeat1] = "streamer_block_repeat1",
  [aux_sym_operator_block_repeat1] = "operator_block_repeat1",
  [aux_sym_functions_block_repeat1] = "functions_block_repeat1",
  [aux_sym_ui_manager_block_repeat1] = "ui_manager_block_repeat1",
  [aux_sym_db_manager_block_repeat1] = "db_manager_block_repeat1",
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
  [anon_sym_LANGUAGE] = anon_sym_LANGUAGE,
  [anon_sym_END] = anon_sym_END,
  [anon_sym_DATAPOOL] = anon_sym_DATAPOOL,
  [anon_sym_STREAMER] = anon_sym_STREAMER,
  [anon_sym_OPERATOR] = anon_sym_OPERATOR,
  [anon_sym_FUNCTIONS] = anon_sym_FUNCTIONS,
  [anon_sym_UI_MANAGER] = anon_sym_UI_MANAGER,
  [anon_sym_DB_MANAGER] = anon_sym_DB_MANAGER,
  [sym_source_file] = sym_source_file,
  [sym__high_level_blocks] = sym__high_level_blocks,
  [sym__expression] = sym__expression,
  [sym_string] = sym_string,
  [sym_reason] = sym_reason,
  [sym_variable_definition] = sym_variable_definition,
  [sym_parameter_block] = sym_parameter_block,
  [sym_language_block] = sym_language_block,
  [sym__language_block_expression] = sym__language_block_expression,
  [sym_datapool_block] = sym_datapool_block,
  [sym__datapool_block_expression] = sym__datapool_block_expression,
  [sym_streamer_block] = sym_streamer_block,
  [sym__streamer_block_expression] = sym__streamer_block_expression,
  [sym_operator_block] = sym_operator_block,
  [sym__operator_block_expression] = sym__operator_block_expression,
  [sym_functions_block] = sym_functions_block,
  [sym__functions_block_expression] = sym__functions_block_expression,
  [sym_ui_manager_block] = sym_ui_manager_block,
  [sym__ui_manager_block_expression] = sym__ui_manager_block_expression,
  [sym_db_manager_block] = sym_db_manager_block,
  [sym__db_manager_block_expression] = sym__db_manager_block_expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_variable_definition_repeat1] = aux_sym_variable_definition_repeat1,
  [aux_sym_parameter_block_repeat1] = aux_sym_parameter_block_repeat1,
  [aux_sym_language_block_repeat1] = aux_sym_language_block_repeat1,
  [aux_sym_datapool_block_repeat1] = aux_sym_datapool_block_repeat1,
  [aux_sym_streamer_block_repeat1] = aux_sym_streamer_block_repeat1,
  [aux_sym_operator_block_repeat1] = aux_sym_operator_block_repeat1,
  [aux_sym_functions_block_repeat1] = aux_sym_functions_block_repeat1,
  [aux_sym_ui_manager_block_repeat1] = aux_sym_ui_manager_block_repeat1,
  [aux_sym_db_manager_block_repeat1] = aux_sym_db_manager_block_repeat1,
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
  [anon_sym_LANGUAGE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DATAPOOL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STREAMER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OPERATOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FUNCTIONS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UI_MANAGER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DB_MANAGER] = {
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
  [sym_language_block] = {
    .visible = true,
    .named = true,
  },
  [sym__language_block_expression] = {
    .visible = false,
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
  [sym_streamer_block] = {
    .visible = true,
    .named = true,
  },
  [sym__streamer_block_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_operator_block] = {
    .visible = true,
    .named = true,
  },
  [sym__operator_block_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_functions_block] = {
    .visible = true,
    .named = true,
  },
  [sym__functions_block_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_ui_manager_block] = {
    .visible = true,
    .named = true,
  },
  [sym__ui_manager_block_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_db_manager_block] = {
    .visible = true,
    .named = true,
  },
  [sym__db_manager_block_expression] = {
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
  [aux_sym_language_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_datapool_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_streamer_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_operator_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_functions_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ui_manager_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_db_manager_block_repeat1] = {
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
      if (lookahead == 'F') ADVANCE(2);
      if (lookahead == 'L') ADVANCE(3);
      if (lookahead == 'O') ADVANCE(4);
      if (lookahead == 'S') ADVANCE(5);
      if (lookahead == 'U') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'A') ADVANCE(7);
      if (lookahead == 'B') ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == 'U') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(10);
      END_STATE();
    case 4:
      if (lookahead == 'P') ADVANCE(11);
      END_STATE();
    case 5:
      if (lookahead == 'T') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == 'I') ADVANCE(13);
      END_STATE();
    case 7:
      if (lookahead == 'T') ADVANCE(14);
      END_STATE();
    case 8:
      if (lookahead == '_') ADVANCE(15);
      END_STATE();
    case 9:
      if (lookahead == 'N') ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == 'N') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead == 'R') ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == 'M') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 'C') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == 'G') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == 'R') ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == 'M') ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == 'P') ADVANCE(28);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == 'T') ADVANCE(30);
      END_STATE();
    case 24:
      if (lookahead == 'U') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == 'A') ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == 'A') ADVANCE(33);
      END_STATE();
    case 27:
      if (lookahead == 'A') ADVANCE(34);
      END_STATE();
    case 28:
      if (lookahead == 'O') ADVANCE(35);
      END_STATE();
    case 29:
      if (lookahead == 'N') ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == 'I') ADVANCE(37);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == 'T') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'M') ADVANCE(40);
      END_STATE();
    case 34:
      if (lookahead == 'N') ADVANCE(41);
      END_STATE();
    case 35:
      if (lookahead == 'O') ADVANCE(42);
      END_STATE();
    case 36:
      if (lookahead == 'A') ADVANCE(43);
      END_STATE();
    case 37:
      if (lookahead == 'O') ADVANCE(44);
      END_STATE();
    case 38:
      if (lookahead == 'G') ADVANCE(45);
      END_STATE();
    case 39:
      if (lookahead == 'O') ADVANCE(46);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(47);
      END_STATE();
    case 41:
      if (lookahead == 'A') ADVANCE(48);
      END_STATE();
    case 42:
      if (lookahead == 'L') ADVANCE(49);
      END_STATE();
    case 43:
      if (lookahead == 'G') ADVANCE(50);
      END_STATE();
    case 44:
      if (lookahead == 'N') ADVANCE(51);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(52);
      END_STATE();
    case 46:
      if (lookahead == 'R') ADVANCE(53);
      END_STATE();
    case 47:
      if (lookahead == 'R') ADVANCE(54);
      END_STATE();
    case 48:
      if (lookahead == 'G') ADVANCE(55);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DATAPOOL);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(56);
      END_STATE();
    case 51:
      if (lookahead == 'S') ADVANCE(57);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LANGUAGE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_OPERATOR);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_STREAMER);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(58);
      END_STATE();
    case 56:
      if (lookahead == 'R') ADVANCE(59);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_FUNCTIONS);
      END_STATE();
    case 58:
      if (lookahead == 'R') ADVANCE(60);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DB_MANAGER);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_UI_MANAGER);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 150},
  [2] = {.lex_state = 150},
  [3] = {.lex_state = 150},
  [4] = {.lex_state = 150},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 150},
  [7] = {.lex_state = 150},
  [8] = {.lex_state = 150},
  [9] = {.lex_state = 150},
  [10] = {.lex_state = 150},
  [11] = {.lex_state = 150},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 150},
  [14] = {.lex_state = 150},
  [15] = {.lex_state = 150},
  [16] = {.lex_state = 150},
  [17] = {.lex_state = 150},
  [18] = {.lex_state = 150},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 150},
  [21] = {.lex_state = 150},
  [22] = {.lex_state = 150},
  [23] = {.lex_state = 150},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 147},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 147},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 5},
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
    [anon_sym_LANGUAGE] = ACTIONS(1),
    [anon_sym_END] = ACTIONS(1),
    [anon_sym_DATAPOOL] = ACTIONS(1),
    [anon_sym_STREAMER] = ACTIONS(1),
    [anon_sym_OPERATOR] = ACTIONS(1),
    [anon_sym_FUNCTIONS] = ACTIONS(1),
    [anon_sym_UI_MANAGER] = ACTIONS(1),
    [anon_sym_DB_MANAGER] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(93),
    [sym__high_level_blocks] = STATE(3),
    [sym__expression] = STATE(3),
    [sym_string] = STATE(3),
    [sym_reason] = STATE(3),
    [sym_language_block] = STATE(3),
    [sym_datapool_block] = STATE(3),
    [sym_streamer_block] = STATE(3),
    [sym_operator_block] = STATE(3),
    [sym_functions_block] = STATE(3),
    [sym_ui_manager_block] = STATE(3),
    [sym_db_manager_block] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
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
    [anon_sym_LANGUAGE] = ACTIONS(13),
    [anon_sym_DATAPOOL] = ACTIONS(15),
    [anon_sym_STREAMER] = ACTIONS(17),
    [anon_sym_OPERATOR] = ACTIONS(19),
    [anon_sym_FUNCTIONS] = ACTIONS(21),
    [anon_sym_UI_MANAGER] = ACTIONS(23),
    [anon_sym_DB_MANAGER] = ACTIONS(25),
  },
  [2] = {
    [sym__high_level_blocks] = STATE(2),
    [sym__expression] = STATE(2),
    [sym_string] = STATE(2),
    [sym_reason] = STATE(2),
    [sym_language_block] = STATE(2),
    [sym_datapool_block] = STATE(2),
    [sym_streamer_block] = STATE(2),
    [sym_operator_block] = STATE(2),
    [sym_functions_block] = STATE(2),
    [sym_ui_manager_block] = STATE(2),
    [sym_db_manager_block] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_SEMI] = ACTIONS(29),
    [sym_comment] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(32),
    [sym_number] = ACTIONS(29),
    [sym_true] = ACTIONS(29),
    [sym_false] = ACTIONS(29),
    [sym_eoln] = ACTIONS(29),
    [sym_invalid] = ACTIONS(29),
    [sym_none] = ACTIONS(29),
    [anon_sym_REASON_ACTIVATE] = ACTIONS(35),
    [anon_sym_REASON_CLEAR] = ACTIONS(35),
    [anon_sym_REASON_CLOSE] = ACTIONS(35),
    [anon_sym_REASON_CONNECTION] = ACTIONS(35),
    [anon_sym_REASON_DROP] = ACTIONS(35),
    [anon_sym_REASON_DUPLICATE] = ACTIONS(35),
    [anon_sym_REASON_INPUT] = ACTIONS(35),
    [anon_sym_REASON_INSERT] = ACTIONS(35),
    [anon_sym_REASON_MOVE] = ACTIONS(35),
    [anon_sym_REASON_OPEN] = ACTIONS(35),
    [anon_sym_REASON_PACK] = ACTIONS(35),
    [anon_sym_REASON_REMOVE] = ACTIONS(38),
    [anon_sym_REASON_REMOVE_CONNECTION] = ACTIONS(35),
    [anon_sym_REASON_REMOVE_ELEMENT] = ACTIONS(35),
    [anon_sym_REASON_SELECT] = ACTIONS(38),
    [anon_sym_REASON_SELECT_POINT] = ACTIONS(35),
    [anon_sym_REASON_SELECT_RECTANGLE] = ACTIONS(35),
    [anon_sym_REASON_UNSELECT] = ACTIONS(35),
    [anon_sym_LANGUAGE] = ACTIONS(41),
    [anon_sym_DATAPOOL] = ACTIONS(44),
    [anon_sym_STREAMER] = ACTIONS(47),
    [anon_sym_OPERATOR] = ACTIONS(50),
    [anon_sym_FUNCTIONS] = ACTIONS(53),
    [anon_sym_UI_MANAGER] = ACTIONS(56),
    [anon_sym_DB_MANAGER] = ACTIONS(59),
  },
  [3] = {
    [sym__high_level_blocks] = STATE(2),
    [sym__expression] = STATE(2),
    [sym_string] = STATE(2),
    [sym_reason] = STATE(2),
    [sym_language_block] = STATE(2),
    [sym_datapool_block] = STATE(2),
    [sym_streamer_block] = STATE(2),
    [sym_operator_block] = STATE(2),
    [sym_functions_block] = STATE(2),
    [sym_ui_manager_block] = STATE(2),
    [sym_db_manager_block] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(62),
    [anon_sym_SEMI] = ACTIONS(64),
    [sym_comment] = ACTIONS(64),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_number] = ACTIONS(64),
    [sym_true] = ACTIONS(64),
    [sym_false] = ACTIONS(64),
    [sym_eoln] = ACTIONS(64),
    [sym_invalid] = ACTIONS(64),
    [sym_none] = ACTIONS(64),
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
    [anon_sym_LANGUAGE] = ACTIONS(13),
    [anon_sym_DATAPOOL] = ACTIONS(15),
    [anon_sym_STREAMER] = ACTIONS(17),
    [anon_sym_OPERATOR] = ACTIONS(19),
    [anon_sym_FUNCTIONS] = ACTIONS(21),
    [anon_sym_UI_MANAGER] = ACTIONS(23),
    [anon_sym_DB_MANAGER] = ACTIONS(25),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(68), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(66), 33,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [40] = 7,
    ACTIONS(72), 1,
      anon_sym_DQUOTE,
    ACTIONS(74), 1,
      sym_primitive_type,
    ACTIONS(80), 1,
      anon_sym_END,
    ACTIONS(78), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(19), 6,
      sym__expression,
      sym_string,
      sym_reason,
      sym_variable_definition,
      sym__datapool_block_expression,
      aux_sym_datapool_block_repeat1,
    ACTIONS(70), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(76), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [90] = 2,
    ACTIONS(84), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(82), 33,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [130] = 2,
    ACTIONS(88), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(86), 33,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [170] = 2,
    ACTIONS(92), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(90), 33,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [210] = 2,
    ACTIONS(96), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(94), 33,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [250] = 2,
    ACTIONS(100), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(98), 33,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [290] = 2,
    ACTIONS(104), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(102), 33,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [330] = 7,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(112), 1,
      sym_primitive_type,
    ACTIONS(121), 1,
      anon_sym_END,
    ACTIONS(118), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(12), 6,
      sym__expression,
      sym_string,
      sym_reason,
      sym_variable_definition,
      sym__datapool_block_expression,
      aux_sym_datapool_block_repeat1,
    ACTIONS(106), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(115), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [380] = 2,
    ACTIONS(125), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(123), 33,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [420] = 2,
    ACTIONS(129), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(127), 33,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [460] = 2,
    ACTIONS(133), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(131), 33,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [500] = 2,
    ACTIONS(137), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(135), 33,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [540] = 2,
    ACTIONS(141), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(139), 33,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [580] = 2,
    ACTIONS(145), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(143), 33,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [620] = 7,
    ACTIONS(72), 1,
      anon_sym_DQUOTE,
    ACTIONS(74), 1,
      sym_primitive_type,
    ACTIONS(149), 1,
      anon_sym_END,
    ACTIONS(78), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(12), 6,
      sym__expression,
      sym_string,
      sym_reason,
      sym_variable_definition,
      sym__datapool_block_expression,
      aux_sym_datapool_block_repeat1,
    ACTIONS(147), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(76), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [670] = 2,
    ACTIONS(153), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(151), 33,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [710] = 2,
    ACTIONS(157), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(155), 33,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [750] = 2,
    ACTIONS(161), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(159), 33,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [790] = 2,
    ACTIONS(165), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(163), 33,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [830] = 6,
    ACTIONS(72), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      anon_sym_END,
    ACTIONS(78), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(30), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__streamer_block_expression,
      aux_sym_streamer_block_repeat1,
    ACTIONS(167), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(76), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [876] = 6,
    ACTIONS(72), 1,
      anon_sym_DQUOTE,
    ACTIONS(173), 1,
      anon_sym_END,
    ACTIONS(78), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(39), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__functions_block_expression,
      aux_sym_functions_block_repeat1,
    ACTIONS(171), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(76), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [922] = 6,
    ACTIONS(72), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      anon_sym_END,
    ACTIONS(78), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(40), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__operator_block_expression,
      aux_sym_operator_block_repeat1,
    ACTIONS(175), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(76), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [968] = 6,
    ACTIONS(72), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      anon_sym_END,
    ACTIONS(78), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(38), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__ui_manager_block_expression,
      aux_sym_ui_manager_block_repeat1,
    ACTIONS(179), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(76), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [1014] = 6,
    ACTIONS(72), 1,
      anon_sym_DQUOTE,
    ACTIONS(185), 1,
      anon_sym_END,
    ACTIONS(78), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(31), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__language_block_expression,
      aux_sym_language_block_repeat1,
    ACTIONS(183), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(76), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [1060] = 6,
    ACTIONS(72), 1,
      anon_sym_DQUOTE,
    ACTIONS(189), 1,
      anon_sym_END,
    ACTIONS(78), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(37), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__db_manager_block_expression,
      aux_sym_db_manager_block_repeat1,
    ACTIONS(187), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(76), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [1106] = 6,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    ACTIONS(203), 1,
      anon_sym_END,
    ACTIONS(200), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(30), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__streamer_block_expression,
      aux_sym_streamer_block_repeat1,
    ACTIONS(191), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(197), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [1152] = 6,
    ACTIONS(72), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      anon_sym_END,
    ACTIONS(78), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(35), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__language_block_expression,
      aux_sym_language_block_repeat1,
    ACTIONS(205), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(76), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [1198] = 6,
    ACTIONS(72), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      anon_sym_END,
    ACTIONS(78), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(29), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__db_manager_block_expression,
      aux_sym_db_manager_block_repeat1,
    ACTIONS(209), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(76), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [1244] = 6,
    ACTIONS(72), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      anon_sym_END,
    ACTIONS(78), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(27), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__ui_manager_block_expression,
      aux_sym_ui_manager_block_repeat1,
    ACTIONS(213), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(76), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [1290] = 6,
    ACTIONS(72), 1,
      anon_sym_DQUOTE,
    ACTIONS(219), 1,
      anon_sym_END,
    ACTIONS(78), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(25), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__functions_block_expression,
      aux_sym_functions_block_repeat1,
    ACTIONS(217), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(76), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [1336] = 6,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      anon_sym_END,
    ACTIONS(230), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(35), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__language_block_expression,
      aux_sym_language_block_repeat1,
    ACTIONS(221), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(227), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [1382] = 6,
    ACTIONS(72), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      anon_sym_END,
    ACTIONS(78), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(26), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__operator_block_expression,
      aux_sym_operator_block_repeat1,
    ACTIONS(235), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(76), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [1428] = 6,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      anon_sym_END,
    ACTIONS(248), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(37), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__db_manager_block_expression,
      aux_sym_db_manager_block_repeat1,
    ACTIONS(239), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(245), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [1474] = 6,
    ACTIONS(256), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      anon_sym_END,
    ACTIONS(262), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(38), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__ui_manager_block_expression,
      aux_sym_ui_manager_block_repeat1,
    ACTIONS(253), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(259), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [1520] = 6,
    ACTIONS(270), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      anon_sym_END,
    ACTIONS(276), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(39), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__functions_block_expression,
      aux_sym_functions_block_repeat1,
    ACTIONS(267), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(273), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [1566] = 6,
    ACTIONS(284), 1,
      anon_sym_DQUOTE,
    ACTIONS(293), 1,
      anon_sym_END,
    ACTIONS(290), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(40), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__operator_block_expression,
      aux_sym_operator_block_repeat1,
    ACTIONS(281), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(287), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [1612] = 6,
    ACTIONS(72), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      anon_sym_END,
    ACTIONS(78), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(24), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__streamer_block_expression,
      aux_sym_streamer_block_repeat1,
    ACTIONS(295), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(76), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [1658] = 2,
    ACTIONS(301), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(299), 27,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
      sym_primitive_type,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
      anon_sym_END,
  [1692] = 2,
    ACTIONS(305), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(303), 27,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
      sym_primitive_type,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
      anon_sym_END,
  [1726] = 2,
    ACTIONS(309), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(307), 27,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
      sym_primitive_type,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
      anon_sym_END,
  [1760] = 2,
    ACTIONS(100), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(98), 27,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
      sym_primitive_type,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
      anon_sym_END,
  [1794] = 2,
    ACTIONS(68), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(66), 27,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
      sym_primitive_type,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
      anon_sym_END,
  [1828] = 2,
    ACTIONS(157), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(155), 27,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
      sym_primitive_type,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
      anon_sym_END,
  [1862] = 2,
    ACTIONS(313), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(311), 27,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
      sym_primitive_type,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
      anon_sym_END,
  [1896] = 2,
    ACTIONS(317), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(315), 27,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
      sym_primitive_type,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
      anon_sym_END,
  [1930] = 2,
    ACTIONS(321), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(319), 27,
      anon_sym_SEMI,
      sym_comment,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
      sym_primitive_type,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
      anon_sym_END,
  [1964] = 5,
    ACTIONS(323), 1,
      anon_sym_SEMI,
    ACTIONS(325), 1,
      anon_sym_COMMA,
    ACTIONS(327), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_parameter_block,
    STATE(60), 1,
      aux_sym_variable_definition_repeat1,
  [1980] = 5,
    ACTIONS(325), 1,
      anon_sym_COMMA,
    ACTIONS(327), 1,
      anon_sym_LBRACE,
    ACTIONS(329), 1,
      anon_sym_SEMI,
    STATE(64), 1,
      aux_sym_variable_definition_repeat1,
    STATE(65), 1,
      sym_parameter_block,
  [1996] = 3,
    ACTIONS(327), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_parameter_block,
    ACTIONS(331), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2007] = 3,
    ACTIONS(333), 1,
      anon_sym_DQUOTE,
    ACTIONS(335), 1,
      aux_sym_string_token1,
    STATE(56), 1,
      aux_sym_string_repeat1,
  [2017] = 3,
    ACTIONS(337), 1,
      anon_sym_DQUOTE,
    ACTIONS(339), 1,
      aux_sym_string_token1,
    STATE(69), 1,
      aux_sym_string_repeat1,
  [2027] = 3,
    ACTIONS(339), 1,
      aux_sym_string_token1,
    ACTIONS(341), 1,
      anon_sym_DQUOTE,
    STATE(69), 1,
      aux_sym_string_repeat1,
  [2037] = 1,
    ACTIONS(343), 3,
      sym_identifier,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2043] = 3,
    ACTIONS(327), 1,
      anon_sym_LBRACE,
    ACTIONS(345), 1,
      sym_identifier,
    STATE(96), 1,
      sym_parameter_block,
  [2053] = 3,
    ACTIONS(325), 1,
      anon_sym_COMMA,
    ACTIONS(347), 1,
      anon_sym_SEMI,
    STATE(71), 1,
      aux_sym_variable_definition_repeat1,
  [2063] = 3,
    ACTIONS(325), 1,
      anon_sym_COMMA,
    ACTIONS(347), 1,
      anon_sym_SEMI,
    STATE(70), 1,
      aux_sym_variable_definition_repeat1,
  [2073] = 3,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(351), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      aux_sym_parameter_block_repeat1,
  [2083] = 3,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    ACTIONS(356), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_parameter_block_repeat1,
  [2093] = 3,
    ACTIONS(325), 1,
      anon_sym_COMMA,
    ACTIONS(358), 1,
      anon_sym_SEMI,
    STATE(70), 1,
      aux_sym_variable_definition_repeat1,
  [2103] = 3,
    ACTIONS(325), 1,
      anon_sym_COMMA,
    ACTIONS(360), 1,
      anon_sym_SEMI,
    STATE(70), 1,
      aux_sym_variable_definition_repeat1,
  [2113] = 3,
    ACTIONS(325), 1,
      anon_sym_COMMA,
    ACTIONS(360), 1,
      anon_sym_SEMI,
    STATE(63), 1,
      aux_sym_variable_definition_repeat1,
  [2123] = 3,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      aux_sym_string_token1,
    STATE(55), 1,
      aux_sym_string_repeat1,
  [2133] = 3,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(366), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_parameter_block_repeat1,
  [2143] = 1,
    ACTIONS(368), 3,
      sym_identifier,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2149] = 3,
    ACTIONS(370), 1,
      anon_sym_DQUOTE,
    ACTIONS(372), 1,
      aux_sym_string_token1,
    STATE(69), 1,
      aux_sym_string_repeat1,
  [2159] = 3,
    ACTIONS(375), 1,
      anon_sym_SEMI,
    ACTIONS(377), 1,
      anon_sym_COMMA,
    STATE(70), 1,
      aux_sym_variable_definition_repeat1,
  [2169] = 3,
    ACTIONS(325), 1,
      anon_sym_COMMA,
    ACTIONS(380), 1,
      anon_sym_SEMI,
    STATE(70), 1,
      aux_sym_variable_definition_repeat1,
  [2179] = 1,
    ACTIONS(356), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2184] = 1,
    ACTIONS(382), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2189] = 1,
    ACTIONS(384), 1,
      anon_sym_SEMI,
  [2193] = 1,
    ACTIONS(386), 1,
      anon_sym_LANGUAGE,
  [2197] = 1,
    ACTIONS(388), 1,
      anon_sym_SEMI,
  [2201] = 1,
    ACTIONS(390), 1,
      anon_sym_FUNCTIONS,
  [2205] = 1,
    ACTIONS(392), 1,
      anon_sym_SEMI,
  [2209] = 1,
    ACTIONS(394), 1,
      anon_sym_OPERATOR,
  [2213] = 1,
    ACTIONS(396), 1,
      anon_sym_SEMI,
  [2217] = 1,
    ACTIONS(398), 1,
      anon_sym_DB_MANAGER,
  [2221] = 1,
    ACTIONS(400), 1,
      aux_sym_parameter_block_token1,
  [2225] = 1,
    ACTIONS(402), 1,
      anon_sym_SEMI,
  [2229] = 1,
    ACTIONS(404), 1,
      anon_sym_SEMI,
  [2233] = 1,
    ACTIONS(406), 1,
      anon_sym_SEMI,
  [2237] = 1,
    ACTIONS(408), 1,
      anon_sym_SEMI,
  [2241] = 1,
    ACTIONS(410), 1,
      anon_sym_LANGUAGE,
  [2245] = 1,
    ACTIONS(412), 1,
      anon_sym_STREAMER,
  [2249] = 1,
    ACTIONS(414), 1,
      anon_sym_DATAPOOL,
  [2253] = 1,
    ACTIONS(416), 1,
      anon_sym_SEMI,
  [2257] = 1,
    ACTIONS(418), 1,
      anon_sym_UI_MANAGER,
  [2261] = 1,
    ACTIONS(420), 1,
      sym_identifier,
  [2265] = 1,
    ACTIONS(422), 1,
      ts_builtin_sym_end,
  [2269] = 1,
    ACTIONS(424), 1,
      anon_sym_DATAPOOL,
  [2273] = 1,
    ACTIONS(426), 1,
      aux_sym_parameter_block_token1,
  [2277] = 1,
    ACTIONS(428), 1,
      sym_identifier,
  [2281] = 1,
    ACTIONS(430), 1,
      anon_sym_DB_MANAGER,
  [2285] = 1,
    ACTIONS(432), 1,
      anon_sym_SEMI,
  [2289] = 1,
    ACTIONS(434), 1,
      anon_sym_SEMI,
  [2293] = 1,
    ACTIONS(436), 1,
      anon_sym_UI_MANAGER,
  [2297] = 1,
    ACTIONS(438), 1,
      anon_sym_SEMI,
  [2301] = 1,
    ACTIONS(440), 1,
      anon_sym_FUNCTIONS,
  [2305] = 1,
    ACTIONS(442), 1,
      anon_sym_SEMI,
  [2309] = 1,
    ACTIONS(444), 1,
      anon_sym_OPERATOR,
  [2313] = 1,
    ACTIONS(446), 1,
      anon_sym_SEMI,
  [2317] = 1,
    ACTIONS(448), 1,
      anon_sym_STREAMER,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 40,
  [SMALL_STATE(6)] = 90,
  [SMALL_STATE(7)] = 130,
  [SMALL_STATE(8)] = 170,
  [SMALL_STATE(9)] = 210,
  [SMALL_STATE(10)] = 250,
  [SMALL_STATE(11)] = 290,
  [SMALL_STATE(12)] = 330,
  [SMALL_STATE(13)] = 380,
  [SMALL_STATE(14)] = 420,
  [SMALL_STATE(15)] = 460,
  [SMALL_STATE(16)] = 500,
  [SMALL_STATE(17)] = 540,
  [SMALL_STATE(18)] = 580,
  [SMALL_STATE(19)] = 620,
  [SMALL_STATE(20)] = 670,
  [SMALL_STATE(21)] = 710,
  [SMALL_STATE(22)] = 750,
  [SMALL_STATE(23)] = 790,
  [SMALL_STATE(24)] = 830,
  [SMALL_STATE(25)] = 876,
  [SMALL_STATE(26)] = 922,
  [SMALL_STATE(27)] = 968,
  [SMALL_STATE(28)] = 1014,
  [SMALL_STATE(29)] = 1060,
  [SMALL_STATE(30)] = 1106,
  [SMALL_STATE(31)] = 1152,
  [SMALL_STATE(32)] = 1198,
  [SMALL_STATE(33)] = 1244,
  [SMALL_STATE(34)] = 1290,
  [SMALL_STATE(35)] = 1336,
  [SMALL_STATE(36)] = 1382,
  [SMALL_STATE(37)] = 1428,
  [SMALL_STATE(38)] = 1474,
  [SMALL_STATE(39)] = 1520,
  [SMALL_STATE(40)] = 1566,
  [SMALL_STATE(41)] = 1612,
  [SMALL_STATE(42)] = 1658,
  [SMALL_STATE(43)] = 1692,
  [SMALL_STATE(44)] = 1726,
  [SMALL_STATE(45)] = 1760,
  [SMALL_STATE(46)] = 1794,
  [SMALL_STATE(47)] = 1828,
  [SMALL_STATE(48)] = 1862,
  [SMALL_STATE(49)] = 1896,
  [SMALL_STATE(50)] = 1930,
  [SMALL_STATE(51)] = 1964,
  [SMALL_STATE(52)] = 1980,
  [SMALL_STATE(53)] = 1996,
  [SMALL_STATE(54)] = 2007,
  [SMALL_STATE(55)] = 2017,
  [SMALL_STATE(56)] = 2027,
  [SMALL_STATE(57)] = 2037,
  [SMALL_STATE(58)] = 2043,
  [SMALL_STATE(59)] = 2053,
  [SMALL_STATE(60)] = 2063,
  [SMALL_STATE(61)] = 2073,
  [SMALL_STATE(62)] = 2083,
  [SMALL_STATE(63)] = 2093,
  [SMALL_STATE(64)] = 2103,
  [SMALL_STATE(65)] = 2113,
  [SMALL_STATE(66)] = 2123,
  [SMALL_STATE(67)] = 2133,
  [SMALL_STATE(68)] = 2143,
  [SMALL_STATE(69)] = 2149,
  [SMALL_STATE(70)] = 2159,
  [SMALL_STATE(71)] = 2169,
  [SMALL_STATE(72)] = 2179,
  [SMALL_STATE(73)] = 2184,
  [SMALL_STATE(74)] = 2189,
  [SMALL_STATE(75)] = 2193,
  [SMALL_STATE(76)] = 2197,
  [SMALL_STATE(77)] = 2201,
  [SMALL_STATE(78)] = 2205,
  [SMALL_STATE(79)] = 2209,
  [SMALL_STATE(80)] = 2213,
  [SMALL_STATE(81)] = 2217,
  [SMALL_STATE(82)] = 2221,
  [SMALL_STATE(83)] = 2225,
  [SMALL_STATE(84)] = 2229,
  [SMALL_STATE(85)] = 2233,
  [SMALL_STATE(86)] = 2237,
  [SMALL_STATE(87)] = 2241,
  [SMALL_STATE(88)] = 2245,
  [SMALL_STATE(89)] = 2249,
  [SMALL_STATE(90)] = 2253,
  [SMALL_STATE(91)] = 2257,
  [SMALL_STATE(92)] = 2261,
  [SMALL_STATE(93)] = 2265,
  [SMALL_STATE(94)] = 2269,
  [SMALL_STATE(95)] = 2273,
  [SMALL_STATE(96)] = 2277,
  [SMALL_STATE(97)] = 2281,
  [SMALL_STATE(98)] = 2285,
  [SMALL_STATE(99)] = 2289,
  [SMALL_STATE(100)] = 2293,
  [SMALL_STATE(101)] = 2297,
  [SMALL_STATE(102)] = 2301,
  [SMALL_STATE(103)] = 2305,
  [SMALL_STATE(104)] = 2309,
  [SMALL_STATE(105)] = 2313,
  [SMALL_STATE(106)] = 2317,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_db_manager_block, 5),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_db_manager_block, 5),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datapool_block, 4),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datapool_block, 4),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_streamer_block, 4),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_streamer_block, 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_block, 4),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_block, 4),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ui_manager_block, 5),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ui_manager_block, 5),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(12),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(66),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(58),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(47),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(47),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ui_manager_block, 4),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ui_manager_block, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functions_block, 5),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions_block, 5),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_block, 5),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_block, 5),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language_block, 5),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_language_block, 5),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_streamer_block, 5),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_streamer_block, 5),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datapool_block, 5),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datapool_block, 5),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language_block, 4),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_language_block, 4),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reason, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reason, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functions_block, 4),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions_block, 4),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_db_manager_block, 4),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_db_manager_block, 4),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_streamer_block_repeat1, 2), SHIFT_REPEAT(30),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_streamer_block_repeat1, 2), SHIFT_REPEAT(66),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_streamer_block_repeat1, 2), SHIFT_REPEAT(47),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_streamer_block_repeat1, 2), SHIFT_REPEAT(47),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_streamer_block_repeat1, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_language_block_repeat1, 2), SHIFT_REPEAT(35),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_language_block_repeat1, 2), SHIFT_REPEAT(66),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_language_block_repeat1, 2), SHIFT_REPEAT(47),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_language_block_repeat1, 2), SHIFT_REPEAT(47),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_language_block_repeat1, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_db_manager_block_repeat1, 2), SHIFT_REPEAT(37),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_db_manager_block_repeat1, 2), SHIFT_REPEAT(66),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_db_manager_block_repeat1, 2), SHIFT_REPEAT(47),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_db_manager_block_repeat1, 2), SHIFT_REPEAT(47),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_db_manager_block_repeat1, 2),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ui_manager_block_repeat1, 2), SHIFT_REPEAT(38),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ui_manager_block_repeat1, 2), SHIFT_REPEAT(66),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ui_manager_block_repeat1, 2), SHIFT_REPEAT(47),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ui_manager_block_repeat1, 2), SHIFT_REPEAT(47),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ui_manager_block_repeat1, 2),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_block_repeat1, 2), SHIFT_REPEAT(39),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_block_repeat1, 2), SHIFT_REPEAT(66),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_block_repeat1, 2), SHIFT_REPEAT(47),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_functions_block_repeat1, 2), SHIFT_REPEAT(47),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functions_block_repeat1, 2),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operator_block_repeat1, 2), SHIFT_REPEAT(40),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operator_block_repeat1, 2), SHIFT_REPEAT(66),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operator_block_repeat1, 2), SHIFT_REPEAT(47),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operator_block_repeat1, 2), SHIFT_REPEAT(47),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operator_block_repeat1, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4, .production_id = 1),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 4, .production_id = 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5, .production_id = 5),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5, .production_id = 5),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4, .production_id = 4),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 4, .production_id = 4),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6, .production_id = 6),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 6, .production_id = 6),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5, .production_id = 4),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5, .production_id = 4),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3, .production_id = 1),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 3, .production_id = 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2, .production_id = 2),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_block, 4),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_block_repeat1, 2), SHIFT_REPEAT(82),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_block_repeat1, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_block, 3),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(69),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2, .production_id = 3),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 2, .production_id = 3), SHIFT_REPEAT(92),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_definition_repeat1, 3, .production_id = 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [422] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
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
