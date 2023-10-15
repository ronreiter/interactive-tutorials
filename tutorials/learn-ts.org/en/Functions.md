### Functions in TypeScript

Tutorial
-------
Functions in TypeScript can have typed parameters and return values.

    function add(a: number, b: number): number {
        return a + b;
    }

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
