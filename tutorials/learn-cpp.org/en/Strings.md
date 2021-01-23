Tutorial
--------

###  What is a string

In the previous chapters we looked at numeric values and single characters (char's).
Strings are used for text-values such as words or sentences.

#### There are two types of strings:
In traditional C, strings were basically just arrays of char-values (char*, wchar_t*).

In C++ however, strings are reprensented as objects which offer some comfortable ways to work with these type of data.
C++-strings are implemented in the standard-library "std::string" which must be referenced (#include) in the program.

In this tutorial we'll focus on the latter.

#### Examples:
    #include<iostream> 
    #include<string>
    using namespace std; 
    int main() 
    { 
        string sometext="This is a new text"; //Declaring a string

        cout << "Initial value of sometext is: " << sometext << endl;  //Writing the initial text to the console.
        //Note: that endl isn't needed to show the value on the console, but adds a new line at the end

        getline(cin, sometext);  //Reading textinput from the keyboard

        cout << "You entered: " << sometext << endl;  //Writing the given text back to the console.       

        return 0;
    }

Exercise
--------

Change the program in the bottom in a way so that it declares and initialises a string variable and outputs the Text "I just learned something about strings" (qithout the qoutes) followed by a carriage return and linefeed to the console.

Tutorial Code
-------------
    #include<iostream> 
    // you may need to include something else
    using namespace std; 
    int main() 
    {     
        //Your code here...
    
        return 0;
    }

Expected Output
---------------

    
    I just learned something about strings
    


Solution
--------

    #include<iostream> 
    #include<string> // you may need to include string to use the string-class...
    using namespace std; 
    int main() 
    {     
        string iknowstrings = "I just learned something about strings";
        cout << iknowstrings << endl;
    
        return 0;
    }