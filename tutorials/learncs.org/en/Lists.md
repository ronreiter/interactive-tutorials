Tutorial
--------

Lists in C# are very similar to lists in Java. A list is an object which holds variables in a specific order.
The type of variable that the list can store is defined using the generic syntax. Here is an example of
defining a list called `numbers` which holds integers.

    List<int> numbers = new List<int>();

The difference between a list and an array is that lists are dynamic sized, while arrays have a fixed size. When
you do not know the amount of variables your array should hold, use a list instead.

Once the list is initialized, we can begin inserting numbers into the list.

    List<int> numbers = new List<int>();
    numbers.Add(1);
    numbers.Add(2);
    numbers.Add(3);

We can also add a whole array to a list using the `AddRange` function:

    List<int> numbers = new List<int>();
    int[] array = new int[] { 1, 2, 3 };
    numbers.AddRange(array);

### Removing from a list

We can use `Remove` to remove an item from a list by specifying the item we want to remove.

    List<string> fruits = new List<string>();
    // add fruits
    fruits.Add("apple");
    fruits.Add("banana");
    fruits.Add("orange");

    // now remove the banana
    fruits.Remove("banana");
    Console.WriteLine(fruits.Count);

We can also use `RemoveAt` to specify an index of an item to remove. In our case, to remove
the banana, we will use the index 1.

    List<string> fruits = new List<string>();
    // add fruits
    fruits.Add("apple");
    fruits.Add("banana");
    fruits.Add("orange");

    // now remove the banana
    fruits.RemoveAt(1);
    Console.WriteLine(fruits.Count);

### Concatenating lists

We can use `AddRange` to join between lists.

    List<string> food = new List<string>();
    food.Add("apple");
    food.Add("banana");

    List<string> vegetables = new List<string>();
    vegetables.Add("tomato");
    vegetables.Add("carrot");

    food.AddRange(vegetables);
    Console.WriteLine(food.Count);

Exercise
--------

Construct a list of the first 5 prime numbers (2, 3, 5, 7, 11) called `primeNumbers`.

Tutorial Code
-------------

    using System;
    using System.Collections.Generic;

    public class Hello
    {
        public static void Main()
        {
            // TODO: add your code here

            // test code
            Console.WriteLine(primeNumbers.Count);
            Console.WriteLine(primeNumbers[0]);
            Console.WriteLine(primeNumbers[1]);
            Console.WriteLine(primeNumbers[2]);
            Console.WriteLine(primeNumbers[3]);
            Console.WriteLine(primeNumbers[4]);

        }
    }

Expected Output
---------------

    5
    2
    3
    5
    7
    11

Solution
--------

    using System;
    using System.Collections.Generic;

    public class Hello
    {
        public static void Main()
        {
            // TODO: add your code here
            List<int> primeNumbers = new List<int>();
            primeNumbers.Add(2);
            primeNumbers.Add(3);
            primeNumbers.Add(5);
            primeNumbers.Add(7);
            primeNumbers.Add(11);

            // test code
            Console.WriteLine(primeNumbers.Count);
            Console.WriteLine(primeNumbers[0]);
            Console.WriteLine(primeNumbers[1]);
            Console.WriteLine(primeNumbers[2]);
            Console.WriteLine(primeNumbers[3]);
            Console.WriteLine(primeNumbers[4]);

        }
    }
