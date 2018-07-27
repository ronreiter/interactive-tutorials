Tutorial
--------
Methods are reuseable sections of code that perform specific tasks in our program. It makes our code much easier to fix if there are bugs and it helps seperate our concerns. In Ruby, methods look like this:

    def methodname
        # method code here
    end

The ```def``` keyword is the header of the method. This will include the name of the method along with any parameters the method will take (If we want them to have any!). The body of the method will contain the code that we want the method to carry out. The method ends with the ```end``` keyword.

Now that we have a defined method, in order for it to perform its task we must call it. To call it we simply type the method's name in our program. For example, typing ```methodname``` will call our method.

Exercise
--------
Using the provided code, create a method called ```say_hi``` that ```puts``` "Hi!" to the console. (Remember to call it!)

Tutorial Code
-------------
def
end

Expected Output
---------------
Hi!

Solution
--------
def say_hi
    puts "Hi!"
end

say_hi
