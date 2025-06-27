/*
11111
00000
11111
00000
00000

*/
#include <stdio.h>
int main() {
    int n = 5; // number of rows and columns

    for (int i = 1; i <= n; i++) { // loop for each row
        for (int j = 1; j <= n; j++) { // loop for each column
            if (i % 2 == 1) { // if row number is odd
                printf("1");
            } else { // if row number is even
                printf("0");
            }
        }
        printf("\n"); // move to the next line after each row
    }

    return 0;
}