/*
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5

*/
#include <stdio.h>
int main() {
    int n = 5; // number of rows

    for (int i = 1; i <= n; i++) { // loop for each row
        // Print leading spaces
        for (int j = 1; j <= n; j++) {
            if (j <= n - i)
                printf(" ");
            else
                printf("%d ", j - (n - i));
        }
        printf("\n"); // move to the next line after each row
    }

    return 0;
}
