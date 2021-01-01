Tutorial
--------

Drag and Drop is powerful User Interface concept which makes it easy to copy, reorder and deletion of items with the help of mouse clicks. This allows the user to click and hold the mouse button down over an element, drag it to another location, and release the mouse button to drop the element there.In this exercise, we will test drag and drop feature of HTML5 by dragging and dropping a picture.

Exercise
--------

This exercise illustrates Drag and Drop feature of HTML 5. In this exercise, change  code to make the pcture draggable and then drag picture to upper rectangle.


Tutorial Code
-------------

<!DOCTYPE HTML>
<html>
<head>
<script type="text/javascript" >

function allowDropThis(i) {
    i.preventDefault();
}

function dragThis(i) {
    i.dataTransfer.setData("doggo", i.target.id);
}

function dropThis(i) {
    i.preventDefault();
    var data = i.dataTransfer.getData("doggo");
    i.target.appendChild(document.getElementById(data));
}
</script>
<style type="text/css">

#fig1, #fig2 {
    float: left;
    width: 220px;
    height: 220px;
    margin: 20px;
    padding: 20px;
    border: 2px solid blue;
}
</head>
<body>

<h2>Drag and Drop</h2>

<p>Drag Holy City between these the two elements.</p>

<div id="fig1" ondrop="dropThis(event)" ondragover="allowDropThis(event)">
  <img src="https://github.com/ssabat/azuredf/blob/master/holi-city.jpeg?raw=true" draggable="false" ondragstart="dragThis(event)" id="drag1" width="220" height="220">
</div>

<div id="fig2" ondrop="dropThis(event)" ondragover="allowDropThis(event)"></div>

</body>
</html>
    
    
Expected Output
---------------

    <!DOCTYPE HTML>
<html>
<head>
<script type="text/javascript" >

function allowDropThis(i) {
    i.preventDefault();
}

function dragThis(i) {
    i.dataTransfer.setData("doggo", i.target.id);
}

function dropThis(i) {
    i.preventDefault();
    var data = i.dataTransfer.getData("doggo");
    i.target.appendChild(document.getElementById(data));
}
</script>
<style type="text/css">

#fig1, #fig2 {
    float: left;
    width: 220px;
    height: 220px;
    margin: 20px;
    padding: 20px;
    border: 2px solid blue;
}
</head>
<body>

<h2>Drag and Drop</h2>

<p>Drag Holy City between these the two elements.</p>

<div id="fig2" ondrop="dropThis(event)" ondragover="allowDropThis(event)">
  <img src="https://github.com/ssabat/azuredf/blob/master/holi-city.jpeg?raw=true" draggable="false" ondragstart="dragThis(event)" id="drag1" width="220" height="220">
</div>

<div id="fig1" ondrop="dropThis(event)" ondragover="allowDropThis(event)"></div>

</body>
</html>

Solution
--------

   <!DOCTYPE HTML>
<html>
<head>
<script type="text/javascript" >

function allowDropThis(i) {
    i.preventDefault();
}

function dragThis(i) {
    i.dataTransfer.setData("doggo", i.target.id);
}

function dropThis(i) {
    i.preventDefault();
    var data = i.dataTransfer.getData("doggo");
    i.target.appendChild(document.getElementById(data));
}
</script>
<style type="text/css">

#fig1, #fig2 {
    float: left;
    width: 220px;
    height: 220px;
    margin: 20px;
    padding: 20px;
    border: 2px solid blue;
}
</head>
<body>

<h2>Drag and Drop</h2>

<p>Drag Holy City between these the two elements.</p>

<div id="fig1" ondrop="dropThis(event)" ondragover="allowDropThis(event)">
  <img src="https://github.com/ssabat/azuredf/blob/master/holi-city.jpeg?raw=true" draggable="true" ondragstart="dragThis(event)" id="drag1" width="220" height="220">
</div>

<div id="fig2" ondrop="dropThis(event)" ondragover="allowDropThis(event)"></div>

</body>
</html>