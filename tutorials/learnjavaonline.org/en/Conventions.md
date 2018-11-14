Tutorial
--------
Conventions of a language are guidelines of a language to enhance readability. 
It will make it easier to diagnose code, and understand your code.

## File organization

Files longer than 2000 lines are not recommended.

Java files should start with a comment with the class name, version information,
date, and copyright notice.

Following that are package statements.

Then, you can write your imports, separated from the packages with 1 blank line.

You can now declare your classes.

Parts of a class (in the recommended order)

- Class documentation (if any)
- Static variables, with public first, then protected, following that 
is no access modifier variables, then finally private.
- Instance variables, same order as above.
- Constructors
- Methods

## Indentation

Indentation is vital to readability. Indent only in a block of code (inside
{}).

Indent 4 spaces normally. You can use tab or spaces to indent.

Example:

	public void doSomething() {
		//indent
		System.out.println("Hello");
	}

## Declarations

1 declaration per line is recommended.

	int maxSpeed;
	int distance;
	
is recommended over:

	int maxSpeed, distance;
	
Do not put different types on the same line!

	int a, b[];    //Wrong way;
	
	//Right!
	int a;	
	int[] b;
	
Try to initialize variables where they're declared. Only reason to not do that is if
it requires some event occurring first.

	//Try to do this:
	int a = 5;
	
	//instead of
	
	int a;
	a = 5;
	
Methods should also be separated by a blank line.


	
Exercise
--------
Here you will need to write the purpose of the exercise. Finishing the exercise correctly
must be accomplished using the new feature that you are explaining.

Tutorial Code
-------------
Write a code block that will appear on the interpreter window. For example, you may
write an empty function, which the user must complete in order to finish the exercise.

Expected Output
---------------
Write a code block that will describe the exact output expected from the modified code,
if it has been modified correctly.

Solution
--------
Write the solution code to the problem.
