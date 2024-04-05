<<<<<<< HEAD
//* Following program shows one's complement operator in action:
// #include<stdio.h>
// int main()
// {
//     unsigned char ch = 32, dh;
//     dh = ~ch;

//     printf("~ch = %d\n", dh);
//     printf("~ch = %x\n", dh);
//     printf("~ch = %X\n", dh);
//     printf("~ch = %#X\n", dh);

//  return 0;

// }

//* Following program demonstrates the use of >> and << operators: 
// #include<stdio.h>
// void showbits(unsigned char);
// int main() 
// {
//     unsigned char num = 225, k;
//     printf("\nDecimal %d is same as  ", num);
//     showbits(num);
//     k = num >> 1; // right shift by 1 
//     printf("\n%d right shift 1 gives ", num);
//     showbits(k);

//     k = num >> 2;
//     printf("\n%d right shift 2 gives ", num);
//     showbits(k);

//     k = num << 1;
//     printf("\n%d left shift 1 gives ", num);
//     showbits(k);

//     k = num << 2;
//     printf("\n%d left shift 2 gives ", num);
//     showbits(k);

//     return 0;
// }

// void showbits(unsigned char n)
// {
//     int i;
//     unsigned char j, k, andmask;
//     for ( i = 7; i >= 0; i--)
//     {
//         j = i;
//         andmask = 1 << j;
//         k = n & andmask;
//         k == 0 ? printf("0") : printf("1");
//     }
// }

// * page-370
// #include<stdio.h>
// int main()
// {
//     char num = -5, j, k;
//     printf("\nDecimal %d is same as binary ", num);
//     showbits(num);
//     for ( j = 0; j <= 3; j++)
//     {
//         k = num >> j;
//         printf("\n%d right shift %d gives ", num, j);
//         showbits(k);
//     }
//     return 0;
// }
// void showbits(unsigned char n)
// {
//     int i;
//     unsigned char j, k, andmask;
//     for ( i = 7; i >=  0; i--)
//     {
//         j = i;
//         andmask = 1 << j;
//         k = n & andmask;
//         k == 0 ? printf(" 0") : printf(" 1");
//     }
// }



// * The following program puts into action both the uses of operators:
#include<stdio.h>
void showbits(unsigned char);
int main()
{
    unsigned char num = 0xAD, j;
    printf("\nValue of num = ");
    showbits(num);
    j = num & 0x20;

    if(j == 0)
        printf("\nIts fifth bit is off");
    else
        printf("\nIts fifth bit is on");

    j = num & 0x08;
    if(j == 0)
        printf("\nIts third bit is off");
    else
    {
        printf("\nIts third bit is on");
        num = num & 0xF7;
        printf("\nNew value of num = ");
        showbits(num);
         j = num & 0x08;
         if(j == 0)
            printf("\nNow its third bit is turned off");
    }
    return 0;
}

void showbits(unsigned char n)
{
    int i;
    unsigned char j, k, andmask;
    for ( i = 7; i >=  0; i--)
    {
        j = i;
        andmask = 1 << j;
        k = n & andmask;
        k == 0 ? printf(" 0") : printf(" 1");
    }
}

=======
//* Following program shows one's complement operator in action:
// #include<stdio.h>
// int main()
// {
//     unsigned char ch = 32, dh;
//     dh = ~ch;

//     printf("~ch = %d\n", dh);
//     printf("~ch = %x\n", dh);
//     printf("~ch = %X\n", dh);
//     printf("~ch = %#X\n", dh);

//  return 0;

// }

//* Following program demonstrates the use of >> and << operators: 
// #include<stdio.h>
// void showbits(unsigned char);
// int main() 
// {
//     unsigned char num = 225, k;
//     printf("\nDecimal %d is same as  ", num);
//     showbits(num);
//     k = num >> 1; // right shift by 1 
//     printf("\n%d right shift 1 gives ", num);
//     showbits(k);

//     k = num >> 2;
//     printf("\n%d right shift 2 gives ", num);
//     showbits(k);

//     k = num << 1;
//     printf("\n%d left shift 1 gives ", num);
//     showbits(k);

//     k = num << 2;
//     printf("\n%d left shift 2 gives ", num);
//     showbits(k);

//     return 0;
// }

// void showbits(unsigned char n)
// {
//     int i;
//     unsigned char j, k, andmask;
//     for ( i = 7; i >= 0; i--)
//     {
//         j = i;
//         andmask = 1 << j;
//         k = n & andmask;
//         k == 0 ? printf("0") : printf("1");
//     }
// }

// * page-370
// #include<stdio.h>
// int main()
// {
//     char num = -5, j, k;
//     printf("\nDecimal %d is same as binary ", num);
//     showbits(num);
//     for ( j = 0; j <= 3; j++)
//     {
//         k = num >> j;
//         printf("\n%d right shift %d gives ", num, j);
//         showbits(k);
//     }
//     return 0;
// }
// void showbits(unsigned char n)
// {
//     int i;
//     unsigned char j, k, andmask;
//     for ( i = 7; i >=  0; i--)
//     {
//         j = i;
//         andmask = 1 << j;
//         k = n & andmask;
//         k == 0 ? printf(" 0") : printf(" 1");
//     }
// }



// * The following program puts into action both the uses of operators:
#include<stdio.h>
void showbits(unsigned char);
int main()
{
    unsigned char num = 0xAD, j;
    printf("\nValue of num = ");
    showbits(num);
    j = num & 0x20;

    if(j == 0)
        printf("\nIts fifth bit is off");
    else
        printf("\nIts fifth bit is on");

    j = num & 0x08;
    if(j == 0)
        printf("\nIts third bit is off");
    else
    {
        printf("\nIts third bit is on");
        num = num & 0xF7;
        printf("\nNew value of num = ");
        showbits(num);
         j = num & 0x08;
         if(j == 0)
            printf("\nNow its third bit is turned off");
    }
    return 0;
}

void showbits(unsigned char n)
{
    int i;
    unsigned char j, k, andmask;
    for ( i = 7; i >=  0; i--)
    {
        j = i;
        andmask = 1 << j;
        k = n & andmask;
        k == 0 ? printf(" 0") : printf(" 1");
    }
}

>>>>>>> bdba4e67f836629b6b586f629502bb9a2bcf25a1
