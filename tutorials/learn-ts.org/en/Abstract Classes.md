### Abstract Classes

Tutorial
-------
Abstract classes in TypeScript serve as a base class and cannot be instantiated. They can, however, be extended. Abstract classes can contain real implementation for some methods, but they can also have abstract methods, which don't have an implementation in the abstract class and must be implemented by any concrete (non-abstract) subclass.

Example:

```typescript
abstract class Animal {
    abstract makeSound(): void;

    move(): void {
        console.log('Moving...');
    }
}

class Dog extends Animal {
    makeSound() {
        console.log('Bark!');
    }
}

const myDog = new Dog();
myDog.makeSound();  // Outputs: Bark!
myDog.move();       // Outputs: Moving...
```

Here, the `Animal` class has an abstract method `makeSound`, which is then implemented by the `Dog` subclass.

Exercise
-------
Extend the abstract class `Shape` and create two classes: `Circle` and `Rectangle`. Implement the abstract `area` method in both classes to return the area of the shape.

Tutorial Code
-------
```typescript
abstract class Shape {
    abstract area(): number;
}

// Your Circle and Rectangle class definitions here
```

Expected Output
-------
For a `Circle` with radius `5`:

```typescript
78.53981633974483  // using πr^2 formula
```

For a `Rectangle` with width `4` and height `7`:

```typescript
28  // using width * height formula
```

Solution
-------
```typescript
class Circle extends Shape {
    constructor(public radius: number) {
        super();
    }

    area(): number {
        return Math.PI * this.radius * this.radius;
    }
}

class Rectangle extends Shape {
    constructor(public width: number, public height: number) {
        super();
    }

    area(): number {
        return this.width * this.height;
    }
}
```