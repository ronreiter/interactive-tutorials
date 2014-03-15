Tutorial
--------

Dictionaries are special lists, whereas every value in the list has a key which is also a variable. A good example
for a dictionary is a phone book.

    Dictionary<string, long> phonebook = new Dictionary<string, long>();
    phonebook.Add("Alex", 4154346543);
    phonebook["Jessica"] = 4159484588;

Notice that when defining a dictionary, we need to provide a generic definition with two types - the type of
the key and the type of the value. In this case, the key is a string whereas the value is an integer.

There are also two ways of adding a single value to the dictionary, either using the brackets operator
or using the `Add` method.

To check whether a dictionary has a certain key in it, we can use the `ContainsKey` method:

    Dictionary<string, long> phonebook = new Dictionary<string, long>();
    phonebook.Add("Alex", 415434543);
    phonebook["Jessica"] = 415984588;

    if (phonebook.ContainsKey("Alex"))
    {
        Console.WriteLine("Alex's number is " + phonebook["Alex"]);
    }

To remove an item from a dictionary, we can use the `Remove` method. Removing an item from
a dictionary by its key is fast and very efficient. When removing an item from a `List` using its value,
the process is slow and inefficient, unlike the dictionary `Remove` function.

    Dictionary<string, long> phonebook = new Dictionary<string, long>();
    phonebook.Add("Alex", 415434543);
    phonebook["Jessica"] = 415984588;

    phonebook.Remove("Jessica");
    Console.WriteLine(phonebook.Count);

Exercise
--------

Create a new dictionary called `inventory` that holds 3 names of fruits, and the amount they are in stock.

Here is the inventory specification:

* 3 of type `apple`
* 5 of type `orange`
* 2 of type `banana`

Tutorial Code
-------------

    using System;
    using System.Collections.Generic;

    public class Hello
    {
        public static void Main()
        {
            // TODO: add the inventory dictionary here

            Console.WriteLine(inventory["apple"]);
            Console.WriteLine(inventory["orange"]);
            Console.WriteLine(inventory["banana"]);

        }
    }


Expected Output
---------------

    3
    5
    2

Solution
--------

    using System;
    using System.Collections.Generic;

    public class Hello
    {
        public static void Main()
        {
            Dictionary<string, int> inventory = new Dictionary<string, int>();
            inventory["apple"] = 3;
            inventory["orange"] = 5;
            inventory["banana"] = 2;

            Console.WriteLine(inventory["apple"]);
            Console.WriteLine(inventory["orange"]);
            Console.WriteLine(inventory["banana"]);

        }
    }
