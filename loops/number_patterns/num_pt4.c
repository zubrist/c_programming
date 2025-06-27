/*

*****
*123*
*123*
*123*
*****

*/
#include <stdio.h>
int main() {
    int n = 5; // size of the square

    for (int i = 1; i <= n; i++) { // loop for each row
        for (int j = 1; j <= n; j++) { // loop for each column
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("*"); // print '*' for border
            } else {
                printf("%d", j-1); // print number inside the square (1,2,3)
            }
        }
        printf("\n"); // move to the next line after each row
    }

    return 0;
}
