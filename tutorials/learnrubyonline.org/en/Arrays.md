Tutorial
--------
Arrays are similar to variables. They are defined in a similar way, ```myArray = []```  is an empty array.
To put items in your array, use ```myArray = [1, 2, 3]``` or 


    myArray = []
    myArray[0] = 1
    myArray[1] = 2
    myArray[2] = 3

Note that counting places in arrays start at zero.
To print items of your array, use ```print``` , then ```arrayName[i]``` where "arrayName" is the name of the array and "i" is the place of the array you want to access, and remember, counting starts at zero.

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
