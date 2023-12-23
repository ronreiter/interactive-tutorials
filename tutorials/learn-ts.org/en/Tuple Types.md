### Tuple Types

Tutorial
-------
Tuples in TypeScript allow you to express an array where the type of a fixed number of elements is known but does not have to be the same. You can define a tuple as:

    let x: [string, number];
    x = ["hello", 10]; // OK
    x = [10, "hello"]; // Error

Exercise
-------
Create a function that accepts a tuple with a string and a number, and returns a message containing both.

Tutorial Code
-------
    function displayTuple(input: [string, number]): string {
        // Your code here
        return "";
    }
    console.log(displayTuple(["Age", 30]));

Expected Output
-------
    The value for Age is 30.

Solution
-------
    function displayTuple(input: [string, number]): string {
        return `The value for ${input[0]} is ${input[1]}.`;
    }
    console.log(displayTuple(["Age", 30]));
