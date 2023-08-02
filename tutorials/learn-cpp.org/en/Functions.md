Tutorial
--------
### Functions
Function, similar to the ones in math, is a collection of statements that is designed to perform specific tasks. Commonly, functions take in inputs (parameters), which is then processed to return an output. Below is the general format of functions in C++:


    type name_of_function (parameters, parameters...){
    statements
    }

* **type**: Type of variable the function will return
* **name_of_function**: Name of the function that is used to call the function
* **parameters**: Inputs that the funtion will use. Identify data type followed by variable name. Seperate with `,` for more than one input.
* **statements**: Lines of code that will perform the function's task.

To call the function, you simply have to write the name of the function with the parenthesis following (if the function requires parameters, the parameters should be written between the parenthesis): 

    int squareNumbers(int x){ // Declares function "squareNumbers" that takes in parameter of x.
        int y=x*x; //creates int variable equating to x squared
        return y; //returns the value of y when the function is called
    }
    
    int main(){ 
        int input = 9; 
        int output = squareNumbers(input); 
        //the function is called, resulting in the int variable "output" equating input squared
    }

Another example:

    void helloThere(string name){//void means this function doesn't return anything
        cout << "Hello, " << name;
    }
    
    int main(){
        helloThere("Celina"); //prints out "Hello, Celina"
    }

Most commonly, functions are placed outside of the Main function.

Exercise
---------
In this exercise, you will create a function that prints out the sum of the given variables, a, b, and c. Below is the given code.

Tutorial Code
-------------

    #include <iostream>
    using namespace std;
    
    // your code goes here (declare function)
    
    int main (){
        int a = 1;
        int b = 4;
        int c = 3;
        // your code goes here (call the function)
    }

Expected Output
---------------

    8

Solution
--------

    #include <iostream>
    using namespace std;
    
    void addition(int a, int b, int c){
    cout << a+b+c;
    }
    
    int main (){
    int a = 1;
    int b = 4;
    int c = 3;
    addition(a,b,c);
    }




