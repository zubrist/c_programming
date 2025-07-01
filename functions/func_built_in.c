#include<stdio.h>
#include<math.h>
/* example of functions declared in math.h
    sqrt(x) - returns the square root of x -> return type is double/float
    pow(x, y) - returns x raised to the power of y
    fabs(x) - returns the absolute value of x
    ceil(x) - returns the smallest integer greater than or equal to x   
    floor(x) - returns the largest integer less than or equal to x
    round(x) - returns the nearest integer to x
    sin(x) - returns the sine of x (x in radians)
    cos(x) - returns the cosine of x (x in radians)
*/

int main(){
    int num = 16;
    double square_root = sqrt(num); // calculate the square root of num
    printf("The square root of %d is: %.2f\n", num, square_root); // print the result


    return 0;
}