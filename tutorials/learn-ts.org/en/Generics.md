### Generics in TypeScript

Tutorial
-------
Generics provide a way to make components work over a variety of types rather than a single one.

    function echo<T>(arg: T): T {
        return arg;
    }

Exercise
-------
Create a generic function named `wrapInArray` that takes an argument of any type and returns an array of that type containing the provided value.

Tutorial Code
-------

    function wrapInArray<T>(value: T): T[] {
        // Your code here
        return [];
    }

Expected Output
-------
After calling `wrapInArray(42)`:

    [42]

Solution
-------

    function wrapInArray<T>(value: T): T[] {
        return [value];
    }