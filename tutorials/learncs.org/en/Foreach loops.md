Tutorial
--------
A Foreach loop is used for getting all items from an array. `foreach` makes that process much easier than using a `for` loop.

Foreach loops are defined like this:

    foreach (type variable in array)
    {
      //Code
    }
    
The loop will get the `array` length and loop through the elements of `array`.

Example:

    string[] programming = {"C++", "C#", "CPython", "C", "Java", "JavaScript"}; //An array
    
    foreach (string language in programming)
    {
       Console.WriteLine(language);
    }

This will output every item in `programming`.

Exercise
--------

In this exercise, you must output every item in `parts` with a `foreach` loop that has `part` as a variable.

Tutorial Code
-------------
    
    using System;
    public class Hello
    {
        public static void Main()
        {
            string[] parts = {"CPU", "RAM", "HDD", "SSD", "GPU"};
            //Place the loop here (Replace the comment)
        }
    }
    
Expected Output
---------------

CPU
RAM
HDD
SSD
GPU

Solution
--------

    using System;
    public class Hello
    {
        public static void Main()
        {
            string[] parts = {"CPU", "RAM", "HDD", "SSD", "GPU"};
            foreach (part in parts)
            {
                Console.WriteLine(part);
            }
        }
    }
