### Utility Types: Partial, Readonly, and Record

Tutorial
-------
Utility types in TypeScript allow for type transformations, making it easier to handle complex type manipulations. Some of the utility types include:

1. **Partial**: Constructs a type with all properties of the given type set to optional.

```typescript
interface Todo {
    title: string;
    description: string;
}

const updateTodo: Partial<Todo> = {
    title: "Learn TypeScript"
};
```

2. **Readonly**: Constructs a type with all properties of the given type set as readonly.

```typescript
const todo: Readonly<Todo> = {
    title: "Visit museum",
    description: "Go to the history museum"
};

// todo.title = "Change title";  // This will throw an error as title is readonly
```

3. **Record**: Constructs an object type with set keys and the same type of values.

```typescript
const animalsAges: Record<string, number> = {
    cat: 2,
    dog: 5
};
```

Exercise
-------
Create a function that accepts a list of tasks (Todos) and returns a new list where each task is set as incomplete.

Tutorial Code
-------
```typescript
interface Todo {
    title: string;
    description: string;
    complete?: boolean;
}

function setTasksAsIncomplete(todos: Todo[]): Todo[] {
    // Your code here
    return [];
}
```

Expected Output
-------
Given the array `[{title: "Task 1", description: "Description 1"}, {title: "Task 2", description: "Description 2"}]`:

```typescript
[
    {title: "Task 1", description: "Description 1", complete: false},
    {title: "Task 2", description: "Description 2", complete: false}
]
```

Solution
-------
```typescript
function setTasksAsIncomplete(todos: Todo[]): Todo[] {
    return todos.map(todo => ({ ...todo, complete: false }));
}
```