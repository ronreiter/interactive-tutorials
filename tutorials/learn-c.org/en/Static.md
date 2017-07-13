Tutorial
--------
Static is a keyword in C programming language. It are used with variable and functions.

###What is Static variable ?
 By default, Variable are local to scope in which they are defined. Varibale are declared as static to increase thier scope upto file containing them. As a result these varibale are accessed anywhere inside a file.
Consider we want to count the runners participating in a race  

    #include<stdio.h>
    int runner() {
        int count = 0;
        count++;
        return count;
    }
  
    int main()
    {
        printf("%d ", runner());
        printf("%d ", runner());
        return 0;
    }

We will see that count is not updated correctly because count gets removed from memory as soon as function completes, however if static is used

    #include<stdio.h>
    int runner()
    {
        static int count = 0;
        count++;
        return count;
    }
  
    int main()
    {
        printf("%d ", runner());
        printf("%d ", runner());
        return 0;
    }

###What is Static function ?
 By default function are global in C. However if we declare them with static, scope of functions is reduced to the file containing them.
Syntax

    static int fun(void) {
       printf("I am a static function.");
    }

###Static vs Global ?
 As we know static variables have scope as file containing them making them accessible only inside file, global variable can be accessed outside the file too.

Exercise
--------
In this exercise, we try to find sum of some number without passing any total variable to function.

Tutorial Code
-------------

   #include <stdio.h>  
   int sum (int num) {
       /**
       * find sum to n numbers
       */
   } 

   int main() {
       printf("%d ",sum(55));
       printf("%d ",sum(45));
       printf("%d ",sum(50));
       return 0;
   }   

Expected Output
---------------

   55 100 150

Solution
--------

   #include <stdio.h>
   int sum (int num) {
       static int total = 0;
       total += num;
       return total;
   }
   
   int main() {
       printf("%d ",sum(55));
       printf("%d ",sum(45));
       printf("%d ",sum(50));
       return 0;
   }  

