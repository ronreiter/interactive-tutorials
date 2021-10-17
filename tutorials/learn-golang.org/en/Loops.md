Tutorial
--------
Loops
------
Go has only one looping construct, the **for** loop.

The basic **for** loop has three components separated by semicolons:

+ the init statement: executed before the first iteration
+ the condition expression: evaluated before every iteration
+ the post statement: executed at the end of every iteration

The init statement will often be a short variable declaration, and the variables declared there are visible only in the scope of the for statement.

The loop will stop iterating once the boolean condition evaluates to false.

**Note**: Unlike other languages like *C*, *Java*, or *JavaScript* there are no parentheses surrounding the three components of the for statement and the braces { } are always required 

Examples
--------

The following code prints numbers from 1 to 9.

	package main

	import "fmt"

	func main() {
		for i := 0; i < 10; i++ {
			fmt.Println(i)
		}
	}

You can omit the init and post statement in the `for` loop to get a while loop. The below loop works like a while loop

	package main

	import "fmt"

	func main() {
		i := 0

		for i < 10 {
			fmt.Println(i)
			i++
		}
	}
	
Golang also provides a for-range loop to loop over an array, slice or few other datastructures.

The for-range loop provides us access to the index and value of the elements in the array or slice we are looping through as shown below

	package main

	import "fmt"

	func main() {
		myList := []int{1,2,3}

		for index, value in range myList {
			fmt.Printf("%d is index, %d is value", index, value)
		}
	}

We can ignore one or both the fields in a for-range loop by giving an `_` instead of giving a variable name

		for _, value in range myList {
			fmt.Println(value)
		}

Exercise
--------
Find the sum of numbers from 1 to 100 using a for loop

Tutorial Code
-------------
	package main

	import "fmt"

	func main() {
		sum := 0

		// write code here
		
		fmt.Println(sum)
	}

Expected Output
---------------
	5050

Solution
--------
	package main

	import "fmt"

	func main() {
		sum := 0
		for i := 1; i <= 100; i++ {
			sum += i
		}
        fmt.Println(sum)
	}