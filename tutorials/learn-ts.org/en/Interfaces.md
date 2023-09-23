### Interfaces in TypeScript

Tutorial
-------
Interfaces define the shape of an object. They ensure strict adherence to a structure.

    interface Dog {
        name: string;
        age: number;
    }

Exercise
-------
Define an interface named `Car` with properties `model` (string) and `year` (number). Then, create an object that matches this interface.

Tutorial Code
-------

    interface Car {
        model: string;
        year: number;
    }

    let myCar: Car = {
        model: "Toyota",
        year: 2022
    };

Expected Output
-------
When accessing `myCar.model`:

    "Tesla"

Solution
-------

    let myCar: Car = {
        model: "Tesla",
        year: 2023
    };