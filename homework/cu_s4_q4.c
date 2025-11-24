/*
Write a program in C to find all prime-fibonacci numbers within the range m to n. 
m and n should be taken as input from user.

A Prime-Fibonacci number is a number that is both a Fibonacci number and a prime number.
Example: 2, 3, 5, 13, 89, ...
*/

#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int m, n;
    int a = 0, b = 1, nextTerm;

    printf("Enter the range (m and n): ");
    scanf("%d %d", &m, &n);

    printf("Prime-Fibonacci numbers between %d and %d are:\n", m, n);

    // Generate Fibonacci numbers
    while (a <= n) {
        if (a >= m) {
            if (isPrime(a)) {
                printf("%d ", a);
            }
        }
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }

    printf("\n");
    return 0;
}