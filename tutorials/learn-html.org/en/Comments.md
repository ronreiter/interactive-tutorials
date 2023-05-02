Tutorial
--------
This tutorial will tell you about comments in html.

Comments allow you to write text that will not be parsed by the language. This means that you can write information about what something does without the program doing anything with it.

In html, a comment is written with the following syntax:
```html	
<!-- Your comment here! -->
```
You can also have multiline comments:
```html
<!-- This is the first line,
and this is the second! -->
```
You can use comments to remove code temprarily, or to visually split up sections:
```html
<p>Hello <!-- World --> WORLD!</p>
```
Exercise
--------
Comment out the paragraph that says `Goodbye, World!`:

Tutorial Code
-------------
<html>
	<body>
		<p>Hello, World!</p>
		<p>Goodbye, World</p>
	</body>
</html>

Expected Output
---------------
<html>
	<body>
		<p>Hello, World!</p>
	</body>
</html>

Solution
--------
<html>
	<body>
		<p>Hello, World!</p>
		<!--
		<p>Goodbye, World!</p>
		-->
	</body>
</html>
