
# Recursion in C++

## Tutorial
Recursion in C++ refers to a function that calls itself to solve smaller instances of a problem. This approach is especially useful when solving problems that can be broken down into sub-problems, like calculating factorials, traversing trees, or solving puzzles like the Tower of Hanoi.

A recursive function consists of two main parts:
1. **Base case**: A condition where the function stops calling itself.
2. **Recursive case**: Where the function calls itself with a smaller version of the problem.

For example, calculating the factorial of a number `n` (denoted as `n!`) can be solved recursively:
- Base case: `0! = 1`
- Recursive case: `n! = n * (n - 1)!`

## Exercise
Write a recursive function that calculates the factorial of a number `n`. The function should return `1` when `n` is `0` (base case), and for any other positive number `n`, it should return `n * factorial(n - 1)` (recursive case).

## Tutorial Code
```cpp
#include <iostream>

// Define a function that calculates the factorial of a number
int factorial(int n) {
    // Add base case and recursive call here
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    std::cout << "Factorial of " << n << " is " << factorial(n) << std::endl;

    return 0;
}
```

## Expected Output
```
Enter a number: 5
Factorial of 5 is 120
```

## Solution
```cpp
#include <iostream>

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0)  // Base case
        return 1;
    else         // Recursive case
        return n * factorial(n - 1);
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    std::cout << "Factorial of " << n << " is " << factorial(n) << std::endl;

    return 0;
}
```
