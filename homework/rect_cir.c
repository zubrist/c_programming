/*
The length & breadth of a rectangle and radius of a circle are
input through the keyboard Write a program to calculate the
area & perimeter of the rectangle, and the area &
circumference of the circle.
*/
// using DEFINE PI

#include <stdio.h>
#define PI 3.14
#define MAX 100

int main() {
    float length, breadth, radius;
    float area_rectangle, perimeter_rectangle;
    float area_circle, circumference_circle;
    
    // Input for rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    // Calculate area and perimeter of rectangle
    area_rectangle = length * breadth;
    perimeter_rectangle = 2 * (length + breadth);

    // Input for circle
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area and circumference of circle
    area_circle =  PI * radius * radius; 
    circumference_circle = 2 * PI * radius;

    // Output results
    printf("Area of Rectangle: %.2f\n", area_rectangle);
    printf("Perimeter of Rectangle: %.2f\n", perimeter_rectangle);
    printf("Area of Circle: %.2f\n", area_circle);
    printf("Circumference of Circle: %.2f\n", circumference_circle);

    return 0;
}