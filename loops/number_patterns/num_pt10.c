/*

1     1
 2   2
  3 3
   4
  3 3
 2   2
1     1  


*/
#include <stdio.h>
int main() {
    int n = 4; // number of rows in the upper half
    int total_cols = 2 * n - 1;

    // Upper half of the pattern
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= total_cols; j++) {
            if (j == i || j == total_cols - i + 1) {
                printf("%d", i);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    // Lower half of the pattern
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= total_cols; j++) {
            if (j == i || j == total_cols - i + 1) {
                printf("%d", i);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}