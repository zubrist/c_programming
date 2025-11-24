/*
Define a structure named point, which contains two members x and y co-0rdinates. Define another 
structure line, which contains two points pl and p2 as members. Write a program in C to take two lines 
as input and check whether they are parallel or not.
*/

#include <stdio.h>

// Define the point structure
struct point {
    float x;
    float y;
};

// Define the line structure containing two points
struct line {
    struct point p1;
    struct point p2;
};

int main() {
    struct line l1, l2;
    float slope1, slope2;

    // Input for first line
    printf("Enter x and y for point 1 of line 1: ");
    scanf("%f %f", &l1.p1.x, &l1.p1.y);
    printf("Enter x and y for point 2 of line 1: ");
    scanf("%f %f", &l1.p2.x, &l1.p2.y);

    // Input for second line
    printf("Enter x and y for point 1 of line 2: ");
    scanf("%f %f", &l2.p1.x, &l2.p1.y);
    printf("Enter x and y for point 2 of line 2: ");
    scanf("%f %f", &l2.p2.x, &l2.p2.y);

    // Calculate slopes: m = (y2 - y1) / (x2 - x1)
    // Note: This simple check assumes lines are not vertical (x2 - x1 != 0)
    slope1 = (l1.p2.y - l1.p1.y) / (l1.p2.x - l1.p1.x);
    slope2 = (l2.p2.y - l2.p1.y) / (l2.p2.x - l2.p1.x);

    // Check if slopes are equal
    if (slope1 == slope2) {
        printf("The lines are parallel.\n");
    } else {
        printf("The lines are not parallel.\n");
    }

    return 0;
}