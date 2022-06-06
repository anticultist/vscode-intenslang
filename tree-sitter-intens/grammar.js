const PREC = {
  // precedence
  ASSIGNMENT: -1,
  DEFAULT: 0,
  LOGICAL_OR: 1,
  LOGICAL_AND: 2,
  EQUAL: 6,
  BITWISE_AND: 5,
  RELATIONAL: 7,
  ADD: 10,
  MULTIPLY: 11,
  CALL: 12,
  FIELD: 13,
  FIELD_ALIGNMENT: 14,
};

module.exports = grammar({
  name: 'intens',

  extras: ($) => [/\s|\\\r?\n/, $.comment, $.preprocessor_directive],

  word: ($) => $.identifier,

  rules: {
    source_file: ($) => repeat($._high_level_block),

    identifier: ($) => /[a-zA-Z][a-zA-Z_0-9#]*/,

    _high_level_block: ($) =>
      choice(
        $._expression,
        $.assignment,
        $.include,
        $.description,
        $.help_file,
        $.user_groups,
        $.language_block,
        $.datapool_block,
        $.streamer_block,
        $.operator_block,
        $.functions_block,
        $.ui_manager_block,
        $.db_manager_block,
        $.end_statement,
      ),

    // TODO: improve name
    _expression: ($) =>
      choice($.string, $.number, $.true, $.false, $.eoln, $.invalid, $.none, $.reason),

    comment: ($) => token(seq('//', /.*/)),
    // comment: $ => token(seq('//', /(\\(.|\r?\n)|[^\\\n])*/)),

    preprocessor_directive: ($) =>
      prec.right(33, seq('#', $.number, $.string, optional($.number), /\r?\n/)),

    // preprocessor_directive: ($) => seq('#', $.number, $.string),

    string: ($) => seq('"', repeat(choice(/[^"\\\n]+|\\\r?\n/, '#')), '"'),

    number: ($) =>
      token(
        seq(
          optional(/[+-]/),
          /[0-9][0-9_]*/,
          optional(seq('.', optional(/[0-9][0-9_]*/))),
          optional(/[eE][+-]?([0-9][0-9_]*)/),
        ),
      ),

    true: ($) => 'TRUE',
    false: ($) => 'FALSE',
    eoln: ($) => 'EOLN',
    invalid: ($) => 'INVALID',
    none: ($) => 'NONE',

    primitive_type: ($) => choice('CDATA', 'COMPLEX', 'INTEGER', 'REAL', 'STRING'),

    reason: ($) =>
      choice(
        'REASON_ACTIVATE',
        'REASON_CLEAR',
        'REASON_CLOSE',
        'REASON_CONNECTION',
        'REASON_DROP',
        'REASON_DUPLICATE',
        'REASON_INPUT',
        'REASON_INSERT',
        'REASON_MOVE',
        'REASON_OPEN',
        'REASON_PACK',
        'REASON_REMOVE',
        'REASON_REMOVE_CONNECTION',
        'REASON_REMOVE_ELEMENT',
        'REASON_SELECT',
        'REASON_SELECT_POINT',
        'REASON_SELECT_RECTANGLE',
        'REASON_UNSELECT',
      ),

    assignment: ($) =>
      prec.right(
        PREC.ASSIGNMENT,
        seq(
          field('left', $._assignment_left_expression),
          choice('=', '+=', '-=', '*=', '/='),
          field('right', $._assignment_right_expression),
          ';',
        ),
      ),

    _assignment_left_expression: ($) =>
      choice($.identifier, $.var_usage, $.field_expression, $.list),

    // TODO: improve name
    _assignment_right_expression: ($) =>
      choice(
        $.identifier,
        $.var_usage,
        $.field_expression,
        $.string,
        $.number,
        $.true,
        $.false,
        $.eoln,
        $.invalid,
        $.none,
        $.reason,
        $.binary_expression,
        $.tuple,
        $.list,
        $.negation,
        $.function_call,
        // $.special_function_call,
      ),

    binary_expression: ($) => {
      const table = [
        ['+', PREC.ADD],
        ['-', PREC.ADD],
        ['*', PREC.MULTIPLY],
        ['/', PREC.MULTIPLY],
        ['==', PREC.EQUAL],
        ['!=', PREC.EQUAL],
        ['>', PREC.RELATIONAL],
        ['>=', PREC.RELATIONAL],
        ['<=', PREC.RELATIONAL],
        ['<', PREC.RELATIONAL],
        ['&&', PREC.LOGICAL_AND],
        ['||', PREC.LOGICAL_OR],
        ['&', PREC.BITWISE_AND],
      ];

      return choice(
        ...table.map(([operator, precedence]) => {
          return prec.left(
            precedence,
            seq(
              field('left', $._assignment_right_expression),
              field('operator', operator),
              field('right', $._assignment_right_expression),
            ),
          );
        }),
      );
    },

    negation: ($) => seq('!', $._assignment_right_expression),

    function_call: ($) =>
      prec(
        PREC.CALL,
        seq(alias($.identifier, $.function_name), '(', optional($.function_arguments), ')'),
      ),

    special_function_call: ($) =>
      prec(
        PREC.CALL,
        seq(alias($.identifier, $.function_name), '{', optional($.function_arguments), '}'),
      ),

    function_arguments: ($) =>
      commaSep(choice($._assignment_right_expression, $.parameter_assignment)),

    field_expression: ($) =>
      choice(
        seq(choice($.identifier, $.var_usage), $.list),
        prec(PREC.FIELD, dotSep(seq(choice($.identifier, $.var_usage), optional($.list)))),
      ),

    field_conversion: ($) =>
      seq(':', $.number, optional(seq(':', $.number)), optional(seq(':', $.thousand_separator))),

    thousand_separator: ($) => 'TSEP',

    var_usage: ($) => seq('VAR', '(', $._assignment_right_expression, ')'),

    include: ($) => seq('INCLUDE', alias(/[A-Za-z_0-9\./]+/, $.file_name)),

    description: ($) => seq('DESCRIPTION', field('description_text', $.string), ';'),

    help_file: ($) =>
      seq('HELPFILE', commaSep(choice(alias($.string, $.file_name), $.open_file, $.open_url)), ';'),

    open_file: ($) => seq('OPEN_FILE', alias($.string, $.file_name), optional($.help_file_option)),

    open_url: ($) => seq('OPEN_URL', alias($.string, $.document_url), optional($.help_file_option)),

    help_file_option: ($) =>
      choice(
        alias($.string, $.title),
        alias('HIDDEN', $.hidden),
        seq('HELPKEY', '(', commaSep(choice($.string, $.identifier)), ')'),
      ),

    user_groups: ($) => seq('USERGROUPS', commaSep($.user_group), ';'),

    user_group: ($) => seq($.identifier, '(', commaSep($.string), ')'),

    parameter_block: ($) =>
      seq(
        '{',
        optionalCommaSep(
          choice(
            seq($.parameter, optional($.parameter_block)),
            $.field_expression,
            $.parameter_assignment,
            $.string,
            $.tuple,
            $.function_call,
          ),
        ),
        '}',
      ),

    parameter_assignment: ($) =>
      prec(PREC.ASSIGNMENT, seq($.parameter, '=', $._assignment_right_expression)),

    label_assignment: ($) => seq($.string, ':', $._assignment_right_expression),

    // TODO: get rid of subtree of identifiers here
    parameter: ($) => prec(1, repeat1($.identifier)),

    end_statement: ($) => seq('END', '.'),

    language_block: ($) =>
      seq('LANGUAGE', repeat($._language_block_expression), 'END', 'LANGUAGE', ';'),

    _language_block_expression: ($) => choice($._expression, $.assignment),

    datapool_block: ($) =>
      seq('DATAPOOL', repeat($._datapool_block_expression), 'END', 'DATAPOOL', ';'),

    _datapool_block_expression: ($) =>
      choice(
        $._expression,
        $.sets_declaration,
        $.structure_declaration,
        $.colors_declaration,
        $.variables_declaration,
        $.custom_variable_type_declaration,
      ),

    variables_declaration: ($) =>
      seq(
        field('type', $.primitive_type),
        optional($.parameter_block),
        commaSep($.variable_declaration),
        ';',
      ),

    variable_declaration: ($) =>
      seq(
        field('name', alias($.identifier, $.variable_identifier)),
        optional($.dimension),
        optional($.parameter_block),
      ),

    dimension: ($) => seq('[', commaSep($.number), ']'),

    colors_declaration: ($) => seq('COLOR', commaSep($.color_declaration), ';'),

    color_declaration: ($) =>
      seq(field('name', alias($.identifier, $.color_identifier)), $.color_set),

    color_set: ($) => seq('(', optionalCommaSep($.color_set_item), ')'),

    color_set_item: ($) =>
      seq(choice('INVALID', 'ELSE', $.color_set_value, $.color_set_range), '=', $.tuple),

    color_set_value: ($) =>
      seq(
        optional(choice('<', '>')),
        choice(
          $.identifier,
          $.number,
          $.string,
          $.field_expression,
          $.binary_expression,
          $.function_call,
        ),
      ),

    color_set_range: ($) => seq('RANGE', '(', $.color_set_value, ',', $.color_set_value, ')'),

    tuple: ($) =>
      prec(
        -1,
        seq(
          '(',
          optionalCommaSep(choice($._assignment_right_expression, $.parameter_assignment)),
          ')',
        ),
      ),

    list: ($) =>
      seq(
        '[',
        commaSep(
          choice(
            $._assignment_right_expression,
            $.parameter_assignment,
            $.label_assignment,
            $.wildcard,
          ),
        ),
        ']',
      ),

    wildcard: ($) => choice('*', '#', /#[a-zA-Z_0-9#]*/),

    sets_declaration: ($) => seq('SET', commaSep($.set_declaration), ';'),

    set_declaration: ($) =>
      seq(
        field('name', alias($.identifier, $.set_identifier)),
        optional($.parameter_block),
        '(',
        commaSep($.set_item),
        ')',
      ),

    set_item: ($) => choice($.string, $.set_assignment),

    set_assignment: ($) => seq($.string, '=', choice($.string, $.number)),

    structure_declaration: ($) =>
      seq(
        'STRUCT',
        field('name', alias($.identifier, $.structure_identifier)),
        optional($.inheritance),
        '{',
        repeat(choice($.variables_declaration, $.custom_variable_type_declaration)),
        '}',
        ';',
      ),

    inheritance: ($) => seq(':', commaSep(alias($.identifier, $.parent))),

    custom_variable_type_declaration: ($) =>
      seq(
        field('type', /([A-Za-z_][A-Za-z_0-9]*)/),
        optional($.parameter_block),
        commaSep($.variable_declaration),
        ';',
      ),

    streamer_block: ($) => seq('STREAMER', repeat($.stream_definition), 'END', 'STREAMER', ';'),

    stream_definition: ($) =>
      seq(
        field('name', alias($.identifier, $.stream_identifier)),
        optional($.parameter_block),
        '(',
        commaSep(seq($._assignment_right_expression, optional($.field_conversion))),
        ')',
        ';',
      ),

    operator_block: ($) =>
      seq('OPERATOR', repeat($._operator_block_expression), 'END', 'OPERATOR', ';'),

    _operator_block_expression: ($) => choice($.operators_declaration, $.tasks_declaration),

    // TODO: improve PROCESSGROUP
    operators_declaration: ($) =>
      seq(
        field(
          'type',
          choice('SOCKET', 'PROCESS', 'PROCESSGROUP', 'TIMER', 'FILESTREAM', 'MESSAGE_QUEUE'),
        ),
        commaSep($.operator_declaration),
        ';',
      ),

    // NOTE: this is a generalized superset
    operator_declaration: ($) =>
      seq(
        field('name', $.identifier),
        optional(seq(':', alias($.identifier, $.parent))),
        optional(seq('=', alias($.identifier, $.reference))),
        optional($.parameter_block),
        optional($.operator_statements),
      ),

    operator_statements: ($) =>
      seq('(', optionalCommaSep(choice($._assignment_right_expression, $.assignment)), ')'),

    tasks_declaration: ($) => seq('TASK', commaSep($.task_declaration), ';'),

    task_declaration: ($) =>
      seq(
        field('name', alias($.identifier, $.task_identifier)),
        optional(seq($.parameter_block, alias($.function_body, $.task_body))),
      ),

    functions_block: ($) =>
      seq('FUNCTIONS', repeat($._functions_block_expression), 'END', 'FUNCTIONS', ';'),

    _functions_block_expression: ($) => choice($._expression, $.functions_declaration),

    functions_declaration: ($) =>
      seq('FUNC', optional($.parameter_block), commaSep($.function_declaration), ';'),

    function_declaration: ($) =>
      seq(field('name', alias($.identifier, $.function_identifier)), optional($.function_body)),

    function_body: ($) => seq('{', repeat($._function_expression), '}'),

    _function_expression: ($) =>
      choice(
        $.variables_declaration,
        $.assignment,
        $.if_statement,
        $.while_loop,
        $.block,
        $.return,
        $.exit,
        $.function_call,
        $._expression,
        ';', // null statement
      ),

    block: ($) => seq('{', repeat($._function_expression), '}'),

    return: ($) => seq('RETURN', ';'),

    exit: ($) => seq('EXIT', ';'),

    if_statement: ($) =>
      prec.right(seq('IF', '(', $.condition, ')', $._function_expression, optional($.else_part))),

    condition: ($) => choice($._assignment_right_expression),

    else_part: ($) => seq('ELSE', $._function_expression),

    while_loop: ($) => seq('WHILE', '(', $.condition, ')', $._function_expression),

    ui_manager_block: ($) =>
      seq(
        'UI_MANAGER',
        repeat(
          choice(
            $.field_group_declarations,
            $.form_declarations,
            $.menu_declarations,
            $.ui_declarations,
            $.table_declarations,
          ),
        ),
        'END',
        'UI_MANAGER',
        ';',
      ),

    // NOTE: this is a generalized superset
    ui_declarations: ($) =>
      seq(
        choice(
          'FOLDER',
          'IMAGE',
          'INDEX',
          'LINEPLOT',
          'LIST',
          'LISTPLOT',
          'LOG_WINDOW',
          'NAVIGATOR',
          'PLOT2D',
          'PLUGIN',
          'PSPLOT',
          'STD_WINDOW',
          'TEXT_WINDOW',
          'THERMO',
          'TIMETABLE',
          'UNIPLOT',
          'XRT3DPLOT',
          'XRTGRAPH',
        ),
        commaSep($.ui_declaration),
        ';',
      ),

    ui_declaration: ($) =>
      seq(field('name', $.identifier), optional($.parameter_block), optional($.ui_subitems)),

    ui_subitems: ($) => seq('(', optional(commaSep($.ui_subitem)), ')'),

    ui_subitem: ($) =>
      choice(
        seq($.list, $.tuple, optional($.list)),
        seq($.identifier, optional($.parameter_block), $.tuple),
        $._assignment_right_expression,
      ),

    field_group_declarations: ($) => seq('FIELDGROUP', commaSep($.field_group_declaration), ';'),

    field_group_declaration: ($) =>
      seq(field('name', $.identifier), optional($.parameter_block), $.field_group_lines),

    field_group_lines: ($) => seq('(', optionalCommaSep($.field_group_line), ')'),

    field_group_line: ($) =>
      repeat1(
        seq(
          $._assignment_right_expression,
          optional($.field_conversion),
          optional($.field_alignment),
          optional($.parameter_block),
        ),
      ),

    field_alignment: ($) => prec(PREC.FIELD_ALIGNMENT, choice('<', '>', '|')),

    form_declarations: ($) => seq('FORM', commaSep($.form_declaration), ';'),

    form_declaration: ($) =>
      seq(field('name', $.identifier), optional($.parameter_block), $.form_element_list),

    form_element_list: ($) =>
      seq(
        '(',
        optionalCommaSep(
          choice($.parameter, $.function_call, $.special_function_call, $.form_element_list),
        ),
        ')',
        optional($.form_element_options),
      ),

    form_element_options: ($) =>
      seq('[', optionalCommaSep(choice($.parameter, $.parameter_assignment)), ']'),

    menu_declarations: ($) => seq('MENU', commaSep($.menu_declaration), ';'),

    menu_declaration: ($) =>
      seq(
        field('name', choice($.identifier, $.string)),
        optional($.parameter_block),
        '(',
        optional($.menu_items),
        ')',
      ),

    menu_items: ($) =>
      commaSep(choice($.menu_function_item, $.menu_form_item, $.menu_submenu_item, $.parameter)),

    menu_function_item: ($) => seq('FUNC', $.identifier, '=', $.string),

    menu_form_item: ($) => seq('FORM', $.identifier),

    menu_submenu_item: ($) =>
      seq(
        'MENU',
        field('name', choice($.identifier, $.string)),
        optional($.parameter_block),
        '(',
        optional($.menu_items),
        ')',
      ),

    table_declarations: ($) => seq('TABLE', commaSep($.table_declaration), ';'),

    table_declaration: ($) =>
      seq(field('name', $.identifier), optional($.parameter_block), $.table_configuration),

    table_configuration: ($) => seq('(', optional(repeat(seq($.function_call, ';'))), ')'),

    db_manager_block: ($) =>
      seq('DB_MANAGER', repeat($._db_manager_block_expression), 'END', 'DB_MANAGER', ';'),

    _db_manager_block_expression: ($) => choice($._expression),
  },
});

function commaSep(rule) {
  return seq(rule, repeat(seq(',', rule)));
}

function optionalCommaSep(rule) {
  return optional(seq(rule, repeat(seq(',', rule))));
}

function dotSep(rule) {
  return seq(rule, repeat1(seq('.', rule)));
}
