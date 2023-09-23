### Type Guards

Tutorial
-------
Type guards allow you to narrow down the type of an object within a certain scope. This can be done using `typeof`, `instanceof`, or even user-defined type guards.

    if (typeof someVariable === 'string') {
        // In this block, someVariable is treated as a string
    }

Exercise
-------
Define a function that takes a union type of `number` or `string` as an argument. If it's a number, return its square. If it's a string, return its length.

Tutorial Code
-------
    function processValue(value: number | string): number {
        // Your code here
        return 0;
    }

    processValue(4);
    processValue("hello");

Expected Output
-------
    16
    5

Solution
-------
    function processValue(value: number | string): number {
        if (typeof value === 'number') {
            return value * value;
        } else {
            return value.length;
        }
    }

    processValue(4);
    processValue("hello");
