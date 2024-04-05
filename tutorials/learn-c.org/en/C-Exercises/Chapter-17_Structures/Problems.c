//! Array of Structures
// #include<stdio.h>
// void linkfloat();
// int main()
// {
//     struct book
//     {
//         /* data */
//         char name; float price; int pages;
//     };
//     struct book b[10];
//     int i;
//     int dh;
//     for(i = 0; i <= 9; i++)
//     {
//         printf("Enter name, price and no. pages of 3 books\n");
//         scanf("%c %f %d", &b[i].name, &b[i].price, &b[i].pages);
//         while((dh = getchar()) != '\n')
//             ;
//     }
//     for( i = 0; i <= 9; i++)
//     {
//         printf("%c %f %d\n", b[i].name, b[i].price, b[i].pages);
//     }
//     return 0;
// }
// void linkfloat()
// {
//     float a = 0, *b;
//     b = &a; // cause emulator to be linked
//     a = *b; // suppress the warning - variable not used
// }


//! Copying of structure elements 
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     struct employee
//     {
//         char name[10]; int age; float salary;
//     };
//     struct employee e1 = {"Sanjay", 30, 5500.50};
//     struct employee e2, e3;
//     // Piece meal copying
//     strcpy(e2.name, e1.name); // e2.name = e1.name is wrong
//     e2.age = e1.age;
//     e2.salary = e1.salary;
    
//     // Copying all elements at one go
//     e3 = e2;
//     printf("%s %d %f\n", e1.name, e1.age, e1.salary);
//     printf("%s %d %f\n", e2.name, e2.age, e2.salary);
//     printf("%s %d %f\n", e3.name, e3.age, e3.salary);
//     return 0;

//! Nested Structures
// #include<stdio.h>
// int main()
// {
//     struct address
//     {
//         char phone[15]; char city[25]; int pin;
//     };

//     struct emp
//     {
//         char name[25]; struct address a;
//     };
//     struct emp e = {"Yusuf", "6200697127", "Mahuawan", 841505};
//     printf("Name = %s Phone = %s\n", e.name, e.a.phone);
//     printf("City = %s PIN = %d\n", e.a.city, e.a.pin);
//     return 0;
// }

//! Passing Structures Elements / Structure Variables
// #include<stdio.h>
// struct book
// {
//     char name[25]; char author[25]; int pages;
// };
// void display1 (char *, char *, int);
// void display2 (struct book);
// void display3 (struct book *);
// int main()
// {
//     struct book b1 = {"Let Us C", "YPK", 464};
//     display1(b1.name, b1.author, b1.pages);
//     display2(b1);
//     display3(&b1);
//     return 0;
// }

// void display1 (char *n, char *a, int pg)
// {
//     printf("%s %s %d\n", n, a, pg);
// }

// void display2 (struct book b)
// {
//     printf("%s %s %d\n",  b.name, b.author, b.pages);
// }

// void display3 (struct book *pb)
// {
//     printf("%s %s %d\n", pb->name, pb->author, pb->pages);
// }

// #include<stdio.h>
// int main()
// {
//     struct emp
//     {
//         int a; char ch; float s;
//     };
//     struct emp e ;
//     printf("%u %u %u\n", &e.a, &e.ch, &e.s);
//     return 0;
// }

// It is possible to create additional variables of the same type after typedefing struct Student to "Student"
// #include<stdio.h>
// #include<string.h>
// typedef struct Student 
// {
//     char f_name[20];
//     char l_name[20];
//     long int enrollment;
//     double grade_point;
// } Student;

// int main()
// {
//     Student S1, S2;
//     strcpy(S1.f_name, "Yusuf");
//     strcpy(S1.l_name, "Jamal");
//     S1.enrollment = 6395;
//     S1.grade_point = 60.8;

//     // Assign values to member of S2
//     strcpy(S2.f_name, "Komal");
//     strcpy(S2.l_name, "Saxena");
//     S2.enrollment = 6200;
//     S2.grade_point = 90.8;

//     // Print the values of S1
//     printf("\nStudent details: ");
//     printf("\nFirst name: %s", S1.f_name);
//     printf("\nLast name: %s", S1.l_name);
//     printf("\nEnrollment No.: %ld", S1.enrollment);
//     printf("\nGrade point average: %5.2f\n", S1.grade_point);

//     // Print values of S2
//     printf("\nStudent details: ");
//     printf("\nFirst name: %s", S2.f_name);
//     printf("\nLast name: %s", S2.l_name);
//     printf("\nEnrollment No.: %ld", S2.enrollment);
//     printf("\nGrade point average: %5.2f", S2.grade_point);
//     return 0;
// }

//! Problem(17.1)
//* A stack is a data structure in which addition of new element or deletion of existing element always takes place at the same end known as 'top' of stack. Write a program to implement a stack using a linked list.

// Implementation of stack using a linked list
// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data; 
//     struct node *link;
// };
// void push (struct node **s, int item); // function definition 
// int pop (struct node **s);  // function definition
// int main()
// {
//     struct node *top;
//     int t, i, item;
//     top = NULL;
//     push(&top, 45);
//     push(&top, 28);
//     push(&top, 63);
//     push(&top, 55);

//     item = pop (&top);
//     printf("Popped : %d\n", item);
//     item = pop (&top);
//     printf("Popped : %d\n", item);
//     return 0;
// }
// void push (struct node **s, int item)
// {
//     struct node *q;
//     q = (struct node *) malloc(sizeof(struct node));
//     q -> data = item;
//     q -> link = *s;
//     *s = q;
// }

// int pop (struct node **s)
// {
//     int item;
//     struct node *q;
//     if(*s == NULL)
//         printf("Stack is empty\n");
//     else
//     {
//         q = *s;
//         item = q -> data;
//         *s = q ->link;
//         free ( q );
//         return (item);
//     }
// }

//! Problems(17.2)
// In a data structure called queue the addition of new element takes place at the end (called 'rear' of queue), whereas deletion takes place at the other end (called 'front' of queue). write a program to implement a queue using a linked list.
#include<stdio.h>
#include<stdlib.h>
struct queue 
{
    int item;
    struct queue *link;
};
struct queue *rear, *front;
void add (int item);
int del_queue();
int main()
{
    int item;
    rear = front = NULL;
    add(10); add(20); add(30);
    add(40); add(50); add(60);
    item = del_queue();
    printf("Deleted Item = %d\n", item);
}