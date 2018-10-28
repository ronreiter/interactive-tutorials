Tutorial
--------

C# uses Boolean variables to evaluate conditions. The Boolean values `true` and `false` are returned when an expression is compared or evaluated.
For example:

    int a = 4;
    bool b = a == 4;

    if (b) {
        Console.WriteLine("It's true!");
    }

Of course we don't normally assign a conditional expression to a bool, we just use the short version:

    int a = 4;

    if (a == 4) {
        Console.WriteLine("Ohhh! So a is 4!");
    }

### Boolean operators

There aren't that many operators to use in conditional statements and most of them are pretty straight forward:

    int a = 4;
    int b = 5;
    bool result;
    result = a < b; // true
    result = a > b; // false
    result = a <= 4; // a smaller or equal to 4 - true
    result = b >= 6; // b bigger or equal to 6 - false
    result = a == b; // a equal to b - false
    result = a != b; // a is not equal to b - true
    result = a > b || a < b; // Logical or - true
    result = 3 < a && a < 6; // Logical and - true
    result = !result; // Logical not - false

### if - else and between

The if, else statement in C# is pretty simple.

    if (a == b) {
        // a and b are equal, let's do something cool
    }

And we can also add an else statement after an if, to do something if the condition is not true

    if (a == b) {
        // We already know this part
    } else {
        // a and b are not equal... :/
    }

The if - else statements doesn't have to be in several lines with {}, if can be used in one line, or without the {}, for a single line statment.

    if (a == b)
        Console.WriteLine("Another line Wow!");
    else
        Console.WriteLine("Double rainbow!");

Although this method might be useful for making your code shorter by using fewer lines, we strongly recommend for beginners not to use this short version of statements and always use the full version with {}. This goes to every statement that can be shorted to a single line (for, while, etc).

Exercise
--------

In this exercise, you must construct an `if` statement that checks if the number `guess` is equal to 500. If that is the case, use `Console.WriteLine` to display "Success!".

Tutorial Code
-------------

    using System;
    
    public class Conditionals
    {
        public static void Main()
        {
            int guess = 500;
            
            // Write conditional here
        }
    }

Expected Output
---------------

    Success!

Solution
--------

    using System;
    
    public class Conditionals
    {
        public static void Main()
        {
            int guess = 500;
            
            if (guess == 500)
            {
                Console.WriteLine("Success!");
            }
        }
    }
