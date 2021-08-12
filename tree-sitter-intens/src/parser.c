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
#define STATE_COUNT 189
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 118
#define ALIAS_COUNT 3
#define TOKEN_COUNT 59
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
  anon_sym_END = 38,
  anon_sym_DOT = 39,
  anon_sym_LANGUAGE = 40,
  anon_sym_DATAPOOL = 41,
  anon_sym_LBRACK = 42,
  anon_sym_RBRACK = 43,
  anon_sym_COLOR = 44,
  anon_sym_LPAREN = 45,
  anon_sym_RPAREN = 46,
  anon_sym_SET = 47,
  anon_sym_STREAMER = 48,
  anon_sym_OPERATOR = 49,
  anon_sym_FUNCTIONS = 50,
  anon_sym_FUNC = 51,
  anon_sym_RETURN = 52,
  anon_sym_EXIT = 53,
  anon_sym_IF = 54,
  anon_sym_ELSE = 55,
  anon_sym_WHILE = 56,
  anon_sym_UI_MANAGER = 57,
  anon_sym_DB_MANAGER = 58,
  sym_source_file = 59,
  sym__high_level_blocks = 60,
  sym__expression = 61,
  sym_string = 62,
  sym_reason = 63,
  sym_include = 64,
  sym_description = 65,
  sym_parameter_block = 66,
  sym_end_statement = 67,
  sym_language_block = 68,
  sym__language_block_expression = 69,
  sym_datapool_block = 70,
  sym__datapool_block_expression = 71,
  sym_variables_declaration = 72,
  sym_variable_declaration = 73,
  sym_dimension = 74,
  sym_colors_declaration = 75,
  sym_color_declaration = 76,
  sym_sets_declaration = 77,
  sym_set_declaration = 78,
  sym_set_item = 79,
  sym_streamer_block = 80,
  sym__streamer_block_expression = 81,
  sym_operator_block = 82,
  sym__operator_block_expression = 83,
  sym_functions_block = 84,
  sym__functions_block_expression = 85,
  sym_functions_declaration = 86,
  sym_function_declaration = 87,
  sym_function_body = 88,
  sym__function_expression = 89,
  sym_block = 90,
  sym_return = 91,
  sym_exit = 92,
  sym_if_statement = 93,
  sym_condition = 94,
  sym_else_part = 95,
  sym_while_loop = 96,
  sym_ui_manager_block = 97,
  sym__ui_manager_block_expression = 98,
  sym_db_manager_block = 99,
  sym__db_manager_block_expression = 100,
  aux_sym_source_file_repeat1 = 101,
  aux_sym_string_repeat1 = 102,
  aux_sym_parameter_block_repeat1 = 103,
  aux_sym_language_block_repeat1 = 104,
  aux_sym_datapool_block_repeat1 = 105,
  aux_sym_variables_declaration_repeat1 = 106,
  aux_sym_dimension_repeat1 = 107,
  aux_sym_colors_declaration_repeat1 = 108,
  aux_sym_sets_declaration_repeat1 = 109,
  aux_sym_set_declaration_repeat1 = 110,
  aux_sym_streamer_block_repeat1 = 111,
  aux_sym_operator_block_repeat1 = 112,
  aux_sym_functions_block_repeat1 = 113,
  aux_sym_functions_declaration_repeat1 = 114,
  aux_sym_function_body_repeat1 = 115,
  aux_sym_ui_manager_block_repeat1 = 116,
  aux_sym_db_manager_block_repeat1 = 117,
  alias_sym_color_identifier = 118,
  alias_sym_function_identifier = 119,
  alias_sym_set_identifier = 120,
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
  [anon_sym_END] = "END",
  [anon_sym_DOT] = ".",
  [anon_sym_LANGUAGE] = "LANGUAGE",
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
  [anon_sym_RETURN] = "RETURN",
  [anon_sym_EXIT] = "EXIT",
  [anon_sym_IF] = "IF",
  [anon_sym_ELSE] = "ELSE",
  [anon_sym_WHILE] = "WHILE",
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
  [sym_end_statement] = "end_statement",
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
  [sym_block] = "block",
  [sym_return] = "return",
  [sym_exit] = "exit",
  [sym_if_statement] = "if_statement",
  [sym_condition] = "condition",
  [sym_else_part] = "else_part",
  [sym_while_loop] = "while_loop",
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
  [anon_sym_END] = anon_sym_END,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LANGUAGE] = anon_sym_LANGUAGE,
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
  [anon_sym_RETURN] = anon_sym_RETURN,
  [anon_sym_EXIT] = anon_sym_EXIT,
  [anon_sym_IF] = anon_sym_IF,
  [anon_sym_ELSE] = anon_sym_ELSE,
  [anon_sym_WHILE] = anon_sym_WHILE,
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
  [sym_end_statement] = sym_end_statement,
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
  [sym_block] = sym_block,
  [sym_return] = sym_return,
  [sym_exit] = sym_exit,
  [sym_if_statement] = sym_if_statement,
  [sym_condition] = sym_condition,
  [sym_else_part] = sym_else_part,
  [sym_while_loop] = sym_while_loop,
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
  [anon_sym_END] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LANGUAGE] = {
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
  [anon_sym_RETURN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EXIT] = {
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
  [anon_sym_WHILE] = {
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
  [sym_end_statement] = {
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
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_return] = {
    .visible = true,
    .named = true,
  },
  [sym_exit] = {
    .visible = true,
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
  [sym_while_loop] = {
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
      if (eof) ADVANCE(165);
      if (lookahead == '"') ADVANCE(327);
      if (lookahead == '(') ADVANCE(394);
      if (lookahead == ')') ADVANCE(395);
      if (lookahead == ',') ADVANCE(385);
      if (lookahead == '.') ADVANCE(389);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ';') ADVANCE(325);
      if (lookahead == 'C') ADVANCE(189);
      if (lookahead == 'E') ADVANCE(236);
      if (lookahead == 'F') ADVANCE(170);
      if (lookahead == 'I') ADVANCE(220);
      if (lookahead == 'N') ADVANCE(270);
      if (lookahead == 'R') ADVANCE(190);
      if (lookahead == 'S') ADVANCE(191);
      if (lookahead == 'T') ADVANCE(287);
      if (lookahead == 'W') ADVANCE(224);
      if (lookahead == '[') ADVANCE(390);
      if (lookahead == ']') ADVANCE(391);
      if (lookahead == '{') ADVANCE(383);
      if (lookahead == '}') ADVANCE(386);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(327);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(329);
      if (lookahead != 0) ADVANCE(330);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(328);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(328);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(327);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ';') ADVANCE(325);
      if (lookahead == 'C') ADVANCE(29);
      if (lookahead == 'E') ADVANCE(74);
      if (lookahead == 'F') ADVANCE(10);
      if (lookahead == 'I') ADVANCE(59);
      if (lookahead == 'N') ADVANCE(107);
      if (lookahead == 'R') ADVANCE(30);
      if (lookahead == 'S') ADVANCE(31);
      if (lookahead == 'T') ADVANCE(123);
      if (lookahead == 'W') ADVANCE(63);
      if (lookahead == '{') ADVANCE(383);
      if (lookahead == '}') ADVANCE(386);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(394);
      if (lookahead == ',') ADVANCE(385);
      if (lookahead == ';') ADVANCE(325);
      if (lookahead == '{') ADVANCE(383);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(326);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(75);
      if (lookahead == 'T') ADVANCE(151);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(345);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(19);
      if (lookahead == 'C') ADVANCE(76);
      if (lookahead == 'D') ADVANCE(128);
      if (lookahead == 'I') ADVANCE(93);
      if (lookahead == 'M') ADVANCE(108);
      if (lookahead == 'O') ADVANCE(120);
      if (lookahead == 'P') ADVANCE(12);
      if (lookahead == 'R') ADVANCE(39);
      if (lookahead == 'S') ADVANCE(54);
      if (lookahead == 'U') ADVANCE(104);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(86);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(143);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(79);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(126);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(148);
      END_STATE();
    case 16:
      if (lookahead == 'A') ADVANCE(98);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(149);
      END_STATE();
    case 18:
      if (lookahead == 'C') ADVANCE(73);
      END_STATE();
    case 19:
      if (lookahead == 'C') ADVANCE(145);
      END_STATE();
    case 20:
      if (lookahead == 'C') ADVANCE(139);
      END_STATE();
    case 21:
      if (lookahead == 'C') ADVANCE(140);
      END_STATE();
    case 22:
      if (lookahead == 'C') ADVANCE(146);
      END_STATE();
    case 23:
      if (lookahead == 'C') ADVANCE(147);
      END_STATE();
    case 24:
      if (lookahead == 'C') ADVANCE(17);
      END_STATE();
    case 25:
      if (lookahead == 'C') ADVANCE(116);
      if (lookahead == 'E') ADVANCE(84);
      END_STATE();
    case 26:
      if (lookahead == 'C') ADVANCE(150);
      END_STATE();
    case 27:
      if (lookahead == 'D') ADVANCE(387);
      END_STATE();
    case 28:
      if (lookahead == 'D') ADVANCE(341);
      END_STATE();
    case 29:
      if (lookahead == 'D') ADVANCE(11);
      if (lookahead == 'O') ADVANCE(77);
      END_STATE();
    case 30:
      if (lookahead == 'E') ADVANCE(7);
      END_STATE();
    case 31:
      if (lookahead == 'E') ADVANCE(135);
      if (lookahead == 'T') ADVANCE(127);
      END_STATE();
    case 32:
      if (lookahead == 'E') ADVANCE(404);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(61);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(343);
      END_STATE();
    case 35:
      if (lookahead == 'E') ADVANCE(335);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(337);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(406);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(157);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(89);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(362);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(350);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(369);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(346);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(356);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(378);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(88);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(14);
      if (lookahead == 'O') ADVANCE(133);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(124);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(130);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(94);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(101);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(20);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(21);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(83);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(22);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(23);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(87);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(26);
      END_STATE();
    case 59:
      if (lookahead == 'F') ADVANCE(402);
      if (lookahead == 'N') ADVANCE(144);
      END_STATE();
    case 60:
      if (lookahead == 'G') ADVANCE(345);
      END_STATE();
    case 61:
      if (lookahead == 'G') ADVANCE(48);
      END_STATE();
    case 62:
      if (lookahead == 'G') ADVANCE(85);
      END_STATE();
    case 63:
      if (lookahead == 'H') ADVANCE(66);
      END_STATE();
    case 64:
      if (lookahead == 'I') ADVANCE(28);
      END_STATE();
    case 65:
      if (lookahead == 'I') ADVANCE(156);
      END_STATE();
    case 66:
      if (lookahead == 'I') ADVANCE(81);
      END_STATE();
    case 67:
      if (lookahead == 'I') ADVANCE(97);
      END_STATE();
    case 68:
      if (lookahead == 'I') ADVANCE(136);
      END_STATE();
    case 69:
      if (lookahead == 'I') ADVANCE(24);
      END_STATE();
    case 70:
      if (lookahead == 'I') ADVANCE(100);
      END_STATE();
    case 71:
      if (lookahead == 'I') ADVANCE(112);
      END_STATE();
    case 72:
      if (lookahead == 'I') ADVANCE(113);
      END_STATE();
    case 73:
      if (lookahead == 'K') ADVANCE(366);
      END_STATE();
    case 74:
      if (lookahead == 'L') ADVANCE(131);
      if (lookahead == 'N') ADVANCE(27);
      if (lookahead == 'O') ADVANCE(78);
      if (lookahead == 'X') ADVANCE(68);
      END_STATE();
    case 75:
      if (lookahead == 'L') ADVANCE(345);
      if (lookahead == 'S') ADVANCE(111);
      END_STATE();
    case 76:
      if (lookahead == 'L') ADVANCE(47);
      if (lookahead == 'O') ADVANCE(102);
      END_STATE();
    case 77:
      if (lookahead == 'L') ADVANCE(109);
      if (lookahead == 'M') ADVANCE(121);
      END_STATE();
    case 78:
      if (lookahead == 'L') ADVANCE(90);
      END_STATE();
    case 79:
      if (lookahead == 'L') ADVANCE(64);
      END_STATE();
    case 80:
      if (lookahead == 'L') ADVANCE(69);
      END_STATE();
    case 81:
      if (lookahead == 'L') ADVANCE(37);
      END_STATE();
    case 82:
      if (lookahead == 'L') ADVANCE(38);
      END_STATE();
    case 83:
      if (lookahead == 'L') ADVANCE(52);
      END_STATE();
    case 84:
      if (lookahead == 'L') ADVANCE(46);
      END_STATE();
    case 85:
      if (lookahead == 'L') ADVANCE(45);
      END_STATE();
    case 86:
      if (lookahead == 'L') ADVANCE(132);
      END_STATE();
    case 87:
      if (lookahead == 'L') ADVANCE(53);
      END_STATE();
    case 88:
      if (lookahead == 'M') ADVANCE(51);
      END_STATE();
    case 89:
      if (lookahead == 'M') ADVANCE(114);
      END_STATE();
    case 90:
      if (lookahead == 'N') ADVANCE(339);
      END_STATE();
    case 91:
      if (lookahead == 'N') ADVANCE(158);
      END_STATE();
    case 92:
      if (lookahead == 'N') ADVANCE(398);
      END_STATE();
    case 93:
      if (lookahead == 'N') ADVANCE(118);
      END_STATE();
    case 94:
      if (lookahead == 'N') ADVANCE(364);
      END_STATE();
    case 95:
      if (lookahead == 'N') ADVANCE(352);
      END_STATE();
    case 96:
      if (lookahead == 'N') ADVANCE(370);
      END_STATE();
    case 97:
      if (lookahead == 'N') ADVANCE(60);
      END_STATE();
    case 98:
      if (lookahead == 'N') ADVANCE(62);
      END_STATE();
    case 99:
      if (lookahead == 'N') ADVANCE(34);
      END_STATE();
    case 100:
      if (lookahead == 'N') ADVANCE(141);
      END_STATE();
    case 101:
      if (lookahead == 'N') ADVANCE(142);
      END_STATE();
    case 102:
      if (lookahead == 'N') ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 'N') ADVANCE(56);
      END_STATE();
    case 104:
      if (lookahead == 'N') ADVANCE(134);
      END_STATE();
    case 105:
      if (lookahead == 'N') ADVANCE(58);
      END_STATE();
    case 106:
      if (lookahead == 'N') ADVANCE(105);
      END_STATE();
    case 107:
      if (lookahead == 'O') ADVANCE(99);
      END_STATE();
    case 108:
      if (lookahead == 'O') ADVANCE(154);
      END_STATE();
    case 109:
      if (lookahead == 'O') ADVANCE(125);
      END_STATE();
    case 110:
      if (lookahead == 'O') ADVANCE(117);
      END_STATE();
    case 111:
      if (lookahead == 'O') ADVANCE(91);
      END_STATE();
    case 112:
      if (lookahead == 'O') ADVANCE(95);
      END_STATE();
    case 113:
      if (lookahead == 'O') ADVANCE(96);
      END_STATE();
    case 114:
      if (lookahead == 'O') ADVANCE(155);
      END_STATE();
    case 115:
      if (lookahead == 'O') ADVANCE(70);
      END_STATE();
    case 116:
      if (lookahead == 'O') ADVANCE(106);
      END_STATE();
    case 117:
      if (lookahead == 'P') ADVANCE(354);
      END_STATE();
    case 118:
      if (lookahead == 'P') ADVANCE(153);
      if (lookahead == 'S') ADVANCE(49);
      END_STATE();
    case 119:
      if (lookahead == 'P') ADVANCE(115);
      if (lookahead == 'R') ADVANCE(55);
      END_STATE();
    case 120:
      if (lookahead == 'P') ADVANCE(50);
      END_STATE();
    case 121:
      if (lookahead == 'P') ADVANCE(82);
      END_STATE();
    case 122:
      if (lookahead == 'P') ADVANCE(80);
      END_STATE();
    case 123:
      if (lookahead == 'R') ADVANCE(152);
      END_STATE();
    case 124:
      if (lookahead == 'R') ADVANCE(345);
      END_STATE();
    case 125:
      if (lookahead == 'R') ADVANCE(392);
      END_STATE();
    case 126:
      if (lookahead == 'R') ADVANCE(348);
      END_STATE();
    case 127:
      if (lookahead == 'R') ADVANCE(67);
      END_STATE();
    case 128:
      if (lookahead == 'R') ADVANCE(110);
      if (lookahead == 'U') ADVANCE(122);
      END_STATE();
    case 129:
      if (lookahead == 'R') ADVANCE(92);
      END_STATE();
    case 130:
      if (lookahead == 'R') ADVANCE(138);
      END_STATE();
    case 131:
      if (lookahead == 'S') ADVANCE(32);
      END_STATE();
    case 132:
      if (lookahead == 'S') ADVANCE(36);
      END_STATE();
    case 133:
      if (lookahead == 'S') ADVANCE(41);
      END_STATE();
    case 134:
      if (lookahead == 'S') ADVANCE(57);
      END_STATE();
    case 135:
      if (lookahead == 'T') ADVANCE(396);
      END_STATE();
    case 136:
      if (lookahead == 'T') ADVANCE(400);
      END_STATE();
    case 137:
      if (lookahead == 'T') ADVANCE(358);
      END_STATE();
    case 138:
      if (lookahead == 'T') ADVANCE(360);
      END_STATE();
    case 139:
      if (lookahead == 'T') ADVANCE(375);
      END_STATE();
    case 140:
      if (lookahead == 'T') ADVANCE(380);
      END_STATE();
    case 141:
      if (lookahead == 'T') ADVANCE(376);
      END_STATE();
    case 142:
      if (lookahead == 'T') ADVANCE(372);
      END_STATE();
    case 143:
      if (lookahead == 'T') ADVANCE(8);
      END_STATE();
    case 144:
      if (lookahead == 'T') ADVANCE(33);
      if (lookahead == 'V') ADVANCE(13);
      END_STATE();
    case 145:
      if (lookahead == 'T') ADVANCE(65);
      END_STATE();
    case 146:
      if (lookahead == 'T') ADVANCE(16);
      END_STATE();
    case 147:
      if (lookahead == 'T') ADVANCE(71);
      END_STATE();
    case 148:
      if (lookahead == 'T') ADVANCE(43);
      END_STATE();
    case 149:
      if (lookahead == 'T') ADVANCE(44);
      END_STATE();
    case 150:
      if (lookahead == 'T') ADVANCE(72);
      END_STATE();
    case 151:
      if (lookahead == 'U') ADVANCE(129);
      END_STATE();
    case 152:
      if (lookahead == 'U') ADVANCE(35);
      END_STATE();
    case 153:
      if (lookahead == 'U') ADVANCE(137);
      END_STATE();
    case 154:
      if (lookahead == 'V') ADVANCE(40);
      END_STATE();
    case 155:
      if (lookahead == 'V') ADVANCE(42);
      END_STATE();
    case 156:
      if (lookahead == 'V') ADVANCE(15);
      END_STATE();
    case 157:
      if (lookahead == 'X') ADVANCE(345);
      END_STATE();
    case 158:
      if (lookahead == '_') ADVANCE(9);
      END_STATE();
    case 159:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 160:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(160)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 161:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(161)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 163:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 164:
      if (eof) ADVANCE(165);
      if (lookahead == '"') ADVANCE(327);
      if (lookahead == ')') ADVANCE(395);
      if (lookahead == ',') ADVANCE(385);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ';') ADVANCE(325);
      if (lookahead == 'E') ADVANCE(251);
      if (lookahead == 'F') ADVANCE(170);
      if (lookahead == 'I') ADVANCE(261);
      if (lookahead == 'N') ADVANCE(270);
      if (lookahead == 'R') ADVANCE(209);
      if (lookahead == 'T') ADVANCE(287);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(164)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(324);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(235);
      if (lookahead == 'T') ADVANCE(315);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(179);
      if (lookahead == 'C') ADVANCE(237);
      if (lookahead == 'D') ADVANCE(291);
      if (lookahead == 'I') ADVANCE(255);
      if (lookahead == 'M') ADVANCE(271);
      if (lookahead == 'O') ADVANCE(283);
      if (lookahead == 'P') ADVANCE(172);
      if (lookahead == 'R') ADVANCE(199);
      if (lookahead == 'S') ADVANCE(215);
      if (lookahead == 'U') ADVANCE(267);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(297);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(247);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(307);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(178);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(240);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(289);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(312);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(260);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(313);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(234);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(309);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(303);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(304);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(310);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(311);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(177);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(279);
      if (lookahead == 'E') ADVANCE(245);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(314);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(388);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(342);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(171);
      if (lookahead == 'O') ADVANCE(238);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(167);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(299);
      if (lookahead == 'T') ADVANCE(290);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(405);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(222);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(344);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(336);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(338);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(407);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(322);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(250);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(363);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(351);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(368);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(347);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(357);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(379);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(249);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(174);
      if (lookahead == 'O') ADVANCE(296);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(286);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(169);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(293);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(256);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(264);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(180);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(181);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(244);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(182);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(183);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(248);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(186);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(403);
      if (lookahead == 'N') ADVANCE(308);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(324);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(208);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(246);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(227);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(188);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(321);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(242);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(259);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(300);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(184);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(263);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(275);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(276);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(367);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(324);
      if (lookahead == 'S') ADVANCE(274);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(294);
      if (lookahead == 'N') ADVANCE(187);
      if (lookahead == 'O') ADVANCE(239);
      if (lookahead == 'X') ADVANCE(229);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(207);
      if (lookahead == 'O') ADVANCE(265);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(272);
      if (lookahead == 'M') ADVANCE(284);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(252);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(225);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(230);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(197);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(198);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(213);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(206);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(205);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(295);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(214);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(212);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(277);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(187);
      if (lookahead == 'O') ADVANCE(239);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(340);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(323);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(399);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(365);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(353);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(371);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(221);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(223);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(320);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(194);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(305);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(306);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(266);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(217);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(298);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(219);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(268);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(262);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(318);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(288);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(280);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(253);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(257);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(258);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(319);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(231);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(269);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(355);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(317);
      if (lookahead == 'S') ADVANCE(210);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(278);
      if (lookahead == 'R') ADVANCE(216);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(211);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(243);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(241);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(324);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(316);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(393);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(349);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(228);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(273);
      if (lookahead == 'U') ADVANCE(285);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(254);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(302);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(192);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(196);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(201);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(274);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(218);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(397);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(401);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(359);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(361);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(374);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(381);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(377);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(373);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(166);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(193);
      if (lookahead == 'V') ADVANCE(173);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(226);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(176);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(232);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(203);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(204);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(233);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(292);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(195);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(301);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(200);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(202);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(173);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(175);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(324);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(168);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(330);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(332);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_eoln);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_eoln);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_invalid);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_invalid);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_none);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_none);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_primitive_type);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_REASON_ACTIVATE);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_REASON_ACTIVATE);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_REASON_CLEAR);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_REASON_CLEAR);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_REASON_CLOSE);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_REASON_CLOSE);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_REASON_CONNECTION);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_REASON_CONNECTION);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_REASON_DROP);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_REASON_DROP);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_REASON_DUPLICATE);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_REASON_DUPLICATE);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_REASON_INPUT);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_REASON_INPUT);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_REASON_INSERT);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_REASON_INSERT);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_REASON_MOVE);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_REASON_MOVE);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_REASON_OPEN);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_REASON_OPEN);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_REASON_PACK);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_REASON_PACK);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_REASON_REMOVE);
      if (lookahead == '_') ADVANCE(185);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_REASON_REMOVE);
      if (lookahead == '_') ADVANCE(25);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_REASON_REMOVE_CONNECTION);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_REASON_REMOVE_CONNECTION);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_REASON_REMOVE_ELEMENT);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_REASON_REMOVE_ELEMENT);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_REASON_SELECT);
      if (lookahead == '_') ADVANCE(282);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_REASON_SELECT);
      if (lookahead == '_') ADVANCE(119);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_REASON_SELECT_POINT);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_REASON_SELECT_POINT);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_REASON_SELECT_RECTANGLE);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_REASON_SELECT_RECTANGLE);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_REASON_UNSELECT);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_REASON_UNSELECT);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_parameter_block_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_COLOR);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_COLOR);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_SET);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_SET);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_RETURN);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_RETURN);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_EXIT);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_EXIT);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_ELSE);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_WHILE);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_WHILE);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
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

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 164},
  [2] = {.lex_state = 164},
  [3] = {.lex_state = 164},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 164},
  [13] = {.lex_state = 164},
  [14] = {.lex_state = 164},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 164},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 164},
  [24] = {.lex_state = 164},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 164},
  [27] = {.lex_state = 164},
  [28] = {.lex_state = 164},
  [29] = {.lex_state = 164},
  [30] = {.lex_state = 164},
  [31] = {.lex_state = 164},
  [32] = {.lex_state = 164},
  [33] = {.lex_state = 164},
  [34] = {.lex_state = 164},
  [35] = {.lex_state = 164},
  [36] = {.lex_state = 164},
  [37] = {.lex_state = 164},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 164},
  [40] = {.lex_state = 164},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 164},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 164},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 164},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 164},
  [74] = {.lex_state = 164},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 160},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 5},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 5},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 5},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 160},
  [166] = {.lex_state = 5},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 5},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 5},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 5},
  [180] = {.lex_state = 5},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 161},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
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
    [anon_sym_END] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LANGUAGE] = ACTIONS(1),
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
    [anon_sym_RETURN] = ACTIONS(1),
    [anon_sym_EXIT] = ACTIONS(1),
    [anon_sym_IF] = ACTIONS(1),
    [anon_sym_ELSE] = ACTIONS(1),
    [anon_sym_WHILE] = ACTIONS(1),
    [anon_sym_UI_MANAGER] = ACTIONS(1),
    [anon_sym_DB_MANAGER] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(183),
    [sym__high_level_blocks] = STATE(2),
    [sym__expression] = STATE(2),
    [sym_string] = STATE(2),
    [sym_reason] = STATE(2),
    [sym_include] = STATE(2),
    [sym_description] = STATE(2),
    [sym_end_statement] = STATE(2),
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
    [anon_sym_END] = ACTIONS(17),
    [anon_sym_LANGUAGE] = ACTIONS(19),
    [anon_sym_DATAPOOL] = ACTIONS(21),
    [anon_sym_STREAMER] = ACTIONS(23),
    [anon_sym_OPERATOR] = ACTIONS(25),
    [anon_sym_FUNCTIONS] = ACTIONS(27),
    [anon_sym_UI_MANAGER] = ACTIONS(29),
    [anon_sym_DB_MANAGER] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_INCLUDE,
    ACTIONS(15), 1,
      anon_sym_DESCRIPTION,
    ACTIONS(17), 1,
      anon_sym_END,
    ACTIONS(19), 1,
      anon_sym_LANGUAGE,
    ACTIONS(21), 1,
      anon_sym_DATAPOOL,
    ACTIONS(23), 1,
      anon_sym_STREAMER,
    ACTIONS(25), 1,
      anon_sym_OPERATOR,
    ACTIONS(27), 1,
      anon_sym_FUNCTIONS,
    ACTIONS(29), 1,
      anon_sym_UI_MANAGER,
    ACTIONS(31), 1,
      anon_sym_DB_MANAGER,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(35), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    STATE(3), 15,
      sym__high_level_blocks,
      sym__expression,
      sym_string,
      sym_reason,
      sym_include,
      sym_description,
      sym_end_statement,
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
  [86] = 16,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_INCLUDE,
    ACTIONS(54), 1,
      anon_sym_DESCRIPTION,
    ACTIONS(57), 1,
      anon_sym_END,
    ACTIONS(60), 1,
      anon_sym_LANGUAGE,
    ACTIONS(63), 1,
      anon_sym_DATAPOOL,
    ACTIONS(66), 1,
      anon_sym_STREAMER,
    ACTIONS(69), 1,
      anon_sym_OPERATOR,
    ACTIONS(72), 1,
      anon_sym_FUNCTIONS,
    ACTIONS(75), 1,
      anon_sym_UI_MANAGER,
    ACTIONS(78), 1,
      anon_sym_DB_MANAGER,
    ACTIONS(48), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(39), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    STATE(3), 15,
      sym__high_level_blocks,
      sym__expression,
      sym_string,
      sym_reason,
      sym_include,
      sym_description,
      sym_end_statement,
      sym_language_block,
      sym_datapool_block,
      sym_streamer_block,
      sym_operator_block,
      sym_functions_block,
      sym_ui_manager_block,
      sym_db_manager_block,
      aux_sym_source_file_repeat1,
    ACTIONS(45), 16,
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
  [172] = 12,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_primitive_type,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    ACTIONS(95), 1,
      anon_sym_RETURN,
    ACTIONS(97), 1,
      anon_sym_EXIT,
    ACTIONS(99), 1,
      anon_sym_IF,
    ACTIONS(101), 1,
      anon_sym_WHILE,
    ACTIONS(89), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(81), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    STATE(8), 11,
      sym__expression,
      sym_string,
      sym_reason,
      sym_variables_declaration,
      sym__function_expression,
      sym_block,
      sym_return,
      sym_exit,
      sym_if_statement,
      sym_while_loop,
      aux_sym_function_body_repeat1,
    ACTIONS(87), 16,
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
  [242] = 12,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_primitive_type,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(95), 1,
      anon_sym_RETURN,
    ACTIONS(97), 1,
      anon_sym_EXIT,
    ACTIONS(99), 1,
      anon_sym_IF,
    ACTIONS(101), 1,
      anon_sym_WHILE,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    ACTIONS(89), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(81), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    STATE(8), 11,
      sym__expression,
      sym_string,
      sym_reason,
      sym_variables_declaration,
      sym__function_expression,
      sym_block,
      sym_return,
      sym_exit,
      sym_if_statement,
      sym_while_loop,
      aux_sym_function_body_repeat1,
    ACTIONS(87), 16,
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
  [312] = 12,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_primitive_type,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(95), 1,
      anon_sym_RETURN,
    ACTIONS(97), 1,
      anon_sym_EXIT,
    ACTIONS(99), 1,
      anon_sym_IF,
    ACTIONS(101), 1,
      anon_sym_WHILE,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    ACTIONS(89), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(105), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    STATE(5), 11,
      sym__expression,
      sym_string,
      sym_reason,
      sym_variables_declaration,
      sym__function_expression,
      sym_block,
      sym_return,
      sym_exit,
      sym_if_statement,
      sym_while_loop,
      aux_sym_function_body_repeat1,
    ACTIONS(87), 16,
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
  [382] = 12,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_primitive_type,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(95), 1,
      anon_sym_RETURN,
    ACTIONS(97), 1,
      anon_sym_EXIT,
    ACTIONS(99), 1,
      anon_sym_IF,
    ACTIONS(101), 1,
      anon_sym_WHILE,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    ACTIONS(89), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(109), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    STATE(4), 11,
      sym__expression,
      sym_string,
      sym_reason,
      sym_variables_declaration,
      sym__function_expression,
      sym_block,
      sym_return,
      sym_exit,
      sym_if_statement,
      sym_while_loop,
      aux_sym_function_body_repeat1,
    ACTIONS(87), 16,
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
  [452] = 12,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      sym_primitive_type,
    ACTIONS(128), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
    ACTIONS(133), 1,
      anon_sym_RETURN,
    ACTIONS(136), 1,
      anon_sym_EXIT,
    ACTIONS(139), 1,
      anon_sym_IF,
    ACTIONS(142), 1,
      anon_sym_WHILE,
    ACTIONS(125), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(113), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    STATE(8), 11,
      sym__expression,
      sym_string,
      sym_reason,
      sym_variables_declaration,
      sym__function_expression,
      sym_block,
      sym_return,
      sym_exit,
      sym_if_statement,
      sym_while_loop,
      aux_sym_function_body_repeat1,
    ACTIONS(122), 16,
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
  [522] = 11,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_primitive_type,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(95), 1,
      anon_sym_RETURN,
    ACTIONS(97), 1,
      anon_sym_EXIT,
    ACTIONS(99), 1,
      anon_sym_IF,
    ACTIONS(101), 1,
      anon_sym_WHILE,
    ACTIONS(89), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(145), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    STATE(47), 10,
      sym__expression,
      sym_string,
      sym_reason,
      sym_variables_declaration,
      sym__function_expression,
      sym_block,
      sym_return,
      sym_exit,
      sym_if_statement,
      sym_while_loop,
    ACTIONS(87), 16,
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
  [588] = 11,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_primitive_type,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(95), 1,
      anon_sym_RETURN,
    ACTIONS(97), 1,
      anon_sym_EXIT,
    ACTIONS(99), 1,
      anon_sym_IF,
    ACTIONS(101), 1,
      anon_sym_WHILE,
    ACTIONS(89), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(147), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    STATE(43), 10,
      sym__expression,
      sym_string,
      sym_reason,
      sym_variables_declaration,
      sym__function_expression,
      sym_block,
      sym_return,
      sym_exit,
      sym_if_statement,
      sym_while_loop,
    ACTIONS(87), 16,
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
  [654] = 11,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_primitive_type,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(95), 1,
      anon_sym_RETURN,
    ACTIONS(97), 1,
      anon_sym_EXIT,
    ACTIONS(99), 1,
      anon_sym_IF,
    ACTIONS(101), 1,
      anon_sym_WHILE,
    ACTIONS(89), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(149), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    STATE(41), 10,
      sym__expression,
      sym_string,
      sym_reason,
      sym_variables_declaration,
      sym__function_expression,
      sym_block,
      sym_return,
      sym_exit,
      sym_if_statement,
      sym_while_loop,
    ACTIONS(87), 16,
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
  [720] = 2,
    ACTIONS(153), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(151), 38,
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
      anon_sym_END,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_RPAREN,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [765] = 2,
    ACTIONS(157), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(155), 38,
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
      anon_sym_END,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_RPAREN,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [810] = 2,
    ACTIONS(161), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(159), 37,
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
      anon_sym_END,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_RPAREN,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [854] = 2,
    ACTIONS(157), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(155), 37,
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
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_END,
      anon_sym_COLOR,
      anon_sym_SET,
      anon_sym_FUNC,
      anon_sym_RETURN,
      anon_sym_EXIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_WHILE,
  [898] = 2,
    ACTIONS(161), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(159), 37,
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
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_END,
      anon_sym_COLOR,
      anon_sym_SET,
      anon_sym_FUNC,
      anon_sym_RETURN,
      anon_sym_EXIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_WHILE,
  [942] = 9,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_primitive_type,
    ACTIONS(165), 1,
      anon_sym_END,
    ACTIONS(167), 1,
      anon_sym_COLOR,
    ACTIONS(169), 1,
      anon_sym_SET,
    ACTIONS(89), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(163), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    STATE(19), 8,
      sym__expression,
      sym_string,
      sym_reason,
      sym__datapool_block_expression,
      sym_variables_declaration,
      sym_colors_declaration,
      sym_sets_declaration,
      aux_sym_datapool_block_repeat1,
    ACTIONS(87), 16,
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
  [1000] = 2,
    ACTIONS(153), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(151), 37,
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
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_END,
      anon_sym_COLOR,
      anon_sym_SET,
      anon_sym_FUNC,
      anon_sym_RETURN,
      anon_sym_EXIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_WHILE,
  [1044] = 9,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_primitive_type,
    ACTIONS(167), 1,
      anon_sym_COLOR,
    ACTIONS(169), 1,
      anon_sym_SET,
    ACTIONS(173), 1,
      anon_sym_END,
    ACTIONS(89), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(171), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    STATE(20), 8,
      sym__expression,
      sym_string,
      sym_reason,
      sym__datapool_block_expression,
      sym_variables_declaration,
      sym_colors_declaration,
      sym_sets_declaration,
      aux_sym_datapool_block_repeat1,
    ACTIONS(87), 16,
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
  [1102] = 9,
    ACTIONS(178), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      sym_primitive_type,
    ACTIONS(190), 1,
      anon_sym_END,
    ACTIONS(192), 1,
      anon_sym_COLOR,
    ACTIONS(195), 1,
      anon_sym_SET,
    ACTIONS(187), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(175), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    STATE(20), 8,
      sym__expression,
      sym_string,
      sym_reason,
      sym__datapool_block_expression,
      sym_variables_declaration,
      sym_colors_declaration,
      sym_sets_declaration,
      aux_sym_datapool_block_repeat1,
    ACTIONS(184), 16,
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
  [1160] = 2,
    ACTIONS(200), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(198), 36,
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
      anon_sym_END,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [1203] = 2,
    ACTIONS(204), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(202), 36,
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
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_END,
      anon_sym_COLOR,
      anon_sym_SET,
      anon_sym_RETURN,
      anon_sym_EXIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_WHILE,
  [1246] = 2,
    ACTIONS(208), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(206), 36,
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
      anon_sym_END,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [1289] = 2,
    ACTIONS(212), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(210), 36,
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
      anon_sym_END,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [1332] = 2,
    ACTIONS(216), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(214), 36,
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
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_END,
      anon_sym_COLOR,
      anon_sym_SET,
      anon_sym_RETURN,
      anon_sym_EXIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_WHILE,
  [1375] = 2,
    ACTIONS(220), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(218), 36,
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
      anon_sym_END,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [1418] = 2,
    ACTIONS(224), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(222), 36,
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
      anon_sym_END,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [1461] = 2,
    ACTIONS(228), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(226), 36,
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
      anon_sym_END,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [1504] = 2,
    ACTIONS(232), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(230), 36,
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
      anon_sym_END,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [1547] = 2,
    ACTIONS(236), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(234), 36,
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
      anon_sym_END,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [1590] = 2,
    ACTIONS(240), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(238), 36,
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
      anon_sym_END,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [1633] = 2,
    ACTIONS(244), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(242), 36,
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
      anon_sym_END,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [1676] = 2,
    ACTIONS(248), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(246), 36,
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
      anon_sym_END,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [1719] = 2,
    ACTIONS(252), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(250), 36,
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
      anon_sym_END,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [1762] = 2,
    ACTIONS(256), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(254), 36,
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
      anon_sym_END,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [1805] = 2,
    ACTIONS(260), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(258), 36,
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
      anon_sym_END,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [1848] = 2,
    ACTIONS(264), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(262), 36,
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
      anon_sym_END,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [1891] = 2,
    ACTIONS(268), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(266), 36,
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
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_END,
      anon_sym_COLOR,
      anon_sym_SET,
      anon_sym_RETURN,
      anon_sym_EXIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_WHILE,
  [1934] = 2,
    ACTIONS(272), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(270), 36,
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
      anon_sym_END,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [1977] = 2,
    ACTIONS(276), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(274), 36,
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
      anon_sym_END,
      anon_sym_LANGUAGE,
      anon_sym_DATAPOOL,
      anon_sym_STREAMER,
      anon_sym_OPERATOR,
      anon_sym_FUNCTIONS,
      anon_sym_UI_MANAGER,
      anon_sym_DB_MANAGER,
  [2020] = 4,
    ACTIONS(282), 1,
      anon_sym_ELSE,
    STATE(45), 1,
      sym_else_part,
    ACTIONS(280), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(278), 32,
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
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RETURN,
      anon_sym_EXIT,
      anon_sym_IF,
      anon_sym_WHILE,
  [2065] = 2,
    ACTIONS(286), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(284), 33,
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
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RETURN,
      anon_sym_EXIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_WHILE,
  [2105] = 2,
    ACTIONS(290), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(288), 33,
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
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RETURN,
      anon_sym_EXIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_WHILE,
  [2145] = 7,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_END,
    ACTIONS(296), 1,
      anon_sym_FUNC,
    ACTIONS(89), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(50), 6,
      sym__expression,
      sym_string,
      sym_reason,
      sym__functions_block_expression,
      sym_functions_declaration,
      aux_sym_functions_block_repeat1,
    ACTIONS(292), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(87), 16,
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
  [2195] = 2,
    ACTIONS(300), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(298), 33,
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
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RETURN,
      anon_sym_EXIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_WHILE,
  [2235] = 7,
    ACTIONS(305), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      anon_sym_END,
    ACTIONS(316), 1,
      anon_sym_FUNC,
    ACTIONS(311), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(46), 6,
      sym__expression,
      sym_string,
      sym_reason,
      sym__functions_block_expression,
      sym_functions_declaration,
      aux_sym_functions_block_repeat1,
    ACTIONS(302), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(308), 16,
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
  [2285] = 2,
    ACTIONS(321), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(319), 33,
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
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RETURN,
      anon_sym_EXIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_WHILE,
  [2325] = 2,
    ACTIONS(325), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(323), 33,
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
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RETURN,
      anon_sym_EXIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_WHILE,
  [2365] = 2,
    ACTIONS(329), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(327), 33,
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
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RETURN,
      anon_sym_EXIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_WHILE,
  [2405] = 7,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(296), 1,
      anon_sym_FUNC,
    ACTIONS(333), 1,
      anon_sym_END,
    ACTIONS(89), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(46), 6,
      sym__expression,
      sym_string,
      sym_reason,
      sym__functions_block_expression,
      sym_functions_declaration,
      aux_sym_functions_block_repeat1,
    ACTIONS(331), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(87), 16,
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
  [2455] = 2,
    ACTIONS(337), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(335), 33,
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
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RETURN,
      anon_sym_EXIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_WHILE,
  [2495] = 6,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_END,
    ACTIONS(89), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(56), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__streamer_block_expression,
      aux_sym_streamer_block_repeat1,
    ACTIONS(339), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(87), 16,
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
  [2541] = 6,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      anon_sym_END,
    ACTIONS(89), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(61), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__ui_manager_block_expression,
      aux_sym_ui_manager_block_repeat1,
    ACTIONS(343), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(87), 16,
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
  [2587] = 6,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(349), 1,
      anon_sym_END,
    ACTIONS(89), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(57), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__operator_block_expression,
      aux_sym_operator_block_repeat1,
    ACTIONS(347), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(87), 16,
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
  [2633] = 6,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(353), 1,
      anon_sym_END,
    ACTIONS(89), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(52), 5,
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
    ACTIONS(87), 16,
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
  [2679] = 6,
    ACTIONS(358), 1,
      anon_sym_DQUOTE,
    ACTIONS(367), 1,
      anon_sym_END,
    ACTIONS(364), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(56), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__streamer_block_expression,
      aux_sym_streamer_block_repeat1,
    ACTIONS(355), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(361), 16,
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
  [2725] = 6,
    ACTIONS(372), 1,
      anon_sym_DQUOTE,
    ACTIONS(381), 1,
      anon_sym_END,
    ACTIONS(378), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(57), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__operator_block_expression,
      aux_sym_operator_block_repeat1,
    ACTIONS(369), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(375), 16,
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
  [2771] = 6,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(385), 1,
      anon_sym_END,
    ACTIONS(89), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(65), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__language_block_expression,
      aux_sym_language_block_repeat1,
    ACTIONS(383), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(87), 16,
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
  [2817] = 6,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      anon_sym_END,
    ACTIONS(89), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(58), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__language_block_expression,
      aux_sym_language_block_repeat1,
    ACTIONS(387), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(87), 16,
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
  [2863] = 6,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(393), 1,
      anon_sym_END,
    ACTIONS(89), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(64), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__db_manager_block_expression,
      aux_sym_db_manager_block_repeat1,
    ACTIONS(391), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(87), 16,
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
  [2909] = 6,
    ACTIONS(398), 1,
      anon_sym_DQUOTE,
    ACTIONS(407), 1,
      anon_sym_END,
    ACTIONS(404), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(61), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__ui_manager_block_expression,
      aux_sym_ui_manager_block_repeat1,
    ACTIONS(395), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(401), 16,
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
  [2955] = 6,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(411), 1,
      anon_sym_END,
    ACTIONS(89), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(60), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__db_manager_block_expression,
      aux_sym_db_manager_block_repeat1,
    ACTIONS(409), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(87), 16,
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
  [3001] = 6,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(415), 1,
      anon_sym_END,
    ACTIONS(89), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(53), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__ui_manager_block_expression,
      aux_sym_ui_manager_block_repeat1,
    ACTIONS(413), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(87), 16,
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
  [3047] = 6,
    ACTIONS(420), 1,
      anon_sym_DQUOTE,
    ACTIONS(429), 1,
      anon_sym_END,
    ACTIONS(426), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(64), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__db_manager_block_expression,
      aux_sym_db_manager_block_repeat1,
    ACTIONS(417), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(423), 16,
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
  [3093] = 6,
    ACTIONS(434), 1,
      anon_sym_DQUOTE,
    ACTIONS(443), 1,
      anon_sym_END,
    ACTIONS(440), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(65), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__language_block_expression,
      aux_sym_language_block_repeat1,
    ACTIONS(431), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(437), 16,
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
  [3139] = 6,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(447), 1,
      anon_sym_END,
    ACTIONS(89), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(54), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__operator_block_expression,
      aux_sym_operator_block_repeat1,
    ACTIONS(445), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(87), 16,
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
  [3185] = 6,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(174), 1,
      sym_condition,
    ACTIONS(11), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(173), 3,
      sym__expression,
      sym_string,
      sym_reason,
    ACTIONS(449), 8,
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
  [3229] = 6,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(175), 1,
      sym_condition,
    ACTIONS(11), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(173), 3,
      sym__expression,
      sym_string,
      sym_reason,
    ACTIONS(449), 8,
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
  [3273] = 2,
    ACTIONS(453), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(451), 29,
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
  [3309] = 2,
    ACTIONS(457), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(455), 29,
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
  [3345] = 2,
    ACTIONS(461), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(459), 29,
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
  [3381] = 2,
    ACTIONS(465), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(463), 29,
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
  [3417] = 2,
    ACTIONS(469), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(467), 27,
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
  [3451] = 2,
    ACTIONS(473), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(471), 27,
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
  [3485] = 5,
    ACTIONS(477), 1,
      anon_sym_LBRACE,
    ACTIONS(479), 1,
      anon_sym_LBRACK,
    STATE(79), 1,
      sym_dimension,
    STATE(128), 1,
      sym_parameter_block,
    ACTIONS(475), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3502] = 3,
    ACTIONS(483), 1,
      anon_sym_LBRACE,
    STATE(133), 1,
      sym_function_body,
    ACTIONS(481), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3513] = 1,
    ACTIONS(485), 4,
      sym_identifier,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LPAREN,
  [3520] = 1,
    ACTIONS(487), 4,
      sym_identifier,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LPAREN,
  [3527] = 3,
    ACTIONS(477), 1,
      anon_sym_LBRACE,
    STATE(125), 1,
      sym_parameter_block,
    ACTIONS(489), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3538] = 4,
    ACTIONS(477), 1,
      anon_sym_LBRACE,
    ACTIONS(491), 1,
      sym_identifier,
    STATE(85), 1,
      sym_variable_declaration,
    STATE(142), 1,
      sym_parameter_block,
  [3551] = 3,
    ACTIONS(493), 1,
      anon_sym_SEMI,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_functions_declaration_repeat1,
  [3561] = 3,
    ACTIONS(498), 1,
      anon_sym_COMMA,
    ACTIONS(501), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_parameter_block_repeat1,
  [3571] = 3,
    ACTIONS(503), 1,
      anon_sym_COMMA,
    ACTIONS(505), 1,
      anon_sym_RBRACE,
    STATE(114), 1,
      aux_sym_parameter_block_repeat1,
  [3581] = 3,
    ACTIONS(507), 1,
      anon_sym_SEMI,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    STATE(115), 1,
      aux_sym_variables_declaration_repeat1,
  [3591] = 3,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    ACTIONS(511), 1,
      anon_sym_SEMI,
    STATE(86), 1,
      aux_sym_variables_declaration_repeat1,
  [3601] = 3,
    ACTIONS(507), 1,
      anon_sym_SEMI,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      aux_sym_variables_declaration_repeat1,
  [3611] = 3,
    ACTIONS(513), 1,
      anon_sym_DQUOTE,
    ACTIONS(515), 1,
      aux_sym_string_token1,
    STATE(98), 1,
      aux_sym_string_repeat1,
  [3621] = 3,
    ACTIONS(517), 1,
      anon_sym_SEMI,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      aux_sym_colors_declaration_repeat1,
  [3631] = 3,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    ACTIONS(521), 1,
      anon_sym_SEMI,
    STATE(112), 1,
      aux_sym_colors_declaration_repeat1,
  [3641] = 3,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(110), 1,
      sym_set_item,
    STATE(124), 1,
      sym_string,
  [3651] = 3,
    ACTIONS(523), 1,
      anon_sym_DQUOTE,
    ACTIONS(525), 1,
      aux_sym_string_token1,
    STATE(87), 1,
      aux_sym_string_repeat1,
  [3661] = 3,
    ACTIONS(477), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    STATE(188), 1,
      sym_parameter_block,
  [3671] = 3,
    ACTIONS(529), 1,
      anon_sym_SEMI,
    ACTIONS(531), 1,
      anon_sym_COMMA,
    STATE(105), 1,
      aux_sym_sets_declaration_repeat1,
  [3681] = 3,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    ACTIONS(535), 1,
      anon_sym_RBRACK,
    STATE(107), 1,
      aux_sym_dimension_repeat1,
  [3691] = 3,
    ACTIONS(537), 1,
      anon_sym_DQUOTE,
    ACTIONS(539), 1,
      aux_sym_string_token1,
    STATE(96), 1,
      aux_sym_string_repeat1,
  [3701] = 3,
    ACTIONS(515), 1,
      aux_sym_string_token1,
    ACTIONS(541), 1,
      anon_sym_DQUOTE,
    STATE(98), 1,
      aux_sym_string_repeat1,
  [3711] = 1,
    ACTIONS(543), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [3717] = 3,
    ACTIONS(545), 1,
      anon_sym_DQUOTE,
    ACTIONS(547), 1,
      aux_sym_string_token1,
    STATE(98), 1,
      aux_sym_string_repeat1,
  [3727] = 3,
    ACTIONS(531), 1,
      anon_sym_COMMA,
    ACTIONS(550), 1,
      anon_sym_SEMI,
    STATE(93), 1,
      aux_sym_sets_declaration_repeat1,
  [3737] = 3,
    ACTIONS(552), 1,
      anon_sym_COMMA,
    ACTIONS(554), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym_set_declaration_repeat1,
  [3747] = 3,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(124), 1,
      sym_string,
    STATE(129), 1,
      sym_set_item,
  [3757] = 3,
    ACTIONS(556), 1,
      anon_sym_COMMA,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym_set_declaration_repeat1,
  [3767] = 3,
    ACTIONS(552), 1,
      anon_sym_COMMA,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym_set_declaration_repeat1,
  [3777] = 3,
    ACTIONS(563), 1,
      anon_sym_SEMI,
    ACTIONS(565), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_functions_declaration_repeat1,
  [3787] = 3,
    ACTIONS(567), 1,
      anon_sym_SEMI,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    STATE(105), 1,
      aux_sym_sets_declaration_repeat1,
  [3797] = 3,
    ACTIONS(552), 1,
      anon_sym_COMMA,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      aux_sym_set_declaration_repeat1,
  [3807] = 3,
    ACTIONS(572), 1,
      anon_sym_COMMA,
    ACTIONS(575), 1,
      anon_sym_RBRACK,
    STATE(107), 1,
      aux_sym_dimension_repeat1,
  [3817] = 3,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(106), 1,
      sym_set_item,
    STATE(124), 1,
      sym_string,
  [3827] = 1,
    ACTIONS(577), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [3833] = 3,
    ACTIONS(552), 1,
      anon_sym_COMMA,
    ACTIONS(579), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      aux_sym_set_declaration_repeat1,
  [3843] = 3,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    ACTIONS(581), 1,
      anon_sym_RBRACK,
    STATE(94), 1,
      aux_sym_dimension_repeat1,
  [3853] = 3,
    ACTIONS(583), 1,
      anon_sym_SEMI,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    STATE(112), 1,
      aux_sym_colors_declaration_repeat1,
  [3863] = 3,
    ACTIONS(565), 1,
      anon_sym_COMMA,
    ACTIONS(588), 1,
      anon_sym_SEMI,
    STATE(104), 1,
      aux_sym_functions_declaration_repeat1,
  [3873] = 3,
    ACTIONS(503), 1,
      anon_sym_COMMA,
    ACTIONS(590), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_parameter_block_repeat1,
  [3883] = 3,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    ACTIONS(592), 1,
      anon_sym_SEMI,
    STATE(116), 1,
      aux_sym_variables_declaration_repeat1,
  [3893] = 3,
    ACTIONS(594), 1,
      anon_sym_SEMI,
    ACTIONS(596), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      aux_sym_variables_declaration_repeat1,
  [3903] = 2,
    ACTIONS(599), 1,
      sym_identifier,
    STATE(88), 1,
      sym_color_declaration,
  [3910] = 1,
    ACTIONS(594), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3915] = 2,
    ACTIONS(601), 1,
      sym_identifier,
    STATE(113), 1,
      sym_function_declaration,
  [3922] = 1,
    ACTIONS(603), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3927] = 1,
    ACTIONS(583), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3932] = 1,
    ACTIONS(605), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3937] = 2,
    ACTIONS(491), 1,
      sym_identifier,
    STATE(118), 1,
      sym_variable_declaration,
  [3944] = 1,
    ACTIONS(607), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3949] = 1,
    ACTIONS(609), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3954] = 1,
    ACTIONS(575), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3959] = 1,
    ACTIONS(567), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3964] = 1,
    ACTIONS(489), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3969] = 1,
    ACTIONS(559), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3974] = 1,
    ACTIONS(611), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3979] = 1,
    ACTIONS(613), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3984] = 2,
    ACTIONS(601), 1,
      sym_identifier,
    STATE(139), 1,
      sym_function_declaration,
  [3991] = 1,
    ACTIONS(615), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3996] = 1,
    ACTIONS(617), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4001] = 1,
    ACTIONS(619), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4006] = 1,
    ACTIONS(501), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4011] = 2,
    ACTIONS(621), 1,
      sym_identifier,
    STATE(99), 1,
      sym_set_declaration,
  [4018] = 2,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(181), 1,
      sym_string,
  [4025] = 1,
    ACTIONS(493), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4030] = 2,
    ACTIONS(621), 1,
      sym_identifier,
    STATE(127), 1,
      sym_set_declaration,
  [4037] = 2,
    ACTIONS(599), 1,
      sym_identifier,
    STATE(121), 1,
      sym_color_declaration,
  [4044] = 2,
    ACTIONS(491), 1,
      sym_identifier,
    STATE(84), 1,
      sym_variable_declaration,
  [4051] = 1,
    ACTIONS(623), 1,
      anon_sym_SEMI,
  [4055] = 1,
    ACTIONS(625), 1,
      anon_sym_LPAREN,
  [4059] = 1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
  [4063] = 1,
    ACTIONS(629), 1,
      sym_number,
  [4067] = 1,
    ACTIONS(631), 1,
      anon_sym_SEMI,
  [4071] = 1,
    ACTIONS(633), 1,
      anon_sym_RPAREN,
  [4075] = 1,
    ACTIONS(635), 1,
      anon_sym_LPAREN,
  [4079] = 1,
    ACTIONS(637), 1,
      aux_sym_parameter_block_token1,
  [4083] = 1,
    ACTIONS(639), 1,
      anon_sym_SEMI,
  [4087] = 1,
    ACTIONS(641), 1,
      anon_sym_LANGUAGE,
  [4091] = 1,
    ACTIONS(643), 1,
      anon_sym_SEMI,
  [4095] = 1,
    ACTIONS(645), 1,
      anon_sym_DATAPOOL,
  [4099] = 1,
    ACTIONS(647), 1,
      anon_sym_SEMI,
  [4103] = 1,
    ACTIONS(649), 1,
      anon_sym_STREAMER,
  [4107] = 1,
    ACTIONS(651), 1,
      anon_sym_SEMI,
  [4111] = 1,
    ACTIONS(653), 1,
      anon_sym_SEMI,
  [4115] = 1,
    ACTIONS(655), 1,
      anon_sym_DB_MANAGER,
  [4119] = 1,
    ACTIONS(657), 1,
      anon_sym_UI_MANAGER,
  [4123] = 1,
    ACTIONS(659), 1,
      anon_sym_OPERATOR,
  [4127] = 1,
    ACTIONS(661), 1,
      anon_sym_FUNCTIONS,
  [4131] = 1,
    ACTIONS(663), 1,
      anon_sym_SEMI,
  [4135] = 1,
    ACTIONS(665), 1,
      anon_sym_OPERATOR,
  [4139] = 1,
    ACTIONS(667), 1,
      aux_sym_parameter_block_token1,
  [4143] = 1,
    ACTIONS(669), 1,
      anon_sym_FUNCTIONS,
  [4147] = 1,
    ACTIONS(671), 1,
      anon_sym_SEMI,
  [4151] = 1,
    ACTIONS(673), 1,
      anon_sym_SEMI,
  [4155] = 1,
    ACTIONS(675), 1,
      anon_sym_UI_MANAGER,
  [4159] = 1,
    ACTIONS(677), 1,
      anon_sym_SEMI,
  [4163] = 1,
    ACTIONS(679), 1,
      anon_sym_SEMI,
  [4167] = 1,
    ACTIONS(681), 1,
      anon_sym_STREAMER,
  [4171] = 1,
    ACTIONS(683), 1,
      anon_sym_RPAREN,
  [4175] = 1,
    ACTIONS(685), 1,
      anon_sym_RPAREN,
  [4179] = 1,
    ACTIONS(687), 1,
      anon_sym_RPAREN,
  [4183] = 1,
    ACTIONS(689), 1,
      anon_sym_DB_MANAGER,
  [4187] = 1,
    ACTIONS(691), 1,
      anon_sym_SEMI,
  [4191] = 1,
    ACTIONS(693), 1,
      anon_sym_SEMI,
  [4195] = 1,
    ACTIONS(695), 1,
      anon_sym_DATAPOOL,
  [4199] = 1,
    ACTIONS(697), 1,
      anon_sym_LANGUAGE,
  [4203] = 1,
    ACTIONS(699), 1,
      anon_sym_SEMI,
  [4207] = 1,
    ACTIONS(701), 1,
      sym_number,
  [4211] = 1,
    ACTIONS(703), 1,
      ts_builtin_sym_end,
  [4215] = 1,
    ACTIONS(705), 1,
      anon_sym_DOT,
  [4219] = 1,
    ACTIONS(707), 1,
      anon_sym_SEMI,
  [4223] = 1,
    ACTIONS(709), 1,
      aux_sym_include_token1,
  [4227] = 1,
    ACTIONS(711), 1,
      anon_sym_SEMI,
  [4231] = 1,
    ACTIONS(713), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 86,
  [SMALL_STATE(4)] = 172,
  [SMALL_STATE(5)] = 242,
  [SMALL_STATE(6)] = 312,
  [SMALL_STATE(7)] = 382,
  [SMALL_STATE(8)] = 452,
  [SMALL_STATE(9)] = 522,
  [SMALL_STATE(10)] = 588,
  [SMALL_STATE(11)] = 654,
  [SMALL_STATE(12)] = 720,
  [SMALL_STATE(13)] = 765,
  [SMALL_STATE(14)] = 810,
  [SMALL_STATE(15)] = 854,
  [SMALL_STATE(16)] = 898,
  [SMALL_STATE(17)] = 942,
  [SMALL_STATE(18)] = 1000,
  [SMALL_STATE(19)] = 1044,
  [SMALL_STATE(20)] = 1102,
  [SMALL_STATE(21)] = 1160,
  [SMALL_STATE(22)] = 1203,
  [SMALL_STATE(23)] = 1246,
  [SMALL_STATE(24)] = 1289,
  [SMALL_STATE(25)] = 1332,
  [SMALL_STATE(26)] = 1375,
  [SMALL_STATE(27)] = 1418,
  [SMALL_STATE(28)] = 1461,
  [SMALL_STATE(29)] = 1504,
  [SMALL_STATE(30)] = 1547,
  [SMALL_STATE(31)] = 1590,
  [SMALL_STATE(32)] = 1633,
  [SMALL_STATE(33)] = 1676,
  [SMALL_STATE(34)] = 1719,
  [SMALL_STATE(35)] = 1762,
  [SMALL_STATE(36)] = 1805,
  [SMALL_STATE(37)] = 1848,
  [SMALL_STATE(38)] = 1891,
  [SMALL_STATE(39)] = 1934,
  [SMALL_STATE(40)] = 1977,
  [SMALL_STATE(41)] = 2020,
  [SMALL_STATE(42)] = 2065,
  [SMALL_STATE(43)] = 2105,
  [SMALL_STATE(44)] = 2145,
  [SMALL_STATE(45)] = 2195,
  [SMALL_STATE(46)] = 2235,
  [SMALL_STATE(47)] = 2285,
  [SMALL_STATE(48)] = 2325,
  [SMALL_STATE(49)] = 2365,
  [SMALL_STATE(50)] = 2405,
  [SMALL_STATE(51)] = 2455,
  [SMALL_STATE(52)] = 2495,
  [SMALL_STATE(53)] = 2541,
  [SMALL_STATE(54)] = 2587,
  [SMALL_STATE(55)] = 2633,
  [SMALL_STATE(56)] = 2679,
  [SMALL_STATE(57)] = 2725,
  [SMALL_STATE(58)] = 2771,
  [SMALL_STATE(59)] = 2817,
  [SMALL_STATE(60)] = 2863,
  [SMALL_STATE(61)] = 2909,
  [SMALL_STATE(62)] = 2955,
  [SMALL_STATE(63)] = 3001,
  [SMALL_STATE(64)] = 3047,
  [SMALL_STATE(65)] = 3093,
  [SMALL_STATE(66)] = 3139,
  [SMALL_STATE(67)] = 3185,
  [SMALL_STATE(68)] = 3229,
  [SMALL_STATE(69)] = 3273,
  [SMALL_STATE(70)] = 3309,
  [SMALL_STATE(71)] = 3345,
  [SMALL_STATE(72)] = 3381,
  [SMALL_STATE(73)] = 3417,
  [SMALL_STATE(74)] = 3451,
  [SMALL_STATE(75)] = 3485,
  [SMALL_STATE(76)] = 3502,
  [SMALL_STATE(77)] = 3513,
  [SMALL_STATE(78)] = 3520,
  [SMALL_STATE(79)] = 3527,
  [SMALL_STATE(80)] = 3538,
  [SMALL_STATE(81)] = 3551,
  [SMALL_STATE(82)] = 3561,
  [SMALL_STATE(83)] = 3571,
  [SMALL_STATE(84)] = 3581,
  [SMALL_STATE(85)] = 3591,
  [SMALL_STATE(86)] = 3601,
  [SMALL_STATE(87)] = 3611,
  [SMALL_STATE(88)] = 3621,
  [SMALL_STATE(89)] = 3631,
  [SMALL_STATE(90)] = 3641,
  [SMALL_STATE(91)] = 3651,
  [SMALL_STATE(92)] = 3661,
  [SMALL_STATE(93)] = 3671,
  [SMALL_STATE(94)] = 3681,
  [SMALL_STATE(95)] = 3691,
  [SMALL_STATE(96)] = 3701,
  [SMALL_STATE(97)] = 3711,
  [SMALL_STATE(98)] = 3717,
  [SMALL_STATE(99)] = 3727,
  [SMALL_STATE(100)] = 3737,
  [SMALL_STATE(101)] = 3747,
  [SMALL_STATE(102)] = 3757,
  [SMALL_STATE(103)] = 3767,
  [SMALL_STATE(104)] = 3777,
  [SMALL_STATE(105)] = 3787,
  [SMALL_STATE(106)] = 3797,
  [SMALL_STATE(107)] = 3807,
  [SMALL_STATE(108)] = 3817,
  [SMALL_STATE(109)] = 3827,
  [SMALL_STATE(110)] = 3833,
  [SMALL_STATE(111)] = 3843,
  [SMALL_STATE(112)] = 3853,
  [SMALL_STATE(113)] = 3863,
  [SMALL_STATE(114)] = 3873,
  [SMALL_STATE(115)] = 3883,
  [SMALL_STATE(116)] = 3893,
  [SMALL_STATE(117)] = 3903,
  [SMALL_STATE(118)] = 3910,
  [SMALL_STATE(119)] = 3915,
  [SMALL_STATE(120)] = 3922,
  [SMALL_STATE(121)] = 3927,
  [SMALL_STATE(122)] = 3932,
  [SMALL_STATE(123)] = 3937,
  [SMALL_STATE(124)] = 3944,
  [SMALL_STATE(125)] = 3949,
  [SMALL_STATE(126)] = 3954,
  [SMALL_STATE(127)] = 3959,
  [SMALL_STATE(128)] = 3964,
  [SMALL_STATE(129)] = 3969,
  [SMALL_STATE(130)] = 3974,
  [SMALL_STATE(131)] = 3979,
  [SMALL_STATE(132)] = 3984,
  [SMALL_STATE(133)] = 3991,
  [SMALL_STATE(134)] = 3996,
  [SMALL_STATE(135)] = 4001,
  [SMALL_STATE(136)] = 4006,
  [SMALL_STATE(137)] = 4011,
  [SMALL_STATE(138)] = 4018,
  [SMALL_STATE(139)] = 4025,
  [SMALL_STATE(140)] = 4030,
  [SMALL_STATE(141)] = 4037,
  [SMALL_STATE(142)] = 4044,
  [SMALL_STATE(143)] = 4051,
  [SMALL_STATE(144)] = 4055,
  [SMALL_STATE(145)] = 4059,
  [SMALL_STATE(146)] = 4063,
  [SMALL_STATE(147)] = 4067,
  [SMALL_STATE(148)] = 4071,
  [SMALL_STATE(149)] = 4075,
  [SMALL_STATE(150)] = 4079,
  [SMALL_STATE(151)] = 4083,
  [SMALL_STATE(152)] = 4087,
  [SMALL_STATE(153)] = 4091,
  [SMALL_STATE(154)] = 4095,
  [SMALL_STATE(155)] = 4099,
  [SMALL_STATE(156)] = 4103,
  [SMALL_STATE(157)] = 4107,
  [SMALL_STATE(158)] = 4111,
  [SMALL_STATE(159)] = 4115,
  [SMALL_STATE(160)] = 4119,
  [SMALL_STATE(161)] = 4123,
  [SMALL_STATE(162)] = 4127,
  [SMALL_STATE(163)] = 4131,
  [SMALL_STATE(164)] = 4135,
  [SMALL_STATE(165)] = 4139,
  [SMALL_STATE(166)] = 4143,
  [SMALL_STATE(167)] = 4147,
  [SMALL_STATE(168)] = 4151,
  [SMALL_STATE(169)] = 4155,
  [SMALL_STATE(170)] = 4159,
  [SMALL_STATE(171)] = 4163,
  [SMALL_STATE(172)] = 4167,
  [SMALL_STATE(173)] = 4171,
  [SMALL_STATE(174)] = 4175,
  [SMALL_STATE(175)] = 4179,
  [SMALL_STATE(176)] = 4183,
  [SMALL_STATE(177)] = 4187,
  [SMALL_STATE(178)] = 4191,
  [SMALL_STATE(179)] = 4195,
  [SMALL_STATE(180)] = 4199,
  [SMALL_STATE(181)] = 4203,
  [SMALL_STATE(182)] = 4207,
  [SMALL_STATE(183)] = 4211,
  [SMALL_STATE(184)] = 4215,
  [SMALL_STATE(185)] = 4219,
  [SMALL_STATE(186)] = 4223,
  [SMALL_STATE(187)] = 4227,
  [SMALL_STATE(188)] = 4231,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(95),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(186),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(138),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(184),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2), SHIFT_REPEAT(8),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2), SHIFT_REPEAT(91),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2), SHIFT_REPEAT(80),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2), SHIFT_REPEAT(16),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_body_repeat1, 2), SHIFT_REPEAT(16),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2), SHIFT_REPEAT(7),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2), SHIFT_REPEAT(153),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2), SHIFT_REPEAT(151),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2), SHIFT_REPEAT(149),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2), SHIFT_REPEAT(144),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reason, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reason, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(20),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(91),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(80),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(16),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(16),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(117),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(137),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_statement, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_statement, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_declaration, 4, .production_id = 4),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variables_declaration, 4, .production_id = 4),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datapool_block, 5),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datapool_block, 5),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datapool_block, 4),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datapool_block, 4),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_declaration, 3, .production_id = 4),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variables_declaration, 3, .production_id = 4),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 3, .production_id = 1),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 3, .production_id = 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language_block, 5),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_language_block, 5),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_streamer_block, 5),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_streamer_block, 5),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_block, 5),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_block, 5),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_db_manager_block, 4),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_db_manager_block, 4),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ui_manager_block, 4),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ui_manager_block, 4),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functions_block, 4),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions_block, 4),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functions_block, 5),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions_block, 5),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ui_manager_block, 5),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ui_manager_block, 5),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_db_manager_block, 5),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_db_manager_block, 5),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language_block, 4),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_language_block, 4),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_declaration, 5, .production_id = 4),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variables_declaration, 5, .production_id = 4),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_block, 4),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_block, 4),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_streamer_block, 4),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_streamer_block, 4),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit, 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exit, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_part, 2),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_part, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_block_repeat1, 2), SHIFT_REPEAT(46),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_block_repeat1, 2), SHIFT_REPEAT(91),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_block_repeat1, 2), SHIFT_REPEAT(16),
  [311] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_functions_block_repeat1, 2), SHIFT_REPEAT(16),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functions_block_repeat1, 2),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_block_repeat1, 2), SHIFT_REPEAT(119),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_loop, 5),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_loop, 5),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 2),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_streamer_block_repeat1, 2), SHIFT_REPEAT(56),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_streamer_block_repeat1, 2), SHIFT_REPEAT(91),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_streamer_block_repeat1, 2), SHIFT_REPEAT(16),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_streamer_block_repeat1, 2), SHIFT_REPEAT(16),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_streamer_block_repeat1, 2),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operator_block_repeat1, 2), SHIFT_REPEAT(57),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operator_block_repeat1, 2), SHIFT_REPEAT(91),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operator_block_repeat1, 2), SHIFT_REPEAT(16),
  [378] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operator_block_repeat1, 2), SHIFT_REPEAT(16),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operator_block_repeat1, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ui_manager_block_repeat1, 2), SHIFT_REPEAT(61),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ui_manager_block_repeat1, 2), SHIFT_REPEAT(91),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ui_manager_block_repeat1, 2), SHIFT_REPEAT(16),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ui_manager_block_repeat1, 2), SHIFT_REPEAT(16),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ui_manager_block_repeat1, 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_db_manager_block_repeat1, 2), SHIFT_REPEAT(64),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_db_manager_block_repeat1, 2), SHIFT_REPEAT(91),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_db_manager_block_repeat1, 2), SHIFT_REPEAT(16),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_db_manager_block_repeat1, 2), SHIFT_REPEAT(16),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_db_manager_block_repeat1, 2),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_language_block_repeat1, 2), SHIFT_REPEAT(65),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_language_block_repeat1, 2), SHIFT_REPEAT(91),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_language_block_repeat1, 2), SHIFT_REPEAT(16),
  [440] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_language_block_repeat1, 2), SHIFT_REPEAT(16),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_language_block_repeat1, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sets_declaration, 4),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sets_declaration, 4),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colors_declaration, 4),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_colors_declaration, 4),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sets_declaration, 3),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sets_declaration, 3),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colors_declaration, 3),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_colors_declaration, 3),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functions_declaration, 4),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions_declaration, 4),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functions_declaration, 3),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions_declaration, 3),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 1, .production_id = 2),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 1, .production_id = 3),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_block, 3),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_block, 4),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2, .production_id = 2),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functions_declaration_repeat1, 2),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_declaration_repeat1, 2), SHIFT_REPEAT(132),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_block_repeat1, 2), SHIFT_REPEAT(165),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_block_repeat1, 2),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 3),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(98),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_set_declaration_repeat1, 2), SHIFT_REPEAT(101),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_set_declaration_repeat1, 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sets_declaration_repeat1, 2),
  [569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sets_declaration_repeat1, 2), SHIFT_REPEAT(140),
  [572] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimension_repeat1, 2), SHIFT_REPEAT(146),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dimension_repeat1, 2),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 4),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_colors_declaration_repeat1, 2),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_colors_declaration_repeat1, 2), SHIFT_REPEAT(141),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_declaration_repeat1, 2),
  [596] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_declaration_repeat1, 2), SHIFT_REPEAT(123),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_declaration, 3, .production_id = 5),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 3),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_item, 1),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, .production_id = 2),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_declaration, 5, .production_id = 6),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_declaration, 4, .production_id = 6),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 2, .production_id = 3),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 2),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_declaration, 6, .production_id = 6),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [703] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
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
