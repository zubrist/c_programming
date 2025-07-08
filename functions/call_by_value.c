#include <stdio.h>
// Function to swap two integers using call by value
void swap(int x, int y) { // x = 40, y = 50
 int temp = x; // temp = 40
 x = y; // x= 50
 y = temp; // y = 40
 printf("Inside swap function, x = %d , y = %d\n", x, y); // Inside swap function, x = 50 , y = 40
 
}
int main() {
 int a = 45, b = 55;
 printf("Before swap, a = %d and b = %d\n", a, b);
 swap(a, b); ////  a = 50 , b = 40
 printf("After swap, a = %d and b = %d\n", a, b);
 return 0;
}