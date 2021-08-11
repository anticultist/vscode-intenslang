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

#define LANGUAGE_VERSION 13
#define STATE_COUNT 174
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 109
#define ALIAS_COUNT 3
#define TOKEN_COUNT 55
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 7

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
  anon_sym_IF = 51,
  anon_sym_ELSE = 52,
  anon_sym_UI_MANAGER = 53,
  anon_sym_DB_MANAGER = 54,
  sym_source_file = 55,
  sym__high_level_blocks = 56,
  sym__expression = 57,
  sym_string = 58,
  sym_reason = 59,
  sym_include = 60,
  sym_description = 61,
  sym_parameter_block = 62,
  sym_language_block = 63,
  sym__language_block_expression = 64,
  sym_datapool_block = 65,
  sym__datapool_block_expression = 66,
  sym_variables_declaration = 67,
  sym_variable_declaration = 68,
  sym_dimension = 69,
  sym_colors_declaration = 70,
  sym_color_declaration = 71,
  sym_sets_declaration = 72,
  sym_set_declaration = 73,
  sym_set_item = 74,
  sym_streamer_block = 75,
  sym__streamer_block_expression = 76,
  sym_operator_block = 77,
  sym__operator_block_expression = 78,
  sym_functions_block = 79,
  sym__functions_block_expression = 80,
  sym_functions_declaration = 81,
  sym_function_declaration = 82,
  sym_function_body = 83,
  sym__function_expression = 84,
  sym_if_statement = 85,
  sym_condition = 86,
  sym_else_part = 87,
  sym_ui_manager_block = 88,
  sym__ui_manager_block_expression = 89,
  sym_db_manager_block = 90,
  sym__db_manager_block_expression = 91,
  aux_sym_source_file_repeat1 = 92,
  aux_sym_string_repeat1 = 93,
  aux_sym_parameter_block_repeat1 = 94,
  aux_sym_language_block_repeat1 = 95,
  aux_sym_datapool_block_repeat1 = 96,
  aux_sym_variables_declaration_repeat1 = 97,
  aux_sym_dimension_repeat1 = 98,
  aux_sym_colors_declaration_repeat1 = 99,
  aux_sym_sets_declaration_repeat1 = 100,
  aux_sym_set_declaration_repeat1 = 101,
  aux_sym_streamer_block_repeat1 = 102,
  aux_sym_operator_block_repeat1 = 103,
  aux_sym_functions_block_repeat1 = 104,
  aux_sym_functions_declaration_repeat1 = 105,
  aux_sym_function_body_repeat1 = 106,
  aux_sym_ui_manager_block_repeat1 = 107,
  aux_sym_db_manager_block_repeat1 = 108,
  alias_sym_color_identifier = 109,
  alias_sym_function_identifier = 110,
  alias_sym_set_identifier = 111,
};

