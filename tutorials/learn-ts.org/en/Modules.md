### Modules in TypeScript

Tutorial
-------
Modules in TypeScript allow you to organize and split your code across multiple files. You can use the `export` keyword to expose parts of your module to other modules.

    // in math.ts
    export function add(x: number, y: number): number {
        return x + y;
    }

Exercise
-------
Create a module named `geometry` which exports a function `areaOfSquare` that calculates the area of a square given its side length.

Tutorial Code
-------
    // in geometry.ts
    export function areaOfSquare(side: number): number {
        // Your code here
        return 0;
    }

Expected Output
-------
After importing and using `areaOfSquare` with an argument of 4:

    16

Solution
-------
    // in geometry.ts
    export function areaOfSquare(side: number): number {
        return side * side;
    }
