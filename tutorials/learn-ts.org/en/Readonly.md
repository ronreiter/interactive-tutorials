### Readonly in TypeScript

Tutorial
-------
TypeScript comes with a `Readonly` type that makes all properties of a given type read-only.

    type ReadonlyPoint = Readonly<Point>;

Exercise
-------
Define a function that attempts to modify a `ReadonlyPoint`. Notice how TypeScript provides a compile-time error.

Tutorial Code
-------
    type Point = {
        x: number;
        y: number;
    };

    type ReadonlyPoint = Readonly<Point>;

    function modifyReadonlyPoint(point: ReadonlyPoint): void {
        // Try to modify the point here
    }

    modifyReadonlyPoint({ x: 10, y: 20 });

Expected Output
-------
    prog.ts(9,11): error TS2540: Cannot assign to 'x' because it is a read-only property.

Solution
-------
    type Point = {
        x: number;
        y: number;
    };

    type ReadonlyPoint = Readonly<Point>;

    function modifyReadonlyPoint(point: ReadonlyPoint): void {
        point.x = 100;
    }

    modifyReadonlyPoint({ x: 10, y: 20 });
