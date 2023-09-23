### Classes in TypeScript

Tutorial
-------
Classes in TypeScript encapsulate data for the object and methods to manipulate that data.

    class Animal {
        name: string;

        constructor(name: string) {
            this.name = name;
        }

        speak(): void {
            console.log(`${this.name} makes a noise.`);
        }
    }

Exercise
-------
Extend the `Animal` class to create a `Dog` class. The `Dog` class should override the `speak` method to print out `${name} barks`.

Tutorial Code
-------

    class Dog extends Animal {
        // Your code to override the speak method
    }

Expected Output
-------
After creating an instance of Dog with the name "Rex" and calling `speak()`:

    Rex barks

Solution
-------

    class Dog extends Animal {
        speak(): void {
            console.log(`${this.name} barks`);
        }
    }