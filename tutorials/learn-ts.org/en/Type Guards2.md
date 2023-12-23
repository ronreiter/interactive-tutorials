### Type Guards

Tutorial
-------
Type guards allow you to narrow down the type of an object within a conditional block. TypeScript understands the type flow based on certain conditions.

For instance, the `instanceof` and `typeof` checks act as type guards in TypeScript:

    function padLeft(value: string, padding: string | number) {
        if (typeof padding === "number") {
            return Array(padding + 1).join(" ") + value;
        }
        if (typeof padding === "string") {
            return padding + value;
        }
        throw new Error(`Expected string or number, got '${padding}'.`);
    }

Exercise
-------
Create a function that adds two values. If either of the values is a string, it should concatenate them. If both values are numbers, it should add them.

Tutorial Code
-------
    function addOrConcatenate(a: string | number, b: string | number): string | number {
        // Your code here
        return;
    }
    console.log(addOrConcatenate(5, 3));
    console.log(addOrConcatenate("Hello", "World"));

Expected Output
-------
    8
    HelloWorld

Solution
-------
    function addOrConcatenate(a: string | number, b: string | number): string | number {
        if (typeof a === "string" || typeof b === "string") {
            return a.toString() + b.toString();
        } else {
            return a + b;
        }
    }
