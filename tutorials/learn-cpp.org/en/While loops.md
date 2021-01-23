Tutorial
--------
We use loops in programming to repeat execution of a block of code instead of repeating the entire code. In C ++ we have 3 types of loops:
 - for-loops
 - while loops
 - do-while loops.

The execution of a loop can be controlled using the following keywords
 - break - terminates the loop (or switch) -statement and transfers execution to the statement directly after the loop
 - continue - will cause the loop to process to the next element skipping the current one
 - goto LABEL - transferes control to the specified label. IT IS NOT ADVISED TO USE THIS STATEMENT!

### "while" loop

A "while" loop will repeat a statement or a group of statements while a given condition is true.

#### Examples:

    //Guessing game
    #include <iostream> 
    using namespace std; 
    int main (void) 
    {     
        int searched = 5;  //The value we're searching
        int given = -1; // The variable to which we'll write user's guesses

        //Greet the user:
        cout << "This is simple guessing game:" << endl;
        cout << "Please enter a number:" << endl;

        //This while-loop will terminate when the user entered the searched value
        while (searched != given) {
            cin >> given;  // Read a value from the keyboard

            /*
            Note, that the following line(s) within the loop-brackets
            will also execute if the user guessed correctly.
            Checking will be done at the start of the next iteration
            */

            cout << "Thank you for your guess..." << endl;  
        }
    cout << "You found the correct number. Good bye." << endl;
    return 0;
    }


    // Some while with continue- and break-statements
    #include <iostream> 
    using namespace std; 
    int main (void) 
    {     
        int count = 200;  // The start value
        int destination = 0;  // the destination

        // This while will normally terminate when count reaches the destination-value
        while (count > destination) {  
            count--;  // decrement count

            if (count == 190) { // If count will turn into 190...
                cout << "skipped..." << endl;
                continue; //... the while-loop will skip to the next iteration due to the "continue"-statement.
            }

            if (count < 180) { // If count falls below 180...
                cout << "aborted..." << endl;
                break; //... the while-loop will be aborted due to the "abort"-statement.
            }
            cout << count << endl;  //Note, that this will also execute when target is reached
        }    

    return 0;
    }


Exercise
--------
Try to print all the numbers from 1 to 20  in ascending order using a while loop.

Tutorial Code
-------------
    #include <iostream> 
    using namespace std; 
    int main (void) 
    {     
            int target = 20;  //The target value
            int counter = 0;  // Counter
            
            // Your code here...    

    return 0;
    }

Expected Output
---------------
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20

Solution
--------
#include <iostream> 
using namespace std; 
int main (void) 
{     
    int target = 20;  // The target value
    int counter = 0;  // Counter

    while (counter < target) {  //This while will terminate when counter reaches target
        counter++;  // Iterate counter
        cout << counter << endl;  //Note, that this will also execute when target is reached
    }    

return 0;
}