### Decorators

Tutorial
-------
Decorators provide a way to add annotations and metaprogramming syntax for class declarations and members. They can be used for class, class method, class accessor, class property, or class parameter. 

A decorator is an expression that evaluates to a function and is prefixed with `@` symbol.

    function sealed(target: Function) {
        Object.seal(target);
        Object.seal(target.prototype);
    }
    
    @sealed
    class Greeter {
        greeting: string;
        constructor(message: string) {
            this.greeting = message;
        }
        greet() {
            return "Hello, " + this.greeting;
        }
    }

In the above example, the `@sealed` decorator prevents adding new properties to the `Greeter` class and prevents removing properties from it.

Exercise
-------
Create a decorator `@logMethod` that logs the name of the method when it's invoked.

Tutorial Code
-------
    // Define your decorator here
    
    class Calculator {
        @logMethod
        add(a: number, b: number): number {
            return a + b;
        }
    }
    let result = new Calculator().add(1, 2);

Expected Output
-------
    Method invoked: add

Solution
-------
    function logMethod(target: Object, propertyKey: string, descriptor: TypedPropertyDescriptor<any>) {
        const originalMethod = descriptor.value;
        descriptor.value = function(...args: any[]) {
            console.log(`Method invoked: ${propertyKey}`);
            return originalMethod.apply(this, args);
        }
        return descriptor;
    }
    
    class Calculator {
        @logMethod
        add(a: number, b: number): number {
            return a + b;
        }
    }
    let result = new Calculator().add(1, 2);
