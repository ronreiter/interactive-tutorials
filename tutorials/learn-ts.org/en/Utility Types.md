### Utility Types in TypeScript: Partial and Required

Tutorial
-------
TypeScript offers an array of utility types that can transform existing types in various ways, enhancing flexibility and ensuring type safety. Among these utility types, `Partial` and `Required` stand out as especially beneficial for developers.

The `Partial` utility type makes all properties of a provided type optional. This can be helpful in situations where you might not have values for all properties of a type, such as when dealing with updates or partial data fetches.

    type Point = {
        x: number;
        y: number;
    };

    type PartialPoint = Partial<Point>;

With `PartialPoint`, both `x` and `y` properties become optional, so you can have objects like `{ x: 10 }` or `{ y: 5 }` or even `{}` without any type errors.

Conversely, the `Required` utility type does the opposite of `Partial`. It ensures that all properties of a given type are required. It can be particularly useful when you have a type with optional properties but then need to ensure a complete object for certain operations.

Exercise
-------
Imagine a scenario where you first dealt with partial data, and later in your application, you need to ensure the data's completeness. Use the `Required` utility type to transform our `PartialPoint` type, making sure all its properties are mandatory.

Tutorial Code
-------
    type Point = {
        x: number;
        y: number;
    };

    type PartialPoint = Partial<Point>;

    // Your task: define CompletePoint using Required on PartialPoint

    const point: CompletePoint = {x: 10};

Expected Output
-------
    prog.ts(11,7): error TS2741: Property 'y' is missing in type '{ x: number; }' but required in type 'Required<Partial<Point>>'.

Solution
-------
    type Point = {
        x: number;
        y: number;
    };

    type PartialPoint = Partial<Point>;

    // Solution: Define CompletePoint using Required on PartialPoint
    type CompletePoint = Required<PartialPoint>;

    const point: CompletePoint = {x: 10};
