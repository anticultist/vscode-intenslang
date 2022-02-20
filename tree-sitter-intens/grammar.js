const PREC = {
  // precedence
  ASSIGNMENT: -1,
  DEFAULT: 0,
  EQUAL: 6,
  RELATIONAL: 7,
  ADD: 10,
  MULTIPLY: 11,
};

module.exports = grammar({
  name: 'intens',

  extras: ($) => [/\s|\\\r?\n/, $.comment],

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

    string: ($) => seq('"', repeat(choice(/[^"\\\n]+|\\\r?\n/)), '"'),

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

    _assignment_left_expression: ($) => choice($.identifier),

    // TODO: improve name
    _assignment_right_expression: ($) =>
      choice(
        $.identifier,
        $.string,
        $.number,
        $.true,
        $.false,
        $.eoln,
        $.invalid,
        $.none,
        $.reason,
        $.binary_expression,
        $.parenthesized_expression,
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

    parenthesized_expression: ($) => seq('(', $._assignment_right_expression, ')'),

    include: ($) => seq('INCLUDE', alias(/[A-Za-z_0-9\./]+/, $.file_name)),

    description: ($) => seq('DESCRIPTION', field('description_text', $.string), ';'),

    parameter_block: ($) =>
      seq('{', commaSep(choice(alias(/[A-Za-z_][A-Za-z_0-9]*/, $.parameter))), '}'),

    end_statement: ($) => seq('END', '.'),

    language_block: ($) =>
      seq('LANGUAGE', repeat($._language_block_expression), 'END', 'LANGUAGE', ';'),

    _language_block_expression: ($) => choice($._expression),

    datapool_block: ($) =>
      seq('DATAPOOL', repeat($._datapool_block_expression), 'END', 'DATAPOOL', ';'),

    _datapool_block_expression: ($) =>
      choice($._expression, $.sets_declaration, $.colors_declaration, $.variables_declaration),

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

    color_declaration: ($) => seq(field('name', alias($.identifier, $.color_identifier)), '(', ')'),

    sets_declaration: ($) => seq('SET', commaSep($.set_declaration), ';'),

    set_declaration: ($) =>
      seq(
        field('name', alias($.identifier, $.set_identifier)),
        optional($.parameter_block),
        '(',
        commaSep($.set_item),
        ')',
      ),

    set_item: ($) => choice($.string),

    streamer_block: ($) =>
      seq('STREAMER', repeat($._streamer_block_expression), 'END', 'STREAMER', ';'),

    _streamer_block_expression: ($) => choice($._expression),

    operator_block: ($) =>
      seq('OPERATOR', repeat($._operator_block_expression), 'END', 'OPERATOR', ';'),

    _operator_block_expression: ($) => choice($._expression, $.tasks_declaration),

    tasks_declaration: ($) => seq('TASK', commaSep($.task_declaration), ';'),

    task_declaration: ($) =>
      seq(
        field('name', alias($.identifier, $.task_identifier)),
        optional(
          seq(alias($.function_options, $.task_options), alias($.function_body, $.task_body)),
        ),
      ),

    functions_block: ($) =>
      seq('FUNCTIONS', repeat($._functions_block_expression), 'END', 'FUNCTIONS', ';'),

    _functions_block_expression: ($) => choice($._expression, $.functions_declaration),

    functions_declaration: ($) =>
      seq('FUNC', optional($.function_options), commaSep($.function_declaration), ';'),

    function_options: ($) => seq('{', '}'),

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
      seq('UI_MANAGER', repeat($._ui_manager_block_expression), 'END', 'UI_MANAGER', ';'),

    _ui_manager_block_expression: ($) => choice($._expression),

    db_manager_block: ($) =>
      seq('DB_MANAGER', repeat($._db_manager_block_expression), 'END', 'DB_MANAGER', ';'),

    _db_manager_block_expression: ($) => choice($._expression),
  },
});

function commaSep(rule) {
  return seq(rule, repeat(seq(',', rule)));
}
