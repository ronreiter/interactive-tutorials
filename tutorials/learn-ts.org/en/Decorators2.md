### Decorators

Tutorial
-------
Decorators provide a way to add both annotations and a meta-programming syntax for class declarations and members. They are a stage 2 proposal for JavaScript and used heavily in Angular.

```typescript
function sealed(target: any) {
    Object.seal(target);
    Object.seal(target.prototype);
}
@sealed
class Greeter {
    greeting: string;
    constructor(message: string) {
        this.greeting = message;
    }
}
```

Exercise
-------
Define a decorator `@log` that logs to the console whenever a method of the class it decorates is called.

Tutorial Code
-------
```typescript
// Your decorator function here

@log
class Calculator {
    add(a: number, b: number): number {
        return a + b;
    }
}
```

Expected Output
-------
Calling `let calc = new Calculator(); calc.add(2, 3);`:

```typescript
"add method called with arguments: 2, 3"
5
```

Solution
-------
```typescript
function log(target: any, propertyKey: string, descriptor: PropertyDescriptor) {
    let originalMethod = descriptor.value;
    descriptor.value = function(...args: any[]) {
        console.log(propertyKey + " method called with arguments: " + JSON.stringify(args));
        return originalMethod.apply(this, args);
    };
    return descriptor;
}

class Calculator {
    @log
    add(a: number, b: number): number {
        return a + b;
    }
}
```
