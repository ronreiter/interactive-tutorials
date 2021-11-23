Tutorial
--------
To communicate with your CPU, the CPU outputs text on your monitor and asks for user input.
`Console` has a function called `ReadLine()` which tells the OS Kernel to ask for user input.

    using System;
    public class Input
    {
        public static void Main()
        {
            Console.ReadLine();
        }
    }
    
When you run this script, you can write on the console. When you press Enter then the console will close.

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
Sorry. No exercise because `Expected Output` only reads output :(
