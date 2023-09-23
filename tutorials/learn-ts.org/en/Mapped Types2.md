### Mapped Types

Tutorial
-------
Mapped types allow you to create new types based on old types, transforming property types in the process. 
For instance, you can make all properties of an object readonly or optional.

    type Readonly<T> = {
        readonly [P in keyof T]: T[P];
    };

With the above, you can create a new type that has all properties of the original type, but as readonly.

Exercise
-------
Create a mapped type that turns all properties of a type to optional.

Tutorial Code
-------
    type OriginalType = {
        id: number;
        name: string;
    };

    type OptionalType = {
        // Your mapped type here
    };

    const variable: OptionalType = {name: "John"};
    console.log(variable);

Expected Output
-------
    {name: "John"}

Solution
-------
    type OptionalType<T> = {
        [P in keyof T]?: T[P];
    };
    
    type ResultType = OptionalType<OriginalType>;
    const variable: OptionalType = {name: "John"};
    console.log(variable);
