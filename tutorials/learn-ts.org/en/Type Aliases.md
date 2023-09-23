### Type Aliases in TypeScript

Tutorial
-------
Type aliases allow you to give a new name to a type. This can be helpful for readability and when working with complex types.

    type Point = {
        x: number;
        y: number;
    };

Exercise
-------
Create a type alias for a `Rectangle` which contains properties for its width and height. Also, define a function that takes a `Rectangle` as its argument and returns the area of that rectangle.

Tutorial Code
-------
    type Rectangle = {
        // Your code to define the properties
    };
    
    function computeArea(rect: Rectangle): number {
        // Your code to compute the area
        return 0;
    }

    computeArea({ width: 10, height: 5 });

Expected Output
-------
    50

Solution
-------
    type Rectangle = {
        width: number;
        height: number;
    };
    
    function computeArea(rect: Rectangle): number {
        return rect.width * rect.height;
    }

    computeArea({ width: 10, height: 5 });
