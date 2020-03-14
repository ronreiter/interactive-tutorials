Tutorial
--------

Arrow functions are a feature of ES6, their behavior are generally the same of a function. These are anonymous functions with a special syntax, they haven't their own this, arguments or super. They can't be used as constructors too.

Arrow functions are often used as callbacks of native JS functions like map, filter or sort. The reason of their name is due to the use of `=>` in the syntax.

To define an arrow function, we use the `() => {}` structure as follows:

    const greet = (name) => { return "Hello " + name + "!"; }

    console.log(greet("Eric"));      // prints out Hello Eric!

In this function, the `name` argument to the `greet` function is used inside the function to construct a new string and return it using the `return` statement.

In case that the function only receives one argument, we can omit the parenthesis:

    const greet = name => { return "Hello " + name + "!"; }

    console.log(greet("Eric"));      // prints out Hello Eric!

And, in case that we want to do a explicit return of the function and we have only one line of code, we can avoid the `return` statement and omit brackets too:

    const greet = name => "Hello " + name + "!";

    console.log(greet("Eric"));      // prints out Hello Eric!

Using an arrow as a callback compared to a normal function:

    let numbers = [3, 5, 8, 9, 2];

    function multiplyByTwo(number){
        return number * 2;
    }

    numbers.map(multiplyByTwo);

    console.log(numbers);              // prints out [6, 10, 16, 18, 4]


    const multiplyByTwo = number => number * 2;

    numbers.map(multiplyByTwo);

    console.log(numbers);              // prints out [6, 10, 16, 18, 4]

Exercise
--------

Define an arrow function `divideByTwo` which accepts a number and returns that number divided by 2.

Tutorial Code
-------------

// TODO: define the function divideByTwo here

console.log(divideByTwo(4));
console.log(divideByTwo(8));
console.log(divideByTwo(12));
console.log(divideByTwo(6));

Expected Output
---------------

2
4
6
3

Solution
--------

// TODO: define the function divideByTwo here
const divideByTwo = number => number / 2;
console.log(divideByTwo(4));
console.log(divideByTwo(8));
console.log(divideByTwo(12));
console.log(divideByTwo(6));
