### Enums in TypeScript

Tutorial
-------
Enums allow us to define a set of named constants. Using enums can make it easier to document intent, or create a set of distinct cases. TypeScript provides both numeric and string-based enums.

    enum Direction {
        Up = 1,
        Down,
        Left,
        Right
    }

Exercise
-------
Define an enum called `Days` representing the days of the week. Then, create a function that takes a `Days` value and returns a string message about that day.

Tutorial Code
-------
    enum Days {
        // Define your days here
    }
    
    function getDayMessage(day: Days): string {
        // Your code here
        return "";
    }

    console.log(getDayMessage(Days.Monday));

Expected Output
-------
    Monday is the start of the week.

Solution
-------
    enum Days {
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday,
        Sunday
    }
    
    function getDayMessage(day: Days): string {
        switch(day) {
            case Days.Monday: return "Monday is the start of the week.";
            // ... you can continue for other days
        }
    }

    console.log(getDayMessage(Days.Monday));
