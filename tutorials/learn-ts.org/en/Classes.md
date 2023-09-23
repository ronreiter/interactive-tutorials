### Classes in TypeScript

Tutorial
-----------

Classes in TypeScript are a foundational concept from object-oriented programming (OOP). They provide a blueprint for creating objects, encompassing both the data attributes and the methods to manipulate this data.

Defining a Class
-----------

In TypeScript, a class is created using the `class` keyword. Classes may contain:

**Fields**: These are variables within the class that store data.


    name: string;


**Constructor**: This is a special method used to initialize a new instance of the class.


     constructor(name: string) {
         this.name = name;
     }

**Methods**: Functions defined within the class to perform specific tasks.


    speak(): void {
        console.log(`${this.name} makes a noise.`);
    }

Inheritance
--------

TypeScript supports inheritance, allowing a new class (known as a subclass) to derive from an existing class (superclass). The `extends` keyword facilitates this.

When a subclass extends a superclass, it inherits all properties and methods. However, it can also:

1. Add new properties or methods.
2. Override existing methods.

Example:


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
-----------
Using the inheritance concept in TypeScript, you're tasked to extend the `Animal` class to craft a `Dog` class. Ensure the `Dog` class overrides the `speak` method so it prints `${name} barks` when called.

Tutorial Code
---------------
    class Animal {
        name: string;
    
        constructor(name: string) {
            this.name = name;
        }
    
        speak(): void {
            console.log(`${this.name} makes a noise.`);
        }
    }

    class Dog extends Animal {
        // Your code to override the speak method goes here
    }
    const myDog: Dog = new Dog();
    myDog.speak();

Expected Output
-------------------
Rex barks


Solution
-----------
    class Animal {
        name: string;
    
        constructor(name: string) {
            this.name = name;
        }
    
        speak(): void {
            console.log(`${this.name} makes a noise.`);
        }
    }

    class Dog extends Animal {
        speak(): void {
            console.log(`${this.name} barks`);
        }
    }
    const myDog: Dog = new Dog();
    myDog.speak();