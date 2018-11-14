Tutorial
--------
Taking Input and showing Output in required way plays an important role in interactive coding. So lets focus on input and
output of various data types.

###raw_input()
this is used to take input as long as it reached end of line.Note that there should not be any spaces.Taking input terminates with a new line character and if there are any spaces in the input line it results in error

    # Prints out the input received from stdin
    astring=raw_input()# give hello as input
    print raw_input()

after taking the input we can convert them to our required data type using functions like int(),float(),str()

    num=int(raw_input())
    print num
    decimalnum=raw_input()
    decimalnum=float(raw_input()
    print decimalnum

###input()
this is especially used to input integers. The advantage of input() over raw_input() can be cleared with the following example

    #give 2*2 as input
    a=input()
    b=raw_input() #note that int(raw_input()) results in error
    print a #prints 4
    print b #prints 2*2

###how to take two two or more data types as input from a single line separated by spaces?
Here we make use split() and map() functions

    #give two integers in first line and more than two integers in third line
    a,b=map(int,raw_input().split()
    array=raw_input().split()
    sum=0
    for each in array:
        sum=sum+int(each)
    print a,b,sum #prints first two integers from first line and sum of integers of second line

###Output formatting
You might have already noticed that print statement automatically inserts a new line. The use of comma like in the above code prints the values in a single line separated by a space.
The sys module provides various functions for output formatting but here we learn how to use basic knowledge of formatting to output in our required way. Lets see a few examples to learn output formatting

    a=5
    b=0.63
    c="hello"
    print "a is : %d, b is %0.4f,c is %s" %(a,b,c)

The output must be self explanatory.
