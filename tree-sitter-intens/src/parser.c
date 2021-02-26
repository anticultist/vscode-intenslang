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
#define STATE_COUNT 150
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 97
#define ALIAS_COUNT 2
#define TOKEN_COUNT 52
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
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
  anon_sym_INCLUDE = 31,
  aux_sym_include_token1 = 32,
  anon_sym_DESCRIPTION = 33,
  anon_sym_LBRACE = 34,
  aux_sym_parameter_block_token1 = 35,
  anon_sym_COMMA = 36,
  anon_sym_RBRACE = 37,
  anon_sym_LANGUAGE = 38,
  anon_sym_END = 39,
  anon_sym_DATAPOOL = 40,
  anon_sym_LBRACK = 41,
  anon_sym_RBRACK = 42,
  anon_sym_COLOR = 43,
  anon_sym_LPAREN = 44,
  anon_sym_RPAREN = 45,
  anon_sym_SET = 46,
  anon_sym_STREAMER = 47,
  anon_sym_OPERATOR = 48,
  anon_sym_FUNCTIONS = 49,
  anon_sym_UI_MANAGER = 50,
  anon_sym_DB_MANAGER = 51,
  sym_source_file = 52,
  sym__high_level_blocks = 53,
  sym__expression = 54,
  sym_string = 55,
  sym_reason = 56,
  sym_include = 57,
  sym_description = 58,
  sym_parameter_block = 59,
  sym_language_block = 60,
  sym__language_block_expression = 61,
  sym_datapool_block = 62,
  sym__datapool_block_expression = 63,
  sym_variables_declaration = 64,
  sym_variable_declaration = 65,
  sym_dimension = 66,
  sym_colors_declaration = 67,
  sym_color_declaration = 68,
  sym_sets_declaration = 69,
  sym_set_declaration = 70,
  sym_set_item = 71,
  sym_streamer_block = 72,
  sym__streamer_block_expression = 73,
  sym_operator_block = 74,
  sym__operator_block_expression = 75,
  sym_functions_block = 76,
  sym__functions_block_expression = 77,
  sym_ui_manager_block = 78,
  sym__ui_manager_block_expression = 79,
  sym_db_manager_block = 80,
  sym__db_manager_block_expression = 81,
  aux_sym_source_file_repeat1 = 82,
  aux_sym_string_repeat1 = 83,
  aux_sym_parameter_block_repeat1 = 84,
  aux_sym_language_block_repeat1 = 85,
  aux_sym_datapool_block_repeat1 = 86,
  aux_sym_variables_declaration_repeat1 = 87,
  aux_sym_dimension_repeat1 = 88,
  aux_sym_colors_declaration_repeat1 = 89,
  aux_sym_sets_declaration_repeat1 = 90,
  aux_sym_set_declaration_repeat1 = 91,
  aux_sym_streamer_block_repeat1 = 92,
  aux_sym_operator_block_repeat1 = 93,
  aux_sym_functions_block_repeat1 = 94,
  aux_sym_ui_manager_block_repeat1 = 95,
  aux_sym_db_manager_block_repeat1 = 96,
  alias_sym_color_identifier = 97,
  alias_sym_set_identifier = 98,
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
  [anon_sym_INCLUDE] = "INCLUDE",
  [aux_sym_include_token1] = "file_name",
  [anon_sym_DESCRIPTION] = "DESCRIPTION",
  [anon_sym_LBRACE] = "{",
  [aux_sym_parameter_block_token1] = "parameter",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LANGUAGE] = "LANGUAGE",
  [anon_sym_END] = "END",
  [anon_sym_DATAPOOL] = "DATAPOOL",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLOR] = "COLOR",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_SET] = "SET",
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
  [sym_include] = "include",
  [sym_description] = "description",
  [sym_parameter_block] = "parameter_block",
  [sym_language_block] = "language_block",
  [sym__language_block_expression] = "_language_block_expression",
  [sym_datapool_block] = "datapool_block",
  [sym__datapool_block_expression] = "_datapool_block_expression",
  [sym_variables_declaration] = "variables_declaration",
  [sym_variable_declaration] = "variable_declaration",
  [sym_dimension] = "dimension",
  [sym_colors_declaration] = "colors_declaration",
  [sym_color_declaration] = "color_declaration",
  [sym_sets_declaration] = "sets_declaration",
  [sym_set_declaration] = "set_declaration",
  [sym_set_item] = "set_item",
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
  [aux_sym_parameter_block_repeat1] = "parameter_block_repeat1",
  [aux_sym_language_block_repeat1] = "language_block_repeat1",
  [aux_sym_datapool_block_repeat1] = "datapool_block_repeat1",
  [aux_sym_variables_declaration_repeat1] = "variables_declaration_repeat1",
  [aux_sym_dimension_repeat1] = "dimension_repeat1",
  [aux_sym_colors_declaration_repeat1] = "colors_declaration_repeat1",
  [aux_sym_sets_declaration_repeat1] = "sets_declaration_repeat1",
  [aux_sym_set_declaration_repeat1] = "set_declaration_repeat1",
  [aux_sym_streamer_block_repeat1] = "streamer_block_repeat1",
  [aux_sym_operator_block_repeat1] = "operator_block_repeat1",
  [aux_sym_functions_block_repeat1] = "functions_block_repeat1",
  [aux_sym_ui_manager_block_repeat1] = "ui_manager_block_repeat1",
  [aux_sym_db_manager_block_repeat1] = "db_manager_block_repeat1",
  [alias_sym_color_identifier] = "color_identifier",
  [alias_sym_set_identifier] = "set_identifier",
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
  [anon_sym_INCLUDE] = anon_sym_INCLUDE,
  [aux_sym_include_token1] = aux_sym_include_token1,
  [anon_sym_DESCRIPTION] = anon_sym_DESCRIPTION,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym_parameter_block_token1] = aux_sym_parameter_block_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LANGUAGE] = anon_sym_LANGUAGE,
  [anon_sym_END] = anon_sym_END,
  [anon_sym_DATAPOOL] = anon_sym_DATAPOOL,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLOR] = anon_sym_COLOR,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_SET] = anon_sym_SET,
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
  [sym_include] = sym_include,
  [sym_description] = sym_description,
  [sym_parameter_block] = sym_parameter_block,
  [sym_language_block] = sym_language_block,
  [sym__language_block_expression] = sym__language_block_expression,
  [sym_datapool_block] = sym_datapool_block,
  [sym__datapool_block_expression] = sym__datapool_block_expression,
  [sym_variables_declaration] = sym_variables_declaration,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_dimension] = sym_dimension,
  [sym_colors_declaration] = sym_colors_declaration,
  [sym_color_declaration] = sym_color_declaration,
  [sym_sets_declaration] = sym_sets_declaration,
  [sym_set_declaration] = sym_set_declaration,
  [sym_set_item] = sym_set_item,
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
  [aux_sym_parameter_block_repeat1] = aux_sym_parameter_block_repeat1,
  [aux_sym_language_block_repeat1] = aux_sym_language_block_repeat1,
  [aux_sym_datapool_block_repeat1] = aux_sym_datapool_block_repeat1,
  [aux_sym_variables_declaration_repeat1] = aux_sym_variables_declaration_repeat1,
  [aux_sym_dimension_repeat1] = aux_sym_dimension_repeat1,
  [aux_sym_colors_declaration_repeat1] = aux_sym_colors_declaration_repeat1,
  [aux_sym_sets_declaration_repeat1] = aux_sym_sets_declaration_repeat1,
  [aux_sym_set_declaration_repeat1] = aux_sym_set_declaration_repeat1,
  [aux_sym_streamer_block_repeat1] = aux_sym_streamer_block_repeat1,
  [aux_sym_operator_block_repeat1] = aux_sym_operator_block_repeat1,
  [aux_sym_functions_block_repeat1] = aux_sym_functions_block_repeat1,
  [aux_sym_ui_manager_block_repeat1] = aux_sym_ui_manager_block_repeat1,
  [aux_sym_db_manager_block_repeat1] = aux_sym_db_manager_block_repeat1,
  [alias_sym_color_identifier] = alias_sym_color_identifier,
  [alias_sym_set_identifier] = alias_sym_set_identifier,
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
  [anon_sym_INCLUDE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_include_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DESCRIPTION] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SET] = {
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
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_description] = {
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
  [sym_variables_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_dimension] = {
    .visible = true,
    .named = true,
  },
  [sym_colors_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_color_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_sets_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_set_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_set_item] = {
    .visible = true,
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
  [aux_sym_variables_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dimension_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_colors_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sets_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_set_declaration_repeat1] = {
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
  [alias_sym_color_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_set_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_description_text = 1,
  field_name = 2,
  field_type = 3,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_description_text] = "description_text",
  [field_name] = "name",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[6] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 1, .length = 1},
  [5] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_description_text, 1},
  [1] =
    {field_name, 0},
  [2] =
    {field_type, 0},
};

