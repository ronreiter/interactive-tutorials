### Literal Types

Tutorial
-------
Literal types allow you to specify the exact value an object must have. In many cases, they can be combined with union types to express a finite set of possible values.

    type ButtonSizes = "small" | "medium" | "large";

Exercise
-------
Define a function that accepts a parameter with a literal type of either "ascending" or "descending", and returns a corresponding message.

Tutorial Code
-------
    function sortOrderMessage(order: any /* Your literal type here */): string {
        // Your code here
        return "";
    }

    console.log(sortOrderMessage("ascending"));
    console.log(sortOrderMessage("descending"));

Expected Output
-------
    The order is set to ascending.
    The order is set to descending.

Solution
-------
    function sortOrderMessage(order: "ascending" | "descending"): string {
        if (order === "ascending") {
            return "The order is set to ascending.";
        } else {
            return "The order is set to descending.";
        }
    }

    console.log(sortOrderMessage("ascending"));
    console.log(sortOrderMessage("descending"));
