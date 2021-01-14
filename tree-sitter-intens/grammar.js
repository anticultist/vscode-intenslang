module.exports = grammar({
  name: 'intens',

  rules: {
    source_file: $ => repeat($._high_level_blocks),

    _high_level_blocks: $ => choice(
      $.comment
    ),

    comment: $ => token(seq('//', /.*/)),
  }
});