/*

******
*    *
*    *
*    *
*    *
******


*/
#include <stdio.h>
int main() {
    int n = 6; // size of the hollow square

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // Print '*' for the first and last row, or first and last column
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n"); // go to next line/row
    }

    return 0;
}