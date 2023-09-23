### Namespaces in TypeScript

Tutorial
-------
Namespaces are a way of logically grouping related code. This is a logical organization and doesn’t affect the runtime in any way.

    namespace MyNamespace {
        export const myValue: number = 10;
    }

Exercise
-------
Create a namespace named `Geometry`. Inside this namespace, define two functions - one to calculate the area of a rectangle, and another for the area of a circle.

Tutorial Code
-------
    namespace Geometry {
        export function areaOfRectangle(width: number, height: number): number {
            // Your code here
            return 0;
        }
    
        export function areaOfCircle(radius: number): number {
            // Your code here
            return 0;
        }
    }

Expected Output
-------
Using the `Geometry.areaOfRectangle` with 10 and 5:

    50

Using the `Geometry.areaOfCircle` with a radius of 7:

    153.93804002589985 // which is π * r^2

Solution
-------
    namespace Geometry {
        export function areaOfRectangle(width: number, height: number): number {
            return width * height;
        }
    
        export function areaOfCircle(radius: number): number {
            return Math.PI * radius * radius;
        }
    }
