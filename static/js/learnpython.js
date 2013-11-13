var editor;
var output;
var originalCode;
var loading;

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
	loading.show();
	output.setValue("Executing... Please wait.");
	//$('#output').text('');

	if (window.domainData.language == "javascript") {
		try {
			print(eval_console(editor.getValue()));
		} catch(err) {
			print(err.message);
		}
	} else {
		$.ajax({
			url: "/execute",
			type : "post",
			data : JSON.stringify({
				"code" : editor.getValue(),
				"language" : window.domainData.language
			}),
			contentType : "application/json",
			success : execDone,
			error : handleError,
			dataType: "json"
		});
	}

}

function execDone(data) {
	loading.hide();
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
	loading = $("#loading");
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
				mode: "application/x-httpd-php",
				theme: "monokai"
			});
			break;

		case "c#":
			editor = CodeMirror.fromTextArea(document.getElementById("code"), {
				lineNumbers: true,
				matchBrackets: true,
				mode: "text/x-csharp",
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