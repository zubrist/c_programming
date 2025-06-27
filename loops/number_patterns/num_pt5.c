/*

1
11
121
1331
14641

*/
#include <stdio.h>
int main() {
    int n = 5; // number of rows

    for (int i = 0; i < n; i++) { // loop for each row
        int num = 1; // start with 1 for each row
        for (int j = 0; j <= i; j++) { // loop for each column in the row
            printf("%d", num); // print the current number
            num = num * (i - j) / (j + 1); // calculate the next number in the row using binomial coefficient formula
        }
        printf("\n"); // move to the next line after each row
    }

    return 0;
}