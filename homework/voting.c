#include<stdio.h>
int main()
{
    int age;
    char Nationality;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your nationality: ");
    scanf(" %c", &Nationality); // "I"

    if(age >= 18 && Nationality == 'I'){ // is age grater than 18 ( true /false)
        printf("You are eligible to vote"); 
    }
    else{
        printf("You are not eligible to vote");
    }

    return 0;
}