static TSSymbol ts_alias_sequences[6][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [4] = {
    [0] = alias_sym_color_identifier,
  },
  [5] = {
    [0] = alias_sym_set_identifier,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(154);
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '(') ADVANCE(371);
      if (lookahead == ')') ADVANCE(372);
      if (lookahead == ',') ADVANCE(363);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ';') ADVANCE(303);
      if (lookahead == 'C') ADVANCE(178);
      if (lookahead == 'E') ADVANCE(232);
      if (lookahead == 'F') ADVANCE(158);
      if (lookahead == 'I') ADVANCE(233);
      if (lookahead == 'N') ADVANCE(253);
      if (lookahead == 'R') ADVANCE(193);
      if (lookahead == 'S') ADVANCE(179);
      if (lookahead == 'T') ADVANCE(269);
      if (lookahead == '[') ADVANCE(367);
      if (lookahead == ']') ADVANCE(368);
      if (lookahead == '{') ADVANCE(361);
      if (lookahead == '}') ADVANCE(364);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(306);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(306);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ';') ADVANCE(303);
      if (lookahead == 'C') ADVANCE(29);
      if (lookahead == 'E') ADVANCE(82);
      if (lookahead == 'F') ADVANCE(10);
      if (lookahead == 'I') ADVANCE(83);
      if (lookahead == 'N') ADVANCE(101);
      if (lookahead == 'R') ADVANCE(44);
      if (lookahead == 'S') ADVANCE(30);
      if (lookahead == 'T') ADVANCE(116);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(371);
      if (lookahead == ',') ADVANCE(363);
      if (lookahead == ';') ADVANCE(303);
      if (lookahead == '{') ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(304);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(69);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(323);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(19);
      if (lookahead == 'C') ADVANCE(70);
      if (lookahead == 'D') ADVANCE(121);
      if (lookahead == 'I') ADVANCE(86);
      if (lookahead == 'M') ADVANCE(100);
      if (lookahead == 'O') ADVANCE(115);
      if (lookahead == 'P') ADVANCE(12);
      if (lookahead == 'R') ADVANCE(36);
      if (lookahead == 'S') ADVANCE(51);
      if (lookahead == 'U') ADVANCE(95);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(68);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(135);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(72);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(120);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(138);
      END_STATE();
    case 16:
      if (lookahead == 'A') ADVANCE(92);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(139);
      END_STATE();
    case 18:
      if (lookahead == 'C') ADVANCE(67);
      END_STATE();
    case 19:
      if (lookahead == 'C') ADVANCE(134);
      END_STATE();
    case 20:
      if (lookahead == 'C') ADVANCE(129);
      END_STATE();
    case 21:
      if (lookahead == 'C') ADVANCE(130);
      END_STATE();
    case 22:
      if (lookahead == 'C') ADVANCE(137);
      END_STATE();
    case 23:
      if (lookahead == 'C') ADVANCE(136);
      END_STATE();
    case 24:
      if (lookahead == 'C') ADVANCE(17);
      END_STATE();
    case 25:
      if (lookahead == 'C') ADVANCE(109);
      if (lookahead == 'E') ADVANCE(77);
      END_STATE();
    case 26:
      if (lookahead == 'C') ADVANCE(140);
      END_STATE();
    case 27:
      if (lookahead == 'D') ADVANCE(365);
      END_STATE();
    case 28:
      if (lookahead == 'D') ADVANCE(319);
      END_STATE();
    case 29:
      if (lookahead == 'D') ADVANCE(11);
      if (lookahead == 'O') ADVANCE(71);
      END_STATE();
    case 30:
      if (lookahead == 'E') ADVANCE(126);
      if (lookahead == 'T') ADVANCE(117);
      END_STATE();
    case 31:
      if (lookahead == 'E') ADVANCE(58);
      END_STATE();
    case 32:
      if (lookahead == 'E') ADVANCE(321);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(313);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(315);
      END_STATE();
    case 35:
      if (lookahead == 'E') ADVANCE(146);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(81);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(340);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(328);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(347);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(324);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(334);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(356);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(80);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(7);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(118);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(14);
      if (lookahead == 'O') ADVANCE(124);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(122);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(87);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(94);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(20);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(76);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(21);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(22);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(23);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(79);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(26);
      END_STATE();
    case 57:
      if (lookahead == 'G') ADVANCE(323);
      END_STATE();
    case 58:
      if (lookahead == 'G') ADVANCE(45);
      END_STATE();
    case 59:
      if (lookahead == 'G') ADVANCE(78);
      END_STATE();
    case 60:
      if (lookahead == 'I') ADVANCE(28);
      END_STATE();
    case 61:
      if (lookahead == 'I') ADVANCE(145);
      END_STATE();
    case 62:
      if (lookahead == 'I') ADVANCE(24);
      END_STATE();
    case 63:
      if (lookahead == 'I') ADVANCE(90);
      END_STATE();
    case 64:
      if (lookahead == 'I') ADVANCE(93);
      END_STATE();
    case 65:
      if (lookahead == 'I') ADVANCE(105);
      END_STATE();
    case 66:
      if (lookahead == 'I') ADVANCE(106);
      END_STATE();
    case 67:
      if (lookahead == 'K') ADVANCE(344);
      END_STATE();
    case 68:
      if (lookahead == 'L') ADVANCE(123);
      END_STATE();
    case 69:
      if (lookahead == 'L') ADVANCE(323);
      if (lookahead == 'S') ADVANCE(104);
      END_STATE();
    case 70:
      if (lookahead == 'L') ADVANCE(46);
      if (lookahead == 'O') ADVANCE(96);
      END_STATE();
    case 71:
      if (lookahead == 'L') ADVANCE(102);
      if (lookahead == 'M') ADVANCE(112);
      END_STATE();
    case 72:
      if (lookahead == 'L') ADVANCE(60);
      END_STATE();
    case 73:
      if (lookahead == 'L') ADVANCE(84);
      END_STATE();
    case 74:
      if (lookahead == 'L') ADVANCE(62);
      END_STATE();
    case 75:
      if (lookahead == 'L') ADVANCE(35);
      END_STATE();
    case 76:
      if (lookahead == 'L') ADVANCE(50);
      END_STATE();
    case 77:
      if (lookahead == 'L') ADVANCE(43);
      END_STATE();
    case 78:
      if (lookahead == 'L') ADVANCE(42);
      END_STATE();
    case 79:
      if (lookahead == 'L') ADVANCE(52);
      END_STATE();
    case 80:
      if (lookahead == 'M') ADVANCE(49);
      END_STATE();
    case 81:
      if (lookahead == 'M') ADVANCE(108);
      END_STATE();
    case 82:
      if (lookahead == 'N') ADVANCE(27);
      if (lookahead == 'O') ADVANCE(73);
      END_STATE();
    case 83:
      if (lookahead == 'N') ADVANCE(133);
      END_STATE();
    case 84:
      if (lookahead == 'N') ADVANCE(317);
      END_STATE();
    case 85:
      if (lookahead == 'N') ADVANCE(147);
      END_STATE();
    case 86:
      if (lookahead == 'N') ADVANCE(111);
      END_STATE();
    case 87:
      if (lookahead == 'N') ADVANCE(342);
      END_STATE();
    case 88:
      if (lookahead == 'N') ADVANCE(330);
      END_STATE();
    case 89:
      if (lookahead == 'N') ADVANCE(348);
      END_STATE();
    case 90:
      if (lookahead == 'N') ADVANCE(57);
      END_STATE();
    case 91:
      if (lookahead == 'N') ADVANCE(32);
      END_STATE();
    case 92:
      if (lookahead == 'N') ADVANCE(59);
      END_STATE();
    case 93:
      if (lookahead == 'N') ADVANCE(131);
      END_STATE();
    case 94:
      if (lookahead == 'N') ADVANCE(132);
      END_STATE();
    case 95:
      if (lookahead == 'N') ADVANCE(125);
      END_STATE();
    case 96:
      if (lookahead == 'N') ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == 'N') ADVANCE(54);
      END_STATE();
    case 98:
      if (lookahead == 'N') ADVANCE(56);
      END_STATE();
    case 99:
      if (lookahead == 'N') ADVANCE(98);
      END_STATE();
    case 100:
      if (lookahead == 'O') ADVANCE(143);
      END_STATE();
    case 101:
      if (lookahead == 'O') ADVANCE(91);
      END_STATE();
    case 102:
      if (lookahead == 'O') ADVANCE(119);
      END_STATE();
    case 103:
      if (lookahead == 'O') ADVANCE(110);
      END_STATE();
    case 104:
      if (lookahead == 'O') ADVANCE(85);
      END_STATE();
    case 105:
      if (lookahead == 'O') ADVANCE(88);
      END_STATE();
    case 106:
      if (lookahead == 'O') ADVANCE(89);
      END_STATE();
    case 107:
      if (lookahead == 'O') ADVANCE(64);
      END_STATE();
    case 108:
      if (lookahead == 'O') ADVANCE(144);
      END_STATE();
    case 109:
      if (lookahead == 'O') ADVANCE(99);
      END_STATE();
    case 110:
      if (lookahead == 'P') ADVANCE(332);
      END_STATE();
    case 111:
      if (lookahead == 'P') ADVANCE(142);
      if (lookahead == 'S') ADVANCE(47);
      END_STATE();
    case 112:
      if (lookahead == 'P') ADVANCE(75);
      END_STATE();
    case 113:
      if (lookahead == 'P') ADVANCE(107);
      if (lookahead == 'R') ADVANCE(53);
      END_STATE();
    case 114:
      if (lookahead == 'P') ADVANCE(74);
      END_STATE();
    case 115:
      if (lookahead == 'P') ADVANCE(48);
      END_STATE();
    case 116:
      if (lookahead == 'R') ADVANCE(141);
      END_STATE();
    case 117:
      if (lookahead == 'R') ADVANCE(63);
      END_STATE();
    case 118:
      if (lookahead == 'R') ADVANCE(323);
      END_STATE();
    case 119:
      if (lookahead == 'R') ADVANCE(369);
      END_STATE();
    case 120:
      if (lookahead == 'R') ADVANCE(326);
      END_STATE();
    case 121:
      if (lookahead == 'R') ADVANCE(103);
      if (lookahead == 'U') ADVANCE(114);
      END_STATE();
    case 122:
      if (lookahead == 'R') ADVANCE(128);
      END_STATE();
    case 123:
      if (lookahead == 'S') ADVANCE(34);
      END_STATE();
    case 124:
      if (lookahead == 'S') ADVANCE(38);
      END_STATE();
    case 125:
      if (lookahead == 'S') ADVANCE(55);
      END_STATE();
    case 126:
      if (lookahead == 'T') ADVANCE(373);
      END_STATE();
    case 127:
      if (lookahead == 'T') ADVANCE(336);
      END_STATE();
    case 128:
      if (lookahead == 'T') ADVANCE(338);
      END_STATE();
    case 129:
      if (lookahead == 'T') ADVANCE(353);
      END_STATE();
    case 130:
      if (lookahead == 'T') ADVANCE(358);
      END_STATE();
    case 131:
      if (lookahead == 'T') ADVANCE(354);
      END_STATE();
    case 132:
      if (lookahead == 'T') ADVANCE(350);
      END_STATE();
    case 133:
      if (lookahead == 'T') ADVANCE(31);
      if (lookahead == 'V') ADVANCE(13);
      END_STATE();
    case 134:
      if (lookahead == 'T') ADVANCE(61);
      END_STATE();
    case 135:
      if (lookahead == 'T') ADVANCE(8);
      END_STATE();
    case 136:
      if (lookahead == 'T') ADVANCE(65);
      END_STATE();
    case 137:
      if (lookahead == 'T') ADVANCE(16);
      END_STATE();
    case 138:
      if (lookahead == 'T') ADVANCE(40);
      END_STATE();
    case 139:
      if (lookahead == 'T') ADVANCE(41);
      END_STATE();
    case 140:
      if (lookahead == 'T') ADVANCE(66);
      END_STATE();
    case 141:
      if (lookahead == 'U') ADVANCE(33);
      END_STATE();
    case 142:
      if (lookahead == 'U') ADVANCE(127);
      END_STATE();
    case 143:
      if (lookahead == 'V') ADVANCE(37);
      END_STATE();
    case 144:
      if (lookahead == 'V') ADVANCE(39);
      END_STATE();
    case 145:
      if (lookahead == 'V') ADVANCE(15);
      END_STATE();
    case 146:
      if (lookahead == 'X') ADVANCE(323);
      END_STATE();
    case 147:
      if (lookahead == '_') ADVANCE(9);
      END_STATE();
    case 148:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      END_STATE();
    case 149:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(149)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 150:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(150)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      END_STATE();
    case 153:
      if (eof) ADVANCE(154);
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == ')') ADVANCE(372);
      if (lookahead == ',') ADVANCE(363);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ';') ADVANCE(303);
      if (lookahead == 'E') ADVANCE(251);
      if (lookahead == 'F') ADVANCE(158);
      if (lookahead == 'I') ADVANCE(243);
      if (lookahead == 'N') ADVANCE(253);
      if (lookahead == 'R') ADVANCE(197);
      if (lookahead == 'T') ADVANCE(269);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(153)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(302);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(218);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(168);
      if (lookahead == 'C') ADVANCE(220);
      if (lookahead == 'D') ADVANCE(273);
      if (lookahead == 'I') ADVANCE(236);
      if (lookahead == 'M') ADVANCE(252);
      if (lookahead == 'O') ADVANCE(267);
      if (lookahead == 'P') ADVANCE(161);
      if (lookahead == 'R') ADVANCE(185);
      if (lookahead == 'S') ADVANCE(201);
      if (lookahead == 'U') ADVANCE(246);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(219);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(288);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(277);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(167);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(222);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(272);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(291);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(242);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(292);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(217);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(287);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(282);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(283);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(290);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(289);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(166);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(261);
      if (lookahead == 'E') ADVANCE(227);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(293);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(366);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(320);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(159);
      if (lookahead == 'O') ADVANCE(221);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(279);
      if (lookahead == 'T') ADVANCE(270);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(208);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(322);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(314);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(316);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(300);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(231);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(341);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(329);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(346);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(325);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(335);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(357);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(230);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(156);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(268);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(163);
      if (lookahead == 'O') ADVANCE(276);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(274);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(160);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(237);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(245);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(169);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(226);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(170);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(171);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(172);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(229);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(175);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(302);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(194);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(228);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(177);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(299);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(173);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(240);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(244);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(257);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(258);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(345);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(302);
      if (lookahead == 'S') ADVANCE(256);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(275);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(195);
      if (lookahead == 'O') ADVANCE(247);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(254);
      if (lookahead == 'M') ADVANCE(264);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(210);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(234);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(212);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(184);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(200);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(192);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(191);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(202);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(199);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(260);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(176);
      if (lookahead == 'O') ADVANCE(223);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(286);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(318);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(301);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(263);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(343);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(331);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(349);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(207);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(181);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(209);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(298);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(284);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(285);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(278);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(248);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(204);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(206);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(249);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(223);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(296);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(241);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(271);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(262);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(235);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(238);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(239);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(214);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(297);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(250);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(333);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(295);
      if (lookahead == 'S') ADVANCE(196);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(225);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(259);
      if (lookahead == 'R') ADVANCE(203);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(224);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(198);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(302);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(294);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(213);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(370);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(327);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(255);
      if (lookahead == 'U') ADVANCE(266);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(281);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(183);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(187);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(256);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(205);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(374);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(337);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(339);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(352);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(359);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(355);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(351);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(180);
      if (lookahead == 'V') ADVANCE(162);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(211);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(155);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(215);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(165);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(189);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(190);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(216);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(182);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(280);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(186);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(188);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(162);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(164);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(302);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(157);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(308);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(310);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_eoln);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_eoln);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_invalid);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_invalid);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_none);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_none);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_primitive_type);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_REASON_ACTIVATE);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_REASON_ACTIVATE);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_REASON_CLEAR);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_REASON_CLEAR);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_REASON_CLOSE);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_REASON_CLOSE);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_REASON_CONNECTION);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_REASON_CONNECTION);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_REASON_DROP);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_REASON_DROP);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_REASON_DUPLICATE);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_REASON_DUPLICATE);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_REASON_INPUT);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_REASON_INPUT);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_REASON_INSERT);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_REASON_INSERT);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_REASON_MOVE);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_REASON_MOVE);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_REASON_OPEN);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_REASON_OPEN);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_REASON_PACK);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_REASON_PACK);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_REASON_REMOVE);
      if (lookahead == '_') ADVANCE(174);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_REASON_REMOVE);
      if (lookahead == '_') ADVANCE(25);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_REASON_REMOVE_CONNECTION);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_REASON_REMOVE_CONNECTION);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_REASON_REMOVE_ELEMENT);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_REASON_REMOVE_ELEMENT);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_REASON_SELECT);
      if (lookahead == '_') ADVANCE(265);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_REASON_SELECT);
      if (lookahead == '_') ADVANCE(113);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_REASON_SELECT_POINT);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_REASON_SELECT_POINT);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_REASON_SELECT_RECTANGLE);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_REASON_SELECT_RECTANGLE);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_REASON_UNSELECT);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_REASON_UNSELECT);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_parameter_block_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_COLOR);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_COLOR);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_SET);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_SET);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
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
      if (lookahead == 'I') ADVANCE(3);
      if (lookahead == 'L') ADVANCE(4);
      if (lookahead == 'O') ADVANCE(5);
      if (lookahead == 'S') ADVANCE(6);
      if (lookahead == 'U') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'A') ADVANCE(8);
      if (lookahead == 'B') ADVANCE(9);
      if (lookahead == 'E') ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == 'U') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == 'N') ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == 'A') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == 'P') ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == 'T') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == 'I') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 'T') ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == '_') ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == 'S') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'N') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == 'C') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'N') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == 'R') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == 'M') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 'C') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'C') ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == 'L') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == 'G') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 'R') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(33);
      END_STATE();
    case 25:
      if (lookahead == 'M') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 'P') ADVANCE(35);
      END_STATE();
    case 27:
      if (lookahead == 'A') ADVANCE(36);
      END_STATE();
    case 28:
      if (lookahead == 'R') ADVANCE(37);
      END_STATE();
    case 29:
      if (lookahead == 'T') ADVANCE(38);
      END_STATE();
    case 30:
      if (lookahead == 'U') ADVANCE(39);
      END_STATE();
    case 31:
      if (lookahead == 'U') ADVANCE(40);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(41);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(42);
      END_STATE();
    case 34:
      if (lookahead == 'A') ADVANCE(43);
      END_STATE();
    case 35:
      if (lookahead == 'O') ADVANCE(44);
      END_STATE();
    case 36:
      if (lookahead == 'N') ADVANCE(45);
      END_STATE();
    case 37:
      if (lookahead == 'I') ADVANCE(46);
      END_STATE();
    case 38:
      if (lookahead == 'I') ADVANCE(47);
      END_STATE();
    case 39:
      if (lookahead == 'D') ADVANCE(48);
      END_STATE();
    case 40:
      if (lookahead == 'A') ADVANCE(49);
      END_STATE();
    case 41:
      if (lookahead == 'T') ADVANCE(50);
      END_STATE();
    case 42:
      if (lookahead == 'M') ADVANCE(51);
      END_STATE();
    case 43:
      if (lookahead == 'N') ADVANCE(52);
      END_STATE();
    case 44:
      if (lookahead == 'O') ADVANCE(53);
      END_STATE();
    case 45:
      if (lookahead == 'A') ADVANCE(54);
      END_STATE();
    case 46:
      if (lookahead == 'P') ADVANCE(55);
      END_STATE();
    case 47:
      if (lookahead == 'O') ADVANCE(56);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(57);
      END_STATE();
    case 49:
      if (lookahead == 'G') ADVANCE(58);
      END_STATE();
    case 50:
      if (lookahead == 'O') ADVANCE(59);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(60);
      END_STATE();
    case 52:
      if (lookahead == 'A') ADVANCE(61);
      END_STATE();
    case 53:
      if (lookahead == 'L') ADVANCE(62);
      END_STATE();
    case 54:
      if (lookahead == 'G') ADVANCE(63);
      END_STATE();
    case 55:
      if (lookahead == 'T') ADVANCE(64);
      END_STATE();
    case 56:
      if (lookahead == 'N') ADVANCE(65);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_INCLUDE);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(66);
      END_STATE();
    case 59:
      if (lookahead == 'R') ADVANCE(67);
      END_STATE();
    case 60:
      if (lookahead == 'R') ADVANCE(68);
      END_STATE();
    case 61:
      if (lookahead == 'G') ADVANCE(69);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DATAPOOL);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(70);
      END_STATE();
    case 64:
      if (lookahead == 'I') ADVANCE(71);
      END_STATE();
    case 65:
      if (lookahead == 'S') ADVANCE(72);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LANGUAGE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_OPERATOR);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_STREAMER);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(73);
      END_STATE();
    case 70:
      if (lookahead == 'R') ADVANCE(74);
      END_STATE();
    case 71:
      if (lookahead == 'O') ADVANCE(75);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_FUNCTIONS);
      END_STATE();
    case 73:
      if (lookahead == 'R') ADVANCE(76);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DB_MANAGER);
      END_STATE();
    case 75:
      if (lookahead == 'N') ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_UI_MANAGER);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DESCRIPTION);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 153},
  [2] = {.lex_state = 153},
  [3] = {.lex_state = 153},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 153},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 153},
  [9] = {.lex_state = 153},
  [10] = {.lex_state = 153},
  [11] = {.lex_state = 153},
  [12] = {.lex_state = 153},
  [13] = {.lex_state = 153},
  [14] = {.lex_state = 153},
  [15] = {.lex_state = 153},
  [16] = {.lex_state = 153},
  [17] = {.lex_state = 153},
  [18] = {.lex_state = 153},
  [19] = {.lex_state = 153},
  [20] = {.lex_state = 153},
  [21] = {.lex_state = 153},
  [22] = {.lex_state = 153},
  [23] = {.lex_state = 153},
  [24] = {.lex_state = 153},
  [25] = {.lex_state = 153},
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
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 149},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 149},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 150},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 5},
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
    [anon_sym_INCLUDE] = ACTIONS(1),
    [anon_sym_DESCRIPTION] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LANGUAGE] = ACTIONS(1),
    [anon_sym_END] = ACTIONS(1),
    [anon_sym_DATAPOOL] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLOR] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SET] = ACTIONS(1),
    [anon_sym_STREAMER] = ACTIONS(1),
    [anon_sym_OPERATOR] = ACTIONS(1),
    [anon_sym_FUNCTIONS] = ACTIONS(1),
    [anon_sym_UI_MANAGER] = ACTIONS(1),
    [anon_sym_DB_MANAGER] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(145),
    [sym__high_level_blocks] = STATE(2),
    [sym__expression] = STATE(2),
    [sym_string] = STATE(2),
    [sym_reason] = STATE(2),
    [sym_include] = STATE(2),
    [sym_description] = STATE(2),
    [sym_language_block] = STATE(2),
    [sym_datapool_block] = STATE(2),
    [sym_streamer_block] = STATE(2),
    [sym_operator_block] = STATE(2),
    [sym_functions_block] = STATE(2),
    [sym_ui_manager_block] = STATE(2),
    [sym_db_manager_block] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
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
    [anon_sym_INCLUDE] = ACTIONS(13),
    [anon_sym_DESCRIPTION] = ACTIONS(15),
    [anon_sym_LANGUAGE] = ACTIONS(17),
    [anon_sym_DATAPOOL] = ACTIONS(19),
    [anon_sym_STREAMER] = ACTIONS(21),
    [anon_sym_OPERATOR] = ACTIONS(23),
    [anon_sym_FUNCTIONS] = ACTIONS(25),
    [anon_sym_UI_MANAGER] = ACTIONS(27),
    [anon_sym_DB_MANAGER] = ACTIONS(29),
  },
  [2] = {
    [sym__high_level_blocks] = STATE(3),
    [sym__expression] = STATE(3),
    [sym_string] = STATE(3),
    [sym_reason] = STATE(3),
    [sym_include] = STATE(3),
    [sym_description] = STATE(3),
    [sym_language_block] = STATE(3),
    [sym_datapool_block] = STATE(3),
    [sym_streamer_block] = STATE(3),
    [sym_operator_block] = STATE(3),
    [sym_functions_block] = STATE(3),
    [sym_ui_manager_block] = STATE(3),
    [sym_db_manager_block] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(33),
    [sym_comment] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_number] = ACTIONS(33),
    [sym_true] = ACTIONS(33),
    [sym_false] = ACTIONS(33),
    [sym_eoln] = ACTIONS(33),
    [sym_invalid] = ACTIONS(33),
    [sym_none] = ACTIONS(33),
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
    [anon_sym_INCLUDE] = ACTIONS(13),
    [anon_sym_DESCRIPTION] = ACTIONS(15),
    [anon_sym_LANGUAGE] = ACTIONS(17),
    [anon_sym_DATAPOOL] = ACTIONS(19),
    [anon_sym_STREAMER] = ACTIONS(21),
    [anon_sym_OPERATOR] = ACTIONS(23),
    [anon_sym_FUNCTIONS] = ACTIONS(25),
    [anon_sym_UI_MANAGER] = ACTIONS(27),
    [anon_sym_DB_MANAGER] = ACTIONS(29),
  },
  [3] = {
    [sym__high_level_blocks] = STATE(3),
    [sym__expression] = STATE(3),
    [sym_string] = STATE(3),
    [sym_reason] = STATE(3),
    [sym_include] = STATE(3),
    [sym_description] = STATE(3),
    [sym_language_block] = STATE(3),
    [sym_datapool_block] = STATE(3),
    [sym_streamer_block] = STATE(3),
    [sym_operator_block] = STATE(3),
    [sym_functions_block] = STATE(3),
    [sym_ui_manager_block] = STATE(3),
    [sym_db_manager_block] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_SEMI] = ACTIONS(37),
    [sym_comment] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(40),
    [sym_number] = ACTIONS(37),
    [sym_true] = ACTIONS(37),
    [sym_false] = ACTIONS(37),
    [sym_eoln] = ACTIONS(37),
    [sym_invalid] = ACTIONS(37),
    [sym_none] = ACTIONS(37),
    [anon_sym_REASON_ACTIVATE] = ACTIONS(43),
    [anon_sym_REASON_CLEAR] = ACTIONS(43),
    [anon_sym_REASON_CLOSE] = ACTIONS(43),
    [anon_sym_REASON_CONNECTION] = ACTIONS(43),
    [anon_sym_REASON_DROP] = ACTIONS(43),
    [anon_sym_REASON_DUPLICATE] = ACTIONS(43),
    [anon_sym_REASON_INPUT] = ACTIONS(43),
    [anon_sym_REASON_INSERT] = ACTIONS(43),
    [anon_sym_REASON_MOVE] = ACTIONS(43),
    [anon_sym_REASON_OPEN] = ACTIONS(43),
    [anon_sym_REASON_PACK] = ACTIONS(43),
    [anon_sym_REASON_REMOVE] = ACTIONS(46),
    [anon_sym_REASON_REMOVE_CONNECTION] = ACTIONS(43),
    [anon_sym_REASON_REMOVE_ELEMENT] = ACTIONS(43),
    [anon_sym_REASON_SELECT] = ACTIONS(46),
    [anon_sym_REASON_SELECT_POINT] = ACTIONS(43),
    [anon_sym_REASON_SELECT_RECTANGLE] = ACTIONS(43),
    [anon_sym_REASON_UNSELECT] = ACTIONS(43),
    [anon_sym_INCLUDE] = ACTIONS(49),
    [anon_sym_DESCRIPTION] = ACTIONS(52),
    [anon_sym_LANGUAGE] = ACTIONS(55),
    [anon_sym_DATAPOOL] = ACTIONS(58),
    [anon_sym_STREAMER] = ACTIONS(61),
    [anon_sym_OPERATOR] = ACTIONS(64),
    [anon_sym_FUNCTIONS] = ACTIONS(67),
    [anon_sym_UI_MANAGER] = ACTIONS(70),
    [anon_sym_DB_MANAGER] = ACTIONS(73),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(80), 1,
      sym_primitive_type,
    ACTIONS(86), 1,
      anon_sym_END,
    ACTIONS(88), 1,
      anon_sym_COLOR,
    ACTIONS(90), 1,
      anon_sym_SET,
    ACTIONS(84), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(76), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    STATE(5), 8,
      sym__expression,
      sym_string,
      sym_reason,
      sym__datapool_block_expression,
      sym_variables_declaration,
      sym_colors_declaration,
      sym_sets_declaration,
      aux_sym_datapool_block_repeat1,
    ACTIONS(82), 16,
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
  [58] = 9,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(98), 1,
      sym_primitive_type,
    ACTIONS(107), 1,
      anon_sym_END,
    ACTIONS(109), 1,
      anon_sym_COLOR,
    ACTIONS(112), 1,
      anon_sym_SET,
    ACTIONS(104), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(92), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    STATE(5), 8,
      sym__expression,
      sym_string,
      sym_reason,
      sym__datapool_block_expression,
      sym_variables_declaration,
      sym_colors_declaration,
      sym_sets_declaration,
      aux_sym_datapool_block_repeat1,
    ACTIONS(101), 16,
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
  [116] = 2,
    ACTIONS(117), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(115), 37,
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
      anon_sym_INCLUDE,
      anon_sym_DESCRIPTION,
      anon_sym_COMMA,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_RPAREN,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [160] = 9,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(80), 1,
      sym_primitive_type,
    ACTIONS(88), 1,
      anon_sym_COLOR,
    ACTIONS(90), 1,
      anon_sym_SET,
    ACTIONS(121), 1,
      anon_sym_END,
    ACTIONS(84), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(119), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    STATE(4), 8,
      sym__expression,
      sym_string,
      sym_reason,
      sym__datapool_block_expression,
      sym_variables_declaration,
      sym_colors_declaration,
      sym_sets_declaration,
      aux_sym_datapool_block_repeat1,
    ACTIONS(82), 16,
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
  [218] = 2,
    ACTIONS(125), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(123), 37,
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
      anon_sym_INCLUDE,
      anon_sym_DESCRIPTION,
      anon_sym_COMMA,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_RPAREN,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [262] = 2,
    ACTIONS(129), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(127), 35,
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
      anon_sym_INCLUDE,
      anon_sym_DESCRIPTION,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [304] = 2,
    ACTIONS(133), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(131), 35,
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
      anon_sym_INCLUDE,
      anon_sym_DESCRIPTION,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [346] = 2,
    ACTIONS(137), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(135), 35,
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
      anon_sym_INCLUDE,
      anon_sym_DESCRIPTION,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [388] = 2,
    ACTIONS(141), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(139), 35,
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
      anon_sym_INCLUDE,
      anon_sym_DESCRIPTION,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [430] = 2,
    ACTIONS(145), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(143), 35,
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
      anon_sym_INCLUDE,
      anon_sym_DESCRIPTION,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [472] = 2,
    ACTIONS(149), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(147), 35,
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
      anon_sym_INCLUDE,
      anon_sym_DESCRIPTION,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [514] = 2,
    ACTIONS(153), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(151), 35,
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
      anon_sym_INCLUDE,
      anon_sym_DESCRIPTION,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [556] = 2,
    ACTIONS(157), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(155), 35,
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
      anon_sym_INCLUDE,
      anon_sym_DESCRIPTION,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [598] = 2,
    ACTIONS(161), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(159), 35,
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
      anon_sym_INCLUDE,
      anon_sym_DESCRIPTION,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [640] = 2,
    ACTIONS(165), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(163), 35,
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
      anon_sym_INCLUDE,
      anon_sym_DESCRIPTION,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [682] = 2,
    ACTIONS(169), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(167), 35,
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
      anon_sym_INCLUDE,
      anon_sym_DESCRIPTION,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [724] = 2,
    ACTIONS(173), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(171), 35,
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
      anon_sym_INCLUDE,
      anon_sym_DESCRIPTION,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [766] = 2,
    ACTIONS(177), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(175), 35,
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
      anon_sym_INCLUDE,
      anon_sym_DESCRIPTION,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [808] = 2,
    ACTIONS(181), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(179), 35,
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
      anon_sym_INCLUDE,
      anon_sym_DESCRIPTION,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [850] = 2,
    ACTIONS(185), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(183), 35,
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
      anon_sym_INCLUDE,
      anon_sym_DESCRIPTION,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [892] = 2,
    ACTIONS(189), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(187), 35,
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
      anon_sym_INCLUDE,
      anon_sym_DESCRIPTION,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [934] = 2,
    ACTIONS(193), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(191), 35,
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
      anon_sym_INCLUDE,
      anon_sym_DESCRIPTION,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [976] = 6,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      anon_sym_END,
    ACTIONS(84), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(29), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__operator_block_expression,
      aux_sym_operator_block_repeat1,
    ACTIONS(195), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(82), 16,
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
  [1022] = 6,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(201), 1,
      anon_sym_END,
    ACTIONS(84), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(38), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__language_block_expression,
      aux_sym_language_block_repeat1,
    ACTIONS(199), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(82), 16,
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
  [1068] = 6,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      anon_sym_END,
    ACTIONS(212), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(28), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__ui_manager_block_expression,
      aux_sym_ui_manager_block_repeat1,
    ACTIONS(203), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(209), 16,
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
  [1114] = 6,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(229), 1,
      anon_sym_END,
    ACTIONS(226), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(29), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__operator_block_expression,
      aux_sym_operator_block_repeat1,
    ACTIONS(217), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(223), 16,
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
  [1160] = 6,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(243), 1,
      anon_sym_END,
    ACTIONS(240), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(30), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__streamer_block_expression,
      aux_sym_streamer_block_repeat1,
    ACTIONS(231), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(237), 16,
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
  [1206] = 6,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(247), 1,
      anon_sym_END,
    ACTIONS(84), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(34), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__functions_block_expression,
      aux_sym_functions_block_repeat1,
    ACTIONS(245), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(82), 16,
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
  [1252] = 6,
    ACTIONS(252), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      anon_sym_END,
    ACTIONS(258), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(32), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__db_manager_block_expression,
      aux_sym_db_manager_block_repeat1,
    ACTIONS(249), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(255), 16,
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
  [1298] = 6,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      anon_sym_END,
    ACTIONS(84), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(28), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__ui_manager_block_expression,
      aux_sym_ui_manager_block_repeat1,
    ACTIONS(263), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(82), 16,
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
  [1344] = 6,
    ACTIONS(270), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      anon_sym_END,
    ACTIONS(276), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(34), 5,
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
  [1390] = 6,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      anon_sym_END,
    ACTIONS(84), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(32), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__db_manager_block_expression,
      aux_sym_db_manager_block_repeat1,
    ACTIONS(281), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(82), 16,
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
  [1436] = 6,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      anon_sym_END,
    ACTIONS(84), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(30), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__streamer_block_expression,
      aux_sym_streamer_block_repeat1,
    ACTIONS(285), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(82), 16,
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
  [1482] = 6,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      anon_sym_END,
    ACTIONS(84), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(36), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__streamer_block_expression,
      aux_sym_streamer_block_repeat1,
    ACTIONS(289), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(82), 16,
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
  [1528] = 6,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(295), 1,
      anon_sym_END,
    ACTIONS(84), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(42), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__language_block_expression,
      aux_sym_language_block_repeat1,
    ACTIONS(293), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(82), 16,
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
  [1574] = 6,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(299), 1,
      anon_sym_END,
    ACTIONS(84), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(26), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__operator_block_expression,
      aux_sym_operator_block_repeat1,
    ACTIONS(297), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(82), 16,
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
  [1620] = 6,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      anon_sym_END,
    ACTIONS(84), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(31), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__functions_block_expression,
      aux_sym_functions_block_repeat1,
    ACTIONS(301), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(82), 16,
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
  [1666] = 6,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(307), 1,
      anon_sym_END,
    ACTIONS(84), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(35), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__db_manager_block_expression,
      aux_sym_db_manager_block_repeat1,
    ACTIONS(305), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(82), 16,
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
  [1712] = 6,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(321), 1,
      anon_sym_END,
    ACTIONS(318), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(42), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__language_block_expression,
      aux_sym_language_block_repeat1,
    ACTIONS(309), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(315), 16,
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
  [1758] = 6,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(325), 1,
      anon_sym_END,
    ACTIONS(84), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(33), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__ui_manager_block_expression,
      aux_sym_ui_manager_block_repeat1,
    ACTIONS(323), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(82), 16,
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
  [1804] = 2,
    ACTIONS(329), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(327), 29,
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
      anon_sym_COLOR,
      anon_sym_SET,
  [1840] = 2,
    ACTIONS(333), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(331), 29,
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
      anon_sym_COLOR,
      anon_sym_SET,
  [1876] = 2,
    ACTIONS(337), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(335), 29,
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
      anon_sym_COLOR,
      anon_sym_SET,
  [1912] = 2,
    ACTIONS(341), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(339), 29,
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
      anon_sym_COLOR,
      anon_sym_SET,
  [1948] = 2,
    ACTIONS(117), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(115), 29,
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
      anon_sym_COLOR,
      anon_sym_SET,
  [1984] = 2,
    ACTIONS(193), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(191), 29,
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
      anon_sym_COLOR,
      anon_sym_SET,
  [2020] = 2,
    ACTIONS(345), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(343), 29,
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
      anon_sym_COLOR,
      anon_sym_SET,
  [2056] = 2,
    ACTIONS(349), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(347), 29,
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
      anon_sym_COLOR,
      anon_sym_SET,
  [2092] = 2,
    ACTIONS(125), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(123), 29,
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
      anon_sym_COLOR,
      anon_sym_SET,
  [2128] = 2,
    ACTIONS(353), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(351), 29,
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
      anon_sym_COLOR,
      anon_sym_SET,
  [2164] = 5,
    ACTIONS(357), 1,
      anon_sym_LBRACE,
    ACTIONS(359), 1,
      anon_sym_LBRACK,
    STATE(57), 1,
      sym_dimension,
    STATE(107), 1,
      sym_parameter_block,
    ACTIONS(355), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2181] = 1,
    ACTIONS(361), 4,
      sym_identifier,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LPAREN,
  [2188] = 4,
    ACTIONS(357), 1,
      anon_sym_LBRACE,
    ACTIONS(363), 1,
      sym_identifier,
    STATE(91), 1,
      sym_variable_declaration,
    STATE(94), 1,
      sym_parameter_block,
  [2201] = 3,
    ACTIONS(357), 1,
      anon_sym_LBRACE,
    STATE(102), 1,
      sym_parameter_block,
    ACTIONS(365), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2212] = 1,
    ACTIONS(367), 4,
      sym_identifier,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LPAREN,
  [2219] = 3,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    ACTIONS(371), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      aux_sym_parameter_block_repeat1,
  [2229] = 3,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    ACTIONS(373), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      aux_sym_parameter_block_repeat1,
  [2239] = 3,
    ACTIONS(375), 1,
      anon_sym_DQUOTE,
    ACTIONS(377), 1,
      aux_sym_string_token1,
    STATE(89), 1,
      aux_sym_string_repeat1,
  [2249] = 3,
    ACTIONS(379), 1,
      anon_sym_DQUOTE,
    ACTIONS(381), 1,
      aux_sym_string_token1,
    STATE(61), 1,
      aux_sym_string_repeat1,
  [2259] = 3,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(385), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym_set_declaration_repeat1,
  [2269] = 3,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym_set_declaration_repeat1,
  [2279] = 3,
    ACTIONS(392), 1,
      anon_sym_COMMA,
    ACTIONS(395), 1,
      anon_sym_RBRACK,
    STATE(65), 1,
      aux_sym_dimension_repeat1,
  [2289] = 1,
    ACTIONS(397), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [2295] = 3,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(399), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      aux_sym_set_declaration_repeat1,
  [2305] = 3,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(399), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym_set_declaration_repeat1,
  [2315] = 3,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(97), 1,
      sym_set_item,
    STATE(106), 1,
      sym_string,
  [2325] = 3,
    ACTIONS(377), 1,
      aux_sym_string_token1,
    ACTIONS(401), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      aux_sym_string_repeat1,
  [2335] = 3,
    ACTIONS(403), 1,
      anon_sym_COMMA,
    ACTIONS(406), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      aux_sym_parameter_block_repeat1,
  [2345] = 3,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(410), 1,
      anon_sym_RBRACK,
    STATE(65), 1,
      aux_sym_dimension_repeat1,
  [2355] = 1,
    ACTIONS(412), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [2361] = 3,
    ACTIONS(414), 1,
      anon_sym_SEMI,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    STATE(74), 1,
      aux_sym_sets_declaration_repeat1,
  [2371] = 3,
    ACTIONS(419), 1,
      anon_sym_SEMI,
    ACTIONS(421), 1,
      anon_sym_COMMA,
    STATE(86), 1,
      aux_sym_variables_declaration_repeat1,
  [2381] = 3,
    ACTIONS(423), 1,
      anon_sym_DQUOTE,
    ACTIONS(425), 1,
      aux_sym_string_token1,
    STATE(70), 1,
      aux_sym_string_repeat1,
  [2391] = 3,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      sym_set_item,
    STATE(106), 1,
      sym_string,
  [2401] = 3,
    ACTIONS(419), 1,
      anon_sym_SEMI,
    ACTIONS(421), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym_variables_declaration_repeat1,
  [2411] = 3,
    ACTIONS(357), 1,
      anon_sym_LBRACE,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
    STATE(116), 1,
      sym_parameter_block,
  [2421] = 3,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      aux_sym_set_declaration_repeat1,
  [2431] = 3,
    ACTIONS(431), 1,
      anon_sym_SEMI,
    ACTIONS(433), 1,
      anon_sym_COMMA,
    STATE(83), 1,
      aux_sym_colors_declaration_repeat1,
  [2441] = 3,
    ACTIONS(435), 1,
      anon_sym_SEMI,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    STATE(82), 1,
      aux_sym_colors_declaration_repeat1,
  [2451] = 3,
    ACTIONS(433), 1,
      anon_sym_COMMA,
    ACTIONS(440), 1,
      anon_sym_SEMI,
    STATE(82), 1,
      aux_sym_colors_declaration_repeat1,
  [2461] = 3,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(80), 1,
      sym_set_item,
    STATE(106), 1,
      sym_string,
  [2471] = 3,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym_variables_declaration_repeat1,
  [2481] = 3,
    ACTIONS(421), 1,
      anon_sym_COMMA,
    ACTIONS(447), 1,
      anon_sym_SEMI,
    STATE(85), 1,
      aux_sym_variables_declaration_repeat1,
  [2491] = 3,
    ACTIONS(449), 1,
      anon_sym_SEMI,
    ACTIONS(451), 1,
      anon_sym_COMMA,
    STATE(88), 1,
      aux_sym_sets_declaration_repeat1,
  [2501] = 3,
    ACTIONS(451), 1,
      anon_sym_COMMA,
    ACTIONS(453), 1,
      anon_sym_SEMI,
    STATE(74), 1,
      aux_sym_sets_declaration_repeat1,
  [2511] = 3,
    ACTIONS(455), 1,
      anon_sym_DQUOTE,
    ACTIONS(457), 1,
      aux_sym_string_token1,
    STATE(89), 1,
      aux_sym_string_repeat1,
  [2521] = 3,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(460), 1,
      anon_sym_RBRACK,
    STATE(72), 1,
      aux_sym_dimension_repeat1,
  [2531] = 3,
    ACTIONS(421), 1,
      anon_sym_COMMA,
    ACTIONS(462), 1,
      anon_sym_SEMI,
    STATE(78), 1,
      aux_sym_variables_declaration_repeat1,
  [2541] = 1,
    ACTIONS(414), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2546] = 2,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(130), 1,
      sym_string,
  [2553] = 2,
    ACTIONS(363), 1,
      sym_identifier,
    STATE(75), 1,
      sym_variable_declaration,
  [2560] = 1,
    ACTIONS(464), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2565] = 1,
    ACTIONS(466), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2570] = 1,
    ACTIONS(390), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2575] = 1,
    ACTIONS(395), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2580] = 1,
    ACTIONS(468), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2585] = 1,
    ACTIONS(406), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2590] = 2,
    ACTIONS(470), 1,
      sym_identifier,
    STATE(81), 1,
      sym_color_declaration,
  [2597] = 1,
    ACTIONS(472), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2602] = 2,
    ACTIONS(474), 1,
      sym_identifier,
    STATE(87), 1,
      sym_set_declaration,
  [2609] = 2,
    ACTIONS(470), 1,
      sym_identifier,
    STATE(111), 1,
      sym_color_declaration,
  [2616] = 2,
    ACTIONS(474), 1,
      sym_identifier,
    STATE(92), 1,
      sym_set_declaration,
  [2623] = 1,
    ACTIONS(476), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2628] = 1,
    ACTIONS(365), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2633] = 1,
    ACTIONS(442), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2638] = 2,
    ACTIONS(363), 1,
      sym_identifier,
    STATE(108), 1,
      sym_variable_declaration,
  [2645] = 1,
    ACTIONS(478), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2650] = 1,
    ACTIONS(435), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2655] = 1,
    ACTIONS(480), 1,
      anon_sym_OPERATOR,
  [2659] = 1,
    ACTIONS(482), 1,
      anon_sym_DB_MANAGER,
  [2663] = 1,
    ACTIONS(484), 1,
      anon_sym_DB_MANAGER,
  [2667] = 1,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
  [2671] = 1,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
  [2675] = 1,
    ACTIONS(490), 1,
      anon_sym_UI_MANAGER,
  [2679] = 1,
    ACTIONS(492), 1,
      anon_sym_RPAREN,
  [2683] = 1,
    ACTIONS(494), 1,
      anon_sym_FUNCTIONS,
  [2687] = 1,
    ACTIONS(496), 1,
      anon_sym_SEMI,
  [2691] = 1,
    ACTIONS(498), 1,
      anon_sym_STREAMER,
  [2695] = 1,
    ACTIONS(500), 1,
      anon_sym_SEMI,
  [2699] = 1,
    ACTIONS(502), 1,
      aux_sym_parameter_block_token1,
  [2703] = 1,
    ACTIONS(504), 1,
      anon_sym_DATAPOOL,
  [2707] = 1,
    ACTIONS(506), 1,
      anon_sym_LANGUAGE,
  [2711] = 1,
    ACTIONS(508), 1,
      sym_number,
  [2715] = 1,
    ACTIONS(510), 1,
      sym_number,
  [2719] = 1,
    ACTIONS(512), 1,
      anon_sym_SEMI,
  [2723] = 1,
    ACTIONS(514), 1,
      anon_sym_SEMI,
  [2727] = 1,
    ACTIONS(516), 1,
      anon_sym_SEMI,
  [2731] = 1,
    ACTIONS(518), 1,
      anon_sym_SEMI,
  [2735] = 1,
    ACTIONS(520), 1,
      anon_sym_SEMI,
  [2739] = 1,
    ACTIONS(522), 1,
      anon_sym_UI_MANAGER,
  [2743] = 1,
    ACTIONS(524), 1,
      anon_sym_SEMI,
  [2747] = 1,
    ACTIONS(526), 1,
      anon_sym_SEMI,
  [2751] = 1,
    ACTIONS(528), 1,
      anon_sym_FUNCTIONS,
  [2755] = 1,
    ACTIONS(530), 1,
      anon_sym_SEMI,
  [2759] = 1,
    ACTIONS(532), 1,
      anon_sym_SEMI,
  [2763] = 1,
    ACTIONS(534), 1,
      anon_sym_OPERATOR,
  [2767] = 1,
    ACTIONS(536), 1,
      anon_sym_LANGUAGE,
  [2771] = 1,
    ACTIONS(538), 1,
      anon_sym_SEMI,
  [2775] = 1,
    ACTIONS(540), 1,
      anon_sym_SEMI,
  [2779] = 1,
    ACTIONS(542), 1,
      anon_sym_STREAMER,
  [2783] = 1,
    ACTIONS(544), 1,
      aux_sym_parameter_block_token1,
  [2787] = 1,
    ACTIONS(546), 1,
      ts_builtin_sym_end,
  [2791] = 1,
    ACTIONS(548), 1,
      anon_sym_SEMI,
  [2795] = 1,
    ACTIONS(550), 1,
      aux_sym_include_token1,
  [2799] = 1,
    ACTIONS(552), 1,
      anon_sym_SEMI,
  [2803] = 1,
    ACTIONS(554), 1,
      anon_sym_DATAPOOL,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 58,
  [SMALL_STATE(6)] = 116,
  [SMALL_STATE(7)] = 160,
  [SMALL_STATE(8)] = 218,
  [SMALL_STATE(9)] = 262,
  [SMALL_STATE(10)] = 304,
  [SMALL_STATE(11)] = 346,
  [SMALL_STATE(12)] = 388,
  [SMALL_STATE(13)] = 430,
  [SMALL_STATE(14)] = 472,
  [SMALL_STATE(15)] = 514,
  [SMALL_STATE(16)] = 556,
  [SMALL_STATE(17)] = 598,
  [SMALL_STATE(18)] = 640,
  [SMALL_STATE(19)] = 682,
  [SMALL_STATE(20)] = 724,
  [SMALL_STATE(21)] = 766,
  [SMALL_STATE(22)] = 808,
  [SMALL_STATE(23)] = 850,
  [SMALL_STATE(24)] = 892,
  [SMALL_STATE(25)] = 934,
  [SMALL_STATE(26)] = 976,
  [SMALL_STATE(27)] = 1022,
  [SMALL_STATE(28)] = 1068,
  [SMALL_STATE(29)] = 1114,
  [SMALL_STATE(30)] = 1160,
  [SMALL_STATE(31)] = 1206,
  [SMALL_STATE(32)] = 1252,
  [SMALL_STATE(33)] = 1298,
  [SMALL_STATE(34)] = 1344,
  [SMALL_STATE(35)] = 1390,
  [SMALL_STATE(36)] = 1436,
  [SMALL_STATE(37)] = 1482,
  [SMALL_STATE(38)] = 1528,
  [SMALL_STATE(39)] = 1574,
  [SMALL_STATE(40)] = 1620,
  [SMALL_STATE(41)] = 1666,
  [SMALL_STATE(42)] = 1712,
  [SMALL_STATE(43)] = 1758,
  [SMALL_STATE(44)] = 1804,
  [SMALL_STATE(45)] = 1840,
  [SMALL_STATE(46)] = 1876,
  [SMALL_STATE(47)] = 1912,
  [SMALL_STATE(48)] = 1948,
  [SMALL_STATE(49)] = 1984,
  [SMALL_STATE(50)] = 2020,
  [SMALL_STATE(51)] = 2056,
  [SMALL_STATE(52)] = 2092,
  [SMALL_STATE(53)] = 2128,
  [SMALL_STATE(54)] = 2164,
  [SMALL_STATE(55)] = 2181,
  [SMALL_STATE(56)] = 2188,
  [SMALL_STATE(57)] = 2201,
  [SMALL_STATE(58)] = 2212,
  [SMALL_STATE(59)] = 2219,
  [SMALL_STATE(60)] = 2229,
  [SMALL_STATE(61)] = 2239,
  [SMALL_STATE(62)] = 2249,
  [SMALL_STATE(63)] = 2259,
  [SMALL_STATE(64)] = 2269,
  [SMALL_STATE(65)] = 2279,
  [SMALL_STATE(66)] = 2289,
  [SMALL_STATE(67)] = 2295,
  [SMALL_STATE(68)] = 2305,
  [SMALL_STATE(69)] = 2315,
  [SMALL_STATE(70)] = 2325,
  [SMALL_STATE(71)] = 2335,
  [SMALL_STATE(72)] = 2345,
  [SMALL_STATE(73)] = 2355,
  [SMALL_STATE(74)] = 2361,
  [SMALL_STATE(75)] = 2371,
  [SMALL_STATE(76)] = 2381,
  [SMALL_STATE(77)] = 2391,
  [SMALL_STATE(78)] = 2401,
  [SMALL_STATE(79)] = 2411,
  [SMALL_STATE(80)] = 2421,
  [SMALL_STATE(81)] = 2431,
  [SMALL_STATE(82)] = 2441,
  [SMALL_STATE(83)] = 2451,
  [SMALL_STATE(84)] = 2461,
  [SMALL_STATE(85)] = 2471,
  [SMALL_STATE(86)] = 2481,
  [SMALL_STATE(87)] = 2491,
  [SMALL_STATE(88)] = 2501,
  [SMALL_STATE(89)] = 2511,
  [SMALL_STATE(90)] = 2521,
  [SMALL_STATE(91)] = 2531,
  [SMALL_STATE(92)] = 2541,
  [SMALL_STATE(93)] = 2546,
  [SMALL_STATE(94)] = 2553,
  [SMALL_STATE(95)] = 2560,
  [SMALL_STATE(96)] = 2565,
  [SMALL_STATE(97)] = 2570,
  [SMALL_STATE(98)] = 2575,
  [SMALL_STATE(99)] = 2580,
  [SMALL_STATE(100)] = 2585,
  [SMALL_STATE(101)] = 2590,
  [SMALL_STATE(102)] = 2597,
  [SMALL_STATE(103)] = 2602,
  [SMALL_STATE(104)] = 2609,
  [SMALL_STATE(105)] = 2616,
  [SMALL_STATE(106)] = 2623,
  [SMALL_STATE(107)] = 2628,
  [SMALL_STATE(108)] = 2633,
  [SMALL_STATE(109)] = 2638,
  [SMALL_STATE(110)] = 2645,
  [SMALL_STATE(111)] = 2650,
  [SMALL_STATE(112)] = 2655,
  [SMALL_STATE(113)] = 2659,
  [SMALL_STATE(114)] = 2663,
  [SMALL_STATE(115)] = 2667,
  [SMALL_STATE(116)] = 2671,
  [SMALL_STATE(117)] = 2675,
  [SMALL_STATE(118)] = 2679,
  [SMALL_STATE(119)] = 2683,
  [SMALL_STATE(120)] = 2687,
  [SMALL_STATE(121)] = 2691,
  [SMALL_STATE(122)] = 2695,
  [SMALL_STATE(123)] = 2699,
  [SMALL_STATE(124)] = 2703,
  [SMALL_STATE(125)] = 2707,
  [SMALL_STATE(126)] = 2711,
  [SMALL_STATE(127)] = 2715,
  [SMALL_STATE(128)] = 2719,
  [SMALL_STATE(129)] = 2723,
  [SMALL_STATE(130)] = 2727,
  [SMALL_STATE(131)] = 2731,
  [SMALL_STATE(132)] = 2735,
  [SMALL_STATE(133)] = 2739,
  [SMALL_STATE(134)] = 2743,
  [SMALL_STATE(135)] = 2747,
  [SMALL_STATE(136)] = 2751,
  [SMALL_STATE(137)] = 2755,
  [SMALL_STATE(138)] = 2759,
  [SMALL_STATE(139)] = 2763,
  [SMALL_STATE(140)] = 2767,
  [SMALL_STATE(141)] = 2771,
  [SMALL_STATE(142)] = 2775,
  [SMALL_STATE(143)] = 2779,
  [SMALL_STATE(144)] = 2783,
  [SMALL_STATE(145)] = 2787,
  [SMALL_STATE(146)] = 2791,
  [SMALL_STATE(147)] = 2795,
  [SMALL_STATE(148)] = 2799,
  [SMALL_STATE(149)] = 2803,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(147),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(93),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(5),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(62),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(56),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(49),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(49),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(101),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(103),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_db_manager_block, 4),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_db_manager_block, 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functions_block, 4),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions_block, 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ui_manager_block, 4),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ui_manager_block, 4),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datapool_block, 5),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datapool_block, 5),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 3, .production_id = 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 3, .production_id = 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language_block, 4),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_language_block, 4),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_block, 4),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_block, 4),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language_block, 5),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_language_block, 5),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_db_manager_block, 5),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_db_manager_block, 5),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ui_manager_block, 5),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ui_manager_block, 5),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_streamer_block, 4),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_streamer_block, 4),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datapool_block, 4),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datapool_block, 4),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functions_block, 5),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions_block, 5),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_block, 5),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_block, 5),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_streamer_block, 5),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_streamer_block, 5),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reason, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reason, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ui_manager_block_repeat1, 2), SHIFT_REPEAT(28),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ui_manager_block_repeat1, 2), SHIFT_REPEAT(62),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ui_manager_block_repeat1, 2), SHIFT_REPEAT(49),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ui_manager_block_repeat1, 2), SHIFT_REPEAT(49),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ui_manager_block_repeat1, 2),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operator_block_repeat1, 2), SHIFT_REPEAT(29),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operator_block_repeat1, 2), SHIFT_REPEAT(62),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operator_block_repeat1, 2), SHIFT_REPEAT(49),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operator_block_repeat1, 2), SHIFT_REPEAT(49),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operator_block_repeat1, 2),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_streamer_block_repeat1, 2), SHIFT_REPEAT(30),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_streamer_block_repeat1, 2), SHIFT_REPEAT(62),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_streamer_block_repeat1, 2), SHIFT_REPEAT(49),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_streamer_block_repeat1, 2), SHIFT_REPEAT(49),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_streamer_block_repeat1, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_db_manager_block_repeat1, 2), SHIFT_REPEAT(32),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_db_manager_block_repeat1, 2), SHIFT_REPEAT(62),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_db_manager_block_repeat1, 2), SHIFT_REPEAT(49),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_db_manager_block_repeat1, 2), SHIFT_REPEAT(49),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_db_manager_block_repeat1, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_block_repeat1, 2), SHIFT_REPEAT(34),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_block_repeat1, 2), SHIFT_REPEAT(62),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_block_repeat1, 2), SHIFT_REPEAT(49),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_functions_block_repeat1, 2), SHIFT_REPEAT(49),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functions_block_repeat1, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_language_block_repeat1, 2), SHIFT_REPEAT(42),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_language_block_repeat1, 2), SHIFT_REPEAT(62),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_language_block_repeat1, 2), SHIFT_REPEAT(49),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_language_block_repeat1, 2), SHIFT_REPEAT(49),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_language_block_repeat1, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_declaration, 5, .production_id = 3),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variables_declaration, 5, .production_id = 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sets_declaration, 3),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sets_declaration, 3),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colors_declaration, 3),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_colors_declaration, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_declaration, 3, .production_id = 3),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variables_declaration, 3, .production_id = 3),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_declaration, 4, .production_id = 3),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variables_declaration, 4, .production_id = 3),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colors_declaration, 4),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_colors_declaration, 4),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sets_declaration, 4),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sets_declaration, 4),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 1, .production_id = 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_block, 4),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2, .production_id = 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_block, 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_set_declaration_repeat1, 2), SHIFT_REPEAT(69),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_set_declaration_repeat1, 2),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimension_repeat1, 2), SHIFT_REPEAT(126),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dimension_repeat1, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 4),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_block_repeat1, 2), SHIFT_REPEAT(123),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_block_repeat1, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 3),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sets_declaration_repeat1, 2),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sets_declaration_repeat1, 2), SHIFT_REPEAT(105),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_colors_declaration_repeat1, 2),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_colors_declaration_repeat1, 2), SHIFT_REPEAT(104),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_declaration_repeat1, 2),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_declaration_repeat1, 2), SHIFT_REPEAT(109),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(89),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_declaration, 6, .production_id = 5),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_declaration, 5, .production_id = 5),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_declaration, 4, .production_id = 5),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, .production_id = 2),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_item, 1),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_declaration, 3, .production_id = 4),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [546] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
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
