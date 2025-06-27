/*
01010
01010
01010
01010

*/
#include<stdio.h>
int main() {
    int n = 5; // number of rows and columns

    for (int i = 1; i <= n; i++) { // loop for each row
        for (int j = 1; j <= n; j++) { // loop for each column
            if (i % 2 == 1) { // if row number is odd
                if (j % 2 == 1) { // if column number is odd
                    printf("1");
                } else { // if column number is even
                    printf("0");
                }
            } else { // if row number is even
                if (j % 2 == 1) { // if column number is odd
                    printf("0");
                } else { // if column number is even
                    printf("1");
                }
            }
        }
        printf("\n"); // move to the next line after each row
    }

    return 0;
}