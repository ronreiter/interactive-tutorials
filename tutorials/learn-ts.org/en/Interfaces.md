### Interfaces in TypeScript

Tutorial
-----------
In TypeScript, interfaces play a pivotal role in defining the shape or structure that objects should adhere to. They don't get compiled into JavaScript and exist only for static type checking. When you define an object based on an interface, the object must fulfill the shape required by that interface.

    interface Dog {
        name: string;
        age: number;
    }

Using the above interface, any object declared with type `Dog` should have both a `name` property of type `string` and an `age` property of type `number`.

An interface may also have optional fields, denoted using the `?` operator, as follows:

    interface Dog {
        name: string;
        age: number;
        vaccinated?: boolean;
    }

This interface allows omitting the property `vaccinated` if a person does not want to specify
if his dog was vaccinated or not.


Exercise
-----------
Your task is to create an interface named `Car`. This interface should possess two properties: `model`, which will be a string, and `year`, a number. Once you've defined the interface, make an object that fits the criteria set by the interface.

Tutorial Code
---------------
    // write the interface here

    let myCar: Car = {
        model: "Tesla",
        year: 2022
    };

    console.log(myCar.model);

Expected Output
-------------------
Tesla

Solution
-----------
    interface Car {
        model: string;
        year: number;
    }

    let myCar: Car = {
        model: "Tesla",
        year: 2023
    };

    console.log(myCar.model);
