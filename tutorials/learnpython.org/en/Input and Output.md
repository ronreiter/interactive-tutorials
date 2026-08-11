Tutorial
--------
Taking input and showing output in the required way plays an important role in interactive coding. So let's focus on input and output of various data types.

### input()
Use `input()` to read a line of text from stdin. It always returns a string, so convert it to the data type you need with `int()`, `float()`, or `str()`.

    # Prints out the input received from stdin
    astring = input()          # give hello as input
    print(astring)

After taking the input we can convert it to our required data type using functions like `int()`, `float()`, `str()`:

    num = int(input())
    print(num)

    decimalnum = float(input())
    print(decimalnum)

### How to take two or more data types as input from a single line separated by spaces?

Here we make use of `split()` and `map()` functions:

    # give two integers in the first line, and more than two integers in the third line
    a, b = map(int, input().split())
    array = input().split()
    total = 0
    for each in array:
        total = total + int(each)
    print(a, b, total)  # prints the first two integers from the first line and the sum of the integers of the second line

### Output formatting

You might have already noticed that the `print` statement automatically inserts a new line. The use of a comma like in the above code prints the values on a single line separated by a space.
The `sys` module provides various functions for output formatting, but here we learn how to use basic knowledge of formatting to output in our required way. Let's see a few examples to learn output formatting:

    a = 5
    b = 0.63
    c = "hello"
    print("a is : %d, b is %0.4f, c is %s" % (a, b, c))

The output must be self explanatory.

Exercise
--------
Complete the code below so that it reads three integers from a single line, converts each to an `int`, and prints their sum.

Tutorial Code
-------------
    # write your code here
    numbers = input().split()
    print("sum is 0")

Expected Output
---------------
    test_output_contains("sum is 6")
    success_msg("Great job!")

Solution
--------
    a, b, c = map(int, input().split())
    print("sum is", a + b + c)
