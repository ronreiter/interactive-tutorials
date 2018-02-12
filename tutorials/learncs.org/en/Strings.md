Tutorial
--------

To define a string, use quotes:

    string myString = "A string.";

We can also use a Java object approach to create a string. In C#, a `string` is an alias for the `String` object.

    String myString = "A string.";

To create an empty string, we can either define an empty string or use `String.Empty`, which is preferred.

    string emptyString = String.Empty;
    string anotherEmptyString = "";

To concatenate between strings, use the plus operator:

    string firstName = "Eric";
    string lastName = "Smith";
    string fullName = firstName + " " + lastName;

To add one string to another, use the `+=` operator:

    string sentence = "I like to play ";
    sentence += "chess.";
    Console.WriteLine(sentence);

### ToString function

To cast a non-string object into a string, use the built in 'object.ToString()' function. Casting with '(string)' will only work on objects that are already strings, so the ToString function is necessary when turning something like an int into a string.

    int integer = 1;
    string ourString = "Something to be replaced by an int";
    ourString = integer.ToString();
    System.Console.WriteLine(ourString);

### String formatting

To format a string, use the `String.Format` function. Each additional argument to the function
can be referred to in the string using the brackets operator with the index number. For example,
`{1}` refers to the second argument provided for the format function.

    int x = 1, y = 2;
    int sum = x + y;
    string sumCalculation = String.Format("{0} + {1} = {2}", x, y, sum);
    Console.WriteLine(sumCalculation);

### Substring

The `Substring` string method returns a part of the string, beginning from the index
specified as the argument. Substring also accepts a maximum length for the substring.

    string fullString = "full string";
    string partOfString = fullString.Substring(5);
    string shorterPart = fullString.Substring(5, 3);
    Console.WriteLine(partOfString);
    Console.WriteLine(shorterPart);

### Search and replace

The `Replace` string method replaces an occurrence of a string with another string.

    string name = "John Doe";
    string newName = name.Replace("John", "Eric");
    Console.WriteLine(newName);

### Index of

The `IndexOf` string method finds the first occurrence of a string in a larger string. If
the string is not found, -1 is returned.

    string fruit = "apple,orange,banana";
    Console.WriteLine("Found orange in position: " + fruit.IndexOf("orange"));
    Console.WriteLine("Found lemon in position: " + fruit.IndexOf("lemon"));

Exercise
--------

Use string formatting to format the variables `firstName`, `lastName` and `age` to form
the following sentence into the string `sentence`:

`John Doe is 27 years old.`

Tutorial Code
-------------

    using System;

    public class Hello
    {
        public static void Main()
        {
            string firstName = "John";
            string lastName = "Doe";
            int age = 27;

            // TODO: change this
            string sentence;

            Console.WriteLine(sentence);

        }
    }

Expected Output
---------------

    John Doe is 27 years old.

Solution
--------

    using System;

    public class Hello
    {
        public static void Main()
        {
            string firstName = "John";
            string lastName = "Doe";
            int age = 27;

            string sentence = String.Format("{0} {1} is {2} years old.",
                firstName, lastName, age);

            Console.WriteLine(sentence);

        }
    }