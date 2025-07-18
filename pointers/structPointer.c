#include<stdio.h>
#include<string.h>

struct Student {
    char name[50]; //[ |  |   | |   |   |   |   |]
    int age; // &age = 0x12345678
};


int main()
{
   struct Student reja;
   strcpy(reja.name, "Reje");
   reja.age = 20;

   struct Student  *rejaPtr = &reja; // Pointer to the struct Student

   printf("Name: %s\n", rejaPtr->name); // Accessing name using pointer
   printf("Age: %d\n", rejaPtr->age); // Accessing age using pointer


    return 0;
}