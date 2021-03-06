module.exports = grammar({
  name: 'intens',

  word: $ => $.identifier,

  rules: {
    source_file: $ => repeat($._high_level_blocks),

    identifier: $ => /[a-zA-Z][a-zA-Z_0-9#]*/,

    _high_level_blocks: $ => choice(
      $._expression,
      $.include,
      $.description,
      $.language_block,
      $.datapool_block,
      $.streamer_block,
      $.operator_block,
      $.functions_block,
      $.ui_manager_block,
      $.db_manager_block
    ),

    _expression: $ => choice(
      $.comment,
      $.string,
      $.number,
      $.true,
      $.false,
      $.eoln,
      $.invalid,
      $.none,
      $.reason,
      ';'
    ),

    comment: $ => token(seq('//', /.*/)),

    string: $ => seq(
      '"',
      repeat(choice(
        /[^"\\\n]+|\\\r?\n/
      )),
      '"'
    ),

    number: $ => token(
      seq(
        optional(/[+-]/),
        /[0-9][0-9_]*/,
        optional(seq('.', optional(/[0-9][0-9_]*/))),
        optional(/[eE][+-]?([0-9][0-9_]*)/)
      )
    ),

    true: $ => 'TRUE',
    false: $ => 'FALSE',
    eoln: $ => 'EOLN',
    invalid: $ => 'INVALID',
    none: $ => 'NONE',

    primitive_type: $ => token(choice(
      'CDATA',
      'COMPLEX',
      'INTEGER',
      'REAL',
      'STRING'
    )),

    reason: $ => choice(
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
      'REASON_UNSELECT'
    ),

    include: $ => seq(
      'INCLUDE',
      alias(/[A-Za-z_0-9\./]+/, $.file_name)
    ),

    description: $ => seq(
      'DESCRIPTION',
      field('description_text', $.string),
      ';'
    ),

    parameter_block: $ => seq(
      '{',
      commaSep(choice(
        alias(/[A-Za-z_][A-Za-z_0-9]*/, $.parameter)
      )),
      '}'
    ),

    language_block: $ => seq(
      'LANGUAGE',
      repeat($._language_block_expression),
      'END',
      'LANGUAGE',
      ';'
    ),

    _language_block_expression: $ => choice(
      $._expression
    ),

    datapool_block: $ => seq(
      'DATAPOOL',
      repeat($._datapool_block_expression),
      'END',
      'DATAPOOL',
      ';'
    ),

    _datapool_block_expression: $ => choice(
      $._expression,
      $.sets_declaration,
      $.colors_declaration,
      $.variables_declaration,
    ),

    variables_declaration: $ => seq(
      field('type', $.primitive_type),
      optional($.parameter_block),
      commaSep($.variable_declaration),
      ';'
    ),

    variable_declaration: $ => seq(
      field('name', alias($.identifier, $.variable_identifier)),
      optional($.dimension),
      optional($.parameter_block)
    ),

    dimension: $ => seq(
      '[',
      commaSep($.number),
      ']'
    ),

    colors_declaration: $ => seq(
      'COLOR',
      commaSep($.color_declaration),
      ';'
    ),

    color_declaration: $ => seq(
      field('name', alias($.identifier, $.color_identifier)),
      '(',
      ')'
    ),

    sets_declaration: $ => seq(
      'SET',
      commaSep($.set_declaration),
      ';'
    ),

    set_declaration: $ => seq(
      field('name', alias($.identifier, $.set_identifier)),
      optional($.parameter_block),
      '(',
      commaSep($.set_item),
      ')'
    ),

    set_item: $ => choice(
      $.string
    ),

    streamer_block: $ => seq(
      'STREAMER',
      repeat($._streamer_block_expression),
      'END',
      'STREAMER',
      ';'
    ),

    _streamer_block_expression: $ => choice(
      $._expression
    ),

    operator_block: $ => seq(
      'OPERATOR',
      repeat($._operator_block_expression),
      'END',
      'OPERATOR',
      ';'
    ),

    _operator_block_expression: $ => choice(
      $._expression
    ),

    functions_block: $ => seq(
      'FUNCTIONS',
      repeat($._functions_block_expression),
      'END',
      'FUNCTIONS',
      ';'
    ),

    _functions_block_expression: $ => choice(
      $._expression,
      $.functions_declaration
    ),

    functions_declaration: $ => seq(
      'FUNC',
      commaSep($.function_declaration),
      ';'
    ),

    function_declaration: $ => seq(
      field('name', alias($.identifier, $.function_identifier)),
      optional($.function_body)
    ),

    function_body: $ => seq(
      '{',
      repeat($._function_expression),
      '}'
    ),

    _function_expression: $ => choice(
      $._expression
    ),

    ui_manager_block: $ => seq(
      'UI_MANAGER',
      repeat($._ui_manager_block_expression),
      'END',
      'UI_MANAGER',
      ';'
    ),

    _ui_manager_block_expression: $ => choice(
      $._expression
    ),

    db_manager_block: $ => seq(
      'DB_MANAGER',
      repeat($._db_manager_block_expression),
      'END',
      'DB_MANAGER',
      ';'
    ),

    _db_manager_block_expression: $ => choice(
      $._expression
    ),
  }
});

function commaSep(rule) {
  return seq(rule, repeat(seq(',', rule)));
}
