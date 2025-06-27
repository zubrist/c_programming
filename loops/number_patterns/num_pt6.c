/*

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
#include <stdio.h>
int main() {
    int n = 5; // number of rows
    int num = 1; // starting number

    for (int i = 1; i <= n; i++) { // loop for each row
        for (int j = 1; j <= i; j++) { // loop for each column in the row
            printf("%d ", num); // print the current number
            num++; // increment the number for the next position
        }
        printf("\n"); // move to the next line after each row
    }

    return 0;
}