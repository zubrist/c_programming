#include<stdio.h>

int main()
{
    int age;
    char Nationality;
    printf("Enter the age of the person: "); // 1 
    scanf("%d", &age); // wait for inputv -> 18

    printf("Enter the nationality of the person : ");
    scanf(" %c", &Nationality); // wait for input -> Enter the nationality of the person :

    if(age >= 18 && Nationality == 'I' || Nationality == 'i')
    {
        printf("This person is eligible for voting in INDIA");
    }
    else{
        printf("This person is ineligible for voting in INDIA");
    }
    return 0;
}