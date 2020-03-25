Tutorial
--------

###  What is an array

Q1. Suppose you need to store the marks of 5 students in a cpp test( 5 integer or floating point values ), what would you do? 

Q2. Or say, you need to store a keysheet of a MCQ test having some 6 questions( 6 character values ).

In these problems, we use arrays. It is a group of same type of variables( say `int` or `char` ) clubbed together. This is an array declaration:

    <type> Name[no of elements];

Now that we know the syntax for declaring an array, the solution for Q1 would be to declare an `int` type array of size 5 .i.e:

    int marks[5];

Now lets initialize the array in Q1. Suppose the 5 students marks are as 96,92,78,54 and 86, then we can give our array values as,

    marks[0] = 96;
    marks[1] = 92;
    marks[2] = 78;
    marks[3] = 54;
    marks[4] = 86;

So our entire code for declaring and initializing would be,

    int marks[5];
    marks[0] = 96;
    marks[1] = 92;
    marks[2] = 78;
    marks[3] = 54;
    marks[4] = 86;

Or we can do it in a single line as,

    int marks[5] = { 96, 92, 78, 54, 86};

or simply

    int marks[] = { 96, 92, 78, 54, 86};

Now we can access the elements of this array using [ ]. Arrays are 0 indexed, so your first element would be marks[0] i.e. 96. Lets print this.

    cout<<marks[0]<<endl;
prints the first element i.e. 96.

Your second element can be indexed as marks[1] , third element as marks[2] and so on.

Now we can print the entire array using a for loop, which we will be studying in further chapters.

    for(int i=0;i<5;i++)
    {
      cout<< marks[i] <<endl;  //for printing the i'th element
    }
This prints,

    96
    92
    78
    54
    86

Now for Q2, suppose the keys are 'a','b','a','c','d','c'. Now the array declaration is

    char keys[6] = {'a','b','a','c','d','c'};

Exercise
--------

Change the program in the bottom in a way so that it initialises the keys array with values 'b' ,'c' ,'d' ,'a' ,'b' ,'b' and prints the third element. 

Tutorial Code
-------------

    #include <iostream>
    using namespace std;
    int main() {
      char keys[6] = {'a','b','a','c','d','c'};
      return 0;
    }

Expected Output
---------------

    
    d
    


Solution
--------

    #include <iostream>
    using namespace std;
    int main() {
      char keys[6] = {'b','c','d','a','b','b'};
      cout<< keys[2]<<endl;
      return 0;
    }
