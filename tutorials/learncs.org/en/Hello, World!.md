Tutorial
--------

C# is a static programming language which lets us write code that runs atop Microsoft's .NET framework.
C# has more features and capabilities than Java, but since it is owned by Microsoft, it means that
you may find yourself paying money for your IDE, server operating system, etc.

C# is object oriented and its syntax is very similar to Java.

In our tutorial, we will be using the `System.Console.WriteLine` function to write lines to the output
console. When writing a C# command line application, the same function can also be used to print to the
console.

**Note:** Writing web applications using C# is possible using the ASP.NET framework.

Exercise
--------

Print "Hello, World!" to the console.

Tutorial Code
-------------

    using System;

    public class Hello
    {
        public static void Main()
        {
            System.Console.WriteLine("Goodbye, World!");
        }
    }

Expected Output
---------------

    Hello, World!

Solution
--------

    using System;

    public class Hello
    {
        public static void Main()
        {
            System.Console.WriteLine("Hello, World!");
        }
    }