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

Expected Output
-------
TypeScript compiler should throw an error:

    Cannot assign to 'x' because it is a read-only property.

Solution
-------
The solution here is conceptual rather than an actual code modification, as it's based on a compile-time error. However, a general approach when you want to "modify" a readonly object is to return a new object with changes:

    function newPointFromReadonly(point: ReadonlyPoint, newX: number): Point {
        return { x: newX, y: point.y };
    }
