Tutorial
--------

To communicate with your CPU, the CPU outputs text on your monitor and asks for user input.
`Console` has a function called `ReadLine()` which tells the OS Kernel to ask for user input.

For example:

    using System;
    public class Input
    {
        public static void Main()
        {
            Console.ReadLine();
        }
    }

When you run this script, you can write on the console. When you press Enter then the console will close.

You can also read the user's input and print it back out to the console:

    using System;

    public class Input
    {
        public static void Main()
        {
            Console.WriteLine(Console.ReadLine());
        }
    }

This will print your input to the console.

Exercise
--------

Use `Console.ReadLine()` to read a line of user input and print it back out with `Console.WriteLine()`.

Tutorial Code
-------------

    using System;

    public class Tutorial
    {
       public static void Main()
       {
          // write your code here

       }
    }

Expected Output
---------------

    Hello, World!

Solution
--------

    using System;

    public class Tutorial
    {
       public static void Main()
       {
          Console.WriteLine(Console.ReadLine());
       }
    }
