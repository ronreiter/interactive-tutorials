Tutorial
--------

Functions are simple code blocks we can call from anywhere. For example, we can create
a function that sums a list of numbers and returns the result. Let's call this function `sum`.

There are two types of functions - library functions and user functions. Library functions,
such as `array_push` are part of the PHP library and can be used by anyone. However, you
may write your own functions and use them across your code.

A function receives a list of arguments separated by commas. Every argument only exists in
the context of the function, meaning that they become variables inside the function block,
but are not defined outside of that function block.

    // define a function called `sum` that will
    // receive a list of numbers as an argument.
    function sum($numbers) {
        // initialize the variable we will return
        $sum = 0;

        // sum up the numbers
        foreach ($numbers as $number) {
            $sum += $number;
        }

        // return the sum to the user
        return $sum;
    }

    // Example usage of sum
    echo sum([1,2,3,4,5,6,7,8,9,10]);

After defining functions, you may load other PHP files into one another, so you may define
all your functions in one file, and load them for another. Let's say that we have defined
the `sum` function inside a file called `sum.php`. We can now create another file, say
`index.php` and use the `sum` function by including `sum.php` as follows:

    include("sum.php");

    // Example usage of sum
    echo sum([1,2,3,4,5,6,7,8,9,10]);

(This code will not run because there are no modules defined in the PHP environment).

Exercise
--------

Create a function `squared_sum` that returns the sum of every integer in an array, squared.

Tutorial Code
-------------

<?php
// Write the function squared_sum here

echo squared_sum([56, 65, 26, 86, 66, 34, 78, 74, 67, 18, 34, 73, 45, 67, 75, 10, 60, 80, 74, 16, 86, 34, 12, 23, 42, 72, 36, 3, 73, 9, 92, 81, 94, 54, 97, 74, 45, 55, 70, 94, 96, 81, 86, 86, 84, 4, 32, 8, 96, 86, 87, 18, 84, 87, 59, 48, 32, 90, 17, 22, 82, 79, 66, 28, 17, 14, 80, 83, 66, 36, 21, 89, 68, 2, 51, 65, 20, 87, 48, 5, 1, 16, 60, 53, 84, 90, 16, 2, 37, 73, 57, 70, 57, 69, 68, 1, 24, 40, 72, 97]);

?>

Expected Output
---------------

382629

Solution
--------

<?php
// Write the function squared_sum here
function squared_sum($numbers) {
    // initialize the variable we will return
    $sum = 0;

    // sum up the numbers
    foreach ($numbers as $number) {
        $sum += $number * $number;
    }

    // return the sum to the user
    return $sum;
}

echo squared_sum([56, 65, 26, 86, 66, 34, 78, 74, 67, 18, 34, 73, 45, 67, 75, 10, 60, 80, 74, 16, 86, 34, 12, 23, 42, 72, 36, 3, 73, 9, 92, 81, 94, 54, 97, 74, 45, 55, 70, 94, 96, 81, 86, 86, 84, 4, 32, 8, 96, 86, 87, 18, 84, 87, 59, 48, 32, 90, 17, 22, 82, 79, 66, 28, 17, 14, 80, 83, 66, 36, 21, 89, 68, 2, 51, 65, 20, 87, 48, 5, 1, 16, 60, 53, 84, 90, 16, 2, 37, 73, 57, 70, 57, 69, 68, 1, 24, 40, 72, 97]);

?>

