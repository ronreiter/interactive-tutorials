Tutorial
--------

Decorators allow you to make simple modifications to callable objects like [functions](http://www.learnpython.org/en/Functions ""), [methods, or classes](http://www.learnpython.org/en/Classes%20and%20Objects ""). We shall deal with functions for this tutorial. The syntax

    @decorator
    def functions(arg):
        return "Return"

Is equivalent to:

    def function(arg):
        return "Return"
    function=decorator(function) #this passes the function to the decorator, and reassigns it to the functions

As you may have seen, a decorator is just another function which takes a functions and returns one. For example you could do this:

    def repeater(old_function):
        def new_function(*args, **kwds): #See learnpython.org/page/Multiple%20Function%20Arguments for how *args and **kwds works
            old_function(*args, **kwds) #we run the old function
            old_function(*args, **kwds) #we do it twice
        return new_function #we have to return the new_function, or it wouldn't reassign it to the value

This would make a function repeat twice.

    >>> @repeater
    def Multiply(num1, num2):
        print num1*num2


    >>> Multiply(2, 3)
    6
    6

You can also make it change the output

    def Double_Out(old_function):
        def new_function(*args, **kwds):
            return 2*old_function(*args, **kwds) #modify the return value
        return new_function

change input

    def Double_In(old_function):
        def new_function(arg): #only works if the old function has one argument
            return old_function(arg*2) #modify the argument passed
        return new_function

and do checking.

    def Check(old_function):
        def new_function(arg):
            if arg<0: raise ValueError, "Negative Argument" #This causes an error, which is better than it doing the wrong thing
            old_function(arg)
        return new_function

Let's say you want to multiply the output by a variable amount. You could do

    def Multiply(multiplier):
        def Multiply_Generator(old_function):
            def new_function(*args, **kwds):
                return multiplier*old_function(*args, **kwds)
            return new_function
        return Multiply_Generator #it returns the new generator

Now, you could do

    @Multiply(3) #Multiply is not a generator, but Multiply(3) is
    def Num(num):
        return num

You can do anything you want with the old function, even completely ignore it! Advanced decorators can also manipulate the doc string and argument number.
For some snazzy decorators, go to <http://wiki.python.org/moin/PythonDecoratorLibrary>.
Exercise
--------
Make a decorator factory which returns a decorator that decorates functions with one argument. The factory should take one argument, a type, and then returns a decorator that makes function should check if the input is the correct type. If it is wrong, it should print "Bad Type". (In reality, it should raise an error, but error raising isn't in this tutorial.) Look at the tutorial code and expected output to see what it is if you are confused (I know I would be.) Using isinstance(object, type_of_object) or type(object) might help.

<div data-datacamp-exercise="" data-height="400" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoiZGVmIHR5cGVfY2hlY2soY29ycmVjdF90eXBlKTpcbiAgICAjcHV0IGNvZGUgaGVyZVxuXG5AdHlwZV9jaGVjayhpbnQpXG5kZWYgdGltZXMyKG51bSk6XG4gICAgcmV0dXJuIG51bSoyXG5cbnByaW50KHRpbWVzMigyKSlcbnRpbWVzMignTm90IEEgTnVtYmVyJylcblxuQHR5cGVfY2hlY2soc3RyKVxuZGVmIGZpcnN0X2xldHRlcih3b3JkKTpcbiAgICByZXR1cm4gd29yZFswXVxuXG5wcmludChmaXJzdF9sZXR0ZXIoJ0hlbGxvIFdvcmxkJykpXG5maXJzdF9sZXR0ZXIoWydOb3QnLCAnQScsICdTdHJpbmcnXSlcbiIsInNvbHV0aW9uIjoiZGVmIHR5cGVfY2hlY2soY29ycmVjdF90eXBlKTpcbiAgICBkZWYgY2hlY2sob2xkX2Z1bmN0aW9uKTpcbiAgICAgICAgZGVmIG5ld19mdW5jdGlvbihhcmcpOlxuICAgICAgICAgICAgaWYgKGlzaW5zdGFuY2UoYXJnLCBjb3JyZWN0X3R5cGUpKTpcbiAgICAgICAgICAgICAgICByZXR1cm4gb2xkX2Z1bmN0aW9uKGFyZylcbiAgICAgICAgICAgIGVsc2U6XG4gICAgICAgICAgICAgICAgcHJpbnQoXCJCYWQgVHlwZVwiKVxuICAgICAgICByZXR1cm4gbmV3X2Z1bmN0aW9uXG4gICAgcmV0dXJuIGNoZWNrXG5cbkB0eXBlX2NoZWNrKGludClcbmRlZiB0aW1lczIobnVtKTpcbiAgICByZXR1cm4gbnVtKjJcblxucHJpbnQodGltZXMyKDIpKVxudGltZXMyKCdOb3QgQSBOdW1iZXInKVxuXG5AdHlwZV9jaGVjayhzdHIpXG5kZWYgZmlyc3RfbGV0dGVyKHdvcmQpOlxuICAgIHJldHVybiB3b3JkWzBdXG5cbnByaW50KGZpcnN0X2xldHRlcignSGVsbG8gV29ybGQnKSlcbmZpcnN0X2xldHRlcihbJ05vdCcsICdBJywgJ1N0cmluZyddKVxuIiwic2N0IjoidGVzdF9vdXRwdXRfY29udGFpbnMoXCI0XCIpXG50ZXN0X291dHB1dF9jb250YWlucyhcIkJhZCBUeXBlXCIpXG50ZXN0X291dHB1dF9jb250YWlucyhcIkhcIilcbnRlc3Rfb3V0cHV0X2NvbnRhaW5zKFwiQmFkIFR5cGVcIilcbnN1Y2Nlc3NfbXNnKFwiR3JlYXQgd29yayFcIilcbiJ9
</div>

Tutorial Code
-------------
def type_check(correct_type):
    #put code here

@type_check(int)
def times2(num):
    return num*2

print times2(2)
times2('Not A Number')

@type_check(str)
def first_letter(word):
    return word[0]

print first_letter('Hello World')
first_letter(['Not', 'A', 'String'])


Expected Output
---------------
4
Bad Type
H
Bad Type

Solution
--------

def type_check(correct_type):
    def check(old_function):
        def new_function(arg):
            if (isinstance(arg, correct_type)):
                return old_function(arg)
            else:
                print "Bad Type"
        return new_function
    return check

@type_check(int)
def times2(num):
    return num*2

print times2(2)
times2('Not A Number')

@type_check(str)
def first_letter(word):
    return word[0]

print first_letter('Hello World')
first_letter(['Not', 'A', 'String'])
