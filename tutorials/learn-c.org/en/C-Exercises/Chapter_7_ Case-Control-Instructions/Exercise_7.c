//! Write a program to find the grace marks for a student using switch. The user should enter the class obtained by the student and the number of students he has failed in. Use the following logic.
// 1. If the user gets first class and he fails in more than 3 subjects, he does not get any grace. Otherwise, he gets a grace of 5 marks per subjects.
// 2. If the students gets second class and he fails in more than 2 subjects, he does not get at any grace. Otherwise, he gets a grace of 4 marks per subject.
// 3. If the student gets third class and he fails in more than 1 subject, then he does not get any grace. Otherwise, he gets a grace marks of 5 marks.

#include <stdio.h>
int main()
{
    int div, sub;
    printf("Enter the class obtained by the student:");
    scanf("%d", &div);

    printf("Enter the number of subjects in which he has failed.");
    scanf("%d", &sub);
    switch (div)
    {
    // for first class
    case 1:
        if (sub <= 3)
            printf("He got the grace marks of %d marks: ", 5*sub);
        else
            printf("He didn't get any grace.");
        break;

    // for second class
    case 2:
        if(sub >= 2)
            printf("He does not get any grace.");
        else 
            printf("He gets grace of %d marks.", 4*sub);
        break;
    
    // for third class
    case 3:
        if(sub >= 1)
            printf("Does not get any grace.");
        else 
            printf("He gets grace marks of %d marks.", 5*sub);
    default:
        break;
    }

    return 0;
}