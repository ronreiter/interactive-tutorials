### Intersection and Union Types

Tutorial
-------
In TypeScript, we can combine multiple types in different ways to get single types that have features of both types.

* **Intersection Types**: This allows you to combine multiple types into one, resulting in a type that has all the features of both original types.

    type First = { a: number; };
    type Second = { b: string; };
    
    type Combined = First & Second;

* **Union Types**: This allows an object to be of one of many types.

    type NumberOrString = number | string;

Exercise
-------
Define a function that takes a union type of `number` or `string` and returns a string description about the type of the input.

Tutorial Code
-------
    function describeType(value: number | string): string {
        // Your code here
        return "";
    }
    describeType(5);
    describeType("hello");

Expected Output
-------
    It's a number!
    It's a string!

Solution
-------
    function describeType(value: number | string): string {
        if (typeof value === 'number') {
            return "It's a number!";
        } else {
            return "It's a string!";
        }
    }