static const char * const ts_symbol_names[] = {
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
  [anon_sym_IF] = "IF",
  [anon_sym_ELSE] = "ELSE",
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
  [sym_if_statement] = "if_statement",
  [sym_condition] = "condition",
  [sym_else_part] = "else_part",
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

static const TSSymbol ts_symbol_map[] = {
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
  [anon_sym_IF] = anon_sym_IF,
  [anon_sym_ELSE] = anon_sym_ELSE,
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
  [sym_if_statement] = sym_if_statement,
  [sym_condition] = sym_condition,
  [sym_else_part] = sym_else_part,
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
  [anon_sym_IF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ELSE] = {
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
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_else_part] = {
    .visible = true,
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

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_description_text] = "description_text",
  [field_name] = "name",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
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

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
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

static const uint16_t ts_non_terminal_alias_map[] = {
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
      if (lookahead == '}') ADVANCE(365);
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
      if (lookahead == 'E') ADVANCE(2);
      if (lookahead == 'F') ADVANCE(3);
      if (lookahead == 'I') ADVANCE(4);
      if (lookahead == 'L') ADVANCE(5);
      if (lookahead == 'O') ADVANCE(6);
      if (lookahead == 'S') ADVANCE(7);
      if (lookahead == 'U') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'A') ADVANCE(9);
      if (lookahead == 'B') ADVANCE(10);
      if (lookahead == 'E') ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == 'L') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == 'U') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == 'F') ADVANCE(14);
      if (lookahead == 'N') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == 'P') ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead == 'T') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == 'I') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == 'T') ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead == 'S') ADVANCE(22);
      END_STATE();
    case 12:
      if (lookahead == 'S') ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == 'N') ADVANCE(24);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 15:
      if (lookahead == 'C') ADVANCE(25);
      END_STATE();
    case 16:
      if (lookahead == 'N') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == 'R') ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(29);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == 'M') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == 'C') ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(33);
      END_STATE();
    case 24:
      if (lookahead == 'C') ADVANCE(34);
      END_STATE();
    case 25:
      if (lookahead == 'L') ADVANCE(35);
      END_STATE();
    case 26:
      if (lookahead == 'G') ADVANCE(36);
      END_STATE();
    case 27:
      if (lookahead == 'R') ADVANCE(37);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(38);
      END_STATE();
    case 29:
      if (lookahead == 'M') ADVANCE(39);
      END_STATE();
    case 30:
      if (lookahead == 'P') ADVANCE(40);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(41);
      END_STATE();
    case 32:
      if (lookahead == 'R') ADVANCE(42);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_ELSE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_FUNC);
      if (lookahead == 'T') ADVANCE(43);
      END_STATE();
    case 35:
      if (lookahead == 'U') ADVANCE(44);
      END_STATE();
    case 36:
      if (lookahead == 'U') ADVANCE(45);
      END_STATE();
    case 37:
      if (lookahead == 'A') ADVANCE(46);
      END_STATE();
    case 38:
      if (lookahead == 'A') ADVANCE(47);
      END_STATE();
    case 39:
      if (lookahead == 'A') ADVANCE(48);
      END_STATE();
    case 40:
      if (lookahead == 'O') ADVANCE(49);
      END_STATE();
    case 41:
      if (lookahead == 'N') ADVANCE(50);
      END_STATE();
    case 42:
      if (lookahead == 'I') ADVANCE(51);
      END_STATE();
    case 43:
      if (lookahead == 'I') ADVANCE(52);
      END_STATE();
    case 44:
      if (lookahead == 'D') ADVANCE(53);
      END_STATE();
    case 45:
      if (lookahead == 'A') ADVANCE(54);
      END_STATE();
    case 46:
      if (lookahead == 'T') ADVANCE(55);
      END_STATE();
    case 47:
      if (lookahead == 'M') ADVANCE(56);
      END_STATE();
    case 48:
      if (lookahead == 'N') ADVANCE(57);
      END_STATE();
    case 49:
      if (lookahead == 'O') ADVANCE(58);
      END_STATE();
    case 50:
      if (lookahead == 'A') ADVANCE(59);
      END_STATE();
    case 51:
      if (lookahead == 'P') ADVANCE(60);
      END_STATE();
    case 52:
      if (lookahead == 'O') ADVANCE(61);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(62);
      END_STATE();
    case 54:
      if (lookahead == 'G') ADVANCE(63);
      END_STATE();
    case 55:
      if (lookahead == 'O') ADVANCE(64);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(65);
      END_STATE();
    case 57:
      if (lookahead == 'A') ADVANCE(66);
      END_STATE();
    case 58:
      if (lookahead == 'L') ADVANCE(67);
      END_STATE();
    case 59:
      if (lookahead == 'G') ADVANCE(68);
      END_STATE();
    case 60:
      if (lookahead == 'T') ADVANCE(69);
      END_STATE();
    case 61:
      if (lookahead == 'N') ADVANCE(70);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_INCLUDE);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(71);
      END_STATE();
    case 64:
      if (lookahead == 'R') ADVANCE(72);
      END_STATE();
    case 65:
      if (lookahead == 'R') ADVANCE(73);
      END_STATE();
    case 66:
      if (lookahead == 'G') ADVANCE(74);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DATAPOOL);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(75);
      END_STATE();
    case 69:
      if (lookahead == 'I') ADVANCE(76);
      END_STATE();
    case 70:
      if (lookahead == 'S') ADVANCE(77);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LANGUAGE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_OPERATOR);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_STREAMER);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(78);
      END_STATE();
    case 75:
      if (lookahead == 'R') ADVANCE(79);
      END_STATE();
    case 76:
      if (lookahead == 'O') ADVANCE(80);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_FUNCTIONS);
      END_STATE();
    case 78:
      if (lookahead == 'R') ADVANCE(81);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DB_MANAGER);
      END_STATE();
    case 80:
      if (lookahead == 'N') ADVANCE(82);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_UI_MANAGER);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DESCRIPTION);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
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
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 154},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 154},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 154},
  [34] = {.lex_state = 0},
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
  [49] = {.lex_state = 154},
  [50] = {.lex_state = 154},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 154},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 154},
  [62] = {.lex_state = 154},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
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
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 150},
  [135] = {.lex_state = 6},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 6},
  [139] = {.lex_state = 6},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 6},
  [146] = {.lex_state = 6},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 150},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 6},
  [153] = {.lex_state = 6},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 6},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 6},
  [165] = {.lex_state = 6},
  [166] = {.lex_state = 6},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 151},
  [172] = {.lex_state = 6},
  [173] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
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
    [anon_sym_IF] = ACTIONS(1),
    [anon_sym_ELSE] = ACTIONS(1),
    [anon_sym_UI_MANAGER] = ACTIONS(1),
    [anon_sym_DB_MANAGER] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(169),
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

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(36), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_INCLUDE,
    ACTIONS(48), 1,
      anon_sym_DESCRIPTION,
    ACTIONS(51), 1,
      anon_sym_LANGUAGE,
    ACTIONS(54), 1,
      anon_sym_DATAPOOL,
    ACTIONS(57), 1,
      anon_sym_STREAMER,
    ACTIONS(60), 1,
      anon_sym_OPERATOR,
    ACTIONS(63), 1,
      anon_sym_FUNCTIONS,
    ACTIONS(66), 1,
      anon_sym_UI_MANAGER,
    ACTIONS(69), 1,
      anon_sym_DB_MANAGER,
    ACTIONS(42), 2,
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
    STATE(2), 14,
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
    ACTIONS(39), 16,
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
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(74), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    STATE(2), 14,
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
    ACTIONS(127), 36,
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
      anon_sym_RPAREN,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [469] = 2,
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
  [511] = 2,
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
  [553] = 2,
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
  [595] = 2,
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
  [637] = 2,
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
  [679] = 2,
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
  [721] = 2,
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
  [763] = 2,
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
  [805] = 2,
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
  [847] = 2,
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
  [889] = 2,
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
  [931] = 2,
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
  [973] = 2,
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
  [1015] = 2,
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
  [1057] = 2,
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
  [1099] = 2,
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
  [1141] = 2,
    ACTIONS(129), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(127), 33,
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
      anon_sym_IF,
      anon_sym_ELSE,
  [1181] = 7,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    ACTIONS(209), 1,
      anon_sym_IF,
    ACTIONS(204), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(27), 6,
      sym__expression,
      sym_string,
      sym_reason,
      sym__function_expression,
      sym_if_statement,
      aux_sym_function_body_repeat1,
    ACTIONS(195), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(201), 16,
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
  [1231] = 7,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(224), 1,
      anon_sym_END,
    ACTIONS(226), 1,
      anon_sym_FUNC,
    ACTIONS(221), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(28), 6,
      sym__expression,
      sym_string,
      sym_reason,
      sym__functions_block_expression,
      sym_functions_declaration,
      aux_sym_functions_block_repeat1,
    ACTIONS(212), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(218), 16,
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
  [1281] = 7,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    ACTIONS(233), 1,
      anon_sym_IF,
    ACTIONS(84), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(33), 6,
      sym__expression,
      sym_string,
      sym_reason,
      sym__function_expression,
      sym_if_statement,
      aux_sym_function_body_repeat1,
    ACTIONS(229), 8,
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
  [1331] = 2,
    ACTIONS(125), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(123), 33,
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
      anon_sym_IF,
      anon_sym_ELSE,
  [1371] = 7,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      anon_sym_END,
    ACTIONS(239), 1,
      anon_sym_FUNC,
    ACTIONS(84), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(32), 6,
      sym__expression,
      sym_string,
      sym_reason,
      sym__functions_block_expression,
      sym_functions_declaration,
      aux_sym_functions_block_repeat1,
    ACTIONS(235), 8,
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
  [1421] = 7,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      anon_sym_FUNC,
    ACTIONS(243), 1,
      anon_sym_END,
    ACTIONS(84), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(28), 6,
      sym__expression,
      sym_string,
      sym_reason,
      sym__functions_block_expression,
      sym_functions_declaration,
      aux_sym_functions_block_repeat1,
    ACTIONS(241), 8,
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
  [1471] = 7,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      anon_sym_IF,
    ACTIONS(247), 1,
      anon_sym_RBRACE,
    ACTIONS(84), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(27), 6,
      sym__expression,
      sym_string,
      sym_reason,
      sym__function_expression,
      sym_if_statement,
      aux_sym_function_body_repeat1,
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
  [1521] = 2,
    ACTIONS(117), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(115), 33,
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
      anon_sym_IF,
      anon_sym_ELSE,
  [1561] = 6,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      anon_sym_END,
    ACTIONS(84), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(40), 5,
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
  [1607] = 6,
    ACTIONS(256), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      anon_sym_END,
    ACTIONS(262), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(36), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__streamer_block_expression,
      aux_sym_streamer_block_repeat1,
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
  [1653] = 6,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      anon_sym_END,
    ACTIONS(84), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(41), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__operator_block_expression,
      aux_sym_operator_block_repeat1,
    ACTIONS(267), 8,
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
  [1699] = 6,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      anon_sym_END,
    ACTIONS(84), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(51), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__language_block_expression,
      aux_sym_language_block_repeat1,
    ACTIONS(271), 8,
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
  [1745] = 6,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      anon_sym_END,
    ACTIONS(84), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(45), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__ui_manager_block_expression,
      aux_sym_ui_manager_block_repeat1,
    ACTIONS(275), 8,
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
  [1791] = 6,
    ACTIONS(282), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      anon_sym_END,
    ACTIONS(288), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(40), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__db_manager_block_expression,
      aux_sym_db_manager_block_repeat1,
    ACTIONS(279), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(285), 16,
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
  [1837] = 6,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(295), 1,
      anon_sym_END,
    ACTIONS(84), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(46), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__operator_block_expression,
      aux_sym_operator_block_repeat1,
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
  [1883] = 6,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(299), 1,
      anon_sym_END,
    ACTIONS(84), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(39), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__ui_manager_block_expression,
      aux_sym_ui_manager_block_repeat1,
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
  [1929] = 6,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(313), 1,
      anon_sym_END,
    ACTIONS(310), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(43), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__language_block_expression,
      aux_sym_language_block_repeat1,
    ACTIONS(301), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(307), 16,
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
  [1975] = 6,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(317), 1,
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
    ACTIONS(315), 8,
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
  [2021] = 6,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      anon_sym_END,
    ACTIONS(328), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(45), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__ui_manager_block_expression,
      aux_sym_ui_manager_block_repeat1,
    ACTIONS(319), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(325), 16,
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
  [2067] = 6,
    ACTIONS(336), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      anon_sym_END,
    ACTIONS(342), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(46), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__operator_block_expression,
      aux_sym_operator_block_repeat1,
    ACTIONS(333), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(339), 16,
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
  [2113] = 6,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(349), 1,
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
    ACTIONS(347), 8,
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
  [2159] = 6,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(353), 1,
      anon_sym_END,
    ACTIONS(84), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(44), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__streamer_block_expression,
      aux_sym_streamer_block_repeat1,
    ACTIONS(351), 8,
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
  [2205] = 6,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      anon_sym_IF,
    ACTIONS(84), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(52), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__function_expression,
      sym_if_statement,
    ACTIONS(355), 8,
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
  [2251] = 6,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      anon_sym_IF,
    ACTIONS(84), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(62), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__function_expression,
      sym_if_statement,
    ACTIONS(357), 8,
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
  [2297] = 6,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(361), 1,
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
    ACTIONS(359), 8,
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
  [2343] = 4,
    ACTIONS(367), 1,
      anon_sym_ELSE,
    STATE(61), 1,
      sym_else_part,
    ACTIONS(365), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(363), 27,
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
      anon_sym_RBRACE,
      anon_sym_IF,
  [2383] = 2,
    ACTIONS(371), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(369), 29,
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
  [2419] = 6,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(162), 1,
      sym_condition,
    ACTIONS(11), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(161), 3,
      sym__expression,
      sym_string,
      sym_reason,
    ACTIONS(373), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
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
  [2463] = 2,
    ACTIONS(377), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(375), 29,
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
  [2499] = 2,
    ACTIONS(381), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(379), 29,
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
  [2535] = 2,
    ACTIONS(385), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(383), 29,
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
  [2571] = 2,
    ACTIONS(389), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(387), 29,
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
  [2607] = 2,
    ACTIONS(393), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(391), 29,
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
  [2643] = 2,
    ACTIONS(397), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(395), 29,
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
  [2679] = 2,
    ACTIONS(401), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(399), 28,
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
      anon_sym_RBRACE,
      anon_sym_IF,
      anon_sym_ELSE,
  [2714] = 2,
    ACTIONS(405), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(403), 28,
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
      anon_sym_RBRACE,
      anon_sym_IF,
      anon_sym_ELSE,
  [2749] = 2,
    ACTIONS(409), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(407), 27,
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
  [2783] = 2,
    ACTIONS(413), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(411), 27,
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
  [2817] = 5,
    ACTIONS(417), 1,
      anon_sym_LBRACE,
    ACTIONS(419), 1,
      anon_sym_LBRACK,
    STATE(70), 1,
      sym_dimension,
    STATE(124), 1,
      sym_parameter_block,
    ACTIONS(415), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2834] = 1,
    ACTIONS(421), 4,
      sym_identifier,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LPAREN,
  [2841] = 1,
    ACTIONS(423), 4,
      sym_identifier,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LPAREN,
  [2848] = 4,
    ACTIONS(417), 1,
      anon_sym_LBRACE,
    ACTIONS(425), 1,
      sym_identifier,
    STATE(99), 1,
      sym_variable_declaration,
    STATE(120), 1,
      sym_parameter_block,
  [2861] = 3,
    ACTIONS(429), 1,
      anon_sym_LBRACE,
    STATE(130), 1,
      sym_function_body,
    ACTIONS(427), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2872] = 3,
    ACTIONS(417), 1,
      anon_sym_LBRACE,
    STATE(115), 1,
      sym_parameter_block,
    ACTIONS(431), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [2883] = 3,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    ACTIONS(435), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_colors_declaration_repeat1,
  [2893] = 3,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    ACTIONS(439), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      aux_sym_dimension_repeat1,
  [2903] = 3,
    ACTIONS(441), 1,
      anon_sym_SEMI,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    STATE(102), 1,
      aux_sym_functions_declaration_repeat1,
  [2913] = 3,
    ACTIONS(445), 1,
      anon_sym_DQUOTE,
    ACTIONS(447), 1,
      aux_sym_string_token1,
    STATE(93), 1,
      aux_sym_string_repeat1,
  [2923] = 3,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(451), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      aux_sym_set_declaration_repeat1,
  [2933] = 3,
    ACTIONS(453), 1,
      anon_sym_COMMA,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      aux_sym_set_declaration_repeat1,
  [2943] = 3,
    ACTIONS(458), 1,
      anon_sym_COMMA,
    ACTIONS(461), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      aux_sym_dimension_repeat1,
  [2953] = 1,
    ACTIONS(463), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [2959] = 3,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(465), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      aux_sym_set_declaration_repeat1,
  [2969] = 3,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(465), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      aux_sym_set_declaration_repeat1,
  [2979] = 3,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    ACTIONS(469), 1,
      anon_sym_RBRACE,
    STATE(86), 1,
      aux_sym_parameter_block_repeat1,
  [2989] = 3,
    ACTIONS(471), 1,
      anon_sym_SEMI,
    ACTIONS(473), 1,
      anon_sym_COMMA,
    STATE(103), 1,
      aux_sym_variables_declaration_repeat1,
  [2999] = 3,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(113), 1,
      sym_set_item,
    STATE(122), 1,
      sym_string,
  [3009] = 3,
    ACTIONS(471), 1,
      anon_sym_SEMI,
    ACTIONS(473), 1,
      anon_sym_COMMA,
    STATE(105), 1,
      aux_sym_variables_declaration_repeat1,
  [3019] = 3,
    ACTIONS(475), 1,
      anon_sym_COMMA,
    ACTIONS(478), 1,
      anon_sym_RBRACE,
    STATE(85), 1,
      aux_sym_parameter_block_repeat1,
  [3029] = 3,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    ACTIONS(480), 1,
      anon_sym_RBRACE,
    STATE(85), 1,
      aux_sym_parameter_block_repeat1,
  [3039] = 3,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(96), 1,
      sym_set_item,
    STATE(122), 1,
      sym_string,
  [3049] = 3,
    ACTIONS(482), 1,
      anon_sym_DQUOTE,
    ACTIONS(484), 1,
      aux_sym_string_token1,
    STATE(106), 1,
      aux_sym_string_repeat1,
  [3059] = 3,
    ACTIONS(486), 1,
      anon_sym_DQUOTE,
    ACTIONS(488), 1,
      aux_sym_string_token1,
    STATE(74), 1,
      aux_sym_string_repeat1,
  [3069] = 1,
    ACTIONS(490), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [3075] = 3,
    ACTIONS(492), 1,
      anon_sym_SEMI,
    ACTIONS(494), 1,
      anon_sym_COMMA,
    STATE(94), 1,
      aux_sym_sets_declaration_repeat1,
  [3085] = 3,
    ACTIONS(496), 1,
      anon_sym_SEMI,
    ACTIONS(498), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      aux_sym_functions_declaration_repeat1,
  [3095] = 3,
    ACTIONS(501), 1,
      anon_sym_DQUOTE,
    ACTIONS(503), 1,
      aux_sym_string_token1,
    STATE(93), 1,
      aux_sym_string_repeat1,
  [3105] = 3,
    ACTIONS(506), 1,
      anon_sym_SEMI,
    ACTIONS(508), 1,
      anon_sym_COMMA,
    STATE(94), 1,
      aux_sym_sets_declaration_repeat1,
  [3115] = 3,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(79), 1,
      sym_set_item,
    STATE(122), 1,
      sym_string,
  [3125] = 3,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(511), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      aux_sym_set_declaration_repeat1,
  [3135] = 3,
    ACTIONS(513), 1,
      anon_sym_SEMI,
    ACTIONS(515), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_colors_declaration_repeat1,
  [3145] = 3,
    ACTIONS(494), 1,
      anon_sym_COMMA,
    ACTIONS(518), 1,
      anon_sym_SEMI,
    STATE(91), 1,
      aux_sym_sets_declaration_repeat1,
  [3155] = 3,
    ACTIONS(473), 1,
      anon_sym_COMMA,
    ACTIONS(520), 1,
      anon_sym_SEMI,
    STATE(84), 1,
      aux_sym_variables_declaration_repeat1,
  [3165] = 3,
    ACTIONS(417), 1,
      anon_sym_LBRACE,
    ACTIONS(522), 1,
      anon_sym_LPAREN,
    STATE(144), 1,
      sym_parameter_block,
  [3175] = 3,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    ACTIONS(524), 1,
      anon_sym_RBRACK,
    STATE(72), 1,
      aux_sym_dimension_repeat1,
  [3185] = 3,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_functions_declaration_repeat1,
  [3195] = 3,
    ACTIONS(473), 1,
      anon_sym_COMMA,
    ACTIONS(528), 1,
      anon_sym_SEMI,
    STATE(105), 1,
      aux_sym_variables_declaration_repeat1,
  [3205] = 3,
    ACTIONS(435), 1,
      anon_sym_COMMA,
    ACTIONS(530), 1,
      anon_sym_SEMI,
    STATE(71), 1,
      aux_sym_colors_declaration_repeat1,
  [3215] = 3,
    ACTIONS(532), 1,
      anon_sym_SEMI,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    STATE(105), 1,
      aux_sym_variables_declaration_repeat1,
  [3225] = 3,
    ACTIONS(447), 1,
      aux_sym_string_token1,
    ACTIONS(537), 1,
      anon_sym_DQUOTE,
    STATE(93), 1,
      aux_sym_string_repeat1,
  [3235] = 1,
    ACTIONS(539), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3240] = 2,
    ACTIONS(541), 1,
      sym_identifier,
    STATE(73), 1,
      sym_function_declaration,
  [3247] = 2,
    ACTIONS(541), 1,
      sym_identifier,
    STATE(132), 1,
      sym_function_declaration,
  [3254] = 2,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(167), 1,
      sym_string,
  [3261] = 1,
    ACTIONS(543), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3266] = 1,
    ACTIONS(545), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3271] = 1,
    ACTIONS(456), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3276] = 1,
    ACTIONS(461), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3281] = 1,
    ACTIONS(547), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3286] = 2,
    ACTIONS(549), 1,
      sym_identifier,
    STATE(104), 1,
      sym_color_declaration,
  [3293] = 1,
    ACTIONS(532), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3298] = 1,
    ACTIONS(551), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3303] = 1,
    ACTIONS(513), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3308] = 2,
    ACTIONS(425), 1,
      sym_identifier,
    STATE(82), 1,
      sym_variable_declaration,
  [3315] = 1,
    ACTIONS(553), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3320] = 1,
    ACTIONS(555), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3325] = 2,
    ACTIONS(557), 1,
      sym_identifier,
    STATE(98), 1,
      sym_set_declaration,
  [3332] = 1,
    ACTIONS(431), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3337] = 1,
    ACTIONS(506), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3342] = 2,
    ACTIONS(425), 1,
      sym_identifier,
    STATE(117), 1,
      sym_variable_declaration,
  [3349] = 2,
    ACTIONS(549), 1,
      sym_identifier,
    STATE(119), 1,
      sym_color_declaration,
  [3356] = 1,
    ACTIONS(478), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3361] = 2,
    ACTIONS(557), 1,
      sym_identifier,
    STATE(125), 1,
      sym_set_declaration,
  [3368] = 1,
    ACTIONS(559), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3373] = 1,
    ACTIONS(561), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3378] = 1,
    ACTIONS(496), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3383] = 1,
    ACTIONS(563), 1,
      sym_number,
  [3387] = 1,
    ACTIONS(565), 1,
      aux_sym_parameter_block_token1,
  [3391] = 1,
    ACTIONS(567), 1,
      anon_sym_DB_MANAGER,
  [3395] = 1,
    ACTIONS(569), 1,
      anon_sym_UI_MANAGER,
  [3399] = 1,
    ACTIONS(571), 1,
      anon_sym_STREAMER,
  [3403] = 1,
    ACTIONS(573), 1,
      anon_sym_FUNCTIONS,
  [3407] = 1,
    ACTIONS(575), 1,
      anon_sym_OPERATOR,
  [3411] = 1,
    ACTIONS(577), 1,
      anon_sym_SEMI,
  [3415] = 1,
    ACTIONS(579), 1,
      anon_sym_SEMI,
  [3419] = 1,
    ACTIONS(581), 1,
      anon_sym_SEMI,
  [3423] = 1,
    ACTIONS(583), 1,
      anon_sym_SEMI,
  [3427] = 1,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
  [3431] = 1,
    ACTIONS(587), 1,
      anon_sym_LANGUAGE,
  [3435] = 1,
    ACTIONS(589), 1,
      anon_sym_STREAMER,
  [3439] = 1,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
  [3443] = 1,
    ACTIONS(593), 1,
      anon_sym_SEMI,
  [3447] = 1,
    ACTIONS(595), 1,
      anon_sym_SEMI,
  [3451] = 1,
    ACTIONS(597), 1,
      aux_sym_parameter_block_token1,
  [3455] = 1,
    ACTIONS(599), 1,
      anon_sym_SEMI,
  [3459] = 1,
    ACTIONS(601), 1,
      anon_sym_DATAPOOL,
  [3463] = 1,
    ACTIONS(603), 1,
      anon_sym_OPERATOR,
  [3467] = 1,
    ACTIONS(605), 1,
      anon_sym_LPAREN,
  [3471] = 1,
    ACTIONS(607), 1,
      sym_number,
  [3475] = 1,
    ACTIONS(609), 1,
      anon_sym_SEMI,
  [3479] = 1,
    ACTIONS(611), 1,
      anon_sym_SEMI,
  [3483] = 1,
    ACTIONS(613), 1,
      anon_sym_SEMI,
  [3487] = 1,
    ACTIONS(615), 1,
      anon_sym_DB_MANAGER,
  [3491] = 1,
    ACTIONS(617), 1,
      anon_sym_SEMI,
  [3495] = 1,
    ACTIONS(619), 1,
      anon_sym_RPAREN,
  [3499] = 1,
    ACTIONS(621), 1,
      anon_sym_RPAREN,
  [3503] = 1,
    ACTIONS(623), 1,
      anon_sym_LPAREN,
  [3507] = 1,
    ACTIONS(625), 1,
      anon_sym_DATAPOOL,
  [3511] = 1,
    ACTIONS(627), 1,
      anon_sym_UI_MANAGER,
  [3515] = 1,
    ACTIONS(629), 1,
      anon_sym_LANGUAGE,
  [3519] = 1,
    ACTIONS(631), 1,
      anon_sym_SEMI,
  [3523] = 1,
    ACTIONS(633), 1,
      anon_sym_SEMI,
  [3527] = 1,
    ACTIONS(635), 1,
      ts_builtin_sym_end,
  [3531] = 1,
    ACTIONS(637), 1,
      anon_sym_SEMI,
  [3535] = 1,
    ACTIONS(639), 1,
      aux_sym_include_token1,
  [3539] = 1,
    ACTIONS(641), 1,
      anon_sym_FUNCTIONS,
  [3543] = 1,
    ACTIONS(643), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 82,
  [SMALL_STATE(4)] = 164,
  [SMALL_STATE(5)] = 222,
  [SMALL_STATE(6)] = 280,
  [SMALL_STATE(7)] = 324,
  [SMALL_STATE(8)] = 382,
  [SMALL_STATE(9)] = 426,
  [SMALL_STATE(10)] = 469,
  [SMALL_STATE(11)] = 511,
  [SMALL_STATE(12)] = 553,
  [SMALL_STATE(13)] = 595,
  [SMALL_STATE(14)] = 637,
  [SMALL_STATE(15)] = 679,
  [SMALL_STATE(16)] = 721,
  [SMALL_STATE(17)] = 763,
  [SMALL_STATE(18)] = 805,
  [SMALL_STATE(19)] = 847,
  [SMALL_STATE(20)] = 889,
  [SMALL_STATE(21)] = 931,
  [SMALL_STATE(22)] = 973,
  [SMALL_STATE(23)] = 1015,
  [SMALL_STATE(24)] = 1057,
  [SMALL_STATE(25)] = 1099,
  [SMALL_STATE(26)] = 1141,
  [SMALL_STATE(27)] = 1181,
  [SMALL_STATE(28)] = 1231,
  [SMALL_STATE(29)] = 1281,
  [SMALL_STATE(30)] = 1331,
  [SMALL_STATE(31)] = 1371,
  [SMALL_STATE(32)] = 1421,
  [SMALL_STATE(33)] = 1471,
  [SMALL_STATE(34)] = 1521,
  [SMALL_STATE(35)] = 1561,
  [SMALL_STATE(36)] = 1607,
  [SMALL_STATE(37)] = 1653,
  [SMALL_STATE(38)] = 1699,
  [SMALL_STATE(39)] = 1745,
  [SMALL_STATE(40)] = 1791,
  [SMALL_STATE(41)] = 1837,
  [SMALL_STATE(42)] = 1883,
  [SMALL_STATE(43)] = 1929,
  [SMALL_STATE(44)] = 1975,
  [SMALL_STATE(45)] = 2021,
  [SMALL_STATE(46)] = 2067,
  [SMALL_STATE(47)] = 2113,
  [SMALL_STATE(48)] = 2159,
  [SMALL_STATE(49)] = 2205,
  [SMALL_STATE(50)] = 2251,
  [SMALL_STATE(51)] = 2297,
  [SMALL_STATE(52)] = 2343,
  [SMALL_STATE(53)] = 2383,
  [SMALL_STATE(54)] = 2419,
  [SMALL_STATE(55)] = 2463,
  [SMALL_STATE(56)] = 2499,
  [SMALL_STATE(57)] = 2535,
  [SMALL_STATE(58)] = 2571,
  [SMALL_STATE(59)] = 2607,
  [SMALL_STATE(60)] = 2643,
  [SMALL_STATE(61)] = 2679,
  [SMALL_STATE(62)] = 2714,
  [SMALL_STATE(63)] = 2749,
  [SMALL_STATE(64)] = 2783,
  [SMALL_STATE(65)] = 2817,
  [SMALL_STATE(66)] = 2834,
  [SMALL_STATE(67)] = 2841,
  [SMALL_STATE(68)] = 2848,
  [SMALL_STATE(69)] = 2861,
  [SMALL_STATE(70)] = 2872,
  [SMALL_STATE(71)] = 2883,
  [SMALL_STATE(72)] = 2893,
  [SMALL_STATE(73)] = 2903,
  [SMALL_STATE(74)] = 2913,
  [SMALL_STATE(75)] = 2923,
  [SMALL_STATE(76)] = 2933,
  [SMALL_STATE(77)] = 2943,
  [SMALL_STATE(78)] = 2953,
  [SMALL_STATE(79)] = 2959,
  [SMALL_STATE(80)] = 2969,
  [SMALL_STATE(81)] = 2979,
  [SMALL_STATE(82)] = 2989,
  [SMALL_STATE(83)] = 2999,
  [SMALL_STATE(84)] = 3009,
  [SMALL_STATE(85)] = 3019,
  [SMALL_STATE(86)] = 3029,
  [SMALL_STATE(87)] = 3039,
  [SMALL_STATE(88)] = 3049,
  [SMALL_STATE(89)] = 3059,
  [SMALL_STATE(90)] = 3069,
  [SMALL_STATE(91)] = 3075,
  [SMALL_STATE(92)] = 3085,
  [SMALL_STATE(93)] = 3095,
  [SMALL_STATE(94)] = 3105,
  [SMALL_STATE(95)] = 3115,
  [SMALL_STATE(96)] = 3125,
  [SMALL_STATE(97)] = 3135,
  [SMALL_STATE(98)] = 3145,
  [SMALL_STATE(99)] = 3155,
  [SMALL_STATE(100)] = 3165,
  [SMALL_STATE(101)] = 3175,
  [SMALL_STATE(102)] = 3185,
  [SMALL_STATE(103)] = 3195,
  [SMALL_STATE(104)] = 3205,
  [SMALL_STATE(105)] = 3215,
  [SMALL_STATE(106)] = 3225,
  [SMALL_STATE(107)] = 3235,
  [SMALL_STATE(108)] = 3240,
  [SMALL_STATE(109)] = 3247,
  [SMALL_STATE(110)] = 3254,
  [SMALL_STATE(111)] = 3261,
  [SMALL_STATE(112)] = 3266,
  [SMALL_STATE(113)] = 3271,
  [SMALL_STATE(114)] = 3276,
  [SMALL_STATE(115)] = 3281,
  [SMALL_STATE(116)] = 3286,
  [SMALL_STATE(117)] = 3293,
  [SMALL_STATE(118)] = 3298,
  [SMALL_STATE(119)] = 3303,
  [SMALL_STATE(120)] = 3308,
  [SMALL_STATE(121)] = 3315,
  [SMALL_STATE(122)] = 3320,
  [SMALL_STATE(123)] = 3325,
  [SMALL_STATE(124)] = 3332,
  [SMALL_STATE(125)] = 3337,
  [SMALL_STATE(126)] = 3342,
  [SMALL_STATE(127)] = 3349,
  [SMALL_STATE(128)] = 3356,
  [SMALL_STATE(129)] = 3361,
  [SMALL_STATE(130)] = 3368,
  [SMALL_STATE(131)] = 3373,
  [SMALL_STATE(132)] = 3378,
  [SMALL_STATE(133)] = 3383,
  [SMALL_STATE(134)] = 3387,
  [SMALL_STATE(135)] = 3391,
  [SMALL_STATE(136)] = 3395,
  [SMALL_STATE(137)] = 3399,
  [SMALL_STATE(138)] = 3403,
  [SMALL_STATE(139)] = 3407,
  [SMALL_STATE(140)] = 3411,
  [SMALL_STATE(141)] = 3415,
  [SMALL_STATE(142)] = 3419,
  [SMALL_STATE(143)] = 3423,
  [SMALL_STATE(144)] = 3427,
  [SMALL_STATE(145)] = 3431,
  [SMALL_STATE(146)] = 3435,
  [SMALL_STATE(147)] = 3439,
  [SMALL_STATE(148)] = 3443,
  [SMALL_STATE(149)] = 3447,
  [SMALL_STATE(150)] = 3451,
  [SMALL_STATE(151)] = 3455,
  [SMALL_STATE(152)] = 3459,
  [SMALL_STATE(153)] = 3463,
  [SMALL_STATE(154)] = 3467,
  [SMALL_STATE(155)] = 3471,
  [SMALL_STATE(156)] = 3475,
  [SMALL_STATE(157)] = 3479,
  [SMALL_STATE(158)] = 3483,
  [SMALL_STATE(159)] = 3487,
  [SMALL_STATE(160)] = 3491,
  [SMALL_STATE(161)] = 3495,
  [SMALL_STATE(162)] = 3499,
  [SMALL_STATE(163)] = 3503,
  [SMALL_STATE(164)] = 3507,
  [SMALL_STATE(165)] = 3511,
  [SMALL_STATE(166)] = 3515,
  [SMALL_STATE(167)] = 3519,
  [SMALL_STATE(168)] = 3523,
  [SMALL_STATE(169)] = 3527,
  [SMALL_STATE(170)] = 3531,
  [SMALL_STATE(171)] = 3535,
  [SMALL_STATE(172)] = 3539,
  [SMALL_STATE(173)] = 3543,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(89),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(171),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(110),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(5),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(88),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(68),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(26),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(26),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(116),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(123),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reason, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reason, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_db_manager_block, 4),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_db_manager_block, 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 3, .production_id = 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 3, .production_id = 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datapool_block, 4),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datapool_block, 4),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_streamer_block, 5),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_streamer_block, 5),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language_block, 4),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_language_block, 4),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_streamer_block, 4),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_streamer_block, 4),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functions_block, 5),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions_block, 5),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_block, 4),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_block, 4),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functions_block, 4),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions_block, 4),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_block, 5),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_block, 5),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ui_manager_block, 4),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ui_manager_block, 4),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ui_manager_block, 5),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ui_manager_block, 5),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datapool_block, 5),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datapool_block, 5),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language_block, 5),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_language_block, 5),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_db_manager_block, 5),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_db_manager_block, 5),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2), SHIFT_REPEAT(27),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2), SHIFT_REPEAT(88),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2), SHIFT_REPEAT(26),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_body_repeat1, 2), SHIFT_REPEAT(26),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2), SHIFT_REPEAT(154),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_block_repeat1, 2), SHIFT_REPEAT(28),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_block_repeat1, 2), SHIFT_REPEAT(88),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_block_repeat1, 2), SHIFT_REPEAT(26),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_functions_block_repeat1, 2), SHIFT_REPEAT(26),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functions_block_repeat1, 2),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_block_repeat1, 2), SHIFT_REPEAT(108),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_streamer_block_repeat1, 2), SHIFT_REPEAT(36),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_streamer_block_repeat1, 2), SHIFT_REPEAT(88),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_streamer_block_repeat1, 2), SHIFT_REPEAT(26),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_streamer_block_repeat1, 2), SHIFT_REPEAT(26),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_streamer_block_repeat1, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_db_manager_block_repeat1, 2), SHIFT_REPEAT(40),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_db_manager_block_repeat1, 2), SHIFT_REPEAT(88),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_db_manager_block_repeat1, 2), SHIFT_REPEAT(26),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_db_manager_block_repeat1, 2), SHIFT_REPEAT(26),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_db_manager_block_repeat1, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_language_block_repeat1, 2), SHIFT_REPEAT(43),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_language_block_repeat1, 2), SHIFT_REPEAT(88),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_language_block_repeat1, 2), SHIFT_REPEAT(26),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_language_block_repeat1, 2), SHIFT_REPEAT(26),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_language_block_repeat1, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ui_manager_block_repeat1, 2), SHIFT_REPEAT(45),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ui_manager_block_repeat1, 2), SHIFT_REPEAT(88),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ui_manager_block_repeat1, 2), SHIFT_REPEAT(26),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ui_manager_block_repeat1, 2), SHIFT_REPEAT(26),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ui_manager_block_repeat1, 2),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operator_block_repeat1, 2), SHIFT_REPEAT(46),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operator_block_repeat1, 2), SHIFT_REPEAT(88),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operator_block_repeat1, 2), SHIFT_REPEAT(26),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operator_block_repeat1, 2), SHIFT_REPEAT(26),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operator_block_repeat1, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sets_declaration, 3),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sets_declaration, 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_declaration, 5, .production_id = 4),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variables_declaration, 5, .production_id = 4),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_declaration, 3, .production_id = 4),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variables_declaration, 3, .production_id = 4),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_declaration, 4, .production_id = 4),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variables_declaration, 4, .production_id = 4),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colors_declaration, 4),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_colors_declaration, 4),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sets_declaration, 4),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sets_declaration, 4),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colors_declaration, 3),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_colors_declaration, 3),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_part, 2),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_part, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functions_declaration, 3),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions_declaration, 3),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functions_declaration, 4),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions_declaration, 4),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 1, .production_id = 2),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_block, 4),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_block, 3),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 1, .production_id = 3),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2, .production_id = 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_set_declaration_repeat1, 2), SHIFT_REPEAT(83),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_set_declaration_repeat1, 2),
  [458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimension_repeat1, 2), SHIFT_REPEAT(133),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dimension_repeat1, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 4),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_block_repeat1, 2), SHIFT_REPEAT(134),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_block_repeat1, 2),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 3),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functions_declaration_repeat1, 2),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_declaration_repeat1, 2), SHIFT_REPEAT(109),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(93),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sets_declaration_repeat1, 2),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sets_declaration_repeat1, 2), SHIFT_REPEAT(129),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_colors_declaration_repeat1, 2),
  [515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_colors_declaration_repeat1, 2), SHIFT_REPEAT(127),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_declaration_repeat1, 2),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_declaration_repeat1, 2), SHIFT_REPEAT(126),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_declaration, 4, .production_id = 6),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_declaration, 6, .production_id = 6),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_declaration, 5, .production_id = 6),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, .production_id = 2),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_declaration, 3, .production_id = 5),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 3),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_item, 1),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 2, .production_id = 3),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 2),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [635] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_intens(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
