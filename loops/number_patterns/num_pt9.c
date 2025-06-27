/*

1
12
123
1234
12345
1234
123
12
1

use if-else to print numbers in the pattern

*/
#include <stdio.h>
int main() {
    int n = 5; // number of rows

    // Print the pattern using if-else
    for (int i = 1; i <= 2 * n - 1; i++) { // total rows
        int row = i <= n ? i : 2 * n - i; // calculate row number for upper/lower half
        for (int j = 1; j <= n; j++) {
            if (j <= row) {
                printf("%d", j);
            }
        }
        printf("\n");
    }

    return 0;
}
