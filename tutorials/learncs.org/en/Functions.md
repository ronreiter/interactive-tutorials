Tutorial
--------

Functions in C# are portions of a larger program that perform specific tasks. They can be used to keep code clean by seperating it into seperate peices. They can also be used in more than one place allowing you to reuse previous code.

In C# functions can be in the main program or can be in libraries, which are external files, containing classes and subroutines which can be imported into a program. This allows them to be distributed easily and used by multiple programs.

Functions in C# are defined like this:

    [Modifiers (E.G public or static)] [Type of output] [Name] ( [parameter 1],[parameter 2] ...)
    {



    }

E.G:

    public static int multiply(int a, int b)
    {

        return a * b;
    
    }

This function has been passed two parameters, integer a and integer b, this is how you provide input for a subroutine (function). 

The return statement stops the subroutine and (depending on the output type) can output a value of the same type as the output type you put at the top E.G:


    //int is the output type

    int foo()
    {

        //So you return an integer
        return 0;
    
    }

That is how you can recieve output from a subroutine.
But in some cases you do not need to return a value, for instance:


    void foo()
    {

        //the output type is void, so you don't return a value
        return;
    
    }

In this case the return statement simply stops the subroutine and does not give any output, so if you assigned a variable to the output of a void, the variables value would be null, E.G:


    public static int main(string[] args)
    {

        // a = null
        int a = foo();
    
    }

    void foo()
    {

        return;
    
    }

Exercise
--------

Write a function that divides two numbers (provided as parameters). Tip: you will need to use the modifiers `public` and `static`.

Tutorial Code
-------------

    using System;

    public class Functions
    {
        public static void Main()
        {

            int x = 2;
            int y = 2;
            int a = foo(x,y);
            Console.WriteLine(a);

        }

        //write function foo here
    }

Expected Output
---------------

    1

Solution
--------

    using System;

    public class Functions
    {
        public static void Main()
        {

            int x = 2;
            int y = 2;
            int a = foo(x,y);
            Console.WriteLine(a);

        }

        public static int foo(int x,int y)
        {
            return x / y;
        }
    }

