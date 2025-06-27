/*

WAP to find the youngest person in an array.

take array size from user and then the  ages of each person( array size = no. of persons)
find the youngest person in the array and print the age of the youngest person 
and the index of the youngest person in the array.

*/
#include <stdio.h>

int main() {
    int n, i, youngest, index;

    printf("Enter the number of persons: ");
    scanf("%d", &n);

    int ages[n];

    printf("Enter the ages of each person:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &ages[i]);
    }

    youngest = ages[0];
    index = 0;

    for(i = 1; i < n; i++) {
        if(ages[i] < youngest) {
            youngest = ages[i];
            index = i;
        }
    }

    printf("The youngest person is %d years old at index %d.\n", youngest, index);

    return 0;
}
// -12 , 13, 14 , 12 , 20
