### Discriminated Unions

Tutorial
-------
Discriminated unions, also known as tagged unions or algebraic data types, are a way to combine types with a single shared field, which is typically a literal type, used to discriminate between the other types.

    interface Circle {
        kind: "circle";
        radius: number;
    }

    interface Square {
        kind: "square";
        sideLength: number;
    }

    type Shape = Circle | Square;

Exercise
-------
Write a function that calculates the area of a given shape (either a circle or a square).

Tutorial Code
-------
    interface Circle {
        kind: "circle";
        radius: number;
    }

    interface Square {
        kind: "square";
        sideLength: number;
    }

    type Shape = Circle | Square;

    function calculateArea(shape: Shape): number {
        // Your code here
        return 0;
    }

    console.log(calculateArea({kind: "circle", radius: 2}))
    console.log(calculateArea({kind: "square", sideLength: 3}))

Expected Output
-------
    12.566370614359172
    9

Solution
-------
    interface Circle {
        kind: "circle";
        radius: number;
    }

    interface Square {
        kind: "square";
        sideLength: number;
    }

    type Shape = Circle | Square;

    function calculateArea(shape: Shape): number {
        switch (shape.kind) {
            case "circle":
                return Math.PI * shape.radius * shape.radius;
            case "square":
                return shape.sideLength * shape.sideLength;
        }
    }

    console.log(calculateArea({kind: "circle", radius: 2}))
    console.log(calculateArea({kind: "square", sideLength: 3}))
