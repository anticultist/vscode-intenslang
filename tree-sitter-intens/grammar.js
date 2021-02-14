module.exports = grammar({
  name: 'intens',

  rules: {
    source_file: $ => repeat($._high_level_blocks),

    _high_level_blocks: $ => choice(
      $.comment,
      $.string
    ),

    comment: $ => token(seq('//', /.*/)),

    string: $ => seq(
      '"',
      repeat(choice(
        /[^"\\\n]+|\\\r?\n/
      )),
      '"'
    ),
  }
});