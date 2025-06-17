//leap year

#include<stdio.h>
int main()
{


    int year;
    printf("Enter the year: "); 
    scanf("%d",&year); //2025

    if( (year%4==0 && year%100!=0)  || year%400==0){ // (2025%4==0 && 2025%100 != 0) || 2025%400==0)
                                                 //  (false && true ) || false) => false || false => false
        printf("%d is a leap year\n",year);
    }
    else{
        printf("%d is not a leap year\n",year);
    }

    return 0;

}