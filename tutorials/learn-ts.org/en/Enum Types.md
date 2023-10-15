### Enum Types

Tutorial
-------
Enums are a way of giving friendly names to sets of numeric values. They can make code more readable and less error-prone.

    enum Color {Red, Green, Blue}
    let c: Color = Color.Green;

By default, `Red` is `0`, `Green` is `1`, and so on. You can also manually set values.

    enum Color {Red = 1, Green = 2, Blue = 4}
    let c: Color = Color.Green;

Exercise
-------
Create an enum for days of the week and a function that takes a day and returns whether it's a weekend or a weekday.

Tutorial Code
-------
    // Your enum here

    function classifyDay(day: /* Your enum type */): string {
        // Your code here
        return "";
    }

    console.log(classifyDay(Days.Monday));
    console.log(classifyDay(Days.Saturday));

Expected Output
-------
Weekday
Weekend

Solution
-------
    enum Days {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday}

    function classifyDay(day: Days): string {
        switch (day) {
            case Days.Sunday:
            case Days.Saturday:
                return "Weekend";
            default:
                return "Weekday";
        }
    }

    console.log(classifyDay(Days.Monday));
    console.log(classifyDay(Days.Saturday));
