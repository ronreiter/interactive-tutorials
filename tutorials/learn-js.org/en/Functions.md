Tutorial
--------

Functions are code blocks that can have arguments, and function have their own scope. In JavaScript, functions are a very important feature of the program, and especially the fact that they can access local variables of a parent function (this is called a closure). 

There are two ways to define functions in JavaScript - named functions and anonymous functions.

To define a named function, we use the `function` statement as follows:

    function greet(name)
    {
        return "Hello " + name + "!";
    }

    console.log(greet("Eric"));      // prints out Hello Eric!

In this function, the `name` argument to the `greet` function is used inside the function to construct a new string and return it using the `return` statement.

To define an anonymous function, we can alternatively use the following syntax:

    var greet = function(name)
    {
        return "Hello " + name + "!";
    }

    console.log(greet("Eric"));      // prints out Hello Eric!

Exercise
--------

Define a function called `multiplyFive` which accepts a number and returns that number multiplied by 5.

Tutorial Code
-------------

// TODO: define the function multiplyFive here

console.log(multiplyFive(3));
console.log(multiplyFive(4));
console.log(multiplyFive(5));
console.log(multiplyFive(6));

Expected Output
---------------

15
20
25
30

Solution
--------

// TODO: define the function multiplyFive here
var multiplyFive = function (number) {
    return number * 5;
}
console.log(multiplyFive(3));
console.log(multiplyFive(4));
console.log(multiplyFive(5));
console.log(multiplyFive(6));
