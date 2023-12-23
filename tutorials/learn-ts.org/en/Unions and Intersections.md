### Union and Intersection Types in TypeScript

Tutorial
-------
In TypeScript, you can define a type that can be one of several types using a union type. This is beneficial when an entity can reasonably be one of several types.

    type StringOrNumber = string | number;

Intersection types allow you to combine multiple types into one, enabling objects to have properties of all intersected types.

    type Name = { name: string };
    type Age = { age: number };
    type Person = Name & Age;

Exercise
-------
Define a union type named `Vehicle` which can be either `Car` or `Bike`. The `Car` type has properties `type` and `doors`, while the `Bike` type has properties `type` and `hasBell`. Create a function that takes a `Vehicle` as an argument and returns whether it's a `Car` or `Bike`.

Tutorial Code
-------
    type Car = { type: "car", doors: number };
    type Bike = { type: "bike", hasBell: boolean };

    type Vehicle = Car | Bike;

    function identifyVehicle(vehicle: Vehicle): string {
        // Your code here
        return "";
    }

    console.log(identifyVehicle({ type: "bike", hasBell: true }));

Expected Output
-------
    bike

Solution
-------
    type Car = { type: "car", doors: number };
    type Bike = { type: "bike", hasBell: boolean };

    type Vehicle = Car | Bike;

    function identifyVehicle(vehicle: Vehicle): string {
        return vehicle.type;
    }

    console.log(identifyVehicle({ type: "bike", hasBell: true }));
