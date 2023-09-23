### Generics in TypeScript

Tutorial
-------
Generics allow you to define the type of a member upfront, permitting a variety of types without losing the information about that type. This provides flexibility while also ensuring type safety.

```typescript
function identity<T>(arg: T): T {
    return arg;
}
```

Exercise
-------
Define a generic function that takes an array of items of a generic type and returns the first item from the array.

Tutorial Code
-------
```typescript
function firstItem<T>(items: T[]): T | undefined {
    // Your code here
    return undefined;
}
```

Expected Output
-------
Calling `firstItem([5, 10, 15])`:

```typescript
5
```

Solution
-------
```typescript
function firstItem<T>(items: T[]): T | undefined {
    return items[0];
}
```
