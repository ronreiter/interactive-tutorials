Tutorial
--------
C# types are not the same! In some cases you have to convert a value's type.
### Automatically
Usually C# functions convert argument's value type automatically.
There you don't have to do anything.
### Manually
Sometimes C# function don't convert value types. Here, you have to do it manually.
There are two methods:

* By reassigning the value to a new variable: `int myVar = (int) 1.0;`
* By using methods: `string myVar = Convert.ToString(10);`
Note: `Convert` uses the `ToInt32` for int conversion.

Exercise
--------
Convert `myDBL` to int and print it.

Tutorial Code
-------------

    using System;
    public class Conversion
    {
        public static void Main()
        {
            double myDBL = 99.0;
        
        }
    }
    

Expected Output
---------------

99

Solution
--------

    using System;
    public class Conversion
    {
        public static void Main()
        {
            double myDBL = 99.0;
            Console.WriteLine(Convert.ToInt32(myDBL));
        }
    }
    
