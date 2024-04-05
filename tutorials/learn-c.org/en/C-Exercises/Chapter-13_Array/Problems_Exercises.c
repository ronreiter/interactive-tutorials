
//* Problem 13.1 Write a program that interchanges elements at odd positions with elements at even position in array of 10 elements.
// #include<stdio.h>
// int main()
// {
//     int num[] = {12, 4 , 5, 1, 9, 13, 11, 19, 54, 34};
//     int i, t;
//     for ( i = 0; i <= 9; i++)
//     {
//         t = num[i];
//         num[i] = num [i + 1];
//         num [i + 1 ] = t;
//     }
//     for ( i = 0; i <= 9; i++)
//         printf("%d\t", num[i]);
//     return 0;
// }

//* Problem 13.2 Write a program to copy the contents of a 5-element integer array into another array in reverse order.
// #include<stdio.h>
// int main()
// {
//     int arr1[5], arr2[5], i, j;
//     printf("\nEnter 5 elements of array:\n");
//     for ( i = 0; i <= 4; i++)
//         scanf("%d", &arr1[i]);
//     for ( i = 0, j = 4; i <= 4; i++, j--)
//         arr2[j] = arr1[i];
//     printf("Elements in reverse order:\n");
//     for(i = 0; i <= 4; i++)
//         printf("%d\t", arr2[i]);

//     return 0;
// }

//* Problem 13.3 An array contains 10 integers. Receive the number to be searched in the array as input. Write a program to search this number in the array and display the number of times it occurs in the array.
// TODO Program to find a number and its frequency in array

// #include<stdio.h>
// int main()
// {
//     int num[] = {7, 3, 5, 4, 6, 7, 2, 4, 6, 7};
//     int n, i, count;
//     printf("\nEnter an element to search: ");
//     scanf("%d",&n);
//     count = 0;
//     for ( i = 0; i <= 9; i++)
//     {
//         if(num[i] == n)
//          count++;
//     }
//     printf("Number %d is found %d times(s) in the array\n", n, count);
//     return 0;
// }

//! Attempt the following questions
//* (a) Twenty-five numbers are entered from the keyboard into an array. Write a program to find out how many of them are positive, how many are negative, how many are negative, how many are even are how many odd.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int arr[25], i,  pos = 0, neg = 0, zero = 0, even = 0, odd = 0;
//     for ( i = 0; i < 25; i++)
//     {
//         printf("Enter any number: ");
//         scanf("%d", &arr[i]);
//     }
//     for ( i = 0; i < 25; i++)
//     {
//         if(arr[i] > 0)
//             pos++;
//         if(arr[i] < 0)
//             neg++;
//         if(arr[i] == 0)
//         {
//             zero++;
//         }
//         if(arr[i] % 2 == 0)
//             even++;
//         else
//             odd++;
//     }
//     printf("\n\nData contains %d positive, %d negative, %d zeroes, %d even and %d odd.", pos, neg, zero, even, odd);
//     return 0;
// }

//* (b) If an array arr contains n elements , then write a program to check if arr[ 0 ] = arr[ n - 1 ], arr[ 1 ] = arr[ n - 2 ] and so on.
// #include<stdio.h>
// #include<stdlib.h>
// #define n 6
// int main()
// {
//     int arr[n] = { 1, 2, 3, 4, 2, 1 };
//     int j;
//     for( int i = 0; j = n - 1; i <= n / 2, i++, j--)
//     {
//         if(arr[i] == arr[j])
//             printf("\narr[ %d ] and arr[ %d ] are equal", i, j);
//         else
//             printf("\narr[ %d ] and arr[ %d ] are not equal", i, j);
//     }
//     return 0;
// }

//* (c)  Write a program to find the smallest number in an array of 25 integers.
// #include<stdio.h>
// #define N 25
// int main()
// {
//     int a[N], i, *small;
//     printf("Enter %d integers numbers\n", N);

//     for(i = 0; i < N; i++)
//         scanf("%d", &a[i]);
//     small = &a[ N - 1 ];

//     for( i = 0; i < N - 1; i++)
//     {
//         if(*( a + i) < *small )
//             *small = *(a + i);
//     }
//         printf("Smallest element in the array: %d\n", *small); //* *SMALL IS NECESSARY
//         return 0;
// }

//* (d) Implement  the insertion sort algorithm shown in figure on a set of 25 numbers.
// #include <stdio.h>
// #include <math.h>
// void insertion_sort(int arr[], int n)
// {
//     int i, key, j;
//     for (i = 1; i < n; i++)
//     {
//         key = arr[i];
//         j = i - 1;
//         /* move elements of arr[0....i-1], that are greater than key, to one position ahead of their current position */
//         while (j >= 0 && arr[j] > key)
//         {
//             arr[j + 1] = arr[j];
//             j = j - 1;
//         }
//         arr[j + 1] = key;
//     }
// }

