When programming, errors occur. It's a fact of life. Perhaps the user provided incorrect input. Maybe a network resource was unavailable. Perhaps the program ran out of memory. Or maybe the programmer even made a mistake!

Python's solution to errors are exceptions. You might have seen an exception before.

    print(a)
    
    #error
    Traceback (most recent call last):
      File "<stdin>", line 1, in <module>
    NameError: name 'a' is not defined

Oops! Forgot to assign a value to the variable 'a'.

But sometimes, you don't want exceptions to completely stop the program. You might want to do something special when an exception is raised. This is done in a *try/except* block.

Here's a trivial example: Suppose you're iterating over a list. You need to iterate over 20 numbers, but the list is constructed from user input and might not contain 20 numbers. After reaching the end of the list, you want the remaining numbers to be interpreted as 0. Here's how you could do that:

    def do_stuff_with_number(n):
        print(n)
    
    def catch_this():
        the_list = (1, 2, 3, 4, 5)
    
        for i in range(20):
            try:
                do_stuff_with_number(the_list[i])
            except IndexError: # Raised when accessing a non-existing index of a list
                do_stuff_with_number(0)
    
    catch_this()

There, that wasn't too difficult! You can do that with any exception. For more details on handling exceptions, look no further than the [Python Docs](http://docs.python.org/tutorial/errors.html#handling-exceptions)

Exercise
--------

Handle all the exceptions! Think back to the previous lessons to return the last name of the actor.