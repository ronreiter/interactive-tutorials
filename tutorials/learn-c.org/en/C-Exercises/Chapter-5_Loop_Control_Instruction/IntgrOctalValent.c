// Write a program to receive an integer and find its octal equivalent.
// (Hint: To obtain octal equivalent of an integer, divide it continuously by 8 till dividend doesn't become zero, then write the remainders obtained in reverse direction.)


// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int num;
//     printf("Enter the number to find it's octal equivalent.\n");
//     scanf("%d", &num);
// // 
//     printf("\nOctal representation of Decimal number %d is %o\n", num, num);  // %o gives us the octal representation of the decimal number.
//     return 0;
// }

// #include<stdio.h>
// #include<math.h>
// int main()
// {
    // int num, oct=0, rem=0, place=1;
// 
    // printf("Enter a decimal number\n");
    // scanf("%d", &num);
// 
    // printf("\nOctal equivalent of the decimal number ", num);
    // while (num)
    // {
        // rem = num % 8;
        // oct = oct + num + place;
        // num = num / 8;
        // place = place + 10;
    // }
    // printf("%d\n", oct);
    // return 0;
//}