/*
Write a function to find all perfect numbers from 1 to 100 (perfect numbers are positive 
integers where the sum of perfect divisor is the number itself, e.g., 6 = 1+2+3). 

more examples of perfect number -> 28 as 1 + 2 + 4 + 7 + 14 = 28,
and 496 as 1 + 2 + 4 + 8 + 16 +31 + 62 + 124 + 248 = 496.
*/

#include <stdio.h>

void perfect_num(int a, int b) {
    int i, j, s;
    for(i = a; i <= b; i++) {
        s = 0;
        for(j = 1; j <= i/2; j++) {
            if(i % j == 0)
                s += j;
        }
        if(i == s)
            printf("\nPerfect number is: %d", i);
    }
}

int main() {
    int l, u;
    printf("\nEnter the range to find perfect numbers: ");
    scanf("%d %d", &l, &u);
    perfect_num(l, u);
    return 0;
}
