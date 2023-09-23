### Mapped Types in TypeScript

Tutorial
-------
Mapped types allow you to create a new type by transforming properties of an existing type.

    type PointUpdate = {
        [P in keyof Point]?: Point[P];
    };

Exercise
-------
Create a mapped type `NullablePoint` where each property of the `Point` type is made nullable (i.e., it can also be `null`).

Tutorial Code
-------
    type Point = {
        x: number;
        y: number;
    };

    // Your mapped type definition here

Expected Output
-------
The resulting type should allow for the following:

    let nullablePoint: NullablePoint = {
        x: null,
        y: 5
    };

Solution
-------
    type NullablePoint = {
        [P in keyof Point]: Point[P] | null;
    };
