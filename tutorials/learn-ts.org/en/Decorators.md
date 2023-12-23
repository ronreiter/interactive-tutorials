### Decorators in TypeScript

Tutorial
-------
Decorators provide a way to add annotations and modify classes and class members at design time. They are a special kind of declaration that can be attached to class declarations, methods, accessors, properties, or parameters.

    function readonly(target: any, propertyKey: string, descriptor: PropertyDescriptor) {
        descriptor.writable = false;
    }

    class Greeter {
        greeting: string;

        constructor(message: string) {
            this.greeting = message;
        }

        @readonly
        greet() {
            return "Hello, " + this.greeting;
        }
    }

Exercise
-------
Write a decorator called `log` that logs to the console each time a method is called. Apply this decorator to a method within a class.

Tutorial Code
-------

    function log(target: any, propertyKey: string, descriptor: PropertyDescriptor) {
        // Your decorator code here
    }

    class Calculator {
        add(a: number, b: number): number {
            // Your code here
            return 0;
        }
    }

Expected Output
-------
When calling the `add` method:

    "add method called"

Solution
-------

    function log(target: any, propertyKey: string, descriptor: PropertyDescriptor) {
        let originalMethod = descriptor.value;

        descriptor.value = function(...args: any[]) {
            console.log(`${propertyKey} method called`);
            return originalMethod.apply(this, args);
        }
    }

    class Calculator {
        @log
        add(a: number, b: number): number {
            return a + b;
        }
    }