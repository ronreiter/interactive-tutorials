Tutorial
--------

Methods in C# are portions of a larger program that perform specific tasks. They can be used to keep code clean by separating it into separate pieces. They can also be used in more than one place allowing you to reuse previous code.

In C# methods can be in the main program or can be in libraries, which are external files, containing classes and subroutines which can be imported into a program. This allows them to be distributed easily and used by multiple programs.

Methods in C# are defined like this:

    [Modifiers (E.G public or static)] [Type of output] [Name] ( [parameter 1],[parameter 2] ...)
    {



    }

E.G:

    public static int Multiply(int a, int b)
    {

        return a * b;
    
    }

This method has been passed two parameters, integer a and integer b, this is how you provide input for a subroutine (method). 

The return statement stops the subroutine and (depending on the output type) can output a value of the same type as the output type you put at the top E.G:


    //int is the output type

    int Foo()
    {

        //So you return an integer
        return 0;
    
    }

That is how you can receive output from a subroutine.
But in some cases you do not need to return a value, for instance:


    void Foo()
    {

        //the output type is void, so you don't return a value
        return;
    
    }

In this case the return statement simply stops the subroutine and does not give any output, so if you assigned a variable to the output of a void, the variables value would be null, E.G:


    public static int Main(string[] args)
    {

        // a = null
        int a = Foo();
    
    }

    void Foo()
    {

        return;
    
    }

Exercise
--------

Write a method that divides two numbers (provided as parameters). Tip: you will need to use the modifiers `public` and `static`.

Tutorial Code
-------------

    using System;

    public class Methods
    {
        public static void Main()
        {

            int x = 2;
            int y = 2;
            int a = foo(x,y);
            Console.WriteLine(a);

        }

        //write method foo here
    }

Expected Output
---------------

    1

Solution
--------

    using System;

    public class Methods
    {
        public static void Main()
        {

            int x = 2;
            int y = 2;
            int a = Foo(x,y);
            Console.WriteLine(a);

        }

        public static int Foo(int x, int y)
        {
            return x / y;
        }
    }

