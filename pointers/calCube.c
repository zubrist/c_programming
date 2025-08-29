#include <stdio.h>

int calCube(int *num)
{ 
   *num = (*num) * (*num) * (*num);
    printf("Cube is %d\n", *num);
}

void display()
{
    printf("Hello from display function\n");
}

int main()
{
    int value = 3;
    // *num = &value
    printf("value is %d\n", value); // 3
    calCube(&value);
    
    printf("value is %d\n", value); // 27
    

    return 0;
}