// //  function to print an array of size n
// void print_array(int arr[], int n)
// {
//     int i;
//     for (i = 0; i < n; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
// }

// // to test insertion sort
// int main()
// {
//     int arr[] = {44, 33, 55, 22, 11};
//     int n = sizeof(arr) / sizeof(arr[0]); // The number of elements in the array is obtained by dividing the array size by size of its 0th element.
//     insertion_sort(arr, n);
//     print_array(arr, n);
//     return 0;
// }

//* (e) Write a program which performs the following tasks:
// -- Initialize an integer array of 10 elements in main()
// -- Pass the entire array to a function modify()
// -- In modify() multiply each element of array by 3
// -- Return the control to main() and print the new array elements in main()
// #include<stdio.h>
// #include<conio.h>
// void modify(int arr[] , int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         arr[i] *= 3;
//     }
// }

// int main()
// {
//     int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     modify(arr, size);
//     printf("Modified array element: \n");
//     for(int i = 0; i < size; i++){
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     return 0;
// }

//* (f) For the following set of sample data, compute the Standard deviation and the mean. -6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2.
//* The formula for standard deviation is √(X¡ + X¯)²/ n , where X¡ is the item and X¯ is the mean.

// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int n = 15;
//     int data[15] = { -6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2};
//     int i;
//     float mean = 0.0, deviation = 0.0, standard_daviation = 0.0;

//     // To find mean of the data, add all the element and divide by the number of element.
//     for( i = 0; i < n; i++)
//     {
//         mean += data[i];
//     }
//         mean = mean / n; //* Should be outside the loop because we have to divide the sum of all the elements

//     // Calculate Standard deviation
//     for( i = 0; i < n; i++) {
//         deviation = data[i] - mean;
//         standard_daviation += deviation * deviation;
//     }
//     standard_daviation = sqrt(standard_daviation / n);
//     printf("Mean : %f\n", mean);
//     printf("Standard-deviation : %f\n", standard_daviation);

//     return 0;
// }

//* (g) The area of a triangle can be computed by the sine law when 2 sides of the triangle and the angle between them are known.
//* Area = (1 / 2) a * b * sin(angle);
//* Given the following 6 triangular pieces of land, Write a program to find their area and determine which is largest .

// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int a[6] = {137.4, 155.5, 149.3, 160.0, 155.6, 149.7};
//     int b[6] = {80.9, 92.62, 97.93, 100.25, 68.95, 120.0};
//     int angle[6] = {0.78, 0.89, 1.35, 9.00, 1.25, 1.75};

//     float area[6], max_area = 0.0;
//     int i, max_index = 0;

//     // Calculate the area of each triangular piece of land
//     for (i = 0; i < 6; i++)
//     {
//         area[i] = 0.5 * a[i] * b[i] * sin(angle[i]);

//         // Keep track of the largest area
//         if (area[i] > max_area)
//         {
//             max_area = area[i];
//             max_index = i;
//         }
//     }

//     // Print the area of each triangular piece of land
//     for (i = 0; i < 6; i++)
//     {
//         printf("Plot No. %d: %f\n", i + 1, area[i]);
//     }

//     // Print the largest area
//     printf("\nThe largest area is plot no. %d with area %.2f\n", max_index + 1, max_area);
//     return 0;
// }

//* (h) For the following set of n data points (x, y), write a program to compute the correlation coefficient r, given by: r = (xysum - xsum * ysum / n) / (sqrt((n * x2sum - xsum * xsum) * (n * y2sum * ysum)));
// #include<stdio.h>
// #include<math.h>
// #define n 11
// int main()
// {
//     float x[11];
//     float y[11];
//     int i;

//     for ( i = 0; i < n; i++)
//     {
//         printf("Enter X and Y coordinates: ");
//         scanf("%f %f", &x[i], &y[i]);
//     }

//     // float x[11] = {34.22, 39.87, 41.85, 43.23, 40.06, 53.29, 53.29, 54.14, 49.12, 40.71, 55.15};
//     // float y[11] = {102.43, 100.93, 97.43, 97.81, 98.32, 98.32, 100.07, 97.08, 91.59, 94.85, 94.65};

//     float xsum = 0, ysum = 0, x2sum = 0, y2sum = 0, xysum = 0;

//     for ( i = 0; i < n; i++)
//     {
//         xsum += x[i];
//         ysum += y[i];
//         x2sum += x[i] * x[i];
//         y2sum += y[i] * y[i];
//         xysum += x[i] * y[i];
//     }

