Tutorial
--------

For loops are very similar to for loops in C, They are defined like this:

for( [variable to count iterations] , [conditions checked for, [code to execute every loop)
{

}

E.G:

int i;

for( i = 0, i < 10, i++)
{

}

This would loop until i is no longer less than ten, increasing i by one each time.
However unlike C, C# does allow you to declare the variable you are using as to count iterations in the for loop:

for( int i = 0, i < 10, i++)

For loops are used to allow you to repeat sections of code a fixed, or variable amount of times.
This allows you to make your code more compact and clean.

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
        string x = "HI";
        int n = 10;
        
        //write for loop here
    }
    
}


Expected Output
---------------

HI
HI
HI
HI
HI
HI
HI
HI
HI
HI

Solution
--------

using System;

public class Functions
{
    public static void Main()
    {
        string x = "HI";
        int n = 10;
        
        for( int i = 0; i < n; i++)
        {
            Console.WriteLine(x);
        }
    }
    
}

