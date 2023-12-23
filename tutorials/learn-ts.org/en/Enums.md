### Enums in TypeScript

Tutorial
-------
Enums in TypeScript allow us to define a set of named constants.

    enum Days {
        Sunday,
        Monday,
        Tuesday,
        // ...
    }

Exercise
-------
Define an enum named `Months` representing all the months of the year. Create a variable and assign it the value of March from your enum.

Tutorial Code
-------

    enum Months {
        January,
        February,
        // Your code to complete the enum
    }

    // Your code here

    console.log(month);

Expected Output
-------
    2

Solution
-------

    enum Months {
        January,
        February,
        March,
        April,
        May,
        June,
        July,
        August,
        September,
        October,
        November,
        December
    }

    let month: Months = Months.March;

    console.log(month);
