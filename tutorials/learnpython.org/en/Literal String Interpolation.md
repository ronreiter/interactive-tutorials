Tutorial
--------

In Python 3.6 another way of formatting strings was introdcued called Literal String Interpolation or more commonly known as f-strings due to the f character that proceeds the string.

String interpolation is the process of replacing the placeholders in the string literal with their corresponding values. This is the same as the C-style formatting from the previous tutorial where the placeholders of %s, %d, etc. are replaced with the values provided after the string literal.

    # This prints out "John is 23 years old."
    name = "John"
    age = 23

    print("%s is %d years old." % (name, age))

%s is a placeholder for name and %d is a placeholder for age. When the string is interpolated the values of name and age replace the %s and %d symbols.

F-strings makes string interpolation easier by placing the desired interpolated value in-line with the string inside of curly brackets {}. So instead of `"Hello, %s" % name`, we simply use `f"Hello, {name}"`

    # This also prints out "John is 23 years old."
    name = "John"
    age = 23

    print(f"{name} is {age} years old.")

You may also have noticed this eliminates the need to specify the value's type, as f-strings handle this for you.

A poweful benefit of F-strings is that they allow you execute expressions or arthmetic inside the curly brackets.

    # This prints out "2 * 6 = 12"
    a = 2
    b = 6
    
    print(f"{a} * {b} = {a * b}")

Exercise
--------

Rewrite the code using f-strings to produce the following output:
    `Hello John Doe. You have 14 fruit.`

Tutorial Code
-------------

first_name = "John"
last_name = "Doe"
apples = 10
pears = 4

# Rewrite this print statement using f-strings
print("Hello %s %s. You have %d apples." % (first_name, last_name, apples))

Expected Output
---------------
test_output_contains("Hello John Doe. You have 14 fruit.", no_output_msg= "Remember to add the `f` before the string and compute the total number of fruit.")
success_msg('Great work!')

Solution
--------
first_name = "John"
last_name = "Doe"
apples = 10
pears = 4

print(f"Hello {first_name} {last_name}. You have {apples + pears} fruit.")
