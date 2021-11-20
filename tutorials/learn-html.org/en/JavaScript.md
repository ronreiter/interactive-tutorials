Tutorial
--------
JavaScript is a scripting language that is mostly used in web development. JavaScript runs in the front-end, so it can update HTML elements, connect to a server (e.g Database server, File Server etc.), change page style (CSS) and more.

You can learn JavaScript here: https://www.learn-js.org/

## JavaScript in HTML file
HTML has the ```<script>``` tag, which allows scripts in a web page.

Example:
```
<!DOCTYPE html>
<html>
<head>
	<title>JavaScript</title>
</head>
<body>
	<p>Hello, JavaScript!</p>
</body>
<script>
	console.log("Hello World!");
</script>
</html>
```

Output:
```
Hello World!
```
This will show in your browser's console.

## External JavaScript

You can import a JavaScript (.js) file.
This is useful for organizing your website.

JS File (example.js):
```
console.log("Hello World!");
```
HTML File:
```
<!DOCTYPE html>
<html>
<head>
	<title>External JavaScript</title>
</head>
<body>
	<p>External JavaScript!</p>
</body>
<script src="example.js"></script>
</html>
```
Output:
```
Hello World!
```
The ```src```  attribute, imports the specified JavaScript file.

Also the ```src``` attribute, can import scripts from a CDN (Content Delivery Network). That is mostly used for including JavaScript libraries.
```
<!DOCTYPE html>
<html>
<head>
	<title>External CDN JavaScript</title>
</head>
<body>
	<p>External CDN JavaScript!</p>
</body>
<script src="https://ajax.googleapis.com/ajax/libs/jquery/3.5.1/jquery.min.js"></script>
</html>
```
## The ```type``` attribute
The ```<script>``` tag has the ```type``` attribute, which specifies the scripting language that is going to be used in the ```<script``` tag. Now it's almost obsolete. JavaScript is the default.

They would use this in the HTML4 days:
```
<html>
<head>
	<title>Other scripting languages</title>
</head>
<body>
	<p>Other scripting languages</p>
</body>
<script type="text/javascript">
console.log("Hello World");
</script>
</html>
```

Exercise
--------
1. Add JavaScript code after ```</body```. The code must be ```alert("Hello World!");``` *(This will popup "Hello World!")*

Tutorial Code
-------------
```
<!DOCTYPE html>
<html>
<head>
	<title>JavaScript</title>
</head>
<body>
	<p>Alert!</p>
</body>

</html>
```
Expected Output
---------------
```
<!DOCTYPE html>
<html>
<head>
	<title>JavaScript</title>
</head>
<body>
	<p>Alert!</p>
</body>
<script>
alert("Hello World!");
</script>
</html>
```
Solution
--------
```
<!DOCTYPE html>
<html>
<head>
	<title>JavaScript</title>
</head>
<body>
	<p>Alert!</p>
</body>
<script>
alert("Hello World!");
</script>
</html>
```