//     float r = (xysum - xsum * ysum / n) / (sqrt((n * x2sum - xsum * xsum) * (n * y2sum - ysum * ysum)) / n);

//     printf("Correlation Coefficient (r) is: %f", r);

//     return 0;
// }

//*TODO (i) A dequeue is an ordered set of elements in which elements may be inserted or retrieved from either end. Using an array simulate a dequeue of characters and the operations retrieve ledt

//! W3School Exercises
//*(1) Write a program to store elements in an array and print it.

// #include <stdio.h>
// int main()
// {
//     int arr[10];
//     int i;
//     for (i = 1; i < 10; i++)
//     {
//         printf("Enter element %d: ", i);
//         scanf("%d", &arr[i]);
//     }

//     for (i = 1; i <= 10; i++)
//     {
//         printf("Element %d: %d\n", i, arr[i]);
//     }
//     return 0;
// }

//*(2) Write a program to read n number of values in an array and display it reverse order.
// #include<stdio.h>
// int main()
// {
//     int i, n = 0;
//     printf("Enter number of elements to store in the array: ");
//     scanf("%d", &n);

//     int arr[n];
//     printf("Enter %d number of elements in the array: \n", n);
//     for ( i = 0; i < n; i++)
//     {
//         printf("element - %d : ", i);
//         scanf("%d", &arr[i]);
//     }

//     printf("The values stored in the array are: ");
//     for ( i = 0; i < n; i++)
//     {
//             printf("% 5d", arr[i]);
//     }

//     //TODO
//     printf("\nThe values stored in the array in reverse form: ");
//     for ( i = n - 1; i >= 0; i--) //!logic to reverse numbers in the array
//     {
//         printf("% 5d", arr[i]);
//     }

//     return 0;
// }

//*(3) Write a program to find the sum of all elements of the array.
// #include<stdio.h>
// int main()
// {
//     int i, n = 0, sum = 0;
//     printf("\nEnter the number of elements to be stored in the array : ");
//     scanf("%d", &n);

//     int arr[n];
//     printf("\nEnter %d elements in the array: \n", n);
//     for ( i = 0; i < n; i++)
//     {
//         printf("element - %d : ", i);
//         scanf("%d", &arr[i]);
//     }

//     for ( i = 0; i < n; i++)
//     {
// sum += arr[i]; //! Logic to sum all the elements stored in arr[i]
//     }

//     printf("Sum of all elements stored in the array is : %d\n\n", sum);

//     return 0;
// }

//*(4) Write a program to copy the elements of one array into another array
// #include<stdio.h>
// int main()
// {
//     int i, n = 0, arr1[100], arr2[100];
//     printf("Enter number of elements to be stored in the array: ");
//     scanf("%d", &n);

//     int arr[n];
//     printf("Enter %d elements in the array.\n ", n);
//     for(i = 0; i < n; i++)
//     {
//         printf("Enter element - %d : ", i);
//         scanf("%d", &arr1[i]);
//     }

//     printf("The values stored in the first array is : \n");
//     for ( i = 0; i < n; i++)
//     {
//         printf("% 5d", arr1[i]);
//     }

//     for ( i = 0; i < n; i++)
//     {
//         arr2[i] = arr1[i]; // arr2[] = arr1[] is the right sequence
//     }

//     printf("\n\nThe values stored in the second array is: \n");
//     for ( i = 0; i < n; i++)
//     {
//         printf("% 5d", arr2[i]);
//     }
//     return 0;
// }

//*(5) Write a program to count total number of duplicate element in the array
// #include <stdio.h>
// int main()
// {
//     int arr1[100];
//     int arr2[100];
//     int arr3[100];
//     int n, mm = 1, ctr = 0;
//     int i, j;

//     printf("Input the number of elements to be stored in the array: \n");
//     scanf("%d", &n);

//     printf("Enter %d elements in the array.\n", n);
//     for (i = 0; i < n; i++)
//     {
//         printf("element - %d : \n", i);
//         scanf("%d", &arr1[i]);
//     }

//     // Copy in other array
//     for (i = 0; i < n; i++)
//     {
//         arr2[i] = arr1[i];
//         arr3[i] = 0;
//     }

//     // Mark the elements that  are duplicate
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             if (arr1[i] == arr2[j])
//             {
//                 arr3[j] = mm;
//                 mm++;
//             }
//         }
//         mm = 1;
//     }

//     // prints the final array
//     for (i = 0; i < n; i++)
//     {
//         if (arr3[i] == 2)
//         {
//             ctr++;
//         }
//     }
//         printf("\nThe total number of duplicate element found in the array is : %d", ctr);
//         printf("\n\n");
//     return 0;
// }

