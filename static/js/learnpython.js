var editor;
var output;
var originalCode;
var canvasWidth;
var canvasHeight;
var paper;
var canvasInitNeeded = true;

// xdr.js?
(function( jQuery ) {

if ( window.XDomainRequest ) {
	jQuery.ajaxTransport(function( s ) {
		if ( s.crossDomain && s.async ) {
			if ( s.timeout ) {
				s.xdrTimeout = s.timeout;
				delete s.timeout;
			}
			var xdr;
			return {
				send: function( _, complete ) {
					function callback( status, statusText, responses, responseHeaders ) {
						xdr.onload = xdr.onerror = xdr.ontimeout = jQuery.noop;
						xdr = undefined;
						complete( status, statusText, responses, responseHeaders );
					}
					xdr = new XDomainRequest();
					xdr.open( s.type, s.url );
					xdr.onload = function() {
						callback( 200, "OK", { text: xdr.responseText }, "Content-Type: " + xdr.contentType );
					};
					xdr.onerror = function() {
						callback( 404, "Not Found" );
					};
					if ( s.xdrTimeout ) {
						xdr.ontimeout = function() {
							callback( 0, "timeout" );
						};
						xdr.timeout = s.xdrTimeout;
					}
					xdr.send( ( s.hasContent && s.data ) || null );
				},
				abort: function() {
					if ( xdr ) {
						xdr.onerror = jQuery.noop();
						xdr.abort();
					}
				}
			};
		}
	});
}
})( jQuery );

function recordOutboundLink(link, category, action) {
	_gat._getTrackerByName()._trackEvent(category, action);
	setTimeout('document.location = "' + link.href + '"', 100);
}

function initCanvas(container, width, height) {
	canvasWidth = width;
	canvasHeight = height;
	paper = Raphael(container, canvasWidth, canvasHeight);

}

function drawTurtle(data) {
	var moves = data["moves"];
	var angle = data["angle"];

	var middle_x = canvasWidth / 2;
	var middle_y = canvasHeight / 2;

	paper.clear();

	paper.circle(middle_x, middle_y, 5).attr({"fill": "green", "stroke": "green"});
	var x = middle_x;
	var y = middle_y;
	path = "M " + middle_x + " " + middle_y;
	for (var move in moves) {
		x = x + moves[move][0];
		y = y + moves[move][1];
		path = path + "L " + x + " " + y;
	}
	paper.path(path).attr({"stroke-width": "3px","stroke": "green"});
	turtle = paper.image("/static/turtle.png", x-16, y-16, 32, 32);
	turtle.rotate(angle);
}

function reset() {
	editor.setValue(originalCode);
}

function eval_console(code) {
	var original_log = console.log;
	var text = "";
	console.log = function(line) {
		text += line + "\n";
	};
	eval(code);
	console.log = original_log;
	return text;
}

function execute() {
	//$('#output').css('color', '#bbbbbb');
	//$('#output').css('background-color', '#eeeeee');
	output.setValue("Executing... Please wait.");
	//$('#output').text('');

	if (window.domainData.language == "javascript") {
		try {
			print(eval_console(editor.getValue()));
		} catch(err) {
			print(err.message);
		}
		/*
	} else if (window.domainData.language == "c" || window.domainData.language == "java") {
		$.ajax({
			url: "http://jail-242231381.us-east-1.elb.amazonaws.com",
			type : "post",
			data : JSON.stringify({
				"code" : editor.getValue(),
				"language" : window.domainData.language
			}),
			processData: false,
			crossDomain: true,
			beforeSend: function(xhr) {
				 xhr.setRequestHeader('content-type', 'application/json');
			},
			success : execDone,
			error : handleError,
			dataType: "json"
		});
		*/
	} else {
		$.ajax({
			url: "http://4.learnpythonjail.appspot.com",
			type : "post",
			data : JSON.stringify({
				"code" : editor.getValue(),
				"language" : window.domainData.language
			}),
			success : execDone,
			error : handleError,
			dataType: "json"
		});
	}

}

function execDone(data) {
	//$('#output').css('background-color', 'white');
	if (data["output"] == "exception") {
		//$('#output').css('color', 'red');
	} else {
		//$('#output').css('color', 'black');
	}
	if (data["output"] == "text" || data["output"] == "exception") {
		//$("#output").show();
		//$("#canvas_container").hide();
		print(data["text"]);
	}

	if (data["output"] == "turtle") {
		//$("#canvas_container").show();
		//$("#output").hide();

		if (canvasInitNeeded) {
			initCanvas("canvas_container", $("#canvas_container").width(), $("#canvas_container").height());
			canvasInitNeeded = false;
		}

		drawTurtle(data);
	}
}

function handleError(data) {
	//$('#output').css('color', 'black');
	//$('#output').css('background-color', 'white');
	if (data.status == 0) {
		print("There was an unknown error!");
	} else {
		print(data["text"]);
	}
}

function print(text) {
	output.setValue(text);
	if ($.trim($("#expected-output").text()) != '' && $.trim($("#expected-output").text()) == $.trim(text)) {
		bootbox.confirm("Correct! Click OK to move on to the next chapter.", function(success) {
			if (success) {
				document.location.href = nextChapter;
			};
		});
	}
}

function load() {
	switch (window.domainData.language) {
		case "python":
			editor = CodeMirror.fromTextArea(document.getElementById("code"), {
				mode: {name: "python",
					version: 2,
					singleLineStringErrors: false},
				lineNumbers: true,
				indentUnit: 4,
				tabMode: "shift",
				matchBrackets: true,
				theme: "monokai"
			});
			break;
		case "java":
			editor = CodeMirror.fromTextArea(document.getElementById("code"), {
				lineNumbers: true,
				matchBrackets: true,
				mode: "text/x-java",
				theme: "monokai"
			});
			break;
		case "c":
			editor = CodeMirror.fromTextArea(document.getElementById("code"), {
				lineNumbers: true,
				matchBrackets: true,
				mode: "text/x-csrc",
				theme: "monokai"
			});
			break;
		case "javascript":
			editor = CodeMirror.fromTextArea(document.getElementById("code"), {
				lineNumbers: true,
				matchBrackets: true,
				mode: "text/javascript",
				theme: "monokai"
			});
			break;
		case "ruby":
			editor = CodeMirror.fromTextArea(document.getElementById("code"), {
				lineNumbers: true,
				matchBrackets: true,
				mode: "text/x-ruby",
				theme: "monokai"
			});
			break;
		case "bash":
			editor = CodeMirror.fromTextArea(document.getElementById("code"), {
				lineNumbers: true,
				matchBrackets: true,
				mode: "text/x-sh",
				theme: "monokai"
			});
			break;
		case "perl":
			editor = CodeMirror.fromTextArea(document.getElementById("code"), {
				lineNumbers: true,
				matchBrackets: true,
				mode: "text/x-perl",
				theme: "monokai"
			});
			break;

		case "php":
			editor = CodeMirror.fromTextArea(document.getElementById("code"), {
				lineNumbers: true,
				matchBrackets: true,
				mode: "text/x-php",
				theme: "monokai"
			});
			break;




	}

	output = CodeMirror.fromTextArea(document.getElementById("output"), {
		lineNumbers: false,
		matchBrackets: false,
		textWrapping: true,
		readOnly : true,
		theme: "monokai"
	});
}

function showExpected() {
	output.setValue($("#expected-output").text());
}

$(function() {
	load();
});