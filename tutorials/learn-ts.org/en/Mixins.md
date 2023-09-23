### Mixins

Tutorial
-------
Mixins are a design pattern that allows you to compose behaviors from multiple source objects into a new object. In TypeScript, this pattern can be achieved by combining multiple classes to form a new class. It's a way of reusing multiple class functionalities to form a new unique class.

Let's see a basic example:

    // Disposable Mixin
    class Disposable {
        isDisposed: boolean = false;
        dispose() {
            this.isDisposed = true;
        }
    }
    
    // Activatable Mixin
    class Activatable {
        isActive: boolean = false;
        activate() {
            this.isActive = true;
        }
        deactivate() {
            this.isActive = false;
        }
    }
    
    // The combined class
    class SmartObject implements Disposable, Activatable {
        constructor() {
            setInterval(() => console.log(`Active: ${this.isActive}, Disposed: ${this.isDisposed}`), 500);
        }
    
        interact() {
            this.activate();
        }
    
        // Disposable
        isDisposed: boolean = false;
        dispose: () => void;
    
        // Activatable
        isActive: boolean = false;
        activate: () => void;
        deactivate: () => void;
    }
    
    applyMixins(SmartObject, [Disposable, Activatable]);
    
    function applyMixins(derivedCtor: any, baseCtors: any[]) {
        baseCtors.forEach(baseCtor => {
            Object.getOwnPropertyNames(baseCtor.prototype).forEach(name => {
                derivedCtor.prototype[name] = baseCtor.prototype[name];
            });
        });
    }

In the example above, we have two classes `Disposable` and `Activatable` that act as our Mixins. We then use these to create a new class `SmartObject`.

Exercise
-------
Create a mixin `Logger` that has a method `log(message: string)` to log messages. Combine this mixin with the `Activatable` class to create a new class `LoggedActivatable` that logs a message every time it's activated or deactivated.

Tutorial Code
-------
    // Logger Mixin
    class Logger {
        log(message: string) {
            console.log(message);
        }
    }
    
    // Your LoggedActivatable class definition here

Expected Output
-------
Upon calling `activate` or `deactivate` methods:

    "Activating..."
    "Deactivating..."

Solution
-------
    class Logger {
        log(message: string) {
            console.log(message);
        }
    }
    
    class LoggedActivatable extends Activatable implements Logger {
        // Logger
        log: (message: string) => void;
    
        // Override activate and deactivate
        activate() {
            super.activate();
            this.log("Activating...");
        }
        deactivate() {
            super.deactivate();
            this.log("Deactivating...");
        }
    }
    
    applyMixins(LoggedActivatable, [Logger]);