//* (6) Write a program to print all unique elements in a array.
// #include<stdio.h>
// int main()
// {
//     int n = 0, arr[100], ctr = 0;
//     int i, j, k;
//     printf("Input the number of elements to be store in the array: ");
//     scanf("%d", &n);

//         printf("Enter %d elements in the array. ", n);
//     for ( i = 0; i < n; i++)
//     {
//         printf("element - %d : ", i);
//         scanf("%d", arr[i]);
//     }

//     printf("Unique elements found in the array are: \n");
//     for( i = 0; i < n ; i++)
//     {
//         ctr = 0;
//         for( j = 0, k = n; j < k + 1; j++)
//         {
//             // increment the counter when the search value is duplicate.
//             if( i != j)
//             {
//                 if(arr[i] == arr[j])
//                 {
//                     ctr++;
//                 }
//             }
//         }
//         if( ctr == 0)
//         {
//             printf("%d", arr[i]);
//         }
//     }
//     return 0;
// }

//* (7) Write a program in C to merge two arrays of same size sorted in descending order.
// #include <stdio.h>
// void main()
// {
//     int arr1[100], arr2[100], arr3[200];
//     int s1, s2, s3;
//     int i, j, k;
	
	
//        printf("\n\nMerge two arrays of same size sorted in decending order.\n");
//        printf("------------------------------------------------------------\n");	
	   
//        printf("Input the number of elements to be stored in the first array :");
//        scanf("%d",&s1);
   
//        printf("Input %d elements in the array :\n",s1);
//        for(i=0;i<s1;i++)
//             {
// 	      printf("element - %d : ",i);
// 	      scanf("%d",&arr1[i]);
// 	    }


//        printf("Input the number of elements to be stored in the second array :");
//        scanf("%d",&s2);
   
//        printf("Input %d elements in the array :\n",s2);
//        for(i=0;i<s2;i++)
//             {
// 	      printf("element - %d : ",i);
// 	      scanf("%d",&arr2[i]);
// 	    }

//     /* size of merged array is size of first array and  size of second array */
//     s3 = s1 + s2;
// /*----------------- insert in the third array------------------------------------*/
//     for(i=0;i<s1; i++)
//         {
//             arr3[i] = arr1[i];
//          }
//      for(j=0;j<s2; j++)
//         {
//             arr3[i] = arr2[j];
//             i++; 
//         }
// /*----------------- sort the array in decending order ---------------------------*/
//    for(i=0;i<s3; i++)
//         {
//            for(k=0;k<s3-1;k++)
//              {
         
//                 if(arr3[k]<=arr3[k+1])
//                  {
//                    j=arr3[k+1];
//                    arr3[k+1]=arr3[k];
//                    arr3[k]=j;
//                  }  
//               }
//          }                      

// /*--------------- Prints the merged array ------------------------------------*/
//      printf("\nThe merged array in decending order is :\n");
//     for(i=0; i<s3; i++)
//     {
//         printf("%d   ", arr3[i]);
//     }
// 	printf("\n\n");
// }


//* (8) Write a program in C to count the frequency of each element of an array
#include <stdio.h>
void main() {
    int arr1[100], fr1[100];
    int n, i, j, ctr;
    /// @brief In this code, ctr is a variable used to keep track of the frequency of an element in the array. ctr stands for "counter" and is initialized to 1 because the current element is already counted once. The variable ctr is used in a nested loop to compare the current element with the remaining elements in the array. If a match is found, ctr is incremented to reflect that the current element has been found again. At the end of the inner loop, the value of ctr represents the frequency of the current element. This frequency value is then assigned to the corresponding element in the fr1 array. In short, ctr is a temporary variable used to count the frequency of an element while traversing the array.


    printf("Count frequency of each element of an array:\n");
    printf("--------------------------------------------\n");	

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
   
    printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d: ", i);
        scanf("%d", &arr1[i]);
        fr1[i] = -1; 
        /// @brief  We initialize the fr1 array to -1 to indicate that the frequency of each element has not yet been counted.
    }

    for (i = 0; i < n; i++) {
        ctr = 1;
        for (j = i + 1; j < n; j++) {
            if (arr1[i] == arr1[j]) {
                ctr++;
                fr1[j] = 0;
                /// @brief We also set the corresponding element in the fr1 array to 0 if it is a duplicate, so that it is not counted again.
            }
        }

        if (fr1[i] != 0) {
            fr1[i] = ctr;
        }
    }

    printf("\nThe frequency of all elements in the array:\n");
    for (i = 0; i < n; i++) {
        if (fr1[i] != 0) {                                                  
            printf("%d occurs %d times\n", arr1[i], fr1[i]);
        }
    }
}









//TODO Continue the practice from here also learn DEQUEUE( a DSA topic question)