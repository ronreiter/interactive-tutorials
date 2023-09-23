### Type Assertions

Tutorial
-------
Type assertions allow you to override the inferred type of a variable, telling the compiler that you're sure about the type of the variable.

```typescript
let someValue: any = "this is a string";
let strLength: number = (someValue as string).length;
```

Exercise
-------
Given an `any` type variable that is guaranteed to be a string, use a type assertion to get its length.

Tutorial Code
-------
```typescript
let unknownValue: any = "It's a mystery!";
// Get the length of unknownValue using a type assertion
```

Expected Output
-------
For the length of `unknownValue`:

```typescript
15
```

Solution
-------
```typescript
let length: number = (unknownValue as string).length;
```
