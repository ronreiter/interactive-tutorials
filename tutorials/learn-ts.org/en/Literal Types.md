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

    function sortOrderMessage(order: /* Your literal type here */): string {
        // Your code here
        return "";
    }

Expected Output
-------
Calling `sortOrderMessage("ascending")`:

    "The order is set to ascending."

Calling `sortOrderMessage("descending")`:

    "The order is set to descending."

Solution
-------

    function sortOrderMessage(order: "ascending" | "descending"): string {
        if (order === "ascending") {
            return "The order is set to ascending.";
        } else {
            return "The order is set to descending.";
        }
    }