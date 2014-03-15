Tutorial
--------

Arrays in C# are very similar to arrays in C. They are defined using the brackets operator `[]`, and
they are initialized using a list defined with curly braces. For example:

    int[] nums = { 1, 2, 3, 4, 5 };

We can also define an empty array like this:

    int[] nums = new int[10];

To get the size of the array, use the `Length` method.

    int[] nums = new int[10];
    Console.WriteLine(nums.Length);

To access a specific item in the array, we use the brackets operator:

    int[] nums = new int[10];
    int firstNumber = nums[0];
    int secondNumber = nums[1];
    nums[2] = 10;

Notice that C# uses zero based indices.

### Multidimensional arrays

C# supports multidimensional arrays, defined in the following manner:

    int[,] matrix = new int[2,2];

    matrix[0,0] = 1;
    matrix[0,1] = 2;
    matrix[1,0] = 3;
    matrix[1,1] = 4;

    int[,] predefinedMatrix = new int[2,2] { { 1, 2 }, { 3, 4 } };

Exercise
--------

Define an array called `fruits` that holds the following strings: "apple", "banana", and "orange".

Tutorial Code
-------------

    using System;

    public class Tutorial
    {
       public static void Main()
       {
          // write your code here

          // test code
          Console.WriteLine(fruits[0]);
          Console.WriteLine(fruits[1]);
          Console.WriteLine(fruits[2]);
       }
    }

Expected Output
---------------

    apple
    banana
    orange

Solution
--------

    using System;

    public class Tutorial
    {
       public static void Main()
       {
          // write your code here
          string[] fruits = new string[] { "apple", "banana", "orange" };

          // test code
          Console.WriteLine(fruits[0]);
          Console.WriteLine(fruits[1]);
          Console.WriteLine(fruits[2]);
       }
    }


