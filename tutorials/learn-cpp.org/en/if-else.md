Tutorial
--------
We use if-else statements in programming to run a block of code only if a condition is met.

### if statement

We run a block if code if the condition in the if statement evaluates to true. The general syntax is

    if(condition)
    {
        // block of code to be run if condition is true
    }

The following example prints "The one i searched for" if num is 4 

    if(num == 4)
    {
        cout << "The one i searched for" << endl;
    }    

The following example prints "Number is Even" if num is a even number i.e. num % 2 == 0

    if(num % 2 == 0)  // % is a modulo-operator, which returns the remainder of a division. on even numbers it will return 0
    {
        cout << "Number is Even"<< endl;
    }

Suppose you want to do something else if the condition in the if statement is false. Like in the above example printing "Number is not Even" if the number is odd. For such cases we have the else statement

### else statement

Else statement is preceded by an if block always and the block of code in else block is executed only if the condition in if block fails.

Taking an example,

    if(num % 2 == 0)
    {
        cout << "Number is Even"<< endl;
    }
    else
    {
        cout << "Number is not Even" << endl;
    }

The above code prints "Number is Even" for all even numbers and "Number is not Even" for odd numbers

We can also use a number of nested if-else statements if we want to check more than one condition. A use of "else if" composite statement is given below

    if(num % 2 == 0)
    {
        cout << "Number divisible by 2" << endl;
    }
    else if(num % 3 == 0)
    {
        cout << "Number divisible by 3" << endl;
    }
    else
    {
        cout << "Bad Number" << endl;
    }

The above code checks for 2 divisibility, and if the number is not divisible by 2, it checks for 3 divisibility and if not divisible by 3 also, it prints "Bad Number".

Exercise
--------
Print which age group the people belong to according to the age as given here.

Child ( < 20 years old )
Adult ( >= 20 and < 60 years old) 
Retired ( >= 60 years old)


Tutorial Code
-------------
#include <iostream>
using namespace std;

int main()
{
    int age[] = {16,48,72,66,23};
    
    for(int i = 0; i < 5; i++)
    {        
        # your code goes here. 
        # use a if else block to classify the person as Child / Adult / Retired
    }
    return 0;
}

Expected Output
---------------
Child
Adult
Retired
Retired
Adult

Solution
--------
#include <iostream>
using namespace std;

int main()
{
    int age[] = {16,48,72,66,23};
    
    for(int i = 0; i < 5; i++)
    {
        
        if(age[i] < 20)
        {
            cout << "Child" << endl;
        }
        else if( age[i] >= 20 && age[i] < 60)
        {
            cout << "Adult" << endl;
        }
        else
        {
            cout << "Retired" << endl;
        }
    }
    return 0;
}