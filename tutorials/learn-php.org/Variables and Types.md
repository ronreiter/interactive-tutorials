Tutorial
--------

To define a variable, simply use the following syntax:

    $x = 1;
    $y = "foo";
    $z = True;

We have just defined a variable named `x` with the number 1, a variable
named `y` with the string "foo" and a variable name `z` with the boolean
value True. Once they are defined, we can use them in the code.

PHP has many types of variables, but the most basic variable types are
integer (whole numbers), float (real numbers), strings, and booleans.

PHP also has arrays and objects which we will explain in other tutorials.

Variables can also be set to NULL, which means that the variables exist,
but do not contain any value.

### Operators

We can use simple arithmetic operators to add, subtract or concatenate between
variables.

We can also print out PHP variables using the `echo` command (you can try it out now).

For example, let's sum up two numbers, put the result in a new variable, and
print out the result.

    $x = 1;
    $y = 2;
    $sum = $x + $y;
    echo $sum;       // prints out 3

### String formatting

Like Perl, PHP double quoted strings can format strings using defined variables. For example:

    $name = "Jake";
    echo "Your name is $name";    // prints out Your name is Jake

Exercise
--------

#### Part 1

Define the variables `name` and `age` so that a line would be printed out saying the following sentence:

`Hello Jake. You are 20 years old.`

Notice that the code contains a special character sequence at the end called a newline - `\n`. This
sequence will cause the next line printed out to be printed out on the next line. For web development,
this is not important, since we use HTML tags for this purpose.

#### Part 2

Sum up the variables x and y and put the result in the sum variable.

Tutorial Code
-------------

<?php
// Part 1: add the name and age variables.
echo "Hello $name. You are $age years old.\n";

// Part 2: sum up the variables x and y and
// put the result in the sum variable.
$x = 195793;
$y = 256836;
$sum = NULL;

echo "The sum of $x and $y is $sum."
?>

Expected Output
---------------

Hello Jake. You are 20 years old.
The sum of 195793 and 256836 is 452629.

Solution
--------

<?php
$name = "Jake";
$age = 20;
echo "Hello $name. You are $age years old.\n";

$x = 195793;
$y = 256836;
$sum = $x + $y;

echo "The sum of $x and $y is $sum."
?>