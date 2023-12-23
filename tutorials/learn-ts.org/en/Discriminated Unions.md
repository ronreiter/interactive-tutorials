### Discriminated Unions

Tutorial
-------
Discriminated unions, also known as tagged unions or algebraic data types, 
are a way to combine types with a single shared field, which is typically a 
literal type, used to discriminate between the other types.

The `kind` variable of a `Circle` object must be equal to the literal `"circle"`. 
This is how TypeScript knows how to determine between the objects during the compilation process.

    interface Circle {
        kind: "circle";
        radius: number;
    }

    interface Square {
        kind: "square";
        sideLength: number;
    }

    type Shape = Circle | Square;

Discriminated unions are useful for being able to discriminate between two different objects
with different types. This is useful when there is different business logic that needs to be
implemented while determining the type of object at runtime, while still being able to use strong typing
without using type assertions.

Here is an example of how to use `Shape`:

    const shapes: Shape[] = [
        {
            kind: "circle", 
            radius: 5
        }, 
        {
            kind: "square",
            sideLength: 10
        }
    ];
 
    // example for getting a rendering context that has functions to draw 
    // either a circle or a square using different functions
    const context = ...

    shapes.forEach((shape: Shape) => {
        // we cannot use shape.radius or shape.sideLength here
        // since the compiler doesn't know what type shape is yet

        switch (shape.kind) {
            case "circle":
                // here shape is of type Circle
                context.drawCircle(shape.radius);
                break;
            case "square":
                // here shape is of type Square
                context.drawSquare(shape.sideLength);
                break;
        }
    });


Exercise
-------
Write a function that calculates the area of a given shape (either a circle or a square).

To calculate the radius of a circle, use `Math.PI * shape.radius ** 2`.

To calculate the area of a square, use `shape.sideLength ** 2`.

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
                return Math.PI * shape.radius ** 2;
            case "square":
                return shape.sideLength ** 2;
        }
    }

    console.log(calculateArea({kind: "circle", radius: 2}))
    console.log(calculateArea({kind: "square", sideLength: 3}))
