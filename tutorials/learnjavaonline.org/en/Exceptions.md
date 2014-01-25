Tutorial
--------
Exceptions are thrown every time an error occurs. The list of all built in exceptions can be accessed at
http://docs.oracle.com/javase/7/docs/api/java/lang/Exception.html.

Exceptions are handled using try/catch statements. All code that may throw an exception must follow the Catch
or Specify requirement. To follow that requirement, just wrap the code that may throw an error in a try block. If,
for some reason, it's not suitable or you cannot use try/catch, you must specify all exceptions a method/function
can throw using the `throws` keyword

	public void writeFile() throws IOException 

You can also throw an exception in the code using throw new:

	throw new IllegalArgumentException("Number not above 0");
	/* Will print 
		Exception in thread "Main": java.lang.IllegalArgumentException: Number not above 0
	*/
	
Exceptions are handled using try/catch, which are covered in an earlier lesson:

	try {
		System.out.println(arr[10]);
	catch (ArrayIndexOutOfBoundsException ex) {
		System.out.println("Error in try block");
	}

Exercise
--------

Write code in the tutorial codeto throw an IllegalArgumentException if (n < 0). It should show "Error" as description.
HINT: Look at expected output, and at second code snippet.

Tutorial Code
-------------

	public class Main {
		public static void main(String[] args) {
			int n = -1;
		}
	}
Expected Output
---------------
	//You might get something not exact but similar.
	Exception at thread "main": java.lang.IllegalArgumentException: Error

Solution
--------
	public class Main {
		public static void main(String[] args) {
			int n = -1;
			if (n < 0) {
				throw new IllegalArgumentException("Error")
			}
		}
	}
