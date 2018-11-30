Tutorial
--------
Arrays
------
Arrays are essentially storage spaces that can be filled with as much data as one would like. Variables, unlike arrays, can only contain one piece of data. Now there are some caveats. For instance, an array is syntactically created using one data type, just like variables. Yet, an array grants ease of access and far more capabilities when considering large/vast amounts of data compared to a variable(single storage space/value). 

Examples
--------

	// An array named favNums filled with 3 integers
	var favNums[3] int

	// Insert data into the array
	// The first storage space will be assigned the value of 1.
	favNums[0] = 1
	// The second storage space will be assigned the value of 2.
	favNums[1] = 2
	// The third and final storage space will be assigned the value of 3.
	favNums[2] = 3


An alternative syntax to the creation of arrays in golang is:

	favNums := [4] int {50, 25, 30, 33}

In order to access members of an array, reference the storage space's address or number you used to create it. 

	fmt.Println(favNums[0])

output:

	50

Exercise
--------
Create two arrays, one a string array, the other a int array.
Assign the string array three storage spaces which contain the phrase hello world. 
Assign the int array three storage spaces which contain the values 1, 2, and 3.
Finally, print the last items of each array.

Tutorial Code
-------------
	package main

	import "fmt"

	func main() {
  	var strings(3) string
  	var numbers(3) int
  
  	strings[1] = string("sdf")
  	strings[2] = string("sdf")
  	strings[3] =  string("hello")
  
 	numbers[1] = 21
 	numbers[2] = #2
  	numbers[3] = $3
  
 	fmt.Println(strings[2])
  	fmt.Println(numbers[2])
  
	}

Expected Output
---------------
hello world
3

Solution
--------
	package main

	import "fmt"

	func main() {
  	var strings[3] string
  	var numbers[3] int
  
  	strings[0] = "hello world"
  	strings[1] = "hello world"
  	strings[2] = "hello world"
  
 	numbers[0] = 21
  	numbers[1] = 2
  	numbers[2] = 3
  
  	fmt.Println(strings[2])
  	fmt.Println(numbers[2])
	}

