Tutorial
--------

For loops are very similar to for loops in C, They are defined like this:

    for( [variable to count iterations] ; [conditions checked for] ; [code to execute every loop])
    {
    
    }

E.G:

    int i;

    for( i = 0; i < 10; i++)
    {

    }

This would loop until i is no longer less than ten, increasing i by one each time.
However unlike C, C# does allow you to declare the variable you are using as to count iterations in the for loop:

    for( int i = 0; i < 10; i++)

For loops are used to allow you to repeat sections of code a fixed, or variable amount of times.
This allows you to make your code more compact and clean.

There are several statements you can use to control a loop:

    break;

This allows you to exit a loop without finishing the loop.

E.G

    for(int i = 0; i < 16; i++)
    {

        if(i == 12)
        {
            break;    
        }
    }

Exit the loop when i is 12, not when the loop would usually finish

    continue;

This allows you to skip straight to the next iteration

    for(int i = 0; i < 16; i++)
    {
    
        if(i % 2 == 1)
        {
            continue;
        }
    
        Console.WriteLine(i);
    
    }

Print only the even numbers by skipping the interactions where i is odd.

Exercise
--------

Print the value of variable X to the screen N number of times

Tutorial Code
-------------


    using System;

    public class Functions
    {
        public static void Main()
        {
            string x = "Hi";
            int n = 10;

            // write for loop here
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

            for( int i = 0; i < n; i++)
            {
                Console.WriteLine(x);
            }
        }

    }

