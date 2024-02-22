$(function() {
  var template = "<div data-datacamp-exercise data-lang=\"python\" data-height=\"{{height}}\" data-impact-tracking-link=\"\/c\/67577\/1012793\/13294\"><code data-type=\"sample-code\">{{code}}</div></div>",
      LINEHEIGHT = 14,
      EXTRA = 100;

	$("#inner-text pre").each(function(){
    var code = $(this).text();
    var nrLines = code.split(/\r\n|\r|\n/).length + 3;
    var height = nrLines * LINEHEIGHT + EXTRA;

    height = (nrLines > 7 && nrLines < 14) ? 300 : height;

    $(this).replaceWith(template
      .replace('{{code}}', code)
      .replace('{{height}}', height)
    );
  });
});
