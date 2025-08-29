/*
WAP to find GCD of two numbers using recursion.

example:
GCD of 12 and 15 is 3

function prototype:
int findGCD(int a, int b);


*/
#include <stdio.h>
int findGCD(int a, int b) {
    if (b == 0)
        return a;
    return findGCD(b, a % b);
}
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int gcd = findGCD(num1, num2);
    printf("GCD of %d and %d is %d\n", num1, num2, gcd);
    return 0;
}
/* Example:
Input: 12 15    
Output: GCD of 12 and 15 is 3
*/