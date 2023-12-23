### Functions in TypeScript

Tutorial
-------
Functions in TypeScript can have typed parameters and return values.

In the following example, the function `add` receives two numbers and returns a number.
The function defines the types of the parameters and its return value using the `:` operator.

    function add(a: number, b: number): number {
        return a + b;
    }

Arrow functions
-------

Functions can also be defined as variables using the "arrow function" notation:

    const add = (a: number, b: number): number => {
        return a + b;
    }

Arrow functions in TypeScript differ from regular functions when used in objects - they do not
manipulate the `this` value and use the same scope as the parent function. However - this trait
should not conern you if you are not using objects in TypeScript.

Arrow functions also support a shorter form - if the function is an expression and not a code block
denoted using curly braces, it will return that expression as the output of the function.

For example:

    const add = (a: number, b: number): number => a + b;


Exercise
-------
Create a function named `multiply` that takes two number parameters and returns their product.

Tutorial Code
-------

    function multiply(a: number, b: number): number {
        // Your code here
        return 0;
    }

    console.log(multiply(3, 4));

Expected Output
-------
    12

Solution
-------
    function multiply(a: number, b: number): number {
        return a * b;
    }

    console.log(multiply(3, 4));
