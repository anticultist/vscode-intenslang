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
#define STATE_COUNT 206
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 123
#define ALIAS_COUNT 6
#define TOKEN_COUNT 60
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 9

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
  anon_sym_TASK = 50,
  anon_sym_FUNCTIONS = 51,
  anon_sym_FUNC = 52,
  anon_sym_RETURN = 53,
  anon_sym_EXIT = 54,
  anon_sym_IF = 55,
  anon_sym_ELSE = 56,
  anon_sym_WHILE = 57,
  anon_sym_UI_MANAGER = 58,
  anon_sym_DB_MANAGER = 59,
  sym_source_file = 60,
  sym__high_level_blocks = 61,
  sym__expression = 62,
  sym_string = 63,
  sym_reason = 64,
  sym_include = 65,
  sym_description = 66,
  sym_parameter_block = 67,
  sym_end_statement = 68,
  sym_language_block = 69,
  sym__language_block_expression = 70,
  sym_datapool_block = 71,
  sym__datapool_block_expression = 72,
  sym_variables_declaration = 73,
  sym_variable_declaration = 74,
  sym_dimension = 75,
  sym_colors_declaration = 76,
  sym_color_declaration = 77,
  sym_sets_declaration = 78,
  sym_set_declaration = 79,
  sym_set_item = 80,
  sym_streamer_block = 81,
  sym__streamer_block_expression = 82,
  sym_operator_block = 83,
  sym__operator_block_expression = 84,
  sym_tasks_declaration = 85,
  sym_task_declaration = 86,
  sym_functions_block = 87,
  sym__functions_block_expression = 88,
  sym_functions_declaration = 89,
  sym_function_options = 90,
  sym_function_declaration = 91,
  sym_function_body = 92,
  sym__function_expression = 93,
  sym_block = 94,
  sym_return = 95,
  sym_exit = 96,
  sym_if_statement = 97,
  sym_condition = 98,
  sym_else_part = 99,
  sym_while_loop = 100,
  sym_ui_manager_block = 101,
  sym__ui_manager_block_expression = 102,
  sym_db_manager_block = 103,
  sym__db_manager_block_expression = 104,
  aux_sym_source_file_repeat1 = 105,
  aux_sym_string_repeat1 = 106,
  aux_sym_parameter_block_repeat1 = 107,
  aux_sym_language_block_repeat1 = 108,
  aux_sym_datapool_block_repeat1 = 109,
  aux_sym_variables_declaration_repeat1 = 110,
  aux_sym_dimension_repeat1 = 111,
  aux_sym_colors_declaration_repeat1 = 112,
  aux_sym_sets_declaration_repeat1 = 113,
  aux_sym_set_declaration_repeat1 = 114,
  aux_sym_streamer_block_repeat1 = 115,
  aux_sym_operator_block_repeat1 = 116,
  aux_sym_tasks_declaration_repeat1 = 117,
  aux_sym_functions_block_repeat1 = 118,
  aux_sym_functions_declaration_repeat1 = 119,
  aux_sym_function_body_repeat1 = 120,
  aux_sym_ui_manager_block_repeat1 = 121,
  aux_sym_db_manager_block_repeat1 = 122,
  alias_sym_color_identifier = 123,
  alias_sym_function_identifier = 124,
  alias_sym_set_identifier = 125,
  alias_sym_task_body = 126,
  alias_sym_task_identifier = 127,
  alias_sym_task_options = 128,
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
  [anon_sym_TASK] = "TASK",
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
  [sym_tasks_declaration] = "tasks_declaration",
  [sym_task_declaration] = "task_declaration",
  [sym_functions_block] = "functions_block",
  [sym__functions_block_expression] = "_functions_block_expression",
  [sym_functions_declaration] = "functions_declaration",
  [sym_function_options] = "function_options",
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
  [aux_sym_tasks_declaration_repeat1] = "tasks_declaration_repeat1",
  [aux_sym_functions_block_repeat1] = "functions_block_repeat1",
  [aux_sym_functions_declaration_repeat1] = "functions_declaration_repeat1",
  [aux_sym_function_body_repeat1] = "function_body_repeat1",
  [aux_sym_ui_manager_block_repeat1] = "ui_manager_block_repeat1",
  [aux_sym_db_manager_block_repeat1] = "db_manager_block_repeat1",
  [alias_sym_color_identifier] = "color_identifier",
  [alias_sym_function_identifier] = "function_identifier",
  [alias_sym_set_identifier] = "set_identifier",
  [alias_sym_task_body] = "task_body",
  [alias_sym_task_identifier] = "task_identifier",
  [alias_sym_task_options] = "task_options",
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
  [anon_sym_TASK] = anon_sym_TASK,
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
  [sym_tasks_declaration] = sym_tasks_declaration,
  [sym_task_declaration] = sym_task_declaration,
  [sym_functions_block] = sym_functions_block,
  [sym__functions_block_expression] = sym__functions_block_expression,
  [sym_functions_declaration] = sym_functions_declaration,
  [sym_function_options] = sym_function_options,
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
  [aux_sym_tasks_declaration_repeat1] = aux_sym_tasks_declaration_repeat1,
  [aux_sym_functions_block_repeat1] = aux_sym_functions_block_repeat1,
  [aux_sym_functions_declaration_repeat1] = aux_sym_functions_declaration_repeat1,
  [aux_sym_function_body_repeat1] = aux_sym_function_body_repeat1,
  [aux_sym_ui_manager_block_repeat1] = aux_sym_ui_manager_block_repeat1,
  [aux_sym_db_manager_block_repeat1] = aux_sym_db_manager_block_repeat1,
  [alias_sym_color_identifier] = alias_sym_color_identifier,
  [alias_sym_function_identifier] = alias_sym_function_identifier,
  [alias_sym_set_identifier] = alias_sym_set_identifier,
  [alias_sym_task_body] = alias_sym_task_body,
  [alias_sym_task_identifier] = alias_sym_task_identifier,
  [alias_sym_task_options] = alias_sym_task_options,
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
  [anon_sym_TASK] = {
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
  [sym_tasks_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_task_declaration] = {
    .visible = true,
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
  [sym_function_options] = {
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
  [aux_sym_tasks_declaration_repeat1] = {
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
  [alias_sym_task_body] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_task_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_task_options] = {
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
  [4] = {.index = 1, .length = 1},
  [5] = {.index = 2, .length = 1},
  [6] = {.index = 1, .length = 1},
  [7] = {.index = 1, .length = 1},
  [8] = {.index = 1, .length = 1},
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
    [0] = alias_sym_task_identifier,
  },
  [4] = {
    [0] = alias_sym_function_identifier,
  },
  [6] = {
    [0] = alias_sym_color_identifier,
  },
  [7] = {
    [0] = alias_sym_task_identifier,
    [1] = alias_sym_task_options,
    [2] = alias_sym_task_body,
  },
  [8] = {
    [0] = alias_sym_set_identifier,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_function_options, 2,
    sym_function_options,
    alias_sym_task_options,
  sym_function_body, 2,
    sym_function_body,
    alias_sym_task_body,
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
      if (lookahead == 'T') ADVANCE(7);
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
      if (lookahead == 'U') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == 'N') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == 'A') ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == 'P') ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == 'T') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(17);
      END_STATE();
    case 8:
      if (lookahead == 'I') ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == 'T') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(20);
      END_STATE();
    case 11:
      if (lookahead == 'S') ADVANCE(21);
      END_STATE();
    case 12:
      if (lookahead == 'N') ADVANCE(22);
      END_STATE();
    case 13:
      if (lookahead == 'C') ADVANCE(23);
      END_STATE();
    case 14:
      if (lookahead == 'N') ADVANCE(24);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(25);
      END_STATE();
    case 16:
      if (lookahead == 'R') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'S') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(29);
      END_STATE();
    case 20:
      if (lookahead == 'M') ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == 'C') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == 'C') ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == 'L') ADVANCE(33);
      END_STATE();
    case 24:
      if (lookahead == 'G') ADVANCE(34);
      END_STATE();
    case 25:
      if (lookahead == 'R') ADVANCE(35);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(36);
      END_STATE();
    case 27:
      if (lookahead == 'K') ADVANCE(37);
      END_STATE();
    case 28:
      if (lookahead == 'M') ADVANCE(38);
      END_STATE();
    case 29:
      if (lookahead == 'P') ADVANCE(39);
      END_STATE();
    case 30:
      if (lookahead == 'A') ADVANCE(40);
      END_STATE();
    case 31:
      if (lookahead == 'R') ADVANCE(41);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_FUNC);
      if (lookahead == 'T') ADVANCE(42);
      END_STATE();
    case 33:
      if (lookahead == 'U') ADVANCE(43);
      END_STATE();
    case 34:
      if (lookahead == 'U') ADVANCE(44);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(45);
      END_STATE();
    case 36:
      if (lookahead == 'A') ADVANCE(46);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_TASK);
      END_STATE();
    case 38:
      if (lookahead == 'A') ADVANCE(47);
      END_STATE();
    case 39:
      if (lookahead == 'O') ADVANCE(48);
      END_STATE();
    case 40:
      if (lookahead == 'N') ADVANCE(49);
      END_STATE();
    case 41:
      if (lookahead == 'I') ADVANCE(50);
      END_STATE();
    case 42:
      if (lookahead == 'I') ADVANCE(51);
      END_STATE();
    case 43:
      if (lookahead == 'D') ADVANCE(52);
      END_STATE();
    case 44:
      if (lookahead == 'A') ADVANCE(53);
      END_STATE();
    case 45:
      if (lookahead == 'T') ADVANCE(54);
      END_STATE();
    case 46:
      if (lookahead == 'M') ADVANCE(55);
      END_STATE();
    case 47:
      if (lookahead == 'N') ADVANCE(56);
      END_STATE();
    case 48:
      if (lookahead == 'O') ADVANCE(57);
      END_STATE();
    case 49:
      if (lookahead == 'A') ADVANCE(58);
      END_STATE();
    case 50:
      if (lookahead == 'P') ADVANCE(59);
      END_STATE();
    case 51:
      if (lookahead == 'O') ADVANCE(60);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(61);
      END_STATE();
    case 53:
      if (lookahead == 'G') ADVANCE(62);
      END_STATE();
    case 54:
      if (lookahead == 'O') ADVANCE(63);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(64);
      END_STATE();
    case 56:
      if (lookahead == 'A') ADVANCE(65);
      END_STATE();
    case 57:
      if (lookahead == 'L') ADVANCE(66);
      END_STATE();
    case 58:
      if (lookahead == 'G') ADVANCE(67);
      END_STATE();
    case 59:
      if (lookahead == 'T') ADVANCE(68);
      END_STATE();
    case 60:
      if (lookahead == 'N') ADVANCE(69);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_INCLUDE);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(70);
      END_STATE();
    case 63:
      if (lookahead == 'R') ADVANCE(71);
      END_STATE();
    case 64:
      if (lookahead == 'R') ADVANCE(72);
      END_STATE();
    case 65:
      if (lookahead == 'G') ADVANCE(73);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DATAPOOL);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(74);
      END_STATE();
    case 68:
      if (lookahead == 'I') ADVANCE(75);
      END_STATE();
    case 69:
      if (lookahead == 'S') ADVANCE(76);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LANGUAGE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_OPERATOR);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_STREAMER);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(77);
      END_STATE();
    case 74:
      if (lookahead == 'R') ADVANCE(78);
      END_STATE();
    case 75:
      if (lookahead == 'O') ADVANCE(79);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_FUNCTIONS);
      END_STATE();
    case 77:
      if (lookahead == 'R') ADVANCE(80);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DB_MANAGER);
      END_STATE();
    case 79:
      if (lookahead == 'N') ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_UI_MANAGER);
      END_STATE();
    case 81:
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
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 164},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 164},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 164},
  [22] = {.lex_state = 164},
  [23] = {.lex_state = 164},
  [24] = {.lex_state = 164},
  [25] = {.lex_state = 164},
  [26] = {.lex_state = 164},
  [27] = {.lex_state = 164},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 164},
  [30] = {.lex_state = 164},
  [31] = {.lex_state = 164},
  [32] = {.lex_state = 164},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 164},
  [35] = {.lex_state = 164},
  [36] = {.lex_state = 164},
  [37] = {.lex_state = 164},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 164},
  [40] = {.lex_state = 164},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 164},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 164},
  [46] = {.lex_state = 164},
  [47] = {.lex_state = 164},
  [48] = {.lex_state = 164},
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
  [75] = {.lex_state = 164},
  [76] = {.lex_state = 164},
  [77] = {.lex_state = 164},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 5},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 5},
  [158] = {.lex_state = 5},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 160},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 161},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 5},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 5},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 5},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 5},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 5},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 5},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 160},
  [194] = {.lex_state = 5},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 5},
  [197] = {.lex_state = 5},
  [198] = {.lex_state = 5},
  [199] = {.lex_state = 5},
  [200] = {.lex_state = 5},
  [201] = {.lex_state = 5},
  [202] = {.lex_state = 5},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
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
    [anon_sym_TASK] = ACTIONS(1),
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
    [sym_source_file] = STATE(204),
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
    STATE(6), 11,
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
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    ACTIONS(89), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(103), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    STATE(7), 11,
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
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    ACTIONS(89), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(107), 8,
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
    ACTIONS(107), 8,
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
    STATE(44), 10,
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
    STATE(53), 10,
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
    ACTIONS(153), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(151), 38,
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
      anon_sym_TASK,
      anon_sym_FUNC,
      anon_sym_RETURN,
      anon_sym_EXIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_WHILE,
  [810] = 2,
    ACTIONS(157), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(155), 38,
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
      anon_sym_TASK,
      anon_sym_FUNC,
      anon_sym_RETURN,
      anon_sym_EXIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_WHILE,
  [855] = 2,
    ACTIONS(161), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(159), 38,
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
  [900] = 2,
    ACTIONS(161), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(159), 38,
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
      anon_sym_TASK,
      anon_sym_FUNC,
      anon_sym_RETURN,
      anon_sym_EXIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_WHILE,
  [945] = 2,
    ACTIONS(157), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(155), 37,
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
  [989] = 9,
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
  [1047] = 9,
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
  [1105] = 9,
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
  [1163] = 2,
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
  [1206] = 2,
    ACTIONS(204), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(202), 36,
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
  [1249] = 2,
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
  [1292] = 2,
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
  [1335] = 2,
    ACTIONS(216), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(214), 36,
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
  [1378] = 2,
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
  [1421] = 2,
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
  [1464] = 2,
    ACTIONS(228), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(226), 36,
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
  [1507] = 2,
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
  [1550] = 2,
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
  [1593] = 2,
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
  [1636] = 2,
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
  [1679] = 2,
    ACTIONS(248), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(246), 36,
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
  [1722] = 2,
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
  [1765] = 2,
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
  [1808] = 2,
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
  [1851] = 2,
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
  [1894] = 2,
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
  [1937] = 2,
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
  [1980] = 2,
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
  [2023] = 4,
    ACTIONS(282), 1,
      anon_sym_ELSE,
    STATE(43), 1,
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
  [2068] = 7,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(286), 1,
      anon_sym_END,
    ACTIONS(288), 1,
      anon_sym_TASK,
    ACTIONS(89), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(48), 6,
      sym__expression,
      sym_string,
      sym_reason,
      sym__operator_block_expression,
      sym_tasks_declaration,
      aux_sym_operator_block_repeat1,
    ACTIONS(284), 8,
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
  [2118] = 2,
    ACTIONS(292), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(290), 33,
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
  [2158] = 2,
    ACTIONS(296), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(294), 33,
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
  [2198] = 7,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(288), 1,
      anon_sym_TASK,
    ACTIONS(300), 1,
      anon_sym_END,
    ACTIONS(89), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(42), 6,
      sym__expression,
      sym_string,
      sym_reason,
      sym__operator_block_expression,
      sym_tasks_declaration,
      aux_sym_operator_block_repeat1,
    ACTIONS(298), 8,
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
  [2248] = 7,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(304), 1,
      anon_sym_END,
    ACTIONS(306), 1,
      anon_sym_FUNC,
    ACTIONS(89), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(47), 6,
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
  [2298] = 7,
    ACTIONS(311), 1,
      anon_sym_DQUOTE,
    ACTIONS(320), 1,
      anon_sym_END,
    ACTIONS(322), 1,
      anon_sym_FUNC,
    ACTIONS(317), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(47), 6,
      sym__expression,
      sym_string,
      sym_reason,
      sym__functions_block_expression,
      sym_functions_declaration,
      aux_sym_functions_block_repeat1,
    ACTIONS(308), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(314), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [2348] = 7,
    ACTIONS(328), 1,
      anon_sym_DQUOTE,
    ACTIONS(337), 1,
      anon_sym_END,
    ACTIONS(339), 1,
      anon_sym_TASK,
    ACTIONS(334), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(48), 6,
      sym__expression,
      sym_string,
      sym_reason,
      sym__operator_block_expression,
      sym_tasks_declaration,
      aux_sym_operator_block_repeat1,
    ACTIONS(325), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(331), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [2398] = 2,
    ACTIONS(344), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(342), 33,
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
  [2438] = 7,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      anon_sym_FUNC,
    ACTIONS(348), 1,
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
    ACTIONS(346), 8,
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
  [2488] = 2,
    ACTIONS(352), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(350), 33,
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
  [2528] = 2,
    ACTIONS(356), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(354), 33,
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
  [2568] = 2,
    ACTIONS(360), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(358), 33,
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
  [2608] = 2,
    ACTIONS(364), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(362), 33,
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
  [2648] = 6,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    ACTIONS(378), 1,
      anon_sym_END,
    ACTIONS(375), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(55), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__db_manager_block_expression,
      aux_sym_db_manager_block_repeat1,
    ACTIONS(366), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(372), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [2694] = 6,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(382), 1,
      anon_sym_END,
    ACTIONS(89), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(62), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__language_block_expression,
      aux_sym_language_block_repeat1,
    ACTIONS(380), 8,
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
  [2740] = 6,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(386), 1,
      anon_sym_END,
    ACTIONS(89), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(66), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__ui_manager_block_expression,
      aux_sym_ui_manager_block_repeat1,
    ACTIONS(384), 8,
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
  [2786] = 6,
    ACTIONS(391), 1,
      anon_sym_DQUOTE,
    ACTIONS(400), 1,
      anon_sym_END,
    ACTIONS(397), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(58), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__streamer_block_expression,
      aux_sym_streamer_block_repeat1,
    ACTIONS(388), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(394), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [2832] = 6,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_END,
    ACTIONS(89), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(60), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__streamer_block_expression,
      aux_sym_streamer_block_repeat1,
    ACTIONS(402), 8,
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
  [2878] = 6,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(408), 1,
      anon_sym_END,
    ACTIONS(89), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(58), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__streamer_block_expression,
      aux_sym_streamer_block_repeat1,
    ACTIONS(406), 8,
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
  [2924] = 6,
    ACTIONS(413), 1,
      anon_sym_DQUOTE,
    ACTIONS(422), 1,
      anon_sym_END,
    ACTIONS(419), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(61), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__language_block_expression,
      aux_sym_language_block_repeat1,
    ACTIONS(410), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(416), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [2970] = 6,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(426), 1,
      anon_sym_END,
    ACTIONS(89), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(61), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__language_block_expression,
      aux_sym_language_block_repeat1,
    ACTIONS(424), 8,
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
  [3016] = 6,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(430), 1,
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
    ACTIONS(428), 8,
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
  [3062] = 6,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(434), 1,
      anon_sym_END,
    ACTIONS(89), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(55), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__db_manager_block_expression,
      aux_sym_db_manager_block_repeat1,
    ACTIONS(432), 8,
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
  [3108] = 6,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(438), 1,
      anon_sym_END,
    ACTIONS(89), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(57), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__ui_manager_block_expression,
      aux_sym_ui_manager_block_repeat1,
    ACTIONS(436), 8,
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
  [3154] = 6,
    ACTIONS(443), 1,
      anon_sym_DQUOTE,
    ACTIONS(452), 1,
      anon_sym_END,
    ACTIONS(449), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(66), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__ui_manager_block_expression,
      aux_sym_ui_manager_block_repeat1,
    ACTIONS(440), 8,
      anon_sym_SEMI,
      sym_comment,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(446), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [3200] = 2,
    ACTIONS(456), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(454), 29,
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
  [3236] = 2,
    ACTIONS(460), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(458), 29,
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
  [3272] = 2,
    ACTIONS(464), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(462), 29,
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
  [3308] = 2,
    ACTIONS(468), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(466), 29,
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
  [3344] = 6,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(192), 1,
      sym_condition,
    ACTIONS(11), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(190), 3,
      sym__expression,
      sym_string,
      sym_reason,
    ACTIONS(470), 8,
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
  [3388] = 6,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(191), 1,
      sym_condition,
    ACTIONS(11), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(190), 3,
      sym__expression,
      sym_string,
      sym_reason,
    ACTIONS(470), 8,
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
  [3432] = 2,
    ACTIONS(474), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(472), 27,
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
      anon_sym_TASK,
  [3466] = 2,
    ACTIONS(478), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(476), 27,
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
      anon_sym_TASK,
  [3500] = 2,
    ACTIONS(482), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(480), 27,
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
  [3534] = 2,
    ACTIONS(486), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(484), 27,
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
  [3568] = 2,
    ACTIONS(490), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(488), 27,
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
  [3602] = 5,
    ACTIONS(494), 1,
      anon_sym_LBRACE,
    ACTIONS(496), 1,
      anon_sym_LBRACK,
    STATE(85), 1,
      sym_dimension,
    STATE(143), 1,
      sym_parameter_block,
    ACTIONS(492), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3619] = 3,
    ACTIONS(500), 1,
      anon_sym_LBRACE,
    STATE(140), 1,
      sym_function_body,
    ACTIONS(498), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3630] = 4,
    ACTIONS(502), 1,
      sym_identifier,
    ACTIONS(504), 1,
      anon_sym_LBRACE,
    STATE(104), 1,
      sym_function_declaration,
    STATE(133), 1,
      sym_function_options,
  [3643] = 4,
    ACTIONS(494), 1,
      anon_sym_LBRACE,
    ACTIONS(506), 1,
      sym_identifier,
    STATE(107), 1,
      sym_variable_declaration,
    STATE(146), 1,
      sym_parameter_block,
  [3656] = 3,
    ACTIONS(504), 1,
      anon_sym_LBRACE,
    STATE(147), 1,
      sym_function_options,
    ACTIONS(508), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3667] = 1,
    ACTIONS(510), 4,
      sym_identifier,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LPAREN,
  [3674] = 1,
    ACTIONS(512), 4,
      sym_identifier,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LPAREN,
  [3681] = 3,
    ACTIONS(494), 1,
      anon_sym_LBRACE,
    STATE(134), 1,
      sym_parameter_block,
    ACTIONS(514), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3692] = 3,
    ACTIONS(494), 1,
      anon_sym_LBRACE,
    ACTIONS(516), 1,
      anon_sym_LPAREN,
    STATE(173), 1,
      sym_parameter_block,
  [3702] = 3,
    ACTIONS(518), 1,
      anon_sym_SEMI,
    ACTIONS(520), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      aux_sym_tasks_declaration_repeat1,
  [3712] = 3,
    ACTIONS(523), 1,
      anon_sym_COMMA,
    ACTIONS(525), 1,
      anon_sym_RBRACE,
    STATE(121), 1,
      aux_sym_parameter_block_repeat1,
  [3722] = 3,
    ACTIONS(527), 1,
      anon_sym_SEMI,
    ACTIONS(529), 1,
      anon_sym_COMMA,
    STATE(123), 1,
      aux_sym_variables_declaration_repeat1,
  [3732] = 3,
    ACTIONS(531), 1,
      anon_sym_COMMA,
    ACTIONS(534), 1,
      anon_sym_RBRACE,
    STATE(90), 1,
      aux_sym_parameter_block_repeat1,
  [3742] = 3,
    ACTIONS(527), 1,
      anon_sym_SEMI,
    ACTIONS(529), 1,
      anon_sym_COMMA,
    STATE(125), 1,
      aux_sym_variables_declaration_repeat1,
  [3752] = 3,
    ACTIONS(536), 1,
      anon_sym_COMMA,
    ACTIONS(538), 1,
      anon_sym_RBRACK,
    STATE(120), 1,
      aux_sym_dimension_repeat1,
  [3762] = 3,
    ACTIONS(540), 1,
      anon_sym_SEMI,
    ACTIONS(542), 1,
      anon_sym_COMMA,
    STATE(126), 1,
      aux_sym_colors_declaration_repeat1,
  [3772] = 3,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(124), 1,
      sym_set_item,
    STATE(130), 1,
      sym_string,
  [3782] = 3,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(546), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      aux_sym_set_declaration_repeat1,
  [3792] = 3,
    ACTIONS(548), 1,
      anon_sym_DQUOTE,
    ACTIONS(550), 1,
      aux_sym_string_token1,
    STATE(101), 1,
      aux_sym_string_repeat1,
  [3802] = 1,
    ACTIONS(552), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [3808] = 3,
    ACTIONS(554), 1,
      anon_sym_SEMI,
    ACTIONS(556), 1,
      anon_sym_COMMA,
    STATE(113), 1,
      aux_sym_sets_declaration_repeat1,
  [3818] = 3,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(546), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      aux_sym_set_declaration_repeat1,
  [3828] = 3,
    ACTIONS(558), 1,
      anon_sym_DQUOTE,
    ACTIONS(560), 1,
      aux_sym_string_token1,
    STATE(96), 1,
      aux_sym_string_repeat1,
  [3838] = 3,
    ACTIONS(562), 1,
      anon_sym_DQUOTE,
    ACTIONS(564), 1,
      aux_sym_string_token1,
    STATE(101), 1,
      aux_sym_string_repeat1,
  [3848] = 3,
    ACTIONS(567), 1,
      anon_sym_SEMI,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    STATE(102), 1,
      aux_sym_functions_declaration_repeat1,
  [3858] = 3,
    ACTIONS(572), 1,
      anon_sym_SEMI,
    ACTIONS(574), 1,
      anon_sym_COMMA,
    STATE(102), 1,
      aux_sym_functions_declaration_repeat1,
  [3868] = 3,
    ACTIONS(574), 1,
      anon_sym_COMMA,
    ACTIONS(576), 1,
      anon_sym_SEMI,
    STATE(114), 1,
      aux_sym_functions_declaration_repeat1,
  [3878] = 3,
    ACTIONS(550), 1,
      aux_sym_string_token1,
    ACTIONS(578), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      aux_sym_string_repeat1,
  [3888] = 3,
    ACTIONS(580), 1,
      anon_sym_SEMI,
    ACTIONS(582), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      aux_sym_tasks_declaration_repeat1,
  [3898] = 3,
    ACTIONS(529), 1,
      anon_sym_COMMA,
    ACTIONS(584), 1,
      anon_sym_SEMI,
    STATE(91), 1,
      aux_sym_variables_declaration_repeat1,
  [3908] = 3,
    ACTIONS(586), 1,
      anon_sym_DQUOTE,
    ACTIONS(588), 1,
      aux_sym_string_token1,
    STATE(105), 1,
      aux_sym_string_repeat1,
  [3918] = 3,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(590), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      aux_sym_set_declaration_repeat1,
  [3928] = 3,
    ACTIONS(542), 1,
      anon_sym_COMMA,
    ACTIONS(592), 1,
      anon_sym_SEMI,
    STATE(93), 1,
      aux_sym_colors_declaration_repeat1,
  [3938] = 3,
    ACTIONS(574), 1,
      anon_sym_COMMA,
    ACTIONS(594), 1,
      anon_sym_SEMI,
    STATE(103), 1,
      aux_sym_functions_declaration_repeat1,
  [3948] = 3,
    ACTIONS(556), 1,
      anon_sym_COMMA,
    ACTIONS(596), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      aux_sym_sets_declaration_repeat1,
  [3958] = 3,
    ACTIONS(598), 1,
      anon_sym_SEMI,
    ACTIONS(600), 1,
      anon_sym_COMMA,
    STATE(113), 1,
      aux_sym_sets_declaration_repeat1,
  [3968] = 3,
    ACTIONS(574), 1,
      anon_sym_COMMA,
    ACTIONS(594), 1,
      anon_sym_SEMI,
    STATE(102), 1,
      aux_sym_functions_declaration_repeat1,
  [3978] = 1,
    ACTIONS(603), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [3984] = 3,
    ACTIONS(582), 1,
      anon_sym_COMMA,
    ACTIONS(605), 1,
      anon_sym_SEMI,
    STATE(106), 1,
      aux_sym_tasks_declaration_repeat1,
  [3994] = 3,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(130), 1,
      sym_string,
    STATE(132), 1,
      sym_set_item,
  [4004] = 3,
    ACTIONS(536), 1,
      anon_sym_COMMA,
    ACTIONS(607), 1,
      anon_sym_RBRACK,
    STATE(92), 1,
      aux_sym_dimension_repeat1,
  [4014] = 3,
    ACTIONS(609), 1,
      anon_sym_COMMA,
    ACTIONS(612), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      aux_sym_set_declaration_repeat1,
  [4024] = 3,
    ACTIONS(614), 1,
      anon_sym_COMMA,
    ACTIONS(617), 1,
      anon_sym_RBRACK,
    STATE(120), 1,
      aux_sym_dimension_repeat1,
  [4034] = 3,
    ACTIONS(523), 1,
      anon_sym_COMMA,
    ACTIONS(619), 1,
      anon_sym_RBRACE,
    STATE(90), 1,
      aux_sym_parameter_block_repeat1,
  [4044] = 3,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(95), 1,
      sym_set_item,
    STATE(130), 1,
      sym_string,
  [4054] = 3,
    ACTIONS(529), 1,
      anon_sym_COMMA,
    ACTIONS(621), 1,
      anon_sym_SEMI,
    STATE(125), 1,
      aux_sym_variables_declaration_repeat1,
  [4064] = 3,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(623), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      aux_sym_set_declaration_repeat1,
  [4074] = 3,
    ACTIONS(625), 1,
      anon_sym_SEMI,
    ACTIONS(627), 1,
      anon_sym_COMMA,
    STATE(125), 1,
      aux_sym_variables_declaration_repeat1,
  [4084] = 3,
    ACTIONS(630), 1,
      anon_sym_SEMI,
    ACTIONS(632), 1,
      anon_sym_COMMA,
    STATE(126), 1,
      aux_sym_colors_declaration_repeat1,
  [4094] = 2,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(203), 1,
      sym_string,
  [4101] = 1,
    ACTIONS(598), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4106] = 1,
    ACTIONS(635), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4111] = 1,
    ACTIONS(637), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4116] = 1,
    ACTIONS(625), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4121] = 1,
    ACTIONS(612), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4126] = 2,
    ACTIONS(502), 1,
      sym_identifier,
    STATE(111), 1,
      sym_function_declaration,
  [4133] = 1,
    ACTIONS(639), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4138] = 2,
    ACTIONS(502), 1,
      sym_identifier,
    STATE(148), 1,
      sym_function_declaration,
  [4145] = 1,
    ACTIONS(617), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4150] = 1,
    ACTIONS(641), 2,
      sym_identifier,
      anon_sym_LBRACE,
  [4155] = 1,
    ACTIONS(643), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4160] = 1,
    ACTIONS(518), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4165] = 1,
    ACTIONS(645), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4170] = 2,
    ACTIONS(647), 1,
      sym_identifier,
    STATE(112), 1,
      sym_set_declaration,
  [4177] = 1,
    ACTIONS(649), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4182] = 1,
    ACTIONS(514), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4187] = 1,
    ACTIONS(651), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4192] = 2,
    ACTIONS(653), 1,
      sym_identifier,
    STATE(139), 1,
      sym_task_declaration,
  [4199] = 2,
    ACTIONS(506), 1,
      sym_identifier,
    STATE(89), 1,
      sym_variable_declaration,
  [4206] = 2,
    ACTIONS(500), 1,
      anon_sym_LBRACE,
    STATE(138), 1,
      sym_function_body,
  [4213] = 1,
    ACTIONS(567), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4218] = 1,
    ACTIONS(655), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4223] = 1,
    ACTIONS(657), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4228] = 1,
    ACTIONS(659), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4233] = 2,
    ACTIONS(653), 1,
      sym_identifier,
    STATE(116), 1,
      sym_task_declaration,
  [4240] = 2,
    ACTIONS(647), 1,
      sym_identifier,
    STATE(128), 1,
      sym_set_declaration,
  [4247] = 2,
    ACTIONS(661), 1,
      sym_identifier,
    STATE(156), 1,
      sym_color_declaration,
  [4254] = 1,
    ACTIONS(534), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4259] = 1,
    ACTIONS(630), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4264] = 2,
    ACTIONS(506), 1,
      sym_identifier,
    STATE(131), 1,
      sym_variable_declaration,
  [4271] = 2,
    ACTIONS(661), 1,
      sym_identifier,
    STATE(110), 1,
      sym_color_declaration,
  [4278] = 1,
    ACTIONS(663), 1,
      anon_sym_SEMI,
  [4282] = 1,
    ACTIONS(665), 1,
      anon_sym_SEMI,
  [4286] = 1,
    ACTIONS(667), 1,
      anon_sym_LPAREN,
  [4290] = 1,
    ACTIONS(669), 1,
      sym_number,
  [4294] = 1,
    ACTIONS(671), 1,
      anon_sym_LPAREN,
  [4298] = 1,
    ACTIONS(673), 1,
      anon_sym_SEMI,
  [4302] = 1,
    ACTIONS(675), 1,
      anon_sym_SEMI,
  [4306] = 1,
    ACTIONS(677), 1,
      anon_sym_SEMI,
  [4310] = 1,
    ACTIONS(679), 1,
      anon_sym_SEMI,
  [4314] = 1,
    ACTIONS(681), 1,
      aux_sym_parameter_block_token1,
  [4318] = 1,
    ACTIONS(683), 1,
      anon_sym_SEMI,
  [4322] = 1,
    ACTIONS(685), 1,
      aux_sym_include_token1,
  [4326] = 1,
    ACTIONS(687), 1,
      anon_sym_SEMI,
  [4330] = 1,
    ACTIONS(689), 1,
      anon_sym_SEMI,
  [4334] = 1,
    ACTIONS(691), 1,
      anon_sym_LPAREN,
  [4338] = 1,
    ACTIONS(693), 1,
      anon_sym_RPAREN,
  [4342] = 1,
    ACTIONS(695), 1,
      sym_number,
  [4346] = 1,
    ACTIONS(697), 1,
      anon_sym_SEMI,
  [4350] = 1,
    ACTIONS(699), 1,
      anon_sym_DB_MANAGER,
  [4354] = 1,
    ACTIONS(701), 1,
      anon_sym_SEMI,
  [4358] = 1,
    ACTIONS(703), 1,
      anon_sym_UI_MANAGER,
  [4362] = 1,
    ACTIONS(705), 1,
      anon_sym_SEMI,
  [4366] = 1,
    ACTIONS(707), 1,
      anon_sym_FUNCTIONS,
  [4370] = 1,
    ACTIONS(709), 1,
      anon_sym_RBRACE,
  [4374] = 1,
    ACTIONS(711), 1,
      anon_sym_SEMI,
  [4378] = 1,
    ACTIONS(713), 1,
      anon_sym_OPERATOR,
  [4382] = 1,
    ACTIONS(715), 1,
      anon_sym_SEMI,
  [4386] = 1,
    ACTIONS(717), 1,
      anon_sym_STREAMER,
  [4390] = 1,
    ACTIONS(719), 1,
      anon_sym_SEMI,
  [4394] = 1,
    ACTIONS(721), 1,
      anon_sym_DATAPOOL,
  [4398] = 1,
    ACTIONS(723), 1,
      anon_sym_LPAREN,
  [4402] = 1,
    ACTIONS(725), 1,
      anon_sym_RPAREN,
  [4406] = 1,
    ACTIONS(727), 1,
      anon_sym_RPAREN,
  [4410] = 1,
    ACTIONS(729), 1,
      anon_sym_RPAREN,
  [4414] = 1,
    ACTIONS(731), 1,
      aux_sym_parameter_block_token1,
  [4418] = 1,
    ACTIONS(733), 1,
      anon_sym_LANGUAGE,
  [4422] = 1,
    ACTIONS(735), 1,
      anon_sym_SEMI,
  [4426] = 1,
    ACTIONS(737), 1,
      anon_sym_DB_MANAGER,
  [4430] = 1,
    ACTIONS(739), 1,
      anon_sym_UI_MANAGER,
  [4434] = 1,
    ACTIONS(741), 1,
      anon_sym_FUNCTIONS,
  [4438] = 1,
    ACTIONS(743), 1,
      anon_sym_OPERATOR,
  [4442] = 1,
    ACTIONS(745), 1,
      anon_sym_STREAMER,
  [4446] = 1,
    ACTIONS(747), 1,
      anon_sym_DATAPOOL,
  [4450] = 1,
    ACTIONS(749), 1,
      anon_sym_LANGUAGE,
  [4454] = 1,
    ACTIONS(751), 1,
      anon_sym_SEMI,
  [4458] = 1,
    ACTIONS(753), 1,
      ts_builtin_sym_end,
  [4462] = 1,
    ACTIONS(755), 1,
      anon_sym_DOT,
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
  [SMALL_STATE(15)] = 855,
  [SMALL_STATE(16)] = 900,
  [SMALL_STATE(17)] = 945,
  [SMALL_STATE(18)] = 989,
  [SMALL_STATE(19)] = 1047,
  [SMALL_STATE(20)] = 1105,
  [SMALL_STATE(21)] = 1163,
  [SMALL_STATE(22)] = 1206,
  [SMALL_STATE(23)] = 1249,
  [SMALL_STATE(24)] = 1292,
  [SMALL_STATE(25)] = 1335,
  [SMALL_STATE(26)] = 1378,
  [SMALL_STATE(27)] = 1421,
  [SMALL_STATE(28)] = 1464,
  [SMALL_STATE(29)] = 1507,
  [SMALL_STATE(30)] = 1550,
  [SMALL_STATE(31)] = 1593,
  [SMALL_STATE(32)] = 1636,
  [SMALL_STATE(33)] = 1679,
  [SMALL_STATE(34)] = 1722,
  [SMALL_STATE(35)] = 1765,
  [SMALL_STATE(36)] = 1808,
  [SMALL_STATE(37)] = 1851,
  [SMALL_STATE(38)] = 1894,
  [SMALL_STATE(39)] = 1937,
  [SMALL_STATE(40)] = 1980,
  [SMALL_STATE(41)] = 2023,
  [SMALL_STATE(42)] = 2068,
  [SMALL_STATE(43)] = 2118,
  [SMALL_STATE(44)] = 2158,
  [SMALL_STATE(45)] = 2198,
  [SMALL_STATE(46)] = 2248,
  [SMALL_STATE(47)] = 2298,
  [SMALL_STATE(48)] = 2348,
  [SMALL_STATE(49)] = 2398,
  [SMALL_STATE(50)] = 2438,
  [SMALL_STATE(51)] = 2488,
  [SMALL_STATE(52)] = 2528,
  [SMALL_STATE(53)] = 2568,
  [SMALL_STATE(54)] = 2608,
  [SMALL_STATE(55)] = 2648,
  [SMALL_STATE(56)] = 2694,
  [SMALL_STATE(57)] = 2740,
  [SMALL_STATE(58)] = 2786,
  [SMALL_STATE(59)] = 2832,
  [SMALL_STATE(60)] = 2878,
  [SMALL_STATE(61)] = 2924,
  [SMALL_STATE(62)] = 2970,
  [SMALL_STATE(63)] = 3016,
  [SMALL_STATE(64)] = 3062,
  [SMALL_STATE(65)] = 3108,
  [SMALL_STATE(66)] = 3154,
  [SMALL_STATE(67)] = 3200,
  [SMALL_STATE(68)] = 3236,
  [SMALL_STATE(69)] = 3272,
  [SMALL_STATE(70)] = 3308,
  [SMALL_STATE(71)] = 3344,
  [SMALL_STATE(72)] = 3388,
  [SMALL_STATE(73)] = 3432,
  [SMALL_STATE(74)] = 3466,
  [SMALL_STATE(75)] = 3500,
  [SMALL_STATE(76)] = 3534,
  [SMALL_STATE(77)] = 3568,
  [SMALL_STATE(78)] = 3602,
  [SMALL_STATE(79)] = 3619,
  [SMALL_STATE(80)] = 3630,
  [SMALL_STATE(81)] = 3643,
  [SMALL_STATE(82)] = 3656,
  [SMALL_STATE(83)] = 3667,
  [SMALL_STATE(84)] = 3674,
  [SMALL_STATE(85)] = 3681,
  [SMALL_STATE(86)] = 3692,
  [SMALL_STATE(87)] = 3702,
  [SMALL_STATE(88)] = 3712,
  [SMALL_STATE(89)] = 3722,
  [SMALL_STATE(90)] = 3732,
  [SMALL_STATE(91)] = 3742,
  [SMALL_STATE(92)] = 3752,
  [SMALL_STATE(93)] = 3762,
  [SMALL_STATE(94)] = 3772,
  [SMALL_STATE(95)] = 3782,
  [SMALL_STATE(96)] = 3792,
  [SMALL_STATE(97)] = 3802,
  [SMALL_STATE(98)] = 3808,
  [SMALL_STATE(99)] = 3818,
  [SMALL_STATE(100)] = 3828,
  [SMALL_STATE(101)] = 3838,
  [SMALL_STATE(102)] = 3848,
  [SMALL_STATE(103)] = 3858,
  [SMALL_STATE(104)] = 3868,
  [SMALL_STATE(105)] = 3878,
  [SMALL_STATE(106)] = 3888,
  [SMALL_STATE(107)] = 3898,
  [SMALL_STATE(108)] = 3908,
  [SMALL_STATE(109)] = 3918,
  [SMALL_STATE(110)] = 3928,
  [SMALL_STATE(111)] = 3938,
  [SMALL_STATE(112)] = 3948,
  [SMALL_STATE(113)] = 3958,
  [SMALL_STATE(114)] = 3968,
  [SMALL_STATE(115)] = 3978,
  [SMALL_STATE(116)] = 3984,
  [SMALL_STATE(117)] = 3994,
  [SMALL_STATE(118)] = 4004,
  [SMALL_STATE(119)] = 4014,
  [SMALL_STATE(120)] = 4024,
  [SMALL_STATE(121)] = 4034,
  [SMALL_STATE(122)] = 4044,
  [SMALL_STATE(123)] = 4054,
  [SMALL_STATE(124)] = 4064,
  [SMALL_STATE(125)] = 4074,
  [SMALL_STATE(126)] = 4084,
  [SMALL_STATE(127)] = 4094,
  [SMALL_STATE(128)] = 4101,
  [SMALL_STATE(129)] = 4106,
  [SMALL_STATE(130)] = 4111,
  [SMALL_STATE(131)] = 4116,
  [SMALL_STATE(132)] = 4121,
  [SMALL_STATE(133)] = 4126,
  [SMALL_STATE(134)] = 4133,
  [SMALL_STATE(135)] = 4138,
  [SMALL_STATE(136)] = 4145,
  [SMALL_STATE(137)] = 4150,
  [SMALL_STATE(138)] = 4155,
  [SMALL_STATE(139)] = 4160,
  [SMALL_STATE(140)] = 4165,
  [SMALL_STATE(141)] = 4170,
  [SMALL_STATE(142)] = 4177,
  [SMALL_STATE(143)] = 4182,
  [SMALL_STATE(144)] = 4187,
  [SMALL_STATE(145)] = 4192,
  [SMALL_STATE(146)] = 4199,
  [SMALL_STATE(147)] = 4206,
  [SMALL_STATE(148)] = 4213,
  [SMALL_STATE(149)] = 4218,
  [SMALL_STATE(150)] = 4223,
  [SMALL_STATE(151)] = 4228,
  [SMALL_STATE(152)] = 4233,
  [SMALL_STATE(153)] = 4240,
  [SMALL_STATE(154)] = 4247,
  [SMALL_STATE(155)] = 4254,
  [SMALL_STATE(156)] = 4259,
  [SMALL_STATE(157)] = 4264,
  [SMALL_STATE(158)] = 4271,
  [SMALL_STATE(159)] = 4278,
  [SMALL_STATE(160)] = 4282,
  [SMALL_STATE(161)] = 4286,
  [SMALL_STATE(162)] = 4290,
  [SMALL_STATE(163)] = 4294,
  [SMALL_STATE(164)] = 4298,
  [SMALL_STATE(165)] = 4302,
  [SMALL_STATE(166)] = 4306,
  [SMALL_STATE(167)] = 4310,
  [SMALL_STATE(168)] = 4314,
  [SMALL_STATE(169)] = 4318,
  [SMALL_STATE(170)] = 4322,
  [SMALL_STATE(171)] = 4326,
  [SMALL_STATE(172)] = 4330,
  [SMALL_STATE(173)] = 4334,
  [SMALL_STATE(174)] = 4338,
  [SMALL_STATE(175)] = 4342,
  [SMALL_STATE(176)] = 4346,
  [SMALL_STATE(177)] = 4350,
  [SMALL_STATE(178)] = 4354,
  [SMALL_STATE(179)] = 4358,
  [SMALL_STATE(180)] = 4362,
  [SMALL_STATE(181)] = 4366,
  [SMALL_STATE(182)] = 4370,
  [SMALL_STATE(183)] = 4374,
  [SMALL_STATE(184)] = 4378,
  [SMALL_STATE(185)] = 4382,
  [SMALL_STATE(186)] = 4386,
  [SMALL_STATE(187)] = 4390,
  [SMALL_STATE(188)] = 4394,
  [SMALL_STATE(189)] = 4398,
  [SMALL_STATE(190)] = 4402,
  [SMALL_STATE(191)] = 4406,
  [SMALL_STATE(192)] = 4410,
  [SMALL_STATE(193)] = 4414,
  [SMALL_STATE(194)] = 4418,
  [SMALL_STATE(195)] = 4422,
  [SMALL_STATE(196)] = 4426,
  [SMALL_STATE(197)] = 4430,
  [SMALL_STATE(198)] = 4434,
  [SMALL_STATE(199)] = 4438,
  [SMALL_STATE(200)] = 4442,
  [SMALL_STATE(201)] = 4446,
  [SMALL_STATE(202)] = 4450,
  [SMALL_STATE(203)] = 4454,
  [SMALL_STATE(204)] = 4458,
  [SMALL_STATE(205)] = 4462,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(100),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(170),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(127),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(205),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2), SHIFT_REPEAT(8),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2), SHIFT_REPEAT(108),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2), SHIFT_REPEAT(81),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2), SHIFT_REPEAT(14),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_body_repeat1, 2), SHIFT_REPEAT(14),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2), SHIFT_REPEAT(4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2), SHIFT_REPEAT(169),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2), SHIFT_REPEAT(160),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2), SHIFT_REPEAT(161),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2), SHIFT_REPEAT(163),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reason, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reason, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(20),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(108),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(81),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(14),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(14),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(158),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(141),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language_block, 5),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_language_block, 5),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functions_block, 5),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions_block, 5),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datapool_block, 4),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datapool_block, 4),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language_block, 4),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_language_block, 4),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_streamer_block, 4),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_streamer_block, 4),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_block, 4),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_block, 4),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functions_block, 4),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions_block, 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_declaration, 5, .production_id = 5),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variables_declaration, 5, .production_id = 5),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_statement, 2),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_statement, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ui_manager_block, 4),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ui_manager_block, 4),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_db_manager_block, 4),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_db_manager_block, 4),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_declaration, 4, .production_id = 5),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variables_declaration, 4, .production_id = 5),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datapool_block, 5),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datapool_block, 5),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_db_manager_block, 5),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_db_manager_block, 5),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_streamer_block, 5),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_streamer_block, 5),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ui_manager_block, 5),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ui_manager_block, 5),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_declaration, 3, .production_id = 5),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variables_declaration, 3, .production_id = 5),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 3, .production_id = 1),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 3, .production_id = 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_block, 5),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_block, 5),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_loop, 5),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_loop, 5),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_block_repeat1, 2), SHIFT_REPEAT(47),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_block_repeat1, 2), SHIFT_REPEAT(108),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_block_repeat1, 2), SHIFT_REPEAT(14),
  [317] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_functions_block_repeat1, 2), SHIFT_REPEAT(14),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functions_block_repeat1, 2),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_block_repeat1, 2), SHIFT_REPEAT(80),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operator_block_repeat1, 2), SHIFT_REPEAT(48),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operator_block_repeat1, 2), SHIFT_REPEAT(108),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operator_block_repeat1, 2), SHIFT_REPEAT(14),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operator_block_repeat1, 2), SHIFT_REPEAT(14),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operator_block_repeat1, 2),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operator_block_repeat1, 2), SHIFT_REPEAT(152),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit, 2),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exit, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_part, 2),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_part, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 2),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return, 2),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_db_manager_block_repeat1, 2), SHIFT_REPEAT(55),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_db_manager_block_repeat1, 2), SHIFT_REPEAT(108),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_db_manager_block_repeat1, 2), SHIFT_REPEAT(14),
  [375] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_db_manager_block_repeat1, 2), SHIFT_REPEAT(14),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_db_manager_block_repeat1, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_streamer_block_repeat1, 2), SHIFT_REPEAT(58),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_streamer_block_repeat1, 2), SHIFT_REPEAT(108),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_streamer_block_repeat1, 2), SHIFT_REPEAT(14),
  [397] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_streamer_block_repeat1, 2), SHIFT_REPEAT(14),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_streamer_block_repeat1, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_language_block_repeat1, 2), SHIFT_REPEAT(61),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_language_block_repeat1, 2), SHIFT_REPEAT(108),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_language_block_repeat1, 2), SHIFT_REPEAT(14),
  [419] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_language_block_repeat1, 2), SHIFT_REPEAT(14),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_language_block_repeat1, 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ui_manager_block_repeat1, 2), SHIFT_REPEAT(66),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ui_manager_block_repeat1, 2), SHIFT_REPEAT(108),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ui_manager_block_repeat1, 2), SHIFT_REPEAT(14),
  [449] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ui_manager_block_repeat1, 2), SHIFT_REPEAT(14),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ui_manager_block_repeat1, 2),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sets_declaration, 4),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sets_declaration, 4),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colors_declaration, 4),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_colors_declaration, 4),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sets_declaration, 3),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sets_declaration, 3),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colors_declaration, 3),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_colors_declaration, 3),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tasks_declaration, 4),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tasks_declaration, 4),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tasks_declaration, 3),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tasks_declaration, 3),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functions_declaration, 3),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions_declaration, 3),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functions_declaration, 5),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions_declaration, 5),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functions_declaration, 4),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions_declaration, 4),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 1, .production_id = 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 1, .production_id = 4),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_declaration, 1, .production_id = 3),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_block, 3),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_block, 4),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2, .production_id = 2),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tasks_declaration_repeat1, 2),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tasks_declaration_repeat1, 2), SHIFT_REPEAT(145),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_block_repeat1, 2), SHIFT_REPEAT(168),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_block_repeat1, 2),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 3),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [564] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(101),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functions_declaration_repeat1, 2),
  [569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_declaration_repeat1, 2), SHIFT_REPEAT(135),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sets_declaration_repeat1, 2),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sets_declaration_repeat1, 2), SHIFT_REPEAT(153),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 4),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_set_declaration_repeat1, 2), SHIFT_REPEAT(117),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_set_declaration_repeat1, 2),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimension_repeat1, 2), SHIFT_REPEAT(162),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dimension_repeat1, 2),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_declaration_repeat1, 2),
  [627] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_declaration_repeat1, 2), SHIFT_REPEAT(157),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_colors_declaration_repeat1, 2),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_colors_declaration_repeat1, 2), SHIFT_REPEAT(154),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_declaration, 3, .production_id = 6),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_item, 1),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, .production_id = 2),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_options, 2),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_declaration, 3, .production_id = 7),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 2, .production_id = 4),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_declaration, 5, .production_id = 8),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 2),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 3),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_declaration, 6, .production_id = 8),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_declaration, 4, .production_id = 8),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [753] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
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
