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
#define STATE_COUNT 165
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 104
#define ALIAS_COUNT 3
#define TOKEN_COUNT 53
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
  anon_sym_FUNC = 50,
  anon_sym_UI_MANAGER = 51,
  anon_sym_DB_MANAGER = 52,
  sym_source_file = 53,
  sym__high_level_blocks = 54,
  sym__expression = 55,
  sym_string = 56,
  sym_reason = 57,
  sym_include = 58,
  sym_description = 59,
  sym_parameter_block = 60,
  sym_language_block = 61,
  sym__language_block_expression = 62,
  sym_datapool_block = 63,
  sym__datapool_block_expression = 64,
  sym_variables_declaration = 65,
  sym_variable_declaration = 66,
  sym_dimension = 67,
  sym_colors_declaration = 68,
  sym_color_declaration = 69,
  sym_sets_declaration = 70,
  sym_set_declaration = 71,
  sym_set_item = 72,
  sym_streamer_block = 73,
  sym__streamer_block_expression = 74,
  sym_operator_block = 75,
  sym__operator_block_expression = 76,
  sym_functions_block = 77,
  sym__functions_block_expression = 78,
  sym_functions_declaration = 79,
  sym_function_declaration = 80,
  sym_function_body = 81,
  sym__function_expression = 82,
  sym_ui_manager_block = 83,
  sym__ui_manager_block_expression = 84,
  sym_db_manager_block = 85,
  sym__db_manager_block_expression = 86,
  aux_sym_source_file_repeat1 = 87,
  aux_sym_string_repeat1 = 88,
  aux_sym_parameter_block_repeat1 = 89,
  aux_sym_language_block_repeat1 = 90,
  aux_sym_datapool_block_repeat1 = 91,
  aux_sym_variables_declaration_repeat1 = 92,
  aux_sym_dimension_repeat1 = 93,
  aux_sym_colors_declaration_repeat1 = 94,
  aux_sym_sets_declaration_repeat1 = 95,
  aux_sym_set_declaration_repeat1 = 96,
  aux_sym_streamer_block_repeat1 = 97,
  aux_sym_operator_block_repeat1 = 98,
  aux_sym_functions_block_repeat1 = 99,
  aux_sym_functions_declaration_repeat1 = 100,
  aux_sym_function_body_repeat1 = 101,
  aux_sym_ui_manager_block_repeat1 = 102,
  aux_sym_db_manager_block_repeat1 = 103,
  alias_sym_color_identifier = 104,
  alias_sym_function_identifier = 105,
  alias_sym_set_identifier = 106,
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
  [anon_sym_FUNC] = "FUNC",
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
  [sym_functions_declaration] = "functions_declaration",
  [sym_function_declaration] = "function_declaration",
  [sym_function_body] = "function_body",
  [sym__function_expression] = "_function_expression",
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
  [aux_sym_functions_declaration_repeat1] = "functions_declaration_repeat1",
  [aux_sym_function_body_repeat1] = "function_body_repeat1",
  [aux_sym_ui_manager_block_repeat1] = "ui_manager_block_repeat1",
  [aux_sym_db_manager_block_repeat1] = "db_manager_block_repeat1",
  [alias_sym_color_identifier] = "color_identifier",
  [alias_sym_function_identifier] = "function_identifier",
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
  [anon_sym_FUNC] = anon_sym_FUNC,
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
  [sym_functions_declaration] = sym_functions_declaration,
  [sym_function_declaration] = sym_function_declaration,
  [sym_function_body] = sym_function_body,
  [sym__function_expression] = sym__function_expression,
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
  [aux_sym_functions_declaration_repeat1] = aux_sym_functions_declaration_repeat1,
  [aux_sym_function_body_repeat1] = aux_sym_function_body_repeat1,
  [aux_sym_ui_manager_block_repeat1] = aux_sym_ui_manager_block_repeat1,
  [aux_sym_db_manager_block_repeat1] = aux_sym_db_manager_block_repeat1,
  [alias_sym_color_identifier] = alias_sym_color_identifier,
  [alias_sym_function_identifier] = alias_sym_function_identifier,
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
  [anon_sym_FUNC] = {
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
  [sym_functions_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_body] = {
    .visible = true,
    .named = true,
  },
  [sym__function_expression] = {
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
  [aux_sym_functions_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_body_repeat1] = {
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
  [alias_sym_function_identifier] = {
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

static const TSFieldMapSlice ts_field_map_slices[7] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 1},
  [5] = {.index = 1, .length = 1},
  [6] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_description_text, 1},
  [1] =
    {field_name, 0},
  [2] =
    {field_type, 0},
};

static TSSymbol ts_alias_sequences[7][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [0] = alias_sym_function_identifier,
  },
  [5] = {
    [0] = alias_sym_color_identifier,
  },
  [6] = {
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
      if (eof) ADVANCE(155);
      if (lookahead == '"') ADVANCE(306);
      if (lookahead == '(') ADVANCE(372);
      if (lookahead == ')') ADVANCE(373);
      if (lookahead == ',') ADVANCE(364);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(304);
      if (lookahead == 'C') ADVANCE(179);
      if (lookahead == 'E') ADVANCE(233);
      if (lookahead == 'F') ADVANCE(159);
      if (lookahead == 'I') ADVANCE(234);
      if (lookahead == 'N') ADVANCE(254);
      if (lookahead == 'R') ADVANCE(194);
      if (lookahead == 'S') ADVANCE(180);
      if (lookahead == 'T') ADVANCE(270);
      if (lookahead == '[') ADVANCE(368);
      if (lookahead == ']') ADVANCE(369);
      if (lookahead == '{') ADVANCE(362);
      if (lookahead == '}') ADVANCE(365);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(306);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(308);
      if (lookahead != 0) ADVANCE(309);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(307);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(307);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(306);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(304);
      if (lookahead == 'C') ADVANCE(30);
      if (lookahead == 'E') ADVANCE(83);
      if (lookahead == 'F') ADVANCE(11);
      if (lookahead == 'I') ADVANCE(84);
      if (lookahead == 'N') ADVANCE(102);
      if (lookahead == 'R') ADVANCE(45);
      if (lookahead == 'S') ADVANCE(31);
      if (lookahead == 'T') ADVANCE(117);
      if (lookahead == '}') ADVANCE(365);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(306);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(304);
      if (lookahead == 'E') ADVANCE(233);
      if (lookahead == 'F') ADVANCE(159);
      if (lookahead == 'I') ADVANCE(244);
      if (lookahead == 'N') ADVANCE(254);
      if (lookahead == 'R') ADVANCE(198);
      if (lookahead == 'T') ADVANCE(270);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(372);
      if (lookahead == ',') ADVANCE(364);
      if (lookahead == ';') ADVANCE(304);
      if (lookahead == '{') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(305);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(70);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(324);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(20);
      if (lookahead == 'C') ADVANCE(71);
      if (lookahead == 'D') ADVANCE(122);
      if (lookahead == 'I') ADVANCE(87);
      if (lookahead == 'M') ADVANCE(101);
      if (lookahead == 'O') ADVANCE(116);
      if (lookahead == 'P') ADVANCE(13);
      if (lookahead == 'R') ADVANCE(37);
      if (lookahead == 'S') ADVANCE(52);
      if (lookahead == 'U') ADVANCE(96);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(69);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(136);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(73);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(121);
      END_STATE();
    case 16:
      if (lookahead == 'A') ADVANCE(139);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(93);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(140);
      END_STATE();
    case 19:
      if (lookahead == 'C') ADVANCE(68);
      END_STATE();
    case 20:
      if (lookahead == 'C') ADVANCE(135);
      END_STATE();
    case 21:
      if (lookahead == 'C') ADVANCE(130);
      END_STATE();
    case 22:
      if (lookahead == 'C') ADVANCE(131);
      END_STATE();
    case 23:
      if (lookahead == 'C') ADVANCE(138);
      END_STATE();
    case 24:
      if (lookahead == 'C') ADVANCE(137);
      END_STATE();
    case 25:
      if (lookahead == 'C') ADVANCE(18);
      END_STATE();
    case 26:
      if (lookahead == 'C') ADVANCE(110);
      if (lookahead == 'E') ADVANCE(78);
      END_STATE();
    case 27:
      if (lookahead == 'C') ADVANCE(141);
      END_STATE();
    case 28:
      if (lookahead == 'D') ADVANCE(366);
      END_STATE();
    case 29:
      if (lookahead == 'D') ADVANCE(320);
      END_STATE();
    case 30:
      if (lookahead == 'D') ADVANCE(12);
      if (lookahead == 'O') ADVANCE(72);
      END_STATE();
    case 31:
      if (lookahead == 'E') ADVANCE(127);
      if (lookahead == 'T') ADVANCE(118);
      END_STATE();
    case 32:
      if (lookahead == 'E') ADVANCE(59);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(322);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(314);
      END_STATE();
    case 35:
      if (lookahead == 'E') ADVANCE(316);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(147);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(82);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(341);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(329);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(348);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(325);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(335);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(357);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(81);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(8);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(119);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(15);
      if (lookahead == 'O') ADVANCE(125);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(123);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(88);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(95);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(21);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(77);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(22);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(23);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(24);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(80);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(27);
      END_STATE();
    case 58:
      if (lookahead == 'G') ADVANCE(324);
      END_STATE();
    case 59:
      if (lookahead == 'G') ADVANCE(46);
      END_STATE();
    case 60:
      if (lookahead == 'G') ADVANCE(79);
      END_STATE();
    case 61:
      if (lookahead == 'I') ADVANCE(29);
      END_STATE();
    case 62:
      if (lookahead == 'I') ADVANCE(146);
      END_STATE();
    case 63:
      if (lookahead == 'I') ADVANCE(25);
      END_STATE();
    case 64:
      if (lookahead == 'I') ADVANCE(91);
      END_STATE();
    case 65:
      if (lookahead == 'I') ADVANCE(94);
      END_STATE();
    case 66:
      if (lookahead == 'I') ADVANCE(106);
      END_STATE();
    case 67:
      if (lookahead == 'I') ADVANCE(107);
      END_STATE();
    case 68:
      if (lookahead == 'K') ADVANCE(345);
      END_STATE();
    case 69:
      if (lookahead == 'L') ADVANCE(124);
      END_STATE();
    case 70:
      if (lookahead == 'L') ADVANCE(324);
      if (lookahead == 'S') ADVANCE(105);
      END_STATE();
    case 71:
      if (lookahead == 'L') ADVANCE(47);
      if (lookahead == 'O') ADVANCE(97);
      END_STATE();
    case 72:
      if (lookahead == 'L') ADVANCE(103);
      if (lookahead == 'M') ADVANCE(113);
      END_STATE();
    case 73:
      if (lookahead == 'L') ADVANCE(61);
      END_STATE();
    case 74:
      if (lookahead == 'L') ADVANCE(85);
      END_STATE();
    case 75:
      if (lookahead == 'L') ADVANCE(63);
      END_STATE();
    case 76:
      if (lookahead == 'L') ADVANCE(36);
      END_STATE();
    case 77:
      if (lookahead == 'L') ADVANCE(51);
      END_STATE();
    case 78:
      if (lookahead == 'L') ADVANCE(44);
      END_STATE();
    case 79:
      if (lookahead == 'L') ADVANCE(43);
      END_STATE();
    case 80:
      if (lookahead == 'L') ADVANCE(53);
      END_STATE();
    case 81:
      if (lookahead == 'M') ADVANCE(50);
      END_STATE();
    case 82:
      if (lookahead == 'M') ADVANCE(109);
      END_STATE();
    case 83:
      if (lookahead == 'N') ADVANCE(28);
      if (lookahead == 'O') ADVANCE(74);
      END_STATE();
    case 84:
      if (lookahead == 'N') ADVANCE(134);
      END_STATE();
    case 85:
      if (lookahead == 'N') ADVANCE(318);
      END_STATE();
    case 86:
      if (lookahead == 'N') ADVANCE(148);
      END_STATE();
    case 87:
      if (lookahead == 'N') ADVANCE(112);
      END_STATE();
    case 88:
      if (lookahead == 'N') ADVANCE(343);
      END_STATE();
    case 89:
      if (lookahead == 'N') ADVANCE(331);
      END_STATE();
    case 90:
      if (lookahead == 'N') ADVANCE(349);
      END_STATE();
    case 91:
      if (lookahead == 'N') ADVANCE(58);
      END_STATE();
    case 92:
      if (lookahead == 'N') ADVANCE(33);
      END_STATE();
    case 93:
      if (lookahead == 'N') ADVANCE(60);
      END_STATE();
    case 94:
      if (lookahead == 'N') ADVANCE(132);
      END_STATE();
    case 95:
      if (lookahead == 'N') ADVANCE(133);
      END_STATE();
    case 96:
      if (lookahead == 'N') ADVANCE(126);
      END_STATE();
    case 97:
      if (lookahead == 'N') ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == 'N') ADVANCE(55);
      END_STATE();
    case 99:
      if (lookahead == 'N') ADVANCE(57);
      END_STATE();
    case 100:
      if (lookahead == 'N') ADVANCE(99);
      END_STATE();
    case 101:
      if (lookahead == 'O') ADVANCE(144);
      END_STATE();
    case 102:
      if (lookahead == 'O') ADVANCE(92);
      END_STATE();
    case 103:
      if (lookahead == 'O') ADVANCE(120);
      END_STATE();
    case 104:
      if (lookahead == 'O') ADVANCE(111);
      END_STATE();
    case 105:
      if (lookahead == 'O') ADVANCE(86);
      END_STATE();
    case 106:
      if (lookahead == 'O') ADVANCE(89);
      END_STATE();
    case 107:
      if (lookahead == 'O') ADVANCE(90);
      END_STATE();
    case 108:
      if (lookahead == 'O') ADVANCE(65);
      END_STATE();
    case 109:
      if (lookahead == 'O') ADVANCE(145);
      END_STATE();
    case 110:
      if (lookahead == 'O') ADVANCE(100);
      END_STATE();
    case 111:
      if (lookahead == 'P') ADVANCE(333);
      END_STATE();
    case 112:
      if (lookahead == 'P') ADVANCE(143);
      if (lookahead == 'S') ADVANCE(48);
      END_STATE();
    case 113:
      if (lookahead == 'P') ADVANCE(76);
      END_STATE();
    case 114:
      if (lookahead == 'P') ADVANCE(108);
      if (lookahead == 'R') ADVANCE(54);
      END_STATE();
    case 115:
      if (lookahead == 'P') ADVANCE(75);
      END_STATE();
    case 116:
      if (lookahead == 'P') ADVANCE(49);
      END_STATE();
    case 117:
      if (lookahead == 'R') ADVANCE(142);
      END_STATE();
    case 118:
      if (lookahead == 'R') ADVANCE(64);
      END_STATE();
    case 119:
      if (lookahead == 'R') ADVANCE(324);
      END_STATE();
    case 120:
      if (lookahead == 'R') ADVANCE(370);
      END_STATE();
    case 121:
      if (lookahead == 'R') ADVANCE(327);
      END_STATE();
    case 122:
      if (lookahead == 'R') ADVANCE(104);
      if (lookahead == 'U') ADVANCE(115);
      END_STATE();
    case 123:
      if (lookahead == 'R') ADVANCE(129);
      END_STATE();
    case 124:
      if (lookahead == 'S') ADVANCE(35);
      END_STATE();
    case 125:
      if (lookahead == 'S') ADVANCE(39);
      END_STATE();
    case 126:
      if (lookahead == 'S') ADVANCE(56);
      END_STATE();
    case 127:
      if (lookahead == 'T') ADVANCE(374);
      END_STATE();
    case 128:
      if (lookahead == 'T') ADVANCE(337);
      END_STATE();
    case 129:
      if (lookahead == 'T') ADVANCE(339);
      END_STATE();
    case 130:
      if (lookahead == 'T') ADVANCE(354);
      END_STATE();
    case 131:
      if (lookahead == 'T') ADVANCE(359);
      END_STATE();
    case 132:
      if (lookahead == 'T') ADVANCE(355);
      END_STATE();
    case 133:
      if (lookahead == 'T') ADVANCE(351);
      END_STATE();
    case 134:
      if (lookahead == 'T') ADVANCE(32);
      if (lookahead == 'V') ADVANCE(14);
      END_STATE();
    case 135:
      if (lookahead == 'T') ADVANCE(62);
      END_STATE();
    case 136:
      if (lookahead == 'T') ADVANCE(9);
      END_STATE();
    case 137:
      if (lookahead == 'T') ADVANCE(66);
      END_STATE();
    case 138:
      if (lookahead == 'T') ADVANCE(17);
      END_STATE();
    case 139:
      if (lookahead == 'T') ADVANCE(41);
      END_STATE();
    case 140:
      if (lookahead == 'T') ADVANCE(42);
      END_STATE();
    case 141:
      if (lookahead == 'T') ADVANCE(67);
      END_STATE();
    case 142:
      if (lookahead == 'U') ADVANCE(34);
      END_STATE();
    case 143:
      if (lookahead == 'U') ADVANCE(128);
      END_STATE();
    case 144:
      if (lookahead == 'V') ADVANCE(38);
      END_STATE();
    case 145:
      if (lookahead == 'V') ADVANCE(40);
      END_STATE();
    case 146:
      if (lookahead == 'V') ADVANCE(16);
      END_STATE();
    case 147:
      if (lookahead == 'X') ADVANCE(324);
      END_STATE();
    case 148:
      if (lookahead == '_') ADVANCE(10);
      END_STATE();
    case 149:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 150:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(150)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 151:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(151)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 154:
      if (eof) ADVANCE(155);
      if (lookahead == '"') ADVANCE(306);
      if (lookahead == ')') ADVANCE(373);
      if (lookahead == ',') ADVANCE(364);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(304);
      if (lookahead == 'E') ADVANCE(252);
      if (lookahead == 'F') ADVANCE(159);
      if (lookahead == 'I') ADVANCE(244);
      if (lookahead == 'N') ADVANCE(254);
      if (lookahead == 'R') ADVANCE(198);
      if (lookahead == 'T') ADVANCE(270);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(154)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(303);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(219);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(169);
      if (lookahead == 'C') ADVANCE(221);
      if (lookahead == 'D') ADVANCE(274);
      if (lookahead == 'I') ADVANCE(237);
      if (lookahead == 'M') ADVANCE(253);
      if (lookahead == 'O') ADVANCE(268);
      if (lookahead == 'P') ADVANCE(162);
      if (lookahead == 'R') ADVANCE(186);
      if (lookahead == 'S') ADVANCE(202);
      if (lookahead == 'U') ADVANCE(247);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(220);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(289);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(278);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(168);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(223);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(273);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(292);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(243);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(293);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(218);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(288);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(283);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(284);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(291);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(290);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(167);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(262);
      if (lookahead == 'E') ADVANCE(228);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(294);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(367);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(321);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(160);
      if (lookahead == 'O') ADVANCE(222);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(280);
      if (lookahead == 'T') ADVANCE(271);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(209);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(323);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(315);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(317);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(301);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(232);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(342);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(330);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(347);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(326);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(336);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(358);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(231);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(157);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(269);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(164);
      if (lookahead == 'O') ADVANCE(277);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(275);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(161);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(238);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(246);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(170);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(227);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(171);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(172);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(173);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(230);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(176);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(303);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(195);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(229);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(178);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(300);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(174);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(241);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(245);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(258);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(259);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(346);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(303);
      if (lookahead == 'S') ADVANCE(257);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(276);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(196);
      if (lookahead == 'O') ADVANCE(248);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(255);
      if (lookahead == 'M') ADVANCE(265);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(211);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(235);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(213);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(185);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(201);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(193);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(192);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(203);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(200);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(261);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(177);
      if (lookahead == 'O') ADVANCE(224);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(287);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(319);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(302);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(264);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(344);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(332);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(350);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(208);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(182);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(210);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(299);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(285);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(286);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(279);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(249);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(205);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(207);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(250);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(224);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(297);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(242);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(272);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(263);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(236);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(239);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(240);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(215);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(298);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(251);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(334);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(296);
      if (lookahead == 'S') ADVANCE(197);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(226);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(260);
      if (lookahead == 'R') ADVANCE(204);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(225);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(199);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(303);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(295);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(214);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(371);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(328);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(256);
      if (lookahead == 'U') ADVANCE(267);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(282);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(184);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(188);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(257);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(206);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(375);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(338);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(340);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(353);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(360);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(356);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(352);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(181);
      if (lookahead == 'V') ADVANCE(163);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(212);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(156);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(216);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(166);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(190);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(191);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(217);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(183);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(281);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(187);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(189);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(163);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(165);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(303);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(158);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(309);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(311);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_eoln);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_eoln);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_invalid);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_invalid);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_none);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_none);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_primitive_type);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_REASON_ACTIVATE);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_REASON_ACTIVATE);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_REASON_CLEAR);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_REASON_CLEAR);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_REASON_CLOSE);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_REASON_CLOSE);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_REASON_CONNECTION);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_REASON_CONNECTION);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_REASON_DROP);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_REASON_DROP);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_REASON_DUPLICATE);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_REASON_DUPLICATE);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_REASON_INPUT);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_REASON_INPUT);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_REASON_INSERT);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_REASON_INSERT);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_REASON_MOVE);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_REASON_MOVE);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_REASON_OPEN);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_REASON_OPEN);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_REASON_PACK);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_REASON_PACK);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_REASON_REMOVE);
      if (lookahead == '_') ADVANCE(175);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_REASON_REMOVE);
      if (lookahead == '_') ADVANCE(26);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_REASON_REMOVE_CONNECTION);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_REASON_REMOVE_CONNECTION);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_REASON_REMOVE_ELEMENT);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_REASON_REMOVE_ELEMENT);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_REASON_SELECT);
      if (lookahead == '_') ADVANCE(266);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_REASON_SELECT);
      if (lookahead == '_') ADVANCE(114);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_REASON_SELECT_POINT);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_REASON_SELECT_POINT);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_REASON_SELECT_RECTANGLE);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_REASON_SELECT_RECTANGLE);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_REASON_UNSELECT);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_REASON_UNSELECT);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_parameter_block_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_COLOR);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_COLOR);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_SET);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_SET);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
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
      ACCEPT_TOKEN(anon_sym_FUNC);
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
  [1] = {.lex_state = 154},
  [2] = {.lex_state = 154},
  [3] = {.lex_state = 154},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 154},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 154},
  [9] = {.lex_state = 154},
  [10] = {.lex_state = 154},
  [11] = {.lex_state = 154},
  [12] = {.lex_state = 154},
  [13] = {.lex_state = 154},
  [14] = {.lex_state = 154},
  [15] = {.lex_state = 154},
  [16] = {.lex_state = 154},
  [17] = {.lex_state = 154},
  [18] = {.lex_state = 154},
  [19] = {.lex_state = 154},
  [20] = {.lex_state = 154},
  [21] = {.lex_state = 154},
  [22] = {.lex_state = 154},
  [23] = {.lex_state = 154},
  [24] = {.lex_state = 154},
  [25] = {.lex_state = 154},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 0},
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
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 1},
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
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 6},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 6},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 150},
  [138] = {.lex_state = 6},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 6},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 6},
  [146] = {.lex_state = 6},
  [147] = {.lex_state = 6},
  [148] = {.lex_state = 150},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 6},
  [154] = {.lex_state = 6},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 151},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
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
    [anon_sym_FUNC] = ACTIONS(1),
    [anon_sym_UI_MANAGER] = ACTIONS(1),
    [anon_sym_DB_MANAGER] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(160),
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
};

static uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_INCLUDE,
    ACTIONS(15), 1,
      anon_sym_DESCRIPTION,
    ACTIONS(17), 1,
      anon_sym_LANGUAGE,
    ACTIONS(19), 1,
      anon_sym_DATAPOOL,
    ACTIONS(21), 1,
      anon_sym_STREAMER,
    ACTIONS(23), 1,
      anon_sym_OPERATOR,
    ACTIONS(25), 1,
      anon_sym_FUNCTIONS,
    ACTIONS(27), 1,
      anon_sym_UI_MANAGER,
    ACTIONS(29), 1,
      anon_sym_DB_MANAGER,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(33), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    STATE(3), 14,
      sym__high_level_blocks,
      sym__expression,
      sym_string,
      sym_reason,
      sym_include,
      sym_description,
      sym_language_block,
      sym_datapool_block,
      sym_streamer_block,
      sym_operator_block,
      sym_functions_block,
      sym_ui_manager_block,
      sym_db_manager_block,
      aux_sym_source_file_repeat1,
    ACTIONS(9), 16,
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
  [82] = 15,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_INCLUDE,
    ACTIONS(52), 1,
      anon_sym_DESCRIPTION,
    ACTIONS(55), 1,
      anon_sym_LANGUAGE,
    ACTIONS(58), 1,
      anon_sym_DATAPOOL,
    ACTIONS(61), 1,
      anon_sym_STREAMER,
    ACTIONS(64), 1,
      anon_sym_OPERATOR,
    ACTIONS(67), 1,
      anon_sym_FUNCTIONS,
    ACTIONS(70), 1,
      anon_sym_UI_MANAGER,
    ACTIONS(73), 1,
      anon_sym_DB_MANAGER,
    ACTIONS(46), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(37), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    STATE(3), 14,
      sym__high_level_blocks,
      sym__expression,
      sym_string,
      sym_reason,
      sym_include,
      sym_description,
      sym_language_block,
      sym_datapool_block,
      sym_streamer_block,
      sym_operator_block,
      sym_functions_block,
      sym_ui_manager_block,
      sym_db_manager_block,
      aux_sym_source_file_repeat1,
    ACTIONS(43), 16,
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
  [164] = 9,
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
  [222] = 9,
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
  [280] = 2,
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
  [324] = 9,
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
  [382] = 2,
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
  [426] = 2,
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
  [468] = 2,
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
  [510] = 2,
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
  [552] = 2,
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
  [594] = 2,
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
  [636] = 2,
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
  [678] = 2,
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
  [720] = 2,
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
  [762] = 2,
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
  [804] = 2,
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
  [846] = 2,
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
  [888] = 2,
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
  [930] = 2,
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
  [972] = 2,
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
  [1014] = 2,
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
  [1056] = 2,
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
  [1098] = 2,
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
  [1140] = 7,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      anon_sym_END,
    ACTIONS(199), 1,
      anon_sym_FUNC,
    ACTIONS(84), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(27), 6,
      sym__expression,
      sym_string,
      sym_reason,
      sym__functions_block_expression,
      sym_functions_declaration,
      aux_sym_functions_block_repeat1,
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
  [1190] = 7,
    ACTIONS(204), 1,
      anon_sym_DQUOTE,
    ACTIONS(213), 1,
      anon_sym_END,
    ACTIONS(215), 1,
      anon_sym_FUNC,
    ACTIONS(210), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(27), 6,
      sym__expression,
      sym_string,
      sym_reason,
      sym__functions_block_expression,
      sym_functions_declaration,
      aux_sym_functions_block_repeat1,
    ACTIONS(201), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(207), 16,
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
  [1240] = 7,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      anon_sym_FUNC,
    ACTIONS(220), 1,
      anon_sym_END,
    ACTIONS(84), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(26), 6,
      sym__expression,
      sym_string,
      sym_reason,
      sym__functions_block_expression,
      sym_functions_declaration,
      aux_sym_functions_block_repeat1,
    ACTIONS(218), 8,
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
  [1290] = 6,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(234), 1,
      anon_sym_RBRACE,
    ACTIONS(231), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(29), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__function_expression,
      aux_sym_function_body_repeat1,
    ACTIONS(222), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(228), 16,
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
  [1336] = 2,
    ACTIONS(125), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(123), 31,
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
      anon_sym_RBRACE,
      anon_sym_END,
      anon_sym_COLOR,
      anon_sym_SET,
      anon_sym_FUNC,
  [1374] = 6,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(238), 1,
      anon_sym_END,
    ACTIONS(84), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(38), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__operator_block_expression,
      aux_sym_operator_block_repeat1,
    ACTIONS(236), 8,
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
  [1420] = 2,
    ACTIONS(193), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(191), 31,
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
      anon_sym_RBRACE,
      anon_sym_END,
      anon_sym_COLOR,
      anon_sym_SET,
      anon_sym_FUNC,
  [1458] = 6,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(242), 1,
      anon_sym_END,
    ACTIONS(84), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(47), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__language_block_expression,
      aux_sym_language_block_repeat1,
    ACTIONS(240), 8,
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
  [1504] = 6,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(246), 1,
      anon_sym_END,
    ACTIONS(84), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(35), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__ui_manager_block_expression,
      aux_sym_ui_manager_block_repeat1,
    ACTIONS(244), 8,
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
  [1550] = 6,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      anon_sym_END,
    ACTIONS(257), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(35), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__ui_manager_block_expression,
      aux_sym_ui_manager_block_repeat1,
    ACTIONS(248), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(254), 16,
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
  [1596] = 6,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(264), 1,
      anon_sym_END,
    ACTIONS(84), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(44), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__db_manager_block_expression,
      aux_sym_db_manager_block_repeat1,
    ACTIONS(262), 8,
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
  [1642] = 6,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      anon_sym_END,
    ACTIONS(84), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(34), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__ui_manager_block_expression,
      aux_sym_ui_manager_block_repeat1,
    ACTIONS(266), 8,
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
  [1688] = 6,
    ACTIONS(273), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      anon_sym_END,
    ACTIONS(279), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(38), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__operator_block_expression,
      aux_sym_operator_block_repeat1,
    ACTIONS(270), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(276), 16,
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
  [1734] = 6,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(286), 1,
      anon_sym_END,
    ACTIONS(84), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(46), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__streamer_block_expression,
      aux_sym_streamer_block_repeat1,
    ACTIONS(284), 8,
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
  [1780] = 6,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(290), 1,
      anon_sym_END,
    ACTIONS(84), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(31), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__operator_block_expression,
      aux_sym_operator_block_repeat1,
    ACTIONS(288), 8,
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
  [1826] = 6,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_RBRACE,
    ACTIONS(84), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(29), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__function_expression,
      aux_sym_function_body_repeat1,
    ACTIONS(292), 8,
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
  [1872] = 6,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      anon_sym_END,
    ACTIONS(305), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(42), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__streamer_block_expression,
      aux_sym_streamer_block_repeat1,
    ACTIONS(296), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(302), 16,
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
  [1918] = 6,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    ACTIONS(322), 1,
      anon_sym_END,
    ACTIONS(319), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(43), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__language_block_expression,
      aux_sym_language_block_repeat1,
    ACTIONS(310), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(316), 16,
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
  [1964] = 6,
    ACTIONS(327), 1,
      anon_sym_DQUOTE,
    ACTIONS(336), 1,
      anon_sym_END,
    ACTIONS(333), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(44), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__db_manager_block_expression,
      aux_sym_db_manager_block_repeat1,
    ACTIONS(324), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(330), 16,
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
  [2010] = 2,
    ACTIONS(117), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(115), 31,
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
      anon_sym_RBRACE,
      anon_sym_END,
      anon_sym_COLOR,
      anon_sym_SET,
      anon_sym_FUNC,
  [2048] = 6,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(340), 1,
      anon_sym_END,
    ACTIONS(84), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(42), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__streamer_block_expression,
      aux_sym_streamer_block_repeat1,
    ACTIONS(338), 8,
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
  [2094] = 6,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      anon_sym_END,
    ACTIONS(84), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(43), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__language_block_expression,
      aux_sym_language_block_repeat1,
    ACTIONS(342), 8,
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
  [2140] = 6,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(348), 1,
      anon_sym_END,
    ACTIONS(84), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(36), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__db_manager_block_expression,
      aux_sym_db_manager_block_repeat1,
    ACTIONS(346), 8,
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
  [2186] = 6,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_RBRACE,
    ACTIONS(84), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(41), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__function_expression,
      aux_sym_function_body_repeat1,
    ACTIONS(350), 8,
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
  [2232] = 2,
    ACTIONS(356), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(354), 29,
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
  [2268] = 2,
    ACTIONS(360), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(358), 29,
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
  [2304] = 2,
    ACTIONS(364), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(362), 29,
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
  [2340] = 2,
    ACTIONS(368), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(366), 29,
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
  [2376] = 2,
    ACTIONS(372), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(370), 29,
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
  [2412] = 2,
    ACTIONS(376), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(374), 29,
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
  [2448] = 2,
    ACTIONS(380), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(378), 29,
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
  [2484] = 2,
    ACTIONS(384), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(382), 27,
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
      anon_sym_END,
      anon_sym_FUNC,
  [2518] = 2,
    ACTIONS(388), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(386), 27,
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
      anon_sym_END,
      anon_sym_FUNC,
  [2552] = 5,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    ACTIONS(394), 1,
      anon_sym_LBRACK,
    STATE(64), 1,
      sym_dimension,
    STATE(113), 1,
      sym_parameter_block,
    ACTIONS(390), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2569] = 1,
    ACTIONS(396), 4,
      sym_identifier,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LPAREN,
  [2576] = 1,
    ACTIONS(398), 4,
      sym_identifier,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LPAREN,
  [2583] = 3,
    ACTIONS(402), 1,
      anon_sym_LBRACE,
    STATE(104), 1,
      sym_function_body,
    ACTIONS(400), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2594] = 4,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    ACTIONS(404), 1,
      sym_identifier,
    STATE(66), 1,
      sym_variable_declaration,
    STATE(111), 1,
      sym_parameter_block,
  [2607] = 3,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    STATE(112), 1,
      sym_parameter_block,
    ACTIONS(406), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2618] = 3,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      sym_set_item,
    STATE(122), 1,
      sym_string,
  [2628] = 3,
    ACTIONS(408), 1,
      anon_sym_SEMI,
    ACTIONS(410), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_variables_declaration_repeat1,
  [2638] = 3,
    ACTIONS(412), 1,
      anon_sym_DQUOTE,
    ACTIONS(414), 1,
      aux_sym_string_token1,
    STATE(89), 1,
      aux_sym_string_repeat1,
  [2648] = 3,
    ACTIONS(416), 1,
      anon_sym_DQUOTE,
    ACTIONS(418), 1,
      aux_sym_string_token1,
    STATE(67), 1,
      aux_sym_string_repeat1,
  [2658] = 3,
    ACTIONS(420), 1,
      anon_sym_SEMI,
    ACTIONS(422), 1,
      anon_sym_COMMA,
    STATE(94), 1,
      aux_sym_functions_declaration_repeat1,
  [2668] = 3,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      aux_sym_set_declaration_repeat1,
  [2678] = 3,
    ACTIONS(428), 1,
      anon_sym_COMMA,
    ACTIONS(431), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      aux_sym_set_declaration_repeat1,
  [2688] = 3,
    ACTIONS(433), 1,
      anon_sym_COMMA,
    ACTIONS(436), 1,
      anon_sym_RBRACK,
    STATE(72), 1,
      aux_sym_dimension_repeat1,
  [2698] = 1,
    ACTIONS(438), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [2704] = 3,
    ACTIONS(414), 1,
      aux_sym_string_token1,
    ACTIONS(440), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      aux_sym_string_repeat1,
  [2714] = 3,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    ACTIONS(442), 1,
      anon_sym_RPAREN,
    STATE(70), 1,
      aux_sym_set_declaration_repeat1,
  [2724] = 3,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    ACTIONS(442), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      aux_sym_set_declaration_repeat1,
  [2734] = 3,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(108), 1,
      sym_set_item,
    STATE(122), 1,
      sym_string,
  [2744] = 3,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    ACTIONS(446), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      aux_sym_parameter_block_repeat1,
  [2754] = 3,
    ACTIONS(410), 1,
      anon_sym_COMMA,
    ACTIONS(448), 1,
      anon_sym_SEMI,
    STATE(96), 1,
      aux_sym_variables_declaration_repeat1,
  [2764] = 3,
    ACTIONS(450), 1,
      anon_sym_COMMA,
    ACTIONS(453), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      aux_sym_parameter_block_repeat1,
  [2774] = 3,
    ACTIONS(410), 1,
      anon_sym_COMMA,
    ACTIONS(448), 1,
      anon_sym_SEMI,
    STATE(93), 1,
      aux_sym_variables_declaration_repeat1,
  [2784] = 3,
    ACTIONS(455), 1,
      anon_sym_DQUOTE,
    ACTIONS(457), 1,
      aux_sym_string_token1,
    STATE(74), 1,
      aux_sym_string_repeat1,
  [2794] = 3,
    ACTIONS(459), 1,
      anon_sym_COMMA,
    ACTIONS(461), 1,
      anon_sym_RBRACK,
    STATE(72), 1,
      aux_sym_dimension_repeat1,
  [2804] = 1,
    ACTIONS(463), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [2810] = 3,
    ACTIONS(465), 1,
      anon_sym_SEMI,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym_functions_declaration_repeat1,
  [2820] = 3,
    ACTIONS(470), 1,
      anon_sym_SEMI,
    ACTIONS(472), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      aux_sym_colors_declaration_repeat1,
  [2830] = 3,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(90), 1,
      sym_set_item,
    STATE(122), 1,
      sym_string,
  [2840] = 3,
    ACTIONS(474), 1,
      anon_sym_SEMI,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    STATE(88), 1,
      aux_sym_sets_declaration_repeat1,
  [2850] = 3,
    ACTIONS(479), 1,
      anon_sym_DQUOTE,
    ACTIONS(481), 1,
      aux_sym_string_token1,
    STATE(89), 1,
      aux_sym_string_repeat1,
  [2860] = 3,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    ACTIONS(484), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      aux_sym_set_declaration_repeat1,
  [2870] = 3,
    ACTIONS(486), 1,
      anon_sym_SEMI,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    STATE(88), 1,
      aux_sym_sets_declaration_repeat1,
  [2880] = 3,
    ACTIONS(490), 1,
      anon_sym_SEMI,
    ACTIONS(492), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      aux_sym_colors_declaration_repeat1,
  [2890] = 3,
    ACTIONS(495), 1,
      anon_sym_SEMI,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym_variables_declaration_repeat1,
  [2900] = 3,
    ACTIONS(422), 1,
      anon_sym_COMMA,
    ACTIONS(500), 1,
      anon_sym_SEMI,
    STATE(85), 1,
      aux_sym_functions_declaration_repeat1,
  [2910] = 3,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    ACTIONS(502), 1,
      anon_sym_SEMI,
    STATE(91), 1,
      aux_sym_sets_declaration_repeat1,
  [2920] = 3,
    ACTIONS(410), 1,
      anon_sym_COMMA,
    ACTIONS(504), 1,
      anon_sym_SEMI,
    STATE(93), 1,
      aux_sym_variables_declaration_repeat1,
  [2930] = 3,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    STATE(135), 1,
      sym_parameter_block,
  [2940] = 3,
    ACTIONS(472), 1,
      anon_sym_COMMA,
    ACTIONS(508), 1,
      anon_sym_SEMI,
    STATE(86), 1,
      aux_sym_colors_declaration_repeat1,
  [2950] = 3,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    ACTIONS(510), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      aux_sym_parameter_block_repeat1,
  [2960] = 3,
    ACTIONS(459), 1,
      anon_sym_COMMA,
    ACTIONS(512), 1,
      anon_sym_RBRACK,
    STATE(83), 1,
      aux_sym_dimension_repeat1,
  [2970] = 2,
    ACTIONS(514), 1,
      sym_identifier,
    STATE(125), 1,
      sym_set_declaration,
  [2977] = 1,
    ACTIONS(465), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2982] = 2,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(127), 1,
      sym_string,
  [2989] = 1,
    ACTIONS(516), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2994] = 1,
    ACTIONS(518), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2999] = 2,
    ACTIONS(520), 1,
      sym_identifier,
    STATE(102), 1,
      sym_function_declaration,
  [3006] = 1,
    ACTIONS(522), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3011] = 1,
    ACTIONS(431), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3016] = 1,
    ACTIONS(436), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3021] = 1,
    ACTIONS(524), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3026] = 2,
    ACTIONS(404), 1,
      sym_identifier,
    STATE(79), 1,
      sym_variable_declaration,
  [3033] = 1,
    ACTIONS(526), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3038] = 1,
    ACTIONS(406), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3043] = 1,
    ACTIONS(528), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3048] = 2,
    ACTIONS(404), 1,
      sym_identifier,
    STATE(116), 1,
      sym_variable_declaration,
  [3055] = 1,
    ACTIONS(495), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3060] = 1,
    ACTIONS(453), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3065] = 1,
    ACTIONS(530), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3070] = 1,
    ACTIONS(490), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3075] = 2,
    ACTIONS(532), 1,
      sym_identifier,
    STATE(119), 1,
      sym_color_declaration,
  [3082] = 2,
    ACTIONS(532), 1,
      sym_identifier,
    STATE(98), 1,
      sym_color_declaration,
  [3089] = 1,
    ACTIONS(534), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3094] = 2,
    ACTIONS(514), 1,
      sym_identifier,
    STATE(95), 1,
      sym_set_declaration,
  [3101] = 1,
    ACTIONS(536), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3106] = 1,
    ACTIONS(474), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3111] = 2,
    ACTIONS(520), 1,
      sym_identifier,
    STATE(69), 1,
      sym_function_declaration,
  [3118] = 1,
    ACTIONS(538), 1,
      anon_sym_SEMI,
  [3122] = 1,
    ACTIONS(540), 1,
      anon_sym_SEMI,
  [3126] = 1,
    ACTIONS(542), 1,
      anon_sym_DB_MANAGER,
  [3130] = 1,
    ACTIONS(544), 1,
      anon_sym_FUNCTIONS,
  [3134] = 1,
    ACTIONS(546), 1,
      anon_sym_SEMI,
  [3138] = 1,
    ACTIONS(548), 1,
      anon_sym_OPERATOR,
  [3142] = 1,
    ACTIONS(550), 1,
      anon_sym_SEMI,
  [3146] = 1,
    ACTIONS(552), 1,
      anon_sym_STREAMER,
  [3150] = 1,
    ACTIONS(554), 1,
      anon_sym_LPAREN,
  [3154] = 1,
    ACTIONS(556), 1,
      anon_sym_SEMI,
  [3158] = 1,
    ACTIONS(558), 1,
      aux_sym_parameter_block_token1,
  [3162] = 1,
    ACTIONS(560), 1,
      anon_sym_DATAPOOL,
  [3166] = 1,
    ACTIONS(562), 1,
      sym_number,
  [3170] = 1,
    ACTIONS(564), 1,
      anon_sym_SEMI,
  [3174] = 1,
    ACTIONS(566), 1,
      anon_sym_STREAMER,
  [3178] = 1,
    ACTIONS(568), 1,
      anon_sym_OPERATOR,
  [3182] = 1,
    ACTIONS(570), 1,
      anon_sym_LANGUAGE,
  [3186] = 1,
    ACTIONS(572), 1,
      anon_sym_RPAREN,
  [3190] = 1,
    ACTIONS(574), 1,
      anon_sym_FUNCTIONS,
  [3194] = 1,
    ACTIONS(576), 1,
      anon_sym_UI_MANAGER,
  [3198] = 1,
    ACTIONS(578), 1,
      anon_sym_DATAPOOL,
  [3202] = 1,
    ACTIONS(580), 1,
      aux_sym_parameter_block_token1,
  [3206] = 1,
    ACTIONS(582), 1,
      sym_number,
  [3210] = 1,
    ACTIONS(584), 1,
      anon_sym_SEMI,
  [3214] = 1,
    ACTIONS(586), 1,
      anon_sym_SEMI,
  [3218] = 1,
    ACTIONS(588), 1,
      anon_sym_SEMI,
  [3222] = 1,
    ACTIONS(590), 1,
      anon_sym_DB_MANAGER,
  [3226] = 1,
    ACTIONS(592), 1,
      anon_sym_LANGUAGE,
  [3230] = 1,
    ACTIONS(594), 1,
      anon_sym_SEMI,
  [3234] = 1,
    ACTIONS(596), 1,
      anon_sym_SEMI,
  [3238] = 1,
    ACTIONS(598), 1,
      anon_sym_UI_MANAGER,
  [3242] = 1,
    ACTIONS(600), 1,
      anon_sym_SEMI,
  [3246] = 1,
    ACTIONS(602), 1,
      anon_sym_LPAREN,
  [3250] = 1,
    ACTIONS(604), 1,
      ts_builtin_sym_end,
  [3254] = 1,
    ACTIONS(606), 1,
      anon_sym_SEMI,
  [3258] = 1,
    ACTIONS(608), 1,
      aux_sym_include_token1,
  [3262] = 1,
    ACTIONS(610), 1,
      anon_sym_SEMI,
  [3266] = 1,
    ACTIONS(612), 1,
      anon_sym_SEMI,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 82,
  [SMALL_STATE(4)] = 164,
  [SMALL_STATE(5)] = 222,
  [SMALL_STATE(6)] = 280,
  [SMALL_STATE(7)] = 324,
  [SMALL_STATE(8)] = 382,
  [SMALL_STATE(9)] = 426,
  [SMALL_STATE(10)] = 468,
  [SMALL_STATE(11)] = 510,
  [SMALL_STATE(12)] = 552,
  [SMALL_STATE(13)] = 594,
  [SMALL_STATE(14)] = 636,
  [SMALL_STATE(15)] = 678,
  [SMALL_STATE(16)] = 720,
  [SMALL_STATE(17)] = 762,
  [SMALL_STATE(18)] = 804,
  [SMALL_STATE(19)] = 846,
  [SMALL_STATE(20)] = 888,
  [SMALL_STATE(21)] = 930,
  [SMALL_STATE(22)] = 972,
  [SMALL_STATE(23)] = 1014,
  [SMALL_STATE(24)] = 1056,
  [SMALL_STATE(25)] = 1098,
  [SMALL_STATE(26)] = 1140,
  [SMALL_STATE(27)] = 1190,
  [SMALL_STATE(28)] = 1240,
  [SMALL_STATE(29)] = 1290,
  [SMALL_STATE(30)] = 1336,
  [SMALL_STATE(31)] = 1374,
  [SMALL_STATE(32)] = 1420,
  [SMALL_STATE(33)] = 1458,
  [SMALL_STATE(34)] = 1504,
  [SMALL_STATE(35)] = 1550,
  [SMALL_STATE(36)] = 1596,
  [SMALL_STATE(37)] = 1642,
  [SMALL_STATE(38)] = 1688,
  [SMALL_STATE(39)] = 1734,
  [SMALL_STATE(40)] = 1780,
  [SMALL_STATE(41)] = 1826,
  [SMALL_STATE(42)] = 1872,
  [SMALL_STATE(43)] = 1918,
  [SMALL_STATE(44)] = 1964,
  [SMALL_STATE(45)] = 2010,
  [SMALL_STATE(46)] = 2048,
  [SMALL_STATE(47)] = 2094,
  [SMALL_STATE(48)] = 2140,
  [SMALL_STATE(49)] = 2186,
  [SMALL_STATE(50)] = 2232,
  [SMALL_STATE(51)] = 2268,
  [SMALL_STATE(52)] = 2304,
  [SMALL_STATE(53)] = 2340,
  [SMALL_STATE(54)] = 2376,
  [SMALL_STATE(55)] = 2412,
  [SMALL_STATE(56)] = 2448,
  [SMALL_STATE(57)] = 2484,
  [SMALL_STATE(58)] = 2518,
  [SMALL_STATE(59)] = 2552,
  [SMALL_STATE(60)] = 2569,
  [SMALL_STATE(61)] = 2576,
  [SMALL_STATE(62)] = 2583,
  [SMALL_STATE(63)] = 2594,
  [SMALL_STATE(64)] = 2607,
  [SMALL_STATE(65)] = 2618,
  [SMALL_STATE(66)] = 2628,
  [SMALL_STATE(67)] = 2638,
  [SMALL_STATE(68)] = 2648,
  [SMALL_STATE(69)] = 2658,
  [SMALL_STATE(70)] = 2668,
  [SMALL_STATE(71)] = 2678,
  [SMALL_STATE(72)] = 2688,
  [SMALL_STATE(73)] = 2698,
  [SMALL_STATE(74)] = 2704,
  [SMALL_STATE(75)] = 2714,
  [SMALL_STATE(76)] = 2724,
  [SMALL_STATE(77)] = 2734,
  [SMALL_STATE(78)] = 2744,
  [SMALL_STATE(79)] = 2754,
  [SMALL_STATE(80)] = 2764,
  [SMALL_STATE(81)] = 2774,
  [SMALL_STATE(82)] = 2784,
  [SMALL_STATE(83)] = 2794,
  [SMALL_STATE(84)] = 2804,
  [SMALL_STATE(85)] = 2810,
  [SMALL_STATE(86)] = 2820,
  [SMALL_STATE(87)] = 2830,
  [SMALL_STATE(88)] = 2840,
  [SMALL_STATE(89)] = 2850,
  [SMALL_STATE(90)] = 2860,
  [SMALL_STATE(91)] = 2870,
  [SMALL_STATE(92)] = 2880,
  [SMALL_STATE(93)] = 2890,
  [SMALL_STATE(94)] = 2900,
  [SMALL_STATE(95)] = 2910,
  [SMALL_STATE(96)] = 2920,
  [SMALL_STATE(97)] = 2930,
  [SMALL_STATE(98)] = 2940,
  [SMALL_STATE(99)] = 2950,
  [SMALL_STATE(100)] = 2960,
  [SMALL_STATE(101)] = 2970,
  [SMALL_STATE(102)] = 2977,
  [SMALL_STATE(103)] = 2982,
  [SMALL_STATE(104)] = 2989,
  [SMALL_STATE(105)] = 2994,
  [SMALL_STATE(106)] = 2999,
  [SMALL_STATE(107)] = 3006,
  [SMALL_STATE(108)] = 3011,
  [SMALL_STATE(109)] = 3016,
  [SMALL_STATE(110)] = 3021,
  [SMALL_STATE(111)] = 3026,
  [SMALL_STATE(112)] = 3033,
  [SMALL_STATE(113)] = 3038,
  [SMALL_STATE(114)] = 3043,
  [SMALL_STATE(115)] = 3048,
  [SMALL_STATE(116)] = 3055,
  [SMALL_STATE(117)] = 3060,
  [SMALL_STATE(118)] = 3065,
  [SMALL_STATE(119)] = 3070,
  [SMALL_STATE(120)] = 3075,
  [SMALL_STATE(121)] = 3082,
  [SMALL_STATE(122)] = 3089,
  [SMALL_STATE(123)] = 3094,
  [SMALL_STATE(124)] = 3101,
  [SMALL_STATE(125)] = 3106,
  [SMALL_STATE(126)] = 3111,
  [SMALL_STATE(127)] = 3118,
  [SMALL_STATE(128)] = 3122,
  [SMALL_STATE(129)] = 3126,
  [SMALL_STATE(130)] = 3130,
  [SMALL_STATE(131)] = 3134,
  [SMALL_STATE(132)] = 3138,
  [SMALL_STATE(133)] = 3142,
  [SMALL_STATE(134)] = 3146,
  [SMALL_STATE(135)] = 3150,
  [SMALL_STATE(136)] = 3154,
  [SMALL_STATE(137)] = 3158,
  [SMALL_STATE(138)] = 3162,
  [SMALL_STATE(139)] = 3166,
  [SMALL_STATE(140)] = 3170,
  [SMALL_STATE(141)] = 3174,
  [SMALL_STATE(142)] = 3178,
  [SMALL_STATE(143)] = 3182,
  [SMALL_STATE(144)] = 3186,
  [SMALL_STATE(145)] = 3190,
  [SMALL_STATE(146)] = 3194,
  [SMALL_STATE(147)] = 3198,
  [SMALL_STATE(148)] = 3202,
  [SMALL_STATE(149)] = 3206,
  [SMALL_STATE(150)] = 3210,
  [SMALL_STATE(151)] = 3214,
  [SMALL_STATE(152)] = 3218,
  [SMALL_STATE(153)] = 3222,
  [SMALL_STATE(154)] = 3226,
  [SMALL_STATE(155)] = 3230,
  [SMALL_STATE(156)] = 3234,
  [SMALL_STATE(157)] = 3238,
  [SMALL_STATE(158)] = 3242,
  [SMALL_STATE(159)] = 3246,
  [SMALL_STATE(160)] = 3250,
  [SMALL_STATE(161)] = 3254,
  [SMALL_STATE(162)] = 3258,
  [SMALL_STATE(163)] = 3262,
  [SMALL_STATE(164)] = 3266,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(162),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(103),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(5),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(68),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(63),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(32),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(32),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(121),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(123),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_streamer_block, 4),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_streamer_block, 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ui_manager_block, 4),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ui_manager_block, 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_db_manager_block, 4),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_db_manager_block, 4),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language_block, 5),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_language_block, 5),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 3, .production_id = 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 3, .production_id = 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language_block, 4),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_language_block, 4),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functions_block, 4),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions_block, 4),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_block, 4),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_block, 4),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_block, 5),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_block, 5),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_db_manager_block, 5),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_db_manager_block, 5),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datapool_block, 4),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datapool_block, 4),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datapool_block, 5),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datapool_block, 5),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ui_manager_block, 5),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ui_manager_block, 5),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functions_block, 5),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions_block, 5),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_streamer_block, 5),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_streamer_block, 5),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reason, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reason, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_block_repeat1, 2), SHIFT_REPEAT(27),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_block_repeat1, 2), SHIFT_REPEAT(68),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_block_repeat1, 2), SHIFT_REPEAT(32),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_functions_block_repeat1, 2), SHIFT_REPEAT(32),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functions_block_repeat1, 2),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_block_repeat1, 2), SHIFT_REPEAT(126),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2), SHIFT_REPEAT(29),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2), SHIFT_REPEAT(68),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2), SHIFT_REPEAT(32),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_body_repeat1, 2), SHIFT_REPEAT(32),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ui_manager_block_repeat1, 2), SHIFT_REPEAT(35),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ui_manager_block_repeat1, 2), SHIFT_REPEAT(68),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ui_manager_block_repeat1, 2), SHIFT_REPEAT(32),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ui_manager_block_repeat1, 2), SHIFT_REPEAT(32),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ui_manager_block_repeat1, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operator_block_repeat1, 2), SHIFT_REPEAT(38),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operator_block_repeat1, 2), SHIFT_REPEAT(68),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operator_block_repeat1, 2), SHIFT_REPEAT(32),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operator_block_repeat1, 2), SHIFT_REPEAT(32),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operator_block_repeat1, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_streamer_block_repeat1, 2), SHIFT_REPEAT(42),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_streamer_block_repeat1, 2), SHIFT_REPEAT(68),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_streamer_block_repeat1, 2), SHIFT_REPEAT(32),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_streamer_block_repeat1, 2), SHIFT_REPEAT(32),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_streamer_block_repeat1, 2),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_language_block_repeat1, 2), SHIFT_REPEAT(43),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_language_block_repeat1, 2), SHIFT_REPEAT(68),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_language_block_repeat1, 2), SHIFT_REPEAT(32),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_language_block_repeat1, 2), SHIFT_REPEAT(32),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_language_block_repeat1, 2),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_db_manager_block_repeat1, 2), SHIFT_REPEAT(44),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_db_manager_block_repeat1, 2), SHIFT_REPEAT(68),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_db_manager_block_repeat1, 2), SHIFT_REPEAT(32),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_db_manager_block_repeat1, 2), SHIFT_REPEAT(32),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_db_manager_block_repeat1, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_declaration, 4, .production_id = 4),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variables_declaration, 4, .production_id = 4),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_declaration, 5, .production_id = 4),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variables_declaration, 5, .production_id = 4),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colors_declaration, 4),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_colors_declaration, 4),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sets_declaration, 3),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sets_declaration, 3),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sets_declaration, 4),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sets_declaration, 4),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colors_declaration, 3),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_colors_declaration, 3),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_declaration, 3, .production_id = 4),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variables_declaration, 3, .production_id = 4),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functions_declaration, 3),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions_declaration, 3),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functions_declaration, 4),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions_declaration, 4),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 1, .production_id = 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_block, 3),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_block, 4),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 1, .production_id = 3),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2, .production_id = 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_set_declaration_repeat1, 2), SHIFT_REPEAT(77),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_set_declaration_repeat1, 2),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimension_repeat1, 2), SHIFT_REPEAT(139),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dimension_repeat1, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 4),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_block_repeat1, 2), SHIFT_REPEAT(148),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_block_repeat1, 2),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 3),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functions_declaration_repeat1, 2),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_declaration_repeat1, 2), SHIFT_REPEAT(106),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sets_declaration_repeat1, 2),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sets_declaration_repeat1, 2), SHIFT_REPEAT(101),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(89),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_colors_declaration_repeat1, 2),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_colors_declaration_repeat1, 2), SHIFT_REPEAT(120),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_declaration_repeat1, 2),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_declaration_repeat1, 2), SHIFT_REPEAT(115),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 2, .production_id = 3),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_declaration, 6, .production_id = 6),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_declaration, 5, .production_id = 6),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 3),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, .production_id = 2),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_declaration, 4, .production_id = 6),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_declaration, 3, .production_id = 5),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_item, 1),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 2),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [604] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
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
