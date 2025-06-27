/*

*
**
***
****
*****
****
***
**
*

*/

#include <stdio.h>

int main() {
    int n = 5; // height of the half diamond

    // Upper half (including middle row)
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j <= i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n; j++) {
            if (j <= i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}


