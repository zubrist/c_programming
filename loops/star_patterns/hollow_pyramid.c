/*

        *
       * * 
      *   *
     *     *
    * * * * * 


*/
#include<stdio.h>
int main() {
    int n = 5; // height of the hollow pyramid

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print stars and spaces
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        printf("\n"); // go to next line/row
    }

    return 0;
}