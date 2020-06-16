Tutorial
--------

While loops are very similar to For loops, They are defined like this:

    while([conditions to be checked])
    {
    [Code to execute]
    }

This allows you to continuously repeat a section of code while a condition is satisfied.

E.G:

    int n = 0;

    while( n == 0)
    {
        Console.WriteLine("N is 0");
        n++;
    }

This would execute once as N is changed from zero the first time it runs.
Unlike for loops, while loops do not allow you to declare or assign the variable used in the conditions.

The same control statements (break and continue) as are used in for loops can also be used in while loops.

Exercise
--------

Print X to the console N time using a while loop

Tutorial Code
-------------

    using System;

    public class Functions
    {
        public static void Main()
        {
            string x = "Hi";
            int n = 10;

            //write while loop here
        }

    }


Expected Output
---------------

    Hi
    Hi
    Hi
    Hi
    Hi
    Hi
    Hi
    Hi
    Hi
    Hi

Solution
--------
    using System;
    
    public class Functions
    {
        public static void Main()
        {
            string x = "Hi";
            int n = 10;

            int i = 0;

            while(i < n)
            {
                Console.WriteLine(x);
                i++;
            }
        }

    }
