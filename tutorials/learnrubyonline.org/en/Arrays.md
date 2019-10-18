Tutorial
--------

Arrays allow you to group multiple values together in a list. Each value in an array is referred to as an "element".

The code below demonstrates how to create arrays:

    myArray = []  # an empty array
    myOtherArray = [1, 2, 3]  # an array with three elements

Elements are numbered starting at zero and can be accessed by their number. `myOtherArray[1]` is how you would access the second element in an array. 

In order to add to or change elements in an array, you can refer to an element by number.

    myOtherArray[3] = 4

Exercise
--------
Using the provided code, ```print``` "Me!" to the console.
Tutorial Code
-------------
myArray = ["Not me!", "Not me!", "Me!", "Not me!"]

Expected Output
---------------
Me!
Solution
--------
myArray = ["Not me!", "Not me!", "Me!", "Not me!"]
print myArray[2]
