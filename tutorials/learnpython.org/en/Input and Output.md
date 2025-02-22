Tutorial
--------
Taking Input and showing Output in required way plays an important role in interactive coding. So lets focus on input and
output of various data types.

###input()
this is used to take input as long as it reached end of line.Note that there should not be any spaces.Taking input terminates with a new line character and if there are any spaces in the input line it results in error

    # Prints out the input received from stdin
    astring=input()# give hello as input
    print(input())

after taking the input we can convert them to our required data type using functions like int(),float(),str()

    num=int(input())
    print num
    decimalnum=input()
    decimalnum=float(input()
    print decimalnum

###how to take two two or more data types as input from a single line separated by spaces?
Here we make use split() and map() functions

    #give two integers in first line and more than two integers in third line
    a, b = map(int, input().split())
    array = input().split()
    sum = 0
    for each in array:
        sum = sum + int(each)
    print(a, b, sum)  # prints first two integers from first line and sum of integers of second line

###Output formatting
You might have already noticed that print statement automatically inserts a new line. The use of comma like in the above code prints the values in a single line separated by a space.
The sys module provides various functions for output formatting but here we learn how to use basic knowledge of formatting to output in our required way. Lets see a few examples to learn output formatting

    a = 5
    b = 0.63
    c = "hello"
    print "a is : %d, b is %0.4f,c is %s" % (a,b,c)

The output must be self explanatory.

Exercise
--------

Write a program that asks the user to input their name, age, and country. The program should then print out a message that includes this information in a sentence. The program should include:

1. Taking a name as input using `input()`.
2. Taking an age as input using `input()`, and converting it to an integer.
3. Taking a country name as input using `input()`.
4. Formatting the output to display a sentence that includes the name, age, and country.

The program should demonstrate input handling and string formatting in Python.

Tutorial Code
-------------

    # Taking the name input using input()
    name = input("Enter your name: ")
    
    # Taking the age input using input() and converting it to integer
    age = int(input("Enter your age: "))
    
    # Taking the country input using input()
    country = input("Enter your country: ")
    
    # Displaying the formatted sentence with name, age, and country
    print("Hello, my name is {}, I am {} years old, and I am from {}.".format(name, age, country))


Expected Output
---------------

    Enter your name: John
    Enter your age: 25
    Enter your country: USA
    Hello, my name is John, I am 25 years old, and I am from USA.
    

Solution
-------------

    # Taking the name input using input()
    name = input("Enter your name: ")
    
    # Taking the age input using input() and converting it to integer
    age = int(input("Enter your age: "))
    
    # Taking the country input using input()
    country = input("Enter your country: ")
    
    # Displaying the formatted sentence with name, age, and country
    print("Hello, my name is {}, I am {} years old, and I am from {}.".format(name, age, country)) name is {}, I am {} years old, and I am from {}.".format(name, age, country))
