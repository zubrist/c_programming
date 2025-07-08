/*
WAP to find factorial of a number using a factorial function.

In mathematics, a factorial of a positive integer ‘n’ is denoted by ‘n!’ and is 
calculated by multiplying all positive integers from 1 to ‘n.’ In simpler terms,
 it’s the product of ‘n’ and all the positive integers smaller than ‘n.’

For example:

Factorial of 3 is 3! = 3 * 2 * 1 = 6.
Factorial of 6 is 6! = 6 * 5 * 4 * 3 * 2 * 1, which equals 720.

int factorial(int number){



    return number
}

*/


#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %d\n", n, factorial(n));
    }

    return 0;
}
