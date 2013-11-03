var canvas_width;
var canvas_height;
var paper;

function initCanvas(container, width, height) {
	canvas_width = width;
	canvas_height = height;
	paper = Raphael(container, canvas_width, canvas_height);
	
}

function drawTurtle(data) {
	var moves = data["moves"];
	var angle = data["angle"];
	
	var middle_x = canvas_width / 2;
	var middle_y = canvas_height / 2;

	paper.clear();

	paper.circle(middle_x, middle_y, 5).attr({"fill": "green", "stroke": "green"});
	var x = middle_x;
	var y = middle_y;
	path = "M " + middle_x + " " + middle_y
	for (var move in moves) {
		x = x + moves[move][0];
		y = y + moves[move][1];
		path = path + "L " + x + " " + y;
	}
	paper.path(path).attr({"stroke-width": "3px","stroke": "green"});
	turtle = paper.image("static/turtle.png", x-16, y-16, 32, 32);
	turtle.rotate(angle);
}
