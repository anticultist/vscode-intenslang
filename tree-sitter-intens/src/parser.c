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
#define STATE_COUNT 210
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 131
#define ALIAS_COUNT 7
#define TOKEN_COUNT 65
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 10

enum {
  sym_identifier = 1,
  sym_comment = 2,
  anon_sym_DQUOTE = 3,
  aux_sym_string_token1 = 4,
  sym_number = 5,
  sym_true = 6,
  sym_false = 7,
  sym_eoln = 8,
  sym_invalid = 9,
  sym_none = 10,
  sym_primitive_type = 11,
  anon_sym_REASON_ACTIVATE = 12,
  anon_sym_REASON_CLEAR = 13,
  anon_sym_REASON_CLOSE = 14,
  anon_sym_REASON_CONNECTION = 15,
  anon_sym_REASON_DROP = 16,
  anon_sym_REASON_DUPLICATE = 17,
  anon_sym_REASON_INPUT = 18,
  anon_sym_REASON_INSERT = 19,
  anon_sym_REASON_MOVE = 20,
  anon_sym_REASON_OPEN = 21,
  anon_sym_REASON_PACK = 22,
  anon_sym_REASON_REMOVE = 23,
  anon_sym_REASON_REMOVE_CONNECTION = 24,
  anon_sym_REASON_REMOVE_ELEMENT = 25,
  anon_sym_REASON_SELECT = 26,
  anon_sym_REASON_SELECT_POINT = 27,
  anon_sym_REASON_SELECT_RECTANGLE = 28,
  anon_sym_REASON_UNSELECT = 29,
  anon_sym_EQ = 30,
  anon_sym_PLUS_EQ = 31,
  anon_sym_DASH_EQ = 32,
  anon_sym_STAR_EQ = 33,
  anon_sym_SLASH_EQ = 34,
  anon_sym_SEMI = 35,
  anon_sym_INCLUDE = 36,
  aux_sym_include_token1 = 37,
  anon_sym_DESCRIPTION = 38,
  anon_sym_LBRACE = 39,
  aux_sym_parameter_block_token1 = 40,
  anon_sym_COMMA = 41,
  anon_sym_RBRACE = 42,
  anon_sym_END = 43,
  anon_sym_DOT = 44,
  anon_sym_LANGUAGE = 45,
  anon_sym_DATAPOOL = 46,
  anon_sym_LBRACK = 47,
  anon_sym_RBRACK = 48,
  anon_sym_COLOR = 49,
  anon_sym_LPAREN = 50,
  anon_sym_RPAREN = 51,
  anon_sym_SET = 52,
  anon_sym_STREAMER = 53,
  anon_sym_OPERATOR = 54,
  anon_sym_TASK = 55,
  anon_sym_FUNCTIONS = 56,
  anon_sym_FUNC = 57,
  anon_sym_RETURN = 58,
  anon_sym_EXIT = 59,
  anon_sym_IF = 60,
  anon_sym_ELSE = 61,
  anon_sym_WHILE = 62,
  anon_sym_UI_MANAGER = 63,
  anon_sym_DB_MANAGER = 64,
  sym_source_file = 65,
  sym__high_level_blocks = 66,
  sym__expression = 67,
  sym_string = 68,
  sym_reason = 69,
  sym_assignment = 70,
  sym__assignment_left_expression = 71,
  sym__assignment_right_expression = 72,
  sym_include = 73,
  sym_description = 74,
  sym_parameter_block = 75,
  sym_end_statement = 76,
  sym_language_block = 77,
  sym__language_block_expression = 78,
  sym_datapool_block = 79,
  sym__datapool_block_expression = 80,
  sym_variables_declaration = 81,
  sym_variable_declaration = 82,
  sym_dimension = 83,
  sym_colors_declaration = 84,
  sym_color_declaration = 85,
  sym_sets_declaration = 86,
  sym_set_declaration = 87,
  sym_set_item = 88,
  sym_streamer_block = 89,
  sym__streamer_block_expression = 90,
  sym_operator_block = 91,
  sym__operator_block_expression = 92,
  sym_tasks_declaration = 93,
  sym_task_declaration = 94,
  sym_functions_block = 95,
  sym__functions_block_expression = 96,
  sym_functions_declaration = 97,
  sym_function_options = 98,
  sym_function_declaration = 99,
  sym_function_body = 100,
  sym__function_expression = 101,
  sym_block = 102,
  sym_return = 103,
  sym_exit = 104,
  sym_if_statement = 105,
  sym_condition = 106,
  sym_else_part = 107,
  sym_while_loop = 108,
  sym_ui_manager_block = 109,
  sym__ui_manager_block_expression = 110,
  sym_db_manager_block = 111,
  sym__db_manager_block_expression = 112,
  aux_sym_source_file_repeat1 = 113,
  aux_sym_string_repeat1 = 114,
  aux_sym_parameter_block_repeat1 = 115,
  aux_sym_language_block_repeat1 = 116,
  aux_sym_datapool_block_repeat1 = 117,
  aux_sym_variables_declaration_repeat1 = 118,
  aux_sym_dimension_repeat1 = 119,
  aux_sym_colors_declaration_repeat1 = 120,
  aux_sym_sets_declaration_repeat1 = 121,
  aux_sym_set_declaration_repeat1 = 122,
  aux_sym_streamer_block_repeat1 = 123,
  aux_sym_operator_block_repeat1 = 124,
  aux_sym_tasks_declaration_repeat1 = 125,
  aux_sym_functions_block_repeat1 = 126,
  aux_sym_functions_declaration_repeat1 = 127,
  aux_sym_function_body_repeat1 = 128,
  aux_sym_ui_manager_block_repeat1 = 129,
  aux_sym_db_manager_block_repeat1 = 130,
  alias_sym_color_identifier = 131,
  alias_sym_function_identifier = 132,
  alias_sym_set_identifier = 133,
  alias_sym_task_body = 134,
  alias_sym_task_identifier = 135,
  alias_sym_task_options = 136,
  alias_sym_variable_identifier = 137,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
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
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_SEMI] = ";",
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
  [sym_assignment] = "assignment",
  [sym__assignment_left_expression] = "_assignment_left_expression",
  [sym__assignment_right_expression] = "_assignment_right_expression",
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
  [alias_sym_variable_identifier] = "variable_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
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
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
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
  [sym_assignment] = sym_assignment,
  [sym__assignment_left_expression] = sym__assignment_left_expression,
  [sym__assignment_right_expression] = sym__assignment_right_expression,
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
  [alias_sym_variable_identifier] = alias_sym_variable_identifier,
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
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
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym__assignment_left_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__assignment_right_expression] = {
    .visible = false,
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
  [alias_sym_variable_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_description_text = 1,
  field_left = 2,
  field_name = 3,
  field_right = 4,
  field_type = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_description_text] = "description_text",
  [field_left] = "left",
  [field_name] = "name",
  [field_right] = "right",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 1, .length = 1},
  [5] = {.index = 2, .length = 1},
  [6] = {.index = 3, .length = 2},
  [7] = {.index = 1, .length = 1},
  [8] = {.index = 1, .length = 1},
  [9] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_description_text, 1},
  [1] =
    {field_name, 0},
  [2] =
    {field_type, 0},
  [3] =
    {field_left, 0},
    {field_right, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = alias_sym_variable_identifier,
  },
  [3] = {
    [0] = alias_sym_task_identifier,
  },
  [4] = {
    [0] = alias_sym_function_identifier,
  },
  [7] = {
    [0] = alias_sym_color_identifier,
  },
  [8] = {
    [0] = alias_sym_task_identifier,
    [1] = alias_sym_task_options,
    [2] = alias_sym_task_body,
  },
  [9] = {
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
      if (eof) ADVANCE(184);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == '(') ADVANCE(422);
      if (lookahead == ')') ADVANCE(423);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '+') ADVANCE(22);
      if (lookahead == ',') ADVANCE(413);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(417);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ';') ADVANCE(408);
      if (lookahead == '=') ADVANCE(403);
      if (lookahead == 'C') ADVANCE(208);
      if (lookahead == 'E') ADVANCE(255);
      if (lookahead == 'F') ADVANCE(189);
      if (lookahead == 'I') ADVANCE(239);
      if (lookahead == 'N') ADVANCE(290);
      if (lookahead == 'R') ADVANCE(209);
      if (lookahead == 'S') ADVANCE(210);
      if (lookahead == 'T') ADVANCE(307);
      if (lookahead == 'W') ADVANCE(243);
      if (lookahead == '[') ADVANCE(418);
      if (lookahead == '\\') SKIP(180)
      if (lookahead == ']') ADVANCE(419);
      if (lookahead == '{') ADVANCE(411);
      if (lookahead == '}') ADVANCE(414);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(14)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(15)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(16)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == '/') ADVANCE(350);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(349);
      if (lookahead != 0) ADVANCE(351);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(349);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(349);
      if (lookahead == '\r') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(19)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '\r') SKIP(10)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(20)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '\r') SKIP(12)
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == ';') ADVANCE(408);
      if (lookahead == 'C') ADVANCE(46);
      if (lookahead == 'E') ADVANCE(91);
      if (lookahead == 'F') ADVANCE(27);
      if (lookahead == 'I') ADVANCE(76);
      if (lookahead == 'N') ADVANCE(124);
      if (lookahead == 'R') ADVANCE(47);
      if (lookahead == 'S') ADVANCE(48);
      if (lookahead == 'T') ADVANCE(140);
      if (lookahead == 'W') ADVANCE(80);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '{') ADVANCE(411);
      if (lookahead == '}') ADVANCE(414);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == 'E') ADVANCE(289);
      if (lookahead == 'F') ADVANCE(189);
      if (lookahead == 'I') ADVANCE(280);
      if (lookahead == 'N') ADVANCE(290);
      if (lookahead == 'R') ADVANCE(228);
      if (lookahead == 'T') ADVANCE(307);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 16:
      if (lookahead == '(') ADVANCE(422);
      if (lookahead == ',') ADVANCE(413);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == ';') ADVANCE(408);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '{') ADVANCE(411);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(347);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(347);
      if (lookahead == '=') ADVANCE(407);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '\\') SKIP(11)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(409);
      if (lookahead == '\\') SKIP(13)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(406);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(92);
      if (lookahead == 'T') ADVANCE(168);
      END_STATE();
    case 25:
      if (lookahead == 'A') ADVANCE(366);
      END_STATE();
    case 26:
      if (lookahead == 'A') ADVANCE(36);
      if (lookahead == 'C') ADVANCE(93);
      if (lookahead == 'D') ADVANCE(145);
      if (lookahead == 'I') ADVANCE(110);
      if (lookahead == 'M') ADVANCE(125);
      if (lookahead == 'O') ADVANCE(137);
      if (lookahead == 'P') ADVANCE(29);
      if (lookahead == 'R') ADVANCE(56);
      if (lookahead == 'S') ADVANCE(71);
      if (lookahead == 'U') ADVANCE(121);
      END_STATE();
    case 27:
      if (lookahead == 'A') ADVANCE(103);
      END_STATE();
    case 28:
      if (lookahead == 'A') ADVANCE(160);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == 'A') ADVANCE(96);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(143);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(165);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(115);
      END_STATE();
    case 34:
      if (lookahead == 'A') ADVANCE(166);
      END_STATE();
    case 35:
      if (lookahead == 'C') ADVANCE(90);
      END_STATE();
    case 36:
      if (lookahead == 'C') ADVANCE(162);
      END_STATE();
    case 37:
      if (lookahead == 'C') ADVANCE(156);
      END_STATE();
    case 38:
      if (lookahead == 'C') ADVANCE(157);
      END_STATE();
    case 39:
      if (lookahead == 'C') ADVANCE(163);
      END_STATE();
    case 40:
      if (lookahead == 'C') ADVANCE(164);
      END_STATE();
    case 41:
      if (lookahead == 'C') ADVANCE(34);
      END_STATE();
    case 42:
      if (lookahead == 'C') ADVANCE(133);
      if (lookahead == 'E') ADVANCE(101);
      END_STATE();
    case 43:
      if (lookahead == 'C') ADVANCE(167);
      END_STATE();
    case 44:
      if (lookahead == 'D') ADVANCE(415);
      END_STATE();
    case 45:
      if (lookahead == 'D') ADVANCE(362);
      END_STATE();
    case 46:
      if (lookahead == 'D') ADVANCE(28);
      if (lookahead == 'O') ADVANCE(94);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(24);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(152);
      if (lookahead == 'T') ADVANCE(144);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(432);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(78);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(364);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(356);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(358);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(434);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(174);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(106);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(383);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(371);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(390);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(367);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(377);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(399);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(105);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(31);
      if (lookahead == 'O') ADVANCE(150);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(141);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(147);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(111);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(118);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(37);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(38);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(100);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(39);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(40);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(104);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(43);
      END_STATE();
    case 76:
      if (lookahead == 'F') ADVANCE(430);
      if (lookahead == 'N') ADVANCE(161);
      END_STATE();
    case 77:
      if (lookahead == 'G') ADVANCE(366);
      END_STATE();
    case 78:
      if (lookahead == 'G') ADVANCE(65);
      END_STATE();
    case 79:
      if (lookahead == 'G') ADVANCE(102);
      END_STATE();
    case 80:
      if (lookahead == 'H') ADVANCE(83);
      END_STATE();
    case 81:
      if (lookahead == 'I') ADVANCE(45);
      END_STATE();
    case 82:
      if (lookahead == 'I') ADVANCE(173);
      END_STATE();
    case 83:
      if (lookahead == 'I') ADVANCE(98);
      END_STATE();
    case 84:
      if (lookahead == 'I') ADVANCE(114);
      END_STATE();
    case 85:
      if (lookahead == 'I') ADVANCE(153);
      END_STATE();
    case 86:
      if (lookahead == 'I') ADVANCE(41);
      END_STATE();
    case 87:
      if (lookahead == 'I') ADVANCE(117);
      END_STATE();
    case 88:
      if (lookahead == 'I') ADVANCE(129);
      END_STATE();
    case 89:
      if (lookahead == 'I') ADVANCE(130);
      END_STATE();
    case 90:
      if (lookahead == 'K') ADVANCE(387);
      END_STATE();
    case 91:
      if (lookahead == 'L') ADVANCE(148);
      if (lookahead == 'N') ADVANCE(44);
      if (lookahead == 'O') ADVANCE(95);
      if (lookahead == 'X') ADVANCE(85);
      END_STATE();
    case 92:
      if (lookahead == 'L') ADVANCE(366);
      if (lookahead == 'S') ADVANCE(128);
      END_STATE();
    case 93:
      if (lookahead == 'L') ADVANCE(64);
      if (lookahead == 'O') ADVANCE(119);
      END_STATE();
    case 94:
      if (lookahead == 'L') ADVANCE(126);
      if (lookahead == 'M') ADVANCE(138);
      END_STATE();
    case 95:
      if (lookahead == 'L') ADVANCE(107);
      END_STATE();
    case 96:
      if (lookahead == 'L') ADVANCE(81);
      END_STATE();
    case 97:
      if (lookahead == 'L') ADVANCE(86);
      END_STATE();
    case 98:
      if (lookahead == 'L') ADVANCE(54);
      END_STATE();
    case 99:
      if (lookahead == 'L') ADVANCE(55);
      END_STATE();
    case 100:
      if (lookahead == 'L') ADVANCE(69);
      END_STATE();
    case 101:
      if (lookahead == 'L') ADVANCE(63);
      END_STATE();
    case 102:
      if (lookahead == 'L') ADVANCE(62);
      END_STATE();
    case 103:
      if (lookahead == 'L') ADVANCE(149);
      END_STATE();
    case 104:
      if (lookahead == 'L') ADVANCE(70);
      END_STATE();
    case 105:
      if (lookahead == 'M') ADVANCE(68);
      END_STATE();
    case 106:
      if (lookahead == 'M') ADVANCE(131);
      END_STATE();
    case 107:
      if (lookahead == 'N') ADVANCE(360);
      END_STATE();
    case 108:
      if (lookahead == 'N') ADVANCE(175);
      END_STATE();
    case 109:
      if (lookahead == 'N') ADVANCE(426);
      END_STATE();
    case 110:
      if (lookahead == 'N') ADVANCE(135);
      END_STATE();
    case 111:
      if (lookahead == 'N') ADVANCE(385);
      END_STATE();
    case 112:
      if (lookahead == 'N') ADVANCE(373);
      END_STATE();
    case 113:
      if (lookahead == 'N') ADVANCE(391);
      END_STATE();
    case 114:
      if (lookahead == 'N') ADVANCE(77);
      END_STATE();
    case 115:
      if (lookahead == 'N') ADVANCE(79);
      END_STATE();
    case 116:
      if (lookahead == 'N') ADVANCE(51);
      END_STATE();
    case 117:
      if (lookahead == 'N') ADVANCE(158);
      END_STATE();
    case 118:
      if (lookahead == 'N') ADVANCE(159);
      END_STATE();
    case 119:
      if (lookahead == 'N') ADVANCE(120);
      END_STATE();
    case 120:
      if (lookahead == 'N') ADVANCE(73);
      END_STATE();
    case 121:
      if (lookahead == 'N') ADVANCE(151);
      END_STATE();
    case 122:
      if (lookahead == 'N') ADVANCE(75);
      END_STATE();
    case 123:
      if (lookahead == 'N') ADVANCE(122);
      END_STATE();
    case 124:
      if (lookahead == 'O') ADVANCE(116);
      END_STATE();
    case 125:
      if (lookahead == 'O') ADVANCE(171);
      END_STATE();
    case 126:
      if (lookahead == 'O') ADVANCE(142);
      END_STATE();
    case 127:
      if (lookahead == 'O') ADVANCE(134);
      END_STATE();
    case 128:
      if (lookahead == 'O') ADVANCE(108);
      END_STATE();
    case 129:
      if (lookahead == 'O') ADVANCE(112);
      END_STATE();
    case 130:
      if (lookahead == 'O') ADVANCE(113);
      END_STATE();
    case 131:
      if (lookahead == 'O') ADVANCE(172);
      END_STATE();
    case 132:
      if (lookahead == 'O') ADVANCE(87);
      END_STATE();
    case 133:
      if (lookahead == 'O') ADVANCE(123);
      END_STATE();
    case 134:
      if (lookahead == 'P') ADVANCE(375);
      END_STATE();
    case 135:
      if (lookahead == 'P') ADVANCE(170);
      if (lookahead == 'S') ADVANCE(66);
      END_STATE();
    case 136:
      if (lookahead == 'P') ADVANCE(132);
      if (lookahead == 'R') ADVANCE(72);
      END_STATE();
    case 137:
      if (lookahead == 'P') ADVANCE(67);
      END_STATE();
    case 138:
      if (lookahead == 'P') ADVANCE(99);
      END_STATE();
    case 139:
      if (lookahead == 'P') ADVANCE(97);
      END_STATE();
    case 140:
      if (lookahead == 'R') ADVANCE(169);
      END_STATE();
    case 141:
      if (lookahead == 'R') ADVANCE(366);
      END_STATE();
    case 142:
      if (lookahead == 'R') ADVANCE(420);
      END_STATE();
    case 143:
      if (lookahead == 'R') ADVANCE(369);
      END_STATE();
    case 144:
      if (lookahead == 'R') ADVANCE(84);
      END_STATE();
    case 145:
      if (lookahead == 'R') ADVANCE(127);
      if (lookahead == 'U') ADVANCE(139);
      END_STATE();
    case 146:
      if (lookahead == 'R') ADVANCE(109);
      END_STATE();
    case 147:
      if (lookahead == 'R') ADVANCE(155);
      END_STATE();
    case 148:
      if (lookahead == 'S') ADVANCE(49);
      END_STATE();
    case 149:
      if (lookahead == 'S') ADVANCE(53);
      END_STATE();
    case 150:
      if (lookahead == 'S') ADVANCE(58);
      END_STATE();
    case 151:
      if (lookahead == 'S') ADVANCE(74);
      END_STATE();
    case 152:
      if (lookahead == 'T') ADVANCE(424);
      END_STATE();
    case 153:
      if (lookahead == 'T') ADVANCE(428);
      END_STATE();
    case 154:
      if (lookahead == 'T') ADVANCE(379);
      END_STATE();
    case 155:
      if (lookahead == 'T') ADVANCE(381);
      END_STATE();
    case 156:
      if (lookahead == 'T') ADVANCE(396);
      END_STATE();
    case 157:
      if (lookahead == 'T') ADVANCE(401);
      END_STATE();
    case 158:
      if (lookahead == 'T') ADVANCE(397);
      END_STATE();
    case 159:
      if (lookahead == 'T') ADVANCE(393);
      END_STATE();
    case 160:
      if (lookahead == 'T') ADVANCE(25);
      END_STATE();
    case 161:
      if (lookahead == 'T') ADVANCE(50);
      if (lookahead == 'V') ADVANCE(30);
      END_STATE();
    case 162:
      if (lookahead == 'T') ADVANCE(82);
      END_STATE();
    case 163:
      if (lookahead == 'T') ADVANCE(33);
      END_STATE();
    case 164:
      if (lookahead == 'T') ADVANCE(88);
      END_STATE();
    case 165:
      if (lookahead == 'T') ADVANCE(60);
      END_STATE();
    case 166:
      if (lookahead == 'T') ADVANCE(61);
      END_STATE();
    case 167:
      if (lookahead == 'T') ADVANCE(89);
      END_STATE();
    case 168:
      if (lookahead == 'U') ADVANCE(146);
      END_STATE();
    case 169:
      if (lookahead == 'U') ADVANCE(52);
      END_STATE();
    case 170:
      if (lookahead == 'U') ADVANCE(154);
      END_STATE();
    case 171:
      if (lookahead == 'V') ADVANCE(57);
      END_STATE();
    case 172:
      if (lookahead == 'V') ADVANCE(59);
      END_STATE();
    case 173:
      if (lookahead == 'V') ADVANCE(32);
      END_STATE();
    case 174:
      if (lookahead == 'X') ADVANCE(366);
      END_STATE();
    case 175:
      if (lookahead == '_') ADVANCE(26);
      END_STATE();
    case 176:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      END_STATE();
    case 177:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      END_STATE();
    case 178:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      END_STATE();
    case 179:
      if (eof) ADVANCE(184);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 180:
      if (eof) ADVANCE(184);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(179)
      END_STATE();
    case 181:
      if (eof) ADVANCE(184);
      if (lookahead == '\n') SKIP(183)
      END_STATE();
    case 182:
      if (eof) ADVANCE(184);
      if (lookahead == '\n') SKIP(183)
      if (lookahead == '\r') SKIP(181)
      END_STATE();
    case 183:
      if (eof) ADVANCE(184);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == ')') ADVANCE(423);
      if (lookahead == ',') ADVANCE(413);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == ';') ADVANCE(408);
      if (lookahead == 'E') ADVANCE(270);
      if (lookahead == 'F') ADVANCE(189);
      if (lookahead == 'I') ADVANCE(280);
      if (lookahead == 'N') ADVANCE(290);
      if (lookahead == 'R') ADVANCE(228);
      if (lookahead == 'T') ADVANCE(307);
      if (lookahead == '\\') SKIP(182)
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(183)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(344);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(254);
      if (lookahead == 'T') ADVANCE(335);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(198);
      if (lookahead == 'C') ADVANCE(256);
      if (lookahead == 'D') ADVANCE(311);
      if (lookahead == 'I') ADVANCE(274);
      if (lookahead == 'M') ADVANCE(291);
      if (lookahead == 'O') ADVANCE(303);
      if (lookahead == 'P') ADVANCE(191);
      if (lookahead == 'R') ADVANCE(218);
      if (lookahead == 'S') ADVANCE(234);
      if (lookahead == 'U') ADVANCE(286);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(317);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(266);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(327);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(197);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(259);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(309);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(332);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(279);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(333);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(253);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(329);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(323);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(324);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(330);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(331);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(196);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(299);
      if (lookahead == 'E') ADVANCE(264);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(334);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(416);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(363);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(190);
      if (lookahead == 'O') ADVANCE(257);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(186);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(319);
      if (lookahead == 'T') ADVANCE(310);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(433);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(241);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(365);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(357);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(359);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(435);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(342);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(269);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(384);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(372);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(389);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(368);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(378);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(400);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(268);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(193);
      if (lookahead == 'O') ADVANCE(316);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(306);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(188);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(313);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(275);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(283);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(199);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(200);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(263);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(201);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(202);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(267);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(205);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(431);
      if (lookahead == 'N') ADVANCE(328);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(344);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(227);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(265);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(246);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(207);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(341);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(261);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(278);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(320);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(203);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(282);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(295);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(296);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(388);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(344);
      if (lookahead == 'S') ADVANCE(294);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(314);
      if (lookahead == 'N') ADVANCE(206);
      if (lookahead == 'O') ADVANCE(258);
      if (lookahead == 'X') ADVANCE(248);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(226);
      if (lookahead == 'O') ADVANCE(284);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(292);
      if (lookahead == 'M') ADVANCE(304);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(271);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(244);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(249);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(216);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(217);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(232);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(225);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(224);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(315);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(233);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(231);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(297);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(206);
      if (lookahead == 'O') ADVANCE(258);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(361);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(343);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(427);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(301);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(386);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(374);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(392);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(240);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(242);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(340);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(213);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(325);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(326);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(285);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(236);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(318);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(238);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(287);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(258);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(281);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(338);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(308);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(300);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(272);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(276);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(277);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(339);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(250);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(288);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(376);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(337);
      if (lookahead == 'S') ADVANCE(229);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(298);
      if (lookahead == 'R') ADVANCE(235);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(230);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(262);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(260);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(344);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(336);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(421);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(370);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(247);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(293);
      if (lookahead == 'U') ADVANCE(305);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(273);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(322);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(211);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(215);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(220);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(294);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(237);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(425);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(429);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(380);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(382);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(395);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(402);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(398);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(394);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(185);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(212);
      if (lookahead == 'V') ADVANCE(192);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(245);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(195);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(251);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(222);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(223);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(252);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(312);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(214);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(321);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(219);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(221);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(192);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(194);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(344);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(187);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_comment);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(347);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(350);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(351);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(351);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(351);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(353);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(352);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(355);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_eoln);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_eoln);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_invalid);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_invalid);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_none);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_none);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_primitive_type);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_REASON_ACTIVATE);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_REASON_ACTIVATE);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_REASON_CLEAR);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_REASON_CLEAR);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_REASON_CLOSE);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_REASON_CLOSE);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_REASON_CONNECTION);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_REASON_CONNECTION);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_REASON_DROP);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_REASON_DROP);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_REASON_DUPLICATE);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_REASON_DUPLICATE);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_REASON_INPUT);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_REASON_INPUT);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_REASON_INSERT);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_REASON_INSERT);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_REASON_MOVE);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_REASON_MOVE);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_REASON_OPEN);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_REASON_OPEN);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_REASON_PACK);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_REASON_PACK);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_REASON_REMOVE);
      if (lookahead == '_') ADVANCE(204);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_REASON_REMOVE);
      if (lookahead == '_') ADVANCE(42);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_REASON_REMOVE_CONNECTION);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_REASON_REMOVE_CONNECTION);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_REASON_REMOVE_ELEMENT);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_REASON_REMOVE_ELEMENT);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_REASON_SELECT);
      if (lookahead == '_') ADVANCE(302);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_REASON_SELECT);
      if (lookahead == '_') ADVANCE(136);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_REASON_SELECT_POINT);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_REASON_SELECT_POINT);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_REASON_SELECT_RECTANGLE);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_REASON_SELECT_RECTANGLE);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_REASON_UNSELECT);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_REASON_UNSELECT);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '/') ADVANCE(346);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_parameter_block_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_COLOR);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_COLOR);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_SET);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_SET);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_RETURN);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_RETURN);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_EXIT);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_EXIT);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_ELSE);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_WHILE);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_WHILE);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(344);
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
      if (lookahead == '\\') SKIP(9)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'A') ADVANCE(10);
      if (lookahead == 'B') ADVANCE(11);
      if (lookahead == 'E') ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == 'U') ADVANCE(13);
      END_STATE();
    case 3:
      if (lookahead == 'N') ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == 'A') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == 'P') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == 'T') ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == 'I') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(20)
      END_STATE();
    case 10:
      if (lookahead == 'T') ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(22);
      END_STATE();
    case 12:
      if (lookahead == 'S') ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == 'N') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == 'C') ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == 'N') ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == 'R') ADVANCE(28);
      END_STATE();
    case 18:
      if (lookahead == 'S') ADVANCE(29);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 21:
      if (lookahead == 'A') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == 'M') ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == 'C') ADVANCE(33);
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
      if (lookahead == 'K') ADVANCE(39);
      END_STATE();
    case 30:
      if (lookahead == 'M') ADVANCE(40);
      END_STATE();
    case 31:
      if (lookahead == 'P') ADVANCE(41);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(42);
      END_STATE();
    case 33:
      if (lookahead == 'R') ADVANCE(43);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_FUNC);
      if (lookahead == 'T') ADVANCE(44);
      END_STATE();
    case 35:
      if (lookahead == 'U') ADVANCE(45);
      END_STATE();
    case 36:
      if (lookahead == 'U') ADVANCE(46);
      END_STATE();
    case 37:
      if (lookahead == 'A') ADVANCE(47);
      END_STATE();
    case 38:
      if (lookahead == 'A') ADVANCE(48);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_TASK);
      END_STATE();
    case 40:
      if (lookahead == 'A') ADVANCE(49);
      END_STATE();
    case 41:
      if (lookahead == 'O') ADVANCE(50);
      END_STATE();
    case 42:
      if (lookahead == 'N') ADVANCE(51);
      END_STATE();
    case 43:
      if (lookahead == 'I') ADVANCE(52);
      END_STATE();
    case 44:
      if (lookahead == 'I') ADVANCE(53);
      END_STATE();
    case 45:
      if (lookahead == 'D') ADVANCE(54);
      END_STATE();
    case 46:
      if (lookahead == 'A') ADVANCE(55);
      END_STATE();
    case 47:
      if (lookahead == 'T') ADVANCE(56);
      END_STATE();
    case 48:
      if (lookahead == 'M') ADVANCE(57);
      END_STATE();
    case 49:
      if (lookahead == 'N') ADVANCE(58);
      END_STATE();
    case 50:
      if (lookahead == 'O') ADVANCE(59);
      END_STATE();
    case 51:
      if (lookahead == 'A') ADVANCE(60);
      END_STATE();
    case 52:
      if (lookahead == 'P') ADVANCE(61);
      END_STATE();
    case 53:
      if (lookahead == 'O') ADVANCE(62);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(63);
      END_STATE();
    case 55:
      if (lookahead == 'G') ADVANCE(64);
      END_STATE();
    case 56:
      if (lookahead == 'O') ADVANCE(65);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(66);
      END_STATE();
    case 58:
      if (lookahead == 'A') ADVANCE(67);
      END_STATE();
    case 59:
      if (lookahead == 'L') ADVANCE(68);
      END_STATE();
    case 60:
      if (lookahead == 'G') ADVANCE(69);
      END_STATE();
    case 61:
      if (lookahead == 'T') ADVANCE(70);
      END_STATE();
    case 62:
      if (lookahead == 'N') ADVANCE(71);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_INCLUDE);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(72);
      END_STATE();
    case 65:
      if (lookahead == 'R') ADVANCE(73);
      END_STATE();
    case 66:
      if (lookahead == 'R') ADVANCE(74);
      END_STATE();
    case 67:
      if (lookahead == 'G') ADVANCE(75);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DATAPOOL);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(76);
      END_STATE();
    case 70:
      if (lookahead == 'I') ADVANCE(77);
      END_STATE();
    case 71:
      if (lookahead == 'S') ADVANCE(78);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LANGUAGE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_OPERATOR);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_STREAMER);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(79);
      END_STATE();
    case 76:
      if (lookahead == 'R') ADVANCE(80);
      END_STATE();
    case 77:
      if (lookahead == 'O') ADVANCE(81);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_FUNCTIONS);
      END_STATE();
    case 79:
      if (lookahead == 'R') ADVANCE(82);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_DB_MANAGER);
      END_STATE();
    case 81:
      if (lookahead == 'N') ADVANCE(83);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_UI_MANAGER);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DESCRIPTION);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 183},
  [2] = {.lex_state = 183},
  [3] = {.lex_state = 183},
  [4] = {.lex_state = 14},
  [5] = {.lex_state = 14},
  [6] = {.lex_state = 14},
  [7] = {.lex_state = 14},
  [8] = {.lex_state = 14},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 183},
  [13] = {.lex_state = 183},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 183},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 183},
  [19] = {.lex_state = 183},
  [20] = {.lex_state = 183},
  [21] = {.lex_state = 183},
  [22] = {.lex_state = 183},
  [23] = {.lex_state = 183},
  [24] = {.lex_state = 183},
  [25] = {.lex_state = 183},
  [26] = {.lex_state = 14},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 183},
  [30] = {.lex_state = 183},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 183},
  [33] = {.lex_state = 183},
  [34] = {.lex_state = 183},
  [35] = {.lex_state = 183},
  [36] = {.lex_state = 183},
  [37] = {.lex_state = 183},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 183},
  [40] = {.lex_state = 183},
  [41] = {.lex_state = 14},
  [42] = {.lex_state = 14},
  [43] = {.lex_state = 14},
  [44] = {.lex_state = 14},
  [45] = {.lex_state = 14},
  [46] = {.lex_state = 14},
  [47] = {.lex_state = 14},
  [48] = {.lex_state = 14},
  [49] = {.lex_state = 14},
  [50] = {.lex_state = 183},
  [51] = {.lex_state = 183},
  [52] = {.lex_state = 183},
  [53] = {.lex_state = 183},
  [54] = {.lex_state = 183},
  [55] = {.lex_state = 183},
  [56] = {.lex_state = 14},
  [57] = {.lex_state = 14},
  [58] = {.lex_state = 14},
  [59] = {.lex_state = 14},
  [60] = {.lex_state = 14},
  [61] = {.lex_state = 14},
  [62] = {.lex_state = 14},
  [63] = {.lex_state = 14},
  [64] = {.lex_state = 14},
  [65] = {.lex_state = 14},
  [66] = {.lex_state = 14},
  [67] = {.lex_state = 14},
  [68] = {.lex_state = 15},
  [69] = {.lex_state = 14},
  [70] = {.lex_state = 14},
  [71] = {.lex_state = 14},
  [72] = {.lex_state = 14},
  [73] = {.lex_state = 14},
  [74] = {.lex_state = 14},
  [75] = {.lex_state = 183},
  [76] = {.lex_state = 183},
  [77] = {.lex_state = 183},
  [78] = {.lex_state = 183},
  [79] = {.lex_state = 183},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 16},
  [85] = {.lex_state = 16},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 16},
  [88] = {.lex_state = 16},
  [89] = {.lex_state = 0},
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
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 16},
  [131] = {.lex_state = 16},
  [132] = {.lex_state = 16},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 16},
  [138] = {.lex_state = 16},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 16},
  [144] = {.lex_state = 16},
  [145] = {.lex_state = 16},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 16},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 16},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 16},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 16},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 16},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 16},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 16},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 16},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 16},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 19},
  [188] = {.lex_state = 16},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 16},
  [193] = {.lex_state = 16},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 16},
  [199] = {.lex_state = 20},
  [200] = {.lex_state = 16},
  [201] = {.lex_state = 16},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 19},
  [204] = {.lex_state = 16},
  [205] = {.lex_state = 16},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
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
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
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
    [sym_source_file] = STATE(207),
    [sym__high_level_blocks] = STATE(3),
    [sym__expression] = STATE(3),
    [sym_string] = STATE(3),
    [sym_reason] = STATE(3),
    [sym_assignment] = STATE(3),
    [sym__assignment_left_expression] = STATE(81),
    [sym_include] = STATE(3),
    [sym_description] = STATE(3),
    [sym_end_statement] = STATE(3),
    [sym_language_block] = STATE(3),
    [sym_datapool_block] = STATE(3),
    [sym_streamer_block] = STATE(3),
    [sym_operator_block] = STATE(3),
    [sym_functions_block] = STATE(3),
    [sym_ui_manager_block] = STATE(3),
    [sym_db_manager_block] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [sym_true] = ACTIONS(13),
    [sym_false] = ACTIONS(13),
    [sym_eoln] = ACTIONS(13),
    [sym_invalid] = ACTIONS(13),
    [sym_none] = ACTIONS(13),
    [anon_sym_REASON_ACTIVATE] = ACTIONS(15),
    [anon_sym_REASON_CLEAR] = ACTIONS(15),
    [anon_sym_REASON_CLOSE] = ACTIONS(15),
    [anon_sym_REASON_CONNECTION] = ACTIONS(15),
    [anon_sym_REASON_DROP] = ACTIONS(15),
    [anon_sym_REASON_DUPLICATE] = ACTIONS(15),
    [anon_sym_REASON_INPUT] = ACTIONS(15),
    [anon_sym_REASON_INSERT] = ACTIONS(15),
    [anon_sym_REASON_MOVE] = ACTIONS(15),
    [anon_sym_REASON_OPEN] = ACTIONS(15),
    [anon_sym_REASON_PACK] = ACTIONS(15),
    [anon_sym_REASON_REMOVE] = ACTIONS(15),
    [anon_sym_REASON_REMOVE_CONNECTION] = ACTIONS(15),
    [anon_sym_REASON_REMOVE_ELEMENT] = ACTIONS(15),
    [anon_sym_REASON_SELECT] = ACTIONS(15),
    [anon_sym_REASON_SELECT_POINT] = ACTIONS(15),
    [anon_sym_REASON_SELECT_RECTANGLE] = ACTIONS(15),
    [anon_sym_REASON_UNSELECT] = ACTIONS(15),
    [anon_sym_INCLUDE] = ACTIONS(17),
    [anon_sym_DESCRIPTION] = ACTIONS(19),
    [anon_sym_END] = ACTIONS(21),
    [anon_sym_LANGUAGE] = ACTIONS(23),
    [anon_sym_DATAPOOL] = ACTIONS(25),
    [anon_sym_STREAMER] = ACTIONS(27),
    [anon_sym_OPERATOR] = ACTIONS(29),
    [anon_sym_FUNCTIONS] = ACTIONS(31),
    [anon_sym_UI_MANAGER] = ACTIONS(33),
    [anon_sym_DB_MANAGER] = ACTIONS(35),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(42), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_number,
    ACTIONS(54), 1,
      anon_sym_INCLUDE,
    ACTIONS(57), 1,
      anon_sym_DESCRIPTION,
    ACTIONS(60), 1,
      anon_sym_END,
    ACTIONS(63), 1,
      anon_sym_LANGUAGE,
    ACTIONS(66), 1,
      anon_sym_DATAPOOL,
    ACTIONS(69), 1,
      anon_sym_STREAMER,
    ACTIONS(72), 1,
      anon_sym_OPERATOR,
    ACTIONS(75), 1,
      anon_sym_FUNCTIONS,
    ACTIONS(78), 1,
      anon_sym_UI_MANAGER,
    ACTIONS(81), 1,
      anon_sym_DB_MANAGER,
    STATE(81), 1,
      sym__assignment_left_expression,
    ACTIONS(48), 5,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    STATE(2), 16,
      sym__high_level_blocks,
      sym__expression,
      sym_string,
      sym_reason,
      sym_assignment,
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
    ACTIONS(51), 18,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [94] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_INCLUDE,
    ACTIONS(19), 1,
      anon_sym_DESCRIPTION,
    ACTIONS(21), 1,
      anon_sym_END,
    ACTIONS(23), 1,
      anon_sym_LANGUAGE,
    ACTIONS(25), 1,
      anon_sym_DATAPOOL,
    ACTIONS(27), 1,
      anon_sym_STREAMER,
    ACTIONS(29), 1,
      anon_sym_OPERATOR,
    ACTIONS(31), 1,
      anon_sym_FUNCTIONS,
    ACTIONS(33), 1,
      anon_sym_UI_MANAGER,
    ACTIONS(35), 1,
      anon_sym_DB_MANAGER,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    ACTIONS(86), 1,
      sym_number,
    STATE(81), 1,
      sym__assignment_left_expression,
    ACTIONS(88), 5,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    STATE(2), 16,
      sym__high_level_blocks,
      sym__expression,
      sym_string,
      sym_reason,
      sym_assignment,
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
    ACTIONS(15), 18,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [188] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      sym_primitive_type,
    ACTIONS(100), 1,
      anon_sym_LBRACE,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    ACTIONS(104), 1,
      anon_sym_RETURN,
    ACTIONS(106), 1,
      anon_sym_EXIT,
    ACTIONS(108), 1,
      anon_sym_IF,
    ACTIONS(110), 1,
      anon_sym_WHILE,
    ACTIONS(98), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(92), 7,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
      anon_sym_SEMI,
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
    ACTIONS(96), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [260] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      sym_primitive_type,
    ACTIONS(100), 1,
      anon_sym_LBRACE,
    ACTIONS(104), 1,
      anon_sym_RETURN,
    ACTIONS(106), 1,
      anon_sym_EXIT,
    ACTIONS(108), 1,
      anon_sym_IF,
    ACTIONS(110), 1,
      anon_sym_WHILE,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    ACTIONS(98), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(112), 7,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
      anon_sym_SEMI,
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
    ACTIONS(96), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [332] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      sym_primitive_type,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    ACTIONS(136), 1,
      anon_sym_RETURN,
    ACTIONS(139), 1,
      anon_sym_EXIT,
    ACTIONS(142), 1,
      anon_sym_IF,
    ACTIONS(145), 1,
      anon_sym_WHILE,
    ACTIONS(128), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(119), 7,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
      anon_sym_SEMI,
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
    ACTIONS(125), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [404] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      sym_primitive_type,
    ACTIONS(100), 1,
      anon_sym_LBRACE,
    ACTIONS(104), 1,
      anon_sym_RETURN,
    ACTIONS(106), 1,
      anon_sym_EXIT,
    ACTIONS(108), 1,
      anon_sym_IF,
    ACTIONS(110), 1,
      anon_sym_WHILE,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    ACTIONS(98), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(148), 7,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
      anon_sym_SEMI,
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
    ACTIONS(96), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [476] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      sym_primitive_type,
    ACTIONS(100), 1,
      anon_sym_LBRACE,
    ACTIONS(104), 1,
      anon_sym_RETURN,
    ACTIONS(106), 1,
      anon_sym_EXIT,
    ACTIONS(108), 1,
      anon_sym_IF,
    ACTIONS(110), 1,
      anon_sym_WHILE,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    ACTIONS(98), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(112), 7,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
      anon_sym_SEMI,
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
    ACTIONS(96), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [548] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      sym_primitive_type,
    ACTIONS(100), 1,
      anon_sym_LBRACE,
    ACTIONS(104), 1,
      anon_sym_RETURN,
    ACTIONS(106), 1,
      anon_sym_EXIT,
    ACTIONS(108), 1,
      anon_sym_IF,
    ACTIONS(110), 1,
      anon_sym_WHILE,
    ACTIONS(98), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(154), 7,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
      anon_sym_SEMI,
    STATE(42), 10,
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
    ACTIONS(96), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [616] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      sym_primitive_type,
    ACTIONS(100), 1,
      anon_sym_LBRACE,
    ACTIONS(104), 1,
      anon_sym_RETURN,
    ACTIONS(106), 1,
      anon_sym_EXIT,
    ACTIONS(108), 1,
      anon_sym_IF,
    ACTIONS(110), 1,
      anon_sym_WHILE,
    ACTIONS(98), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(156), 7,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
      anon_sym_SEMI,
    STATE(48), 10,
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
    ACTIONS(96), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [684] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      sym_primitive_type,
    ACTIONS(100), 1,
      anon_sym_LBRACE,
    ACTIONS(104), 1,
      anon_sym_RETURN,
    ACTIONS(106), 1,
      anon_sym_EXIT,
    ACTIONS(108), 1,
      anon_sym_IF,
    ACTIONS(110), 1,
      anon_sym_WHILE,
    ACTIONS(98), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(158), 7,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
      anon_sym_SEMI,
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
    ACTIONS(96), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [752] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 6,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(162), 34,
      sym_identifier,
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
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT,
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
  [800] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 6,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(166), 34,
      sym_identifier,
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
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT,
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
  [848] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(168), 37,
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
      anon_sym_SEMI,
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
  [895] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 5,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    ACTIONS(170), 34,
      sym_identifier,
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
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT,
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
  [942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(160), 37,
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
      anon_sym_SEMI,
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
  [989] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(164), 37,
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
      anon_sym_SEMI,
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
  [1036] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(174), 34,
      sym_identifier,
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
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT,
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
  [1081] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(178), 34,
      sym_identifier,
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
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT,
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
  [1126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(182), 34,
      sym_identifier,
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
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT,
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
  [1171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(186), 34,
      sym_identifier,
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
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT,
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
  [1216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(190), 34,
      sym_identifier,
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
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT,
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
  [1261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(194), 34,
      sym_identifier,
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
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT,
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
  [1306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(198), 34,
      sym_identifier,
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
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT,
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
  [1351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(202), 34,
      sym_identifier,
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
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT,
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
  [1396] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(204), 35,
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
      anon_sym_SEMI,
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
  [1441] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      sym_primitive_type,
    ACTIONS(223), 1,
      anon_sym_END,
    ACTIONS(225), 1,
      anon_sym_COLOR,
    ACTIONS(228), 1,
      anon_sym_SET,
    ACTIONS(220), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(211), 6,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    STATE(27), 8,
      sym__expression,
      sym_string,
      sym_reason,
      sym__datapool_block_expression,
      sym_variables_declaration,
      sym_colors_declaration,
      sym_sets_declaration,
      aux_sym_datapool_block_repeat1,
    ACTIONS(217), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [1500] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      sym_primitive_type,
    ACTIONS(233), 1,
      anon_sym_END,
    ACTIONS(235), 1,
      anon_sym_COLOR,
    ACTIONS(237), 1,
      anon_sym_SET,
    ACTIONS(98), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(231), 6,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    STATE(27), 8,
      sym__expression,
      sym_string,
      sym_reason,
      sym__datapool_block_expression,
      sym_variables_declaration,
      sym_colors_declaration,
      sym_sets_declaration,
      aux_sym_datapool_block_repeat1,
    ACTIONS(96), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [1559] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(241), 34,
      sym_identifier,
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
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT,
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
  [1604] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(245), 34,
      sym_identifier,
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
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT,
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
  [1649] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(247), 35,
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
      anon_sym_SEMI,
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
  [1694] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(253), 34,
      sym_identifier,
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
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT,
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
  [1739] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(257), 34,
      sym_identifier,
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
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT,
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
  [1784] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(261), 34,
      sym_identifier,
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
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT,
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
  [1829] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(265), 34,
      sym_identifier,
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
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT,
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
  [1874] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(269), 34,
      sym_identifier,
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
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT,
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
  [1919] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(273), 34,
      sym_identifier,
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
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT,
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
  [1964] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(275), 35,
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
      anon_sym_SEMI,
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
  [2009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(281), 34,
      sym_identifier,
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
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT,
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
  [2054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(285), 34,
      sym_identifier,
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
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT,
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
  [2099] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      sym_primitive_type,
    ACTIONS(235), 1,
      anon_sym_COLOR,
    ACTIONS(237), 1,
      anon_sym_SET,
    ACTIONS(289), 1,
      anon_sym_END,
    ACTIONS(98), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(287), 6,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    STATE(28), 8,
      sym__expression,
      sym_string,
      sym_reason,
      sym__datapool_block_expression,
      sym_variables_declaration,
      sym_colors_declaration,
      sym_sets_declaration,
      aux_sym_datapool_block_repeat1,
    ACTIONS(96), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [2158] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_ELSE,
    STATE(46), 1,
      sym_else_part,
    ACTIONS(293), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(291), 31,
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
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RETURN,
      anon_sym_EXIT,
      anon_sym_IF,
      anon_sym_WHILE,
  [2205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(297), 32,
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
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RETURN,
      anon_sym_EXIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_WHILE,
  [2247] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(301), 32,
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
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RETURN,
      anon_sym_EXIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_WHILE,
  [2289] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(305), 32,
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
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RETURN,
      anon_sym_EXIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_WHILE,
  [2331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(309), 32,
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
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RETURN,
      anon_sym_EXIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_WHILE,
  [2373] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(313), 32,
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
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RETURN,
      anon_sym_EXIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_WHILE,
  [2415] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(317), 32,
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
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RETURN,
      anon_sym_EXIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_WHILE,
  [2457] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(321), 32,
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
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RETURN,
      anon_sym_EXIT,
      anon_sym_IF,
      anon_sym_ELSE,
      anon_sym_WHILE,
  [2499] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(327), 1,
      anon_sym_END,
    ACTIONS(329), 1,
      anon_sym_TASK,
    ACTIONS(98), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(325), 6,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    STATE(54), 6,
      sym__expression,
      sym_string,
      sym_reason,
      sym__operator_block_expression,
      sym_tasks_declaration,
      aux_sym_operator_block_repeat1,
    ACTIONS(96), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [2550] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(329), 1,
      anon_sym_TASK,
    ACTIONS(333), 1,
      anon_sym_END,
    ACTIONS(98), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(331), 6,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    STATE(50), 6,
      sym__expression,
      sym_string,
      sym_reason,
      sym__operator_block_expression,
      sym_tasks_declaration,
      aux_sym_operator_block_repeat1,
    ACTIONS(96), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [2601] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(337), 1,
      anon_sym_END,
    ACTIONS(339), 1,
      anon_sym_FUNC,
    ACTIONS(98), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(335), 6,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    STATE(55), 6,
      sym__expression,
      sym_string,
      sym_reason,
      sym__functions_block_expression,
      sym_functions_declaration,
      aux_sym_functions_block_repeat1,
    ACTIONS(96), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [2652] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_DQUOTE,
    ACTIONS(353), 1,
      anon_sym_END,
    ACTIONS(355), 1,
      anon_sym_FUNC,
    ACTIONS(350), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(344), 6,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    STATE(53), 6,
      sym__expression,
      sym_string,
      sym_reason,
      sym__functions_block_expression,
      sym_functions_declaration,
      aux_sym_functions_block_repeat1,
    ACTIONS(347), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [2703] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_DQUOTE,
    ACTIONS(370), 1,
      anon_sym_END,
    ACTIONS(372), 1,
      anon_sym_TASK,
    ACTIONS(367), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(361), 6,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    STATE(54), 6,
      sym__expression,
      sym_string,
      sym_reason,
      sym__operator_block_expression,
      sym_tasks_declaration,
      aux_sym_operator_block_repeat1,
    ACTIONS(364), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [2754] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(339), 1,
      anon_sym_FUNC,
    ACTIONS(377), 1,
      anon_sym_END,
    ACTIONS(98), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(375), 6,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    STATE(53), 6,
      sym__expression,
      sym_string,
      sym_reason,
      sym__functions_block_expression,
      sym_functions_declaration,
      aux_sym_functions_block_repeat1,
    ACTIONS(96), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [2805] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_DQUOTE,
    ACTIONS(391), 1,
      anon_sym_END,
    ACTIONS(388), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(56), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__streamer_block_expression,
      aux_sym_streamer_block_repeat1,
    ACTIONS(382), 6,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(385), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [2852] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    ACTIONS(405), 1,
      anon_sym_END,
    ACTIONS(402), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(57), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__ui_manager_block_expression,
      aux_sym_ui_manager_block_repeat1,
    ACTIONS(396), 6,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(399), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [2899] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(409), 1,
      anon_sym_END,
    ACTIONS(98), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(64), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__language_block_expression,
      aux_sym_language_block_repeat1,
    ACTIONS(407), 6,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(96), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [2946] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(413), 1,
      anon_sym_END,
    ACTIONS(98), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(56), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__streamer_block_expression,
      aux_sym_streamer_block_repeat1,
    ACTIONS(411), 6,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(96), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [2993] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(417), 1,
      anon_sym_END,
    ACTIONS(98), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(59), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__streamer_block_expression,
      aux_sym_streamer_block_repeat1,
    ACTIONS(415), 6,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(96), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [3040] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(421), 1,
      anon_sym_END,
    ACTIONS(98), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(66), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__db_manager_block_expression,
      aux_sym_db_manager_block_repeat1,
    ACTIONS(419), 6,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(96), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [3087] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(425), 1,
      anon_sym_END,
    ACTIONS(98), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(63), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__ui_manager_block_expression,
      aux_sym_ui_manager_block_repeat1,
    ACTIONS(423), 6,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(96), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [3134] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(429), 1,
      anon_sym_END,
    ACTIONS(98), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(57), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__ui_manager_block_expression,
      aux_sym_ui_manager_block_repeat1,
    ACTIONS(427), 6,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(96), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [3181] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(433), 1,
      anon_sym_END,
    ACTIONS(98), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(67), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__language_block_expression,
      aux_sym_language_block_repeat1,
    ACTIONS(431), 6,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(96), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [3228] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(437), 1,
      anon_sym_END,
    ACTIONS(98), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(61), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__db_manager_block_expression,
      aux_sym_db_manager_block_repeat1,
    ACTIONS(435), 6,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(96), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [3275] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_DQUOTE,
    ACTIONS(451), 1,
      anon_sym_END,
    ACTIONS(448), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(66), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__db_manager_block_expression,
      aux_sym_db_manager_block_repeat1,
    ACTIONS(442), 6,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(445), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [3322] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_DQUOTE,
    ACTIONS(465), 1,
      anon_sym_END,
    ACTIONS(462), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(67), 5,
      sym__expression,
      sym_string,
      sym_reason,
      sym__language_block_expression,
      aux_sym_language_block_repeat1,
    ACTIONS(456), 6,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(459), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [3369] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(469), 1,
      sym_number,
    STATE(168), 3,
      sym_string,
      sym_reason,
      sym__assignment_right_expression,
    ACTIONS(467), 6,
      sym_identifier,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(15), 18,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [3412] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(196), 1,
      sym_condition,
    ACTIONS(15), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(194), 3,
      sym__expression,
      sym_string,
      sym_reason,
    ACTIONS(471), 6,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(473), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [3457] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(475), 27,
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
  [3494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(479), 27,
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
  [3531] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(195), 1,
      sym_condition,
    ACTIONS(15), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    STATE(194), 3,
      sym__expression,
      sym_string,
      sym_reason,
    ACTIONS(471), 6,
      sym_number,
      sym_true,
      sym_false,
      sym_eoln,
      sym_invalid,
      sym_none,
    ACTIONS(473), 16,
      anon_sym_REASON_ACTIVATE,
      anon_sym_REASON_CLEAR,
      anon_sym_REASON_CLOSE,
      anon_sym_REASON_CONNECTION,
      anon_sym_REASON_DROP,
      anon_sym_REASON_DUPLICATE,
      anon_sym_REASON_INPUT,
      anon_sym_REASON_INSERT,
      anon_sym_REASON_MOVE,
      anon_sym_REASON_OPEN,
      anon_sym_REASON_PACK,
      anon_sym_REASON_REMOVE_CONNECTION,
      anon_sym_REASON_REMOVE_ELEMENT,
      anon_sym_REASON_SELECT_POINT,
      anon_sym_REASON_SELECT_RECTANGLE,
      anon_sym_REASON_UNSELECT,
  [3576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(483), 27,
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
  [3613] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(487), 27,
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
  [3650] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(491), 25,
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
  [3685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(495), 25,
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
  [3720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(499), 25,
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
  [3755] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(503), 25,
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
  [3790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 2,
      anon_sym_REASON_REMOVE,
      anon_sym_REASON_SELECT,
    ACTIONS(507), 25,
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
  [3825] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_LBRACE,
    ACTIONS(515), 1,
      anon_sym_LBRACK,
    STATE(86), 1,
      sym_dimension,
    STATE(158), 1,
      sym_parameter_block,
    ACTIONS(511), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 5,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [3856] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_LBRACE,
    STATE(149), 1,
      sym_function_options,
    ACTIONS(519), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3870] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    STATE(140), 1,
      sym_function_body,
    ACTIONS(523), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 4,
      sym_identifier,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LPAREN,
  [3894] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_LBRACE,
    ACTIONS(529), 1,
      sym_identifier,
    STATE(107), 1,
      sym_variable_declaration,
    STATE(130), 1,
      sym_parameter_block,
  [3910] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_LBRACE,
    STATE(141), 1,
      sym_parameter_block,
    ACTIONS(531), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3924] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_LBRACE,
    ACTIONS(533), 1,
      sym_identifier,
    STATE(100), 1,
      sym_function_declaration,
    STATE(156), 1,
      sym_function_options,
  [3940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 4,
      sym_identifier,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LPAREN,
  [3950] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_COMMA,
    ACTIONS(539), 1,
      anon_sym_RBRACK,
    STATE(90), 1,
      aux_sym_dimension_repeat1,
  [3963] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_COMMA,
    ACTIONS(544), 1,
      anon_sym_RBRACK,
    STATE(90), 1,
      aux_sym_dimension_repeat1,
  [3976] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_COMMA,
    ACTIONS(549), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      aux_sym_parameter_block_repeat1,
  [3989] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_SEMI,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    STATE(119), 1,
      aux_sym_functions_declaration_repeat1,
  [4002] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_SEMI,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    STATE(123), 1,
      aux_sym_variables_declaration_repeat1,
  [4015] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_SEMI,
    ACTIONS(561), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      aux_sym_tasks_declaration_repeat1,
  [4028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [4037] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_SEMI,
    ACTIONS(567), 1,
      anon_sym_COMMA,
    STATE(125), 1,
      aux_sym_colors_declaration_repeat1,
  [4050] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(126), 1,
      sym_set_item,
    STATE(139), 1,
      sym_string,
  [4063] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    ACTIONS(571), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      aux_sym_set_declaration_repeat1,
  [4076] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(139), 1,
      sym_string,
    STATE(151), 1,
      sym_set_item,
  [4089] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    ACTIONS(573), 1,
      anon_sym_SEMI,
    STATE(113), 1,
      aux_sym_functions_declaration_repeat1,
  [4102] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_SEMI,
    ACTIONS(577), 1,
      anon_sym_COMMA,
    STATE(129), 1,
      aux_sym_sets_declaration_repeat1,
  [4115] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_SEMI,
    ACTIONS(581), 1,
      anon_sym_COMMA,
    STATE(102), 1,
      aux_sym_tasks_declaration_repeat1,
  [4128] = 4,
    ACTIONS(584), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_DQUOTE,
    ACTIONS(588), 1,
      aux_sym_string_token1,
    STATE(121), 1,
      aux_sym_string_repeat1,
  [4141] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_COMMA,
    ACTIONS(590), 1,
      anon_sym_SEMI,
    STATE(101), 1,
      aux_sym_sets_declaration_repeat1,
  [4154] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_LBRACE,
    ACTIONS(592), 1,
      anon_sym_LPAREN,
    STATE(185), 1,
      sym_parameter_block,
  [4167] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_COMMA,
    ACTIONS(594), 1,
      anon_sym_SEMI,
    STATE(96), 1,
      aux_sym_colors_declaration_repeat1,
  [4180] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    ACTIONS(596), 1,
      anon_sym_SEMI,
    STATE(93), 1,
      aux_sym_variables_declaration_repeat1,
  [4193] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_COMMA,
    ACTIONS(598), 1,
      anon_sym_SEMI,
    STATE(102), 1,
      aux_sym_tasks_declaration_repeat1,
  [4206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [4215] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_SEMI,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    STATE(122), 1,
      aux_sym_variables_declaration_repeat1,
  [4228] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    ACTIONS(602), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      aux_sym_functions_declaration_repeat1,
  [4241] = 4,
    ACTIONS(584), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_DQUOTE,
    ACTIONS(606), 1,
      aux_sym_string_token1,
    STATE(112), 1,
      aux_sym_string_repeat1,
  [4254] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    ACTIONS(602), 1,
      anon_sym_SEMI,
    STATE(119), 1,
      aux_sym_functions_declaration_repeat1,
  [4267] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_COMMA,
    ACTIONS(612), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      aux_sym_set_declaration_repeat1,
  [4280] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    ACTIONS(614), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      aux_sym_set_declaration_repeat1,
  [4293] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    ACTIONS(571), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      aux_sym_set_declaration_repeat1,
  [4306] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_COMMA,
    ACTIONS(618), 1,
      anon_sym_RBRACE,
    STATE(120), 1,
      aux_sym_parameter_block_repeat1,
  [4319] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_COMMA,
    ACTIONS(620), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      aux_sym_dimension_repeat1,
  [4332] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_SEMI,
    ACTIONS(624), 1,
      anon_sym_COMMA,
    STATE(119), 1,
      aux_sym_functions_declaration_repeat1,
  [4345] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_COMMA,
    ACTIONS(627), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      aux_sym_parameter_block_repeat1,
  [4358] = 4,
    ACTIONS(584), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_DQUOTE,
    ACTIONS(631), 1,
      aux_sym_string_token1,
    STATE(112), 1,
      aux_sym_string_repeat1,
  [4371] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    ACTIONS(633), 1,
      anon_sym_SEMI,
    STATE(123), 1,
      aux_sym_variables_declaration_repeat1,
  [4384] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_SEMI,
    ACTIONS(637), 1,
      anon_sym_COMMA,
    STATE(123), 1,
      aux_sym_variables_declaration_repeat1,
  [4397] = 4,
    ACTIONS(584), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_DQUOTE,
    ACTIONS(642), 1,
      aux_sym_string_token1,
    STATE(128), 1,
      aux_sym_string_repeat1,
  [4410] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      anon_sym_SEMI,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    STATE(125), 1,
      aux_sym_colors_declaration_repeat1,
  [4423] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    ACTIONS(649), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      aux_sym_set_declaration_repeat1,
  [4436] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(116), 1,
      sym_set_item,
    STATE(139), 1,
      sym_string,
  [4449] = 4,
    ACTIONS(584), 1,
      sym_comment,
    ACTIONS(631), 1,
      aux_sym_string_token1,
    ACTIONS(651), 1,
      anon_sym_DQUOTE,
    STATE(112), 1,
      aux_sym_string_repeat1,
  [4462] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_SEMI,
    ACTIONS(655), 1,
      anon_sym_COMMA,
    STATE(129), 1,
      aux_sym_sets_declaration_repeat1,
  [4475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      sym_identifier,
    STATE(110), 1,
      sym_variable_declaration,
  [4485] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      sym_identifier,
    STATE(133), 1,
      sym_variable_declaration,
  [4495] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      sym_identifier,
    STATE(148), 1,
      sym_task_declaration,
  [4505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4513] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(206), 1,
      sym_string,
  [4523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      sym_identifier,
    STATE(106), 1,
      sym_color_declaration,
  [4549] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      sym_identifier,
    STATE(161), 1,
      sym_function_declaration,
  [4559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4591] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      sym_identifier,
    STATE(104), 1,
      sym_set_declaration,
  [4601] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      sym_identifier,
    STATE(94), 1,
      sym_task_declaration,
  [4611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 2,
      sym_identifier,
      anon_sym_LBRACE,
  [4619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4643] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    STATE(147), 1,
      sym_function_body,
  [4653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4669] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      sym_identifier,
    STATE(142), 1,
      sym_set_declaration,
  [4679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      sym_identifier,
    STATE(111), 1,
      sym_function_declaration,
  [4713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4729] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      sym_identifier,
    STATE(136), 1,
      sym_color_declaration,
  [4739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      anon_sym_DB_MANAGER,
  [4762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_SEMI,
  [4769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_RPAREN,
  [4776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      sym_number,
  [4783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_SEMI,
  [4790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      sym_number,
  [4797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_SEMI,
  [4804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_SEMI,
  [4811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_SEMI,
  [4818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_UI_MANAGER,
  [4825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_SEMI,
  [4832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_FUNCTIONS,
  [4839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_SEMI,
  [4846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_LPAREN,
  [4853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      anon_sym_RBRACE,
  [4860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_SEMI,
  [4867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_OPERATOR,
  [4874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_SEMI,
  [4881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_STREAMER,
  [4888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_SEMI,
  [4895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_DATAPOOL,
  [4902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_LPAREN,
  [4909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_LPAREN,
  [4916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_LPAREN,
  [4923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_SEMI,
  [4930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      aux_sym_parameter_block_token1,
  [4937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_LANGUAGE,
  [4944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_SEMI,
  [4951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_SEMI,
  [4958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_SEMI,
  [4965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_DB_MANAGER,
  [4972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_UI_MANAGER,
  [4979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_RPAREN,
  [4986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_RPAREN,
  [4993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      anon_sym_RPAREN,
  [5000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_SEMI,
  [5007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_FUNCTIONS,
  [5014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      aux_sym_include_token1,
  [5021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_OPERATOR,
  [5028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_STREAMER,
  [5035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_SEMI,
  [5042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      aux_sym_parameter_block_token1,
  [5049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_DATAPOOL,
  [5056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_LANGUAGE,
  [5063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_SEMI,
  [5070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      ts_builtin_sym_end,
  [5077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_DOT,
  [5084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 94,
  [SMALL_STATE(4)] = 188,
  [SMALL_STATE(5)] = 260,
  [SMALL_STATE(6)] = 332,
  [SMALL_STATE(7)] = 404,
  [SMALL_STATE(8)] = 476,
  [SMALL_STATE(9)] = 548,
  [SMALL_STATE(10)] = 616,
  [SMALL_STATE(11)] = 684,
  [SMALL_STATE(12)] = 752,
  [SMALL_STATE(13)] = 800,
  [SMALL_STATE(14)] = 848,
  [SMALL_STATE(15)] = 895,
  [SMALL_STATE(16)] = 942,
  [SMALL_STATE(17)] = 989,
  [SMALL_STATE(18)] = 1036,
  [SMALL_STATE(19)] = 1081,
  [SMALL_STATE(20)] = 1126,
  [SMALL_STATE(21)] = 1171,
  [SMALL_STATE(22)] = 1216,
  [SMALL_STATE(23)] = 1261,
  [SMALL_STATE(24)] = 1306,
  [SMALL_STATE(25)] = 1351,
  [SMALL_STATE(26)] = 1396,
  [SMALL_STATE(27)] = 1441,
  [SMALL_STATE(28)] = 1500,
  [SMALL_STATE(29)] = 1559,
  [SMALL_STATE(30)] = 1604,
  [SMALL_STATE(31)] = 1649,
  [SMALL_STATE(32)] = 1694,
  [SMALL_STATE(33)] = 1739,
  [SMALL_STATE(34)] = 1784,
  [SMALL_STATE(35)] = 1829,
  [SMALL_STATE(36)] = 1874,
  [SMALL_STATE(37)] = 1919,
  [SMALL_STATE(38)] = 1964,
  [SMALL_STATE(39)] = 2009,
  [SMALL_STATE(40)] = 2054,
  [SMALL_STATE(41)] = 2099,
  [SMALL_STATE(42)] = 2158,
  [SMALL_STATE(43)] = 2205,
  [SMALL_STATE(44)] = 2247,
  [SMALL_STATE(45)] = 2289,
  [SMALL_STATE(46)] = 2331,
  [SMALL_STATE(47)] = 2373,
  [SMALL_STATE(48)] = 2415,
  [SMALL_STATE(49)] = 2457,
  [SMALL_STATE(50)] = 2499,
  [SMALL_STATE(51)] = 2550,
  [SMALL_STATE(52)] = 2601,
  [SMALL_STATE(53)] = 2652,
  [SMALL_STATE(54)] = 2703,
  [SMALL_STATE(55)] = 2754,
  [SMALL_STATE(56)] = 2805,
  [SMALL_STATE(57)] = 2852,
  [SMALL_STATE(58)] = 2899,
  [SMALL_STATE(59)] = 2946,
  [SMALL_STATE(60)] = 2993,
  [SMALL_STATE(61)] = 3040,
  [SMALL_STATE(62)] = 3087,
  [SMALL_STATE(63)] = 3134,
  [SMALL_STATE(64)] = 3181,
  [SMALL_STATE(65)] = 3228,
  [SMALL_STATE(66)] = 3275,
  [SMALL_STATE(67)] = 3322,
  [SMALL_STATE(68)] = 3369,
  [SMALL_STATE(69)] = 3412,
  [SMALL_STATE(70)] = 3457,
  [SMALL_STATE(71)] = 3494,
  [SMALL_STATE(72)] = 3531,
  [SMALL_STATE(73)] = 3576,
  [SMALL_STATE(74)] = 3613,
  [SMALL_STATE(75)] = 3650,
  [SMALL_STATE(76)] = 3685,
  [SMALL_STATE(77)] = 3720,
  [SMALL_STATE(78)] = 3755,
  [SMALL_STATE(79)] = 3790,
  [SMALL_STATE(80)] = 3825,
  [SMALL_STATE(81)] = 3845,
  [SMALL_STATE(82)] = 3856,
  [SMALL_STATE(83)] = 3870,
  [SMALL_STATE(84)] = 3884,
  [SMALL_STATE(85)] = 3894,
  [SMALL_STATE(86)] = 3910,
  [SMALL_STATE(87)] = 3924,
  [SMALL_STATE(88)] = 3940,
  [SMALL_STATE(89)] = 3950,
  [SMALL_STATE(90)] = 3963,
  [SMALL_STATE(91)] = 3976,
  [SMALL_STATE(92)] = 3989,
  [SMALL_STATE(93)] = 4002,
  [SMALL_STATE(94)] = 4015,
  [SMALL_STATE(95)] = 4028,
  [SMALL_STATE(96)] = 4037,
  [SMALL_STATE(97)] = 4050,
  [SMALL_STATE(98)] = 4063,
  [SMALL_STATE(99)] = 4076,
  [SMALL_STATE(100)] = 4089,
  [SMALL_STATE(101)] = 4102,
  [SMALL_STATE(102)] = 4115,
  [SMALL_STATE(103)] = 4128,
  [SMALL_STATE(104)] = 4141,
  [SMALL_STATE(105)] = 4154,
  [SMALL_STATE(106)] = 4167,
  [SMALL_STATE(107)] = 4180,
  [SMALL_STATE(108)] = 4193,
  [SMALL_STATE(109)] = 4206,
  [SMALL_STATE(110)] = 4215,
  [SMALL_STATE(111)] = 4228,
  [SMALL_STATE(112)] = 4241,
  [SMALL_STATE(113)] = 4254,
  [SMALL_STATE(114)] = 4267,
  [SMALL_STATE(115)] = 4280,
  [SMALL_STATE(116)] = 4293,
  [SMALL_STATE(117)] = 4306,
  [SMALL_STATE(118)] = 4319,
  [SMALL_STATE(119)] = 4332,
  [SMALL_STATE(120)] = 4345,
  [SMALL_STATE(121)] = 4358,
  [SMALL_STATE(122)] = 4371,
  [SMALL_STATE(123)] = 4384,
  [SMALL_STATE(124)] = 4397,
  [SMALL_STATE(125)] = 4410,
  [SMALL_STATE(126)] = 4423,
  [SMALL_STATE(127)] = 4436,
  [SMALL_STATE(128)] = 4449,
  [SMALL_STATE(129)] = 4462,
  [SMALL_STATE(130)] = 4475,
  [SMALL_STATE(131)] = 4485,
  [SMALL_STATE(132)] = 4495,
  [SMALL_STATE(133)] = 4505,
  [SMALL_STATE(134)] = 4513,
  [SMALL_STATE(135)] = 4523,
  [SMALL_STATE(136)] = 4531,
  [SMALL_STATE(137)] = 4539,
  [SMALL_STATE(138)] = 4549,
  [SMALL_STATE(139)] = 4559,
  [SMALL_STATE(140)] = 4567,
  [SMALL_STATE(141)] = 4575,
  [SMALL_STATE(142)] = 4583,
  [SMALL_STATE(143)] = 4591,
  [SMALL_STATE(144)] = 4601,
  [SMALL_STATE(145)] = 4611,
  [SMALL_STATE(146)] = 4619,
  [SMALL_STATE(147)] = 4627,
  [SMALL_STATE(148)] = 4635,
  [SMALL_STATE(149)] = 4643,
  [SMALL_STATE(150)] = 4653,
  [SMALL_STATE(151)] = 4661,
  [SMALL_STATE(152)] = 4669,
  [SMALL_STATE(153)] = 4679,
  [SMALL_STATE(154)] = 4687,
  [SMALL_STATE(155)] = 4695,
  [SMALL_STATE(156)] = 4703,
  [SMALL_STATE(157)] = 4713,
  [SMALL_STATE(158)] = 4721,
  [SMALL_STATE(159)] = 4729,
  [SMALL_STATE(160)] = 4739,
  [SMALL_STATE(161)] = 4747,
  [SMALL_STATE(162)] = 4755,
  [SMALL_STATE(163)] = 4762,
  [SMALL_STATE(164)] = 4769,
  [SMALL_STATE(165)] = 4776,
  [SMALL_STATE(166)] = 4783,
  [SMALL_STATE(167)] = 4790,
  [SMALL_STATE(168)] = 4797,
  [SMALL_STATE(169)] = 4804,
  [SMALL_STATE(170)] = 4811,
  [SMALL_STATE(171)] = 4818,
  [SMALL_STATE(172)] = 4825,
  [SMALL_STATE(173)] = 4832,
  [SMALL_STATE(174)] = 4839,
  [SMALL_STATE(175)] = 4846,
  [SMALL_STATE(176)] = 4853,
  [SMALL_STATE(177)] = 4860,
  [SMALL_STATE(178)] = 4867,
  [SMALL_STATE(179)] = 4874,
  [SMALL_STATE(180)] = 4881,
  [SMALL_STATE(181)] = 4888,
  [SMALL_STATE(182)] = 4895,
  [SMALL_STATE(183)] = 4902,
  [SMALL_STATE(184)] = 4909,
  [SMALL_STATE(185)] = 4916,
  [SMALL_STATE(186)] = 4923,
  [SMALL_STATE(187)] = 4930,
  [SMALL_STATE(188)] = 4937,
  [SMALL_STATE(189)] = 4944,
  [SMALL_STATE(190)] = 4951,
  [SMALL_STATE(191)] = 4958,
  [SMALL_STATE(192)] = 4965,
  [SMALL_STATE(193)] = 4972,
  [SMALL_STATE(194)] = 4979,
  [SMALL_STATE(195)] = 4986,
  [SMALL_STATE(196)] = 4993,
  [SMALL_STATE(197)] = 5000,
  [SMALL_STATE(198)] = 5007,
  [SMALL_STATE(199)] = 5014,
  [SMALL_STATE(200)] = 5021,
  [SMALL_STATE(201)] = 5028,
  [SMALL_STATE(202)] = 5035,
  [SMALL_STATE(203)] = 5042,
  [SMALL_STATE(204)] = 5049,
  [SMALL_STATE(205)] = 5056,
  [SMALL_STATE(206)] = 5063,
  [SMALL_STATE(207)] = 5070,
  [SMALL_STATE(208)] = 5077,
  [SMALL_STATE(209)] = 5084,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(103),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(199),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(134),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(208),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2), SHIFT_REPEAT(124),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2), SHIFT_REPEAT(6),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2), SHIFT_REPEAT(85),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2), SHIFT_REPEAT(14),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_body_repeat1, 2), SHIFT_REPEAT(14),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2), SHIFT_REPEAT(4),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2), SHIFT_REPEAT(189),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2), SHIFT_REPEAT(186),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2), SHIFT_REPEAT(183),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_repeat1, 2), SHIFT_REPEAT(175),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reason, 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reason, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functions_block, 5),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions_block, 5),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_db_manager_block, 5),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_db_manager_block, 5),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language_block, 5),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_language_block, 5),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_statement, 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_statement, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datapool_block, 5),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datapool_block, 5),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, .production_id = 6),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4, .production_id = 6),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_block, 5),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_block, 5),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_declaration, 4, .production_id = 5),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variables_declaration, 4, .production_id = 5),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(124),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(27),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(85),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(14),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(14),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(137),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datapool_block_repeat1, 2), SHIFT_REPEAT(143),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datapool_block, 4),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datapool_block, 4),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_streamer_block, 4),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_streamer_block, 4),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_declaration, 5, .production_id = 5),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variables_declaration, 5, .production_id = 5),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language_block, 4),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_language_block, 4),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_block, 4),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator_block, 4),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ui_manager_block, 5),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ui_manager_block, 5),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_db_manager_block, 4),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_db_manager_block, 4),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_streamer_block, 5),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_streamer_block, 5),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ui_manager_block, 4),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ui_manager_block, 4),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_declaration, 3, .production_id = 5),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variables_declaration, 3, .production_id = 5),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functions_block, 4),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions_block, 4),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 3, .production_id = 1),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 3, .production_id = 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit, 2),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exit, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_part, 2),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_part, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 2),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_loop, 5),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_loop, 5),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_block_repeat1, 2), SHIFT_REPEAT(124),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_block_repeat1, 2), SHIFT_REPEAT(53),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_block_repeat1, 2), SHIFT_REPEAT(14),
  [350] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_functions_block_repeat1, 2), SHIFT_REPEAT(14),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functions_block_repeat1, 2),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_block_repeat1, 2), SHIFT_REPEAT(87),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operator_block_repeat1, 2), SHIFT_REPEAT(124),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operator_block_repeat1, 2), SHIFT_REPEAT(54),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operator_block_repeat1, 2), SHIFT_REPEAT(14),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operator_block_repeat1, 2), SHIFT_REPEAT(14),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operator_block_repeat1, 2),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operator_block_repeat1, 2), SHIFT_REPEAT(144),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_streamer_block_repeat1, 2), SHIFT_REPEAT(124),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_streamer_block_repeat1, 2), SHIFT_REPEAT(56),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_streamer_block_repeat1, 2), SHIFT_REPEAT(14),
  [388] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_streamer_block_repeat1, 2), SHIFT_REPEAT(14),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_streamer_block_repeat1, 2),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ui_manager_block_repeat1, 2), SHIFT_REPEAT(124),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ui_manager_block_repeat1, 2), SHIFT_REPEAT(57),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ui_manager_block_repeat1, 2), SHIFT_REPEAT(14),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ui_manager_block_repeat1, 2), SHIFT_REPEAT(14),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ui_manager_block_repeat1, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_db_manager_block_repeat1, 2), SHIFT_REPEAT(124),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_db_manager_block_repeat1, 2), SHIFT_REPEAT(66),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_db_manager_block_repeat1, 2), SHIFT_REPEAT(14),
  [448] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_db_manager_block_repeat1, 2), SHIFT_REPEAT(14),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_db_manager_block_repeat1, 2),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_language_block_repeat1, 2), SHIFT_REPEAT(124),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_language_block_repeat1, 2), SHIFT_REPEAT(67),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_language_block_repeat1, 2), SHIFT_REPEAT(14),
  [462] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_language_block_repeat1, 2), SHIFT_REPEAT(14),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_language_block_repeat1, 2),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sets_declaration, 4),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sets_declaration, 4),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colors_declaration, 3),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_colors_declaration, 3),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colors_declaration, 4),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_colors_declaration, 4),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sets_declaration, 3),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sets_declaration, 3),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tasks_declaration, 4),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tasks_declaration, 4),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functions_declaration, 5),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions_declaration, 5),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functions_declaration, 3),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions_declaration, 3),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tasks_declaration, 3),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tasks_declaration, 3),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functions_declaration, 4),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functions_declaration, 4),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 1, .production_id = 2),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_declaration, 1, .production_id = 3),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 1, .production_id = 4),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_block, 3),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2, .production_id = 2),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_block, 4),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimension_repeat1, 2), SHIFT_REPEAT(167),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dimension_repeat1, 2),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_block_repeat1, 2), SHIFT_REPEAT(203),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_block_repeat1, 2),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 3),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tasks_declaration_repeat1, 2),
  [581] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tasks_declaration_repeat1, 2), SHIFT_REPEAT(132),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 4),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [606] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(112),
  [609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_set_declaration_repeat1, 2), SHIFT_REPEAT(99),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_set_declaration_repeat1, 2),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functions_declaration_repeat1, 2),
  [624] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_declaration_repeat1, 2), SHIFT_REPEAT(138),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_declaration_repeat1, 2),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_declaration_repeat1, 2), SHIFT_REPEAT(131),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_colors_declaration_repeat1, 2),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_colors_declaration_repeat1, 2), SHIFT_REPEAT(159),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sets_declaration_repeat1, 2),
  [655] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sets_declaration_repeat1, 2), SHIFT_REPEAT(152),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_declaration, 3, .production_id = 7),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_item, 1),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 2, .production_id = 4),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, .production_id = 2),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_options, 2),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_declaration, 6, .production_id = 9),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_declaration, 3, .production_id = 8),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_declaration, 5, .production_id = 9),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 2),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 3),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_declaration, 4, .production_id = 9),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [776] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
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
