/*

11111
11111
11111
11111


*/
#include <stdio.h>
int main() {
    int n = 5; // number of rows and columns

    for (int i = 1; i <= n; i++) { // loop for each row
        for (int j = 1; j <= n; j++) { // loop for each column
            if (1) { // always true, so always prints '1'
                printf("1");
            } else {
                // nothing to print
            }
        }
        printf("\n"); // move to the next line after each row
    }

    return 0;
}