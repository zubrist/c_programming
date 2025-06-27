/*
    1
   22
  333
 4444
55555

*/

#include <stdio.h>
int main() {
    int n = 5; // number of rows

    for (int i = 1; i <= n; i++) { // loop for each row
        for (int j = 1; j <= n; j++) {
            if (j <= n - i) {
                printf(" ");
            } else {
                printf("%d", i);
            }
        }
        printf("\n"); // move to the next line after each row
    }

    return 0;
}
