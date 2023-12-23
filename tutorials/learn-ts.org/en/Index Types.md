### Index Types and Index Signatures

Tutorial
-------
TypeScript supports indexable types which have an index signature to allow for objects with string or number keys. This can be useful when you don't know in advance what the keys of the object might be.

    interface StringDictionary {
        [index: string]: string;
    }

Exercise
-------
Create an interface for a dictionary which has string keys and values can be either strings or numbers. Then, create a function to return the value for a given key from this dictionary.

Tutorial Code
-------
    interface MyDictionary {
        // Your index signature here
    }

    function getValueFromDict(key: string, dict: MyDictionary): string | number | undefined {
        // Your code here
        return undefined;
    }

    const dict = { name: "Alice", age: 30 };
    console.log(getValueFromDict("name", dict));

Expected Output
-------
    Alice

Solution
-------
    interface MyDictionary {
        [index: string]: string | number;
    }

    function getValueFromDict(key: string, dict: MyDictionary): string | number | undefined {
        return dict[key];
    }

    const dict = { name: "Alice", age: 30 };
    console.log(getValueFromDict("name", dict));
