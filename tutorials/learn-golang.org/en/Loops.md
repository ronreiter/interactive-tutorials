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

	package main

	import "fmt"

	func main() {
		for i := 0; i < 10; i++ {
			fmt.Println(i)
		}
	}


Exercise
--------
Find the sum of numbers from 1 to 100

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