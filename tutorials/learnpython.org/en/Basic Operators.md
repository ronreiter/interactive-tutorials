Tutorial
--------

This section explains how to use basic operators in Python.

### Arithmetic Operators       

Just as any other programming languages, the addition, subtraction, multiplication, and division operators can be used with numbers.<br>

    number = 1 + 2 * 3 / 4.0

Try to predict what the answer will be.  Does python follow order of operations?

Another operator available is the modulo (%) operator, which returns the integer remainder of the division. dividend % divisor = remainder.

    remainder = 11 % 3

Using two multiplication symbols makes a power relationship.

    squared = 7 ** 2
    cubed = 2 ** 3

### Using Operators with Strings

Python supports concatenating strings using the addition operator:

    helloworld = "hello" + " " + "world"

Python also supports multiplying strings to form a string with a repeating sequence:

    lotsofhellos = "hello" * 10

### Using Operators with Lists

Lists can be joined with the addition operators:

    even_numbers = [2,4,6,8]
    odd_numbers = [1,3,5,7]
    all_numbers = odd_numbers + even_numbers

Just as in strings, Python supports forming new lists with a repeating sequence using the multiplication operator:

    print [1,2,3] * 3

Exercise
--------

The target of this exercise is to create two lists called `x_list` and `y_list`,
which contain 10 instances of the variables `x` and `y`, respectively.
You are also required to create a list called `big_list`, which contains
the variables `x` and `y`, 10 times each, by concatenating the two lists you have created.

<div data-datacamp-exercise data-lang="python" data-height="400" data-encoded="true">eyJwcmVfZXhlcmNpc2VfY29kZSI6IiMgbm8gcGVjIiwic2N0IjoidGVzdF9vYmplY3QoXCJhXCIpXG50ZXN0X2Z1bmN0aW9uKFwicHJpbnRcIilcbnN1Y2Nlc3NfbXNnKFwiR3JlYXQgam9iIVwiKSIsInNvbHV0aW9uIjoiIyBDcmVhdGUgYSB2YXJpYWJsZSBhLCBlcXVhbCB0byA1XG5hID0gNVxuXG4jIFByaW50IG91dCBhXG5wcmludChhKSIsImhpbnQiOiJVc2UgdGhlIGFzc2lnbm1lbnQgb3BlcmF0b3IgKDxjb2RlPj08L2NvZGU%2BKSB0byBjcmVhdGUgdGhlIHZhcmlhYmxlIDxjb2RlPmE8L2NvZGU%2BLiIsInNhbXBsZSI6IiMgQ3JlYXRlIGEgdmFyaWFibGUgYSwgZXF1YWwgdG8gNVxuXG5cbiMgUHJpbnQgb3V0IGFcblxuXG4jIE1vcmUgY29tbWVudHNcblxuXG4jIE1vcmUgd2hpdGVzcGFjZVxuXG5cbiMgTW9yZSBldmVyeXRoaW5nXG5cbiIsImxhbmd1YWdlIjoicHl0aG9uIn0%3D</div>

