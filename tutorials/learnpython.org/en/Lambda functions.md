Tutorial
--------
Normally we define a function using the def keyword somewhere in the code and call it whenever we need to use it.

    def sum(a,b):
        return a + b

    a = 1
    b = 2
    c = sum(a,b)
    print(c)

Now instead of defining the function somewhere and calling it, we can use python's lambda functions, which are inline functions defined at the same place we use it. So we don't need to declare a function somewhere and revisit the code just for a single time use. 

They don't need to have a name, so they also called anonymous functions. We define a lambda function using the keyword lambda.

    your_function_name = lambda inputs : output

So the above sum example using lambda function would be,

    a = 1
    b = 2
    sum = lambda x,y : x + y
    c = sum(a,b)
    print(c)

Here we are assigning the lambda function to the variable **sum**, and upon giving the arguments i.e. a and b, it works like a normal function.



Exercise
--------
Write a program using lambda functions to check if a number in the given list is odd. Print "True" if the number is odd or "False" if not for each element.

Tutorial Code
-------------
l = [2,4,7,3,14,19]
for i in l:
    # your code here

Expected Output
---------------
test_output_contains("False")
test_output_contains("False")
test_output_contains("True")
test_output_contains("True")
test_output_contains("False")
test_output_contains("True")
success_msg("Nice work!")

Solution
--------
l = [2,4,7,3,14,19]
for i in l:
    # your code here
    my_lambda = lambda x : (x % 2) == 1
    print(my_lambda(i))