### Generics

Tutorial
-------
Generics provide a way to make components work with any data type and not restrict them to a single data type. They ensure type safety without compromising the performance or functionality.

```typescript
function identity<T>(arg: T): T {
    return arg;
}
```

Exercise
-------
Define a generic function that reverses the elements in an array.

Tutorial Code
-------
```typescript
function reverse<T>(items: T[]): T[] {
    // Your code here
    return [];
}
```

Expected Output
-------
Calling `reverse([1, 2, 3])`:

```typescript
[3, 2, 1]
```

Calling `reverse(["a", "b", "c"])`:

```typescript
["c", "b", "a"]
```

Solution
-------
```typescript
function reverse<T>(items: T[]): T[] {
    return items.reverse();
}
```

-----
