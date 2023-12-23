let editor;
let output;
let originalCode;
let loading;

let minimized = false;

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

function eval_console(code) {
	let text = "";

	const original_log = console.log;
	console.log = function(...args) {
		text += args.join(" ") + "\n";
	};

	// run the code evaluation
	eval(code);

	// give the code 1 second to complete
	return new Promise((resolve, reject) => {
		setTimeout(() => {
			// fix console.log
			console.log = original_log;
			resolve(text);
		}, 1000);
	});
}

function compareHTML(a, b) {
	// TODO - check CSS
	// TODO - check head

	if (a.children.length !== b.children.length) {
		return false;
	}

	for (let i = 0; i < a.children.length; i++) {
		// first check that the tag name is similar
		if (a.children[i].tagName !== b.children[i].tagName) {
			return false;
		}

		// check attributes - TODO
		if (a.children[i].attributes.length !== b.children[i].attributes.length) {
			return false;
		}

		for (let j = 0; j < a.children[i].attributes.length; j++) {
			let attribute = a.children[i].attributes[j].name;
			if (a.children[i].attributes[attribute].value !== b.children[i].attributes[attribute].value) {
				return false;
			}
		}

		if (a.children[i].children.length === 0) {
			if (a.children[i].innerHTML !== b.children[i].innerHTML) {
				return false;
			}
		} else {
			if (!compareHTML(a.children[i], b.children[i])) {
				return false;
			}
		}
	}

	return true;
}

function execute() {
	maximizeDock();

	if (window.domainData.language === "html") {
		$("#html-output").show();
		$("#text-output").hide();

		var a = $("#expected-output").contents()[0];
		a.write(tutorialData.output);
		a.close();

		var b = $("#html-output").contents()[0];
		b.write(editor.getValue());
		b.close();

		// now, let's compare A and B
		if (compareHTML(a.body, b.body)) {
			correct();
		}

		// links should not redirect us out of here.
		var links = b.querySelectorAll("a");
		for (var i = 0; i < links.length; i++) {
			if (links[i].href.indexOf("#") == -1) {
				links[i].target = "_blank";
			}
		}

		return;
	}

	//$('#output').css('color', '#bbbbbb');
	//$('#output').css('background-color', '#eeeeee');
	output.setValue("");
	//$('#output').text('');

	if (window.domainData.language === "javascript") {
		executeJS();
	} else {
		//loading.show();
		print("Executing, please wait...");
		$.ajax({
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

async function executeJS() {
	try {
		print("Executing, please wait...");
		const response = await eval_console(editor.getValue());
		print(response);
	} catch(err) {
		print(err.message);
	}

}

function execDone(data) {
	if (data["output"] === "text" || data["output"] === "exception") {
		print(data["text"]);
	}
}

function handleError(data) {
	if (data.status === 0) {
		print("There was an unknown error!");
	} else {
		print(data["text"]);
	}
}

function correct() {
	bootbox.confirm("Correct! Click OK to move on to the next chapter.", function(success) {
		if (success) {
			document.location.href = nextChapter;
		}
	});
}

function print(text) {
	if (!text) {
		return;
	}
	output.setValue(text);
	if ($.trim(tutorialData.output) !== '' && $.trim(tutorialData.output) === $.trim(text)) {
		correct();
	}
}



function load() {
	const loading = $("#loading");
	const codeBlocks = $("code");
	const outputTheme = "xq-light";
	let mode;

    if (document.getElementById("code")) {
    	if (window.domainData.language === "python") {
    		mode = {
    			name: "python",
			 		version: 2,
			 		singleLineStringErrors: false,
    		};
		} else {
    		mode = window.domainData.codemirror_mode;
		}

        editor = CodeMirror.fromTextArea(document.getElementById("code"), {
            lineNumbers: true,
            indentUnit: 4,
            tabMode: "shift",
            mode: mode,
            theme: "xq-light"
        });

        codeBlocks.addClass(window.domainData.prism_mode);
        Prism.highlightAll();
    } else {
		editor = {
			"getValue": function() {},
			"setValue": function(x) {}
		};
	}

	if (document.getElementById("output")) {
		output = CodeMirror.fromTextArea(document.getElementById("output"), {
			lineNumbers: false,
			textWrapping: true,
			readOnly : true,
			theme: outputTheme,
			mode: "text/plain"
		});
	}

    originalCode = editor.getValue();

    $("#inner-text pre.exec").after(
        $("<button>").addClass("btn btn-sm btn-primary execute-code").text("Execute Code").click(function() {
        	maximizeDock();
            var text = $(this).prev().text();
            if (window.domainData.container_word && text.indexOf(window.domainData.container_word) === -1) {
                var lines = text.split("\n");
                var indentedText = "";
                for (var i = 0; i < lines.length; i++) {
                    indentedText += window.domainData.container_indent + lines[i] + "\n";
                }
                text = window.domainData.container.replace("{code}", indentedText);

            }
            editor.setValue(text);
			execute();
        })
    );

}

function showExpected() {
	maximizeDock();
	output.setValue(tutorialData.output);
}

function showSolution() {
	maximizeDock();
    var solutionText = tutorialData.solution;
    if (solutionText) {
    	editor.setValue(solutionText);
    } else {
        editor.setValue("There is currently no solution to this exercise.\nPlease contribute your solution on GitHub.\n\nhttp://github.com/ronreiter/interactive-tutorials");
        $("#run-button").prop("disabled", true);
    }
}

function reset() {
	maximizeDock();
    $("#run-button").prop("disabled", false);
	editor.setValue(originalCode);
}

function toggleMinimize() {
	var dock = document.querySelector("footer#dock");

	if (dock.classList.contains("maximized")) {
		minimizeDock();
	} else {
		maximizeDock();
	}
}

function maximizeDock() {
	var dock = document.querySelector("footer#dock");
	var toggleButton = document.querySelector("#toggle-dock-button");
	// $("#run-button").prop("disabled", false);

	dock.classList.add("maximized");
	toggleButton.classList.remove("btn-primary");
	toggleButton.classList.add("btn-success");

}


function minimizeDock() {
	var dock = document.querySelector("footer#dock");
	var toggleButton = document.querySelector("#toggle-dock-button");
	// $("#run-button").prop("disabled", true);

	dock.classList.remove("maximized");
	toggleButton.classList.remove("btn-success");
	toggleButton.classList.add("btn-primary");

}

$(function() {
	load();
});
