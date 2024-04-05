<<<<<<< HEAD
//* Write a program that can be used at command prompt as a calculating utility. The usage of the program is shown below.
//* C> calc <switch> <n> <m>, where, n and m are two integer operands and switch is either an arithmetic operator or a comparison operator. if arithmetic operator is supplied, the output should be the result of the operation. if comparison operator is supplied then the output should be True or False.


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(int argc, char *argv[])
{
    // check if the correct number of command-line arguments is provided
    if (argc != 4)
    {
        printf("Usage: calc <switch> <n> <m>\n");
        return 1;
    }

    // get the operator from the command-line argument
    char operator = argv[1][10];

    // Initialize and convert the string operands to integers
    int operand1 = 0;
    int operand2 = 0;

    // convert the first string operand (argv[2]) to an integer (operand)
    for (int i = 0; argv[2][i] != '\0'; i++)
    {
        operand1 *= 10; //shift digits left (e.g., 2 -> 20)
        operand1 += argv[2][i] - '0';  // convert character to integer and add
    }

    // convert the second string operand (argv[3]) to an integer (operand2)
    for (int i = 0; argv[3][i] != '\0'; i++)
    {
        operand2 *= 10; // shift digits left (e.g., 3 -> 30)
        operand2 += argv[3][i] - '0';  // convert the character to integer and add
    }
    
    //* perform the requested operation based on the operator
    switch(operator)
    {
        case '+':
            printf("%d\n", operand1 + operand2);
            break;
        
        case '-':
            printf("%d\n", operand1 - operand2);
            break;
        
        case '*':
            printf("%d\n", operand2 * operand2);
            break;
            
        case '/':
            if (operand2 == 0)
            {
                perror("Division by zero.\n");
            }else{
                printf("%d\n", operand1 / operand2);
            }
            break;

        case '>':
            printf("%s\n", (operand1 > operand2) ? "True" : "False");
            break;

        case '<':
            printf("%s\n", (operand1 < operand2) ? "True" : "False");
            break;

        case '=':
            printf("%s\n", (operand1 == operand2) ? "True" : "False");
            break;

        default:
            printf("Invalid operator: %c\n", operator);
            break;
    }
    
return 0;
=======
//* Write a program that can be used at command prompt as a calculating utility. The usage of the program is shown below.
//* C> calc <switch> <n> <m>, where, n and m are two integer operands and switch is either an arithmetic operator or a comparison operator. if arithmetic operator is supplied, the output should be the result of the operation. if comparison operator is supplied then the output should be True or False.


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(int argc, char *argv[])
{
    // check if the correct number of command-line arguments is provided
    if (argc != 4)
    {
        printf("Usage: calc <switch> <n> <m>\n");
        return 1;
    }

    // get the operator from the command-line argument
    char operator = argv[1][10];

    // Initialize and convert the string operands to integers
    int operand1 = 0;
    int operand2 = 0;

    // convert the first string operand (argv[2]) to an integer (operand)
    for (int i = 0; argv[2][i] != '\0'; i++)
    {
        operand1 *= 10; //shift digits left (e.g., 2 -> 20)
        operand1 += argv[2][i] - '0';  // convert character to integer and add
    }

    // convert the second string operand (argv[3]) to an integer (operand2)
    for (int i = 0; argv[3][i] != '\0'; i++)
    {
        operand2 *= 10; // shift digits left (e.g., 3 -> 30)
        operand2 += argv[3][i] - '0';  // convert the character to integer and add
    }
    
    //* perform the requested operation based on the operator
    switch(operator)
    {
        case '+':
            printf("%d\n", operand1 + operand2);
            break;
        
        case '-':
            printf("%d\n", operand1 - operand2);
            break;
        
        case '*':
            printf("%d\n", operand2 * operand2);
            break;
            
        case '/':
            if (operand2 == 0)
            {
                perror("Division by zero.\n");
            }else{
                printf("%d\n", operand1 / operand2);
            }
            break;

        case '>':
            printf("%s\n", (operand1 > operand2) ? "True" : "False");
            break;

        case '<':
            printf("%s\n", (operand1 < operand2) ? "True" : "False");
            break;

        case '=':
            printf("%s\n", (operand1 == operand2) ? "True" : "False");
            break;

        default:
            printf("Invalid operator: %c\n", operator);
            break;
    }
    
return 0;
>>>>>>> bdba4e67f836629b6b586f629502bb9a2bcf25a1
}