Tutorial
--------

PHP is the most commonly used programming language for the web today. PHP is very common because it has a relatively
simple architecture compared to other MVC based web frameworks (Python, Ruby, node.js, etc).

Unlike the standard web frameworks, a PHP file is actually an "enhanced" HTML file, which is also capable of executing
code inside a document. So for example, you may start with a simple HTML page which looks like this:

    <html>
    <head></head>
    <body>
    Hello!
    <?php ?>
    </body>
    </html>

And later on add a PHP section which executes PHP code, and writes the output as HTML. Notice that the PHP line
disappeared when executing, since the PHP code is replaced by the output.

Let's try adding the name of the user's name.

    <?php $user = "John"; ?>
    <html>
    <head></head>
    <body>
    Hello <?php echo $user; ?>!
    </body>
    </html>

On this tutorial however, we will focus on learning PHP as a programming language and not web development. Therefore,
we will not use HTML at all, and focus on writing code as opposed to rendering web pages.

In our tutorials, we will always open and close a PHP tag (starting with `<?php` and ending with `?>`) in the beginning
and the end of our code.

For testing our code, we are able to print messages to our console using the `echo` command.

Exercise
--------

Print "Hello, World!" to the console.

Tutorial Code
-------------

<?php
echo "Goodbye, World!";
?>

Expected Output
---------------

Hello, World!

Solution
--------

<?php
echo "Hello, World!";
?>
