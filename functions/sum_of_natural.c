#include <stdio.h>

int findSum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;// sum= 0+1+2+3+4+5+6+7+8+9+10 = 55
    }
    return sum;
}

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);//10

    printf("Sum of the first %d natural numbers is %d\n", n, findSum(n));
    return 0;
}
