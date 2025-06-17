/*
Ramesh's basic salary is input through the keyboard His
dearness allowance is 40% of basic salary, and house rent
allowance is 20% of basic salary. Write a program to calculate
his gross salary.
*/
#include <stdio.h>
int main(){

    float basic_salary=0.0;
    float dearness_allowance; 
    float house_rent_allowance;
    float gross_salary;

    printf("Enter the basic salary of Ramesh: ");
    scanf("%f", &basic_salary);

    dearness_allowance =  basic_salary * 40 / 100; // 100 *40/100 = 40.00
    printf("\nDA: %f",dearness_allowance);
    house_rent_allowance = (20.0/100.00) * basic_salary; // 20% of basic salary
    printf("\nHRA: %f",house_rent_allowance);
    gross_salary = basic_salary + dearness_allowance + house_rent_allowance; 
    printf("\nGross Salary of Ramesh: %.2f\n", gross_salary); 


    return 0;
}

/*
float a = 40 
float b = 100
flaot div = a/b = 40/100  =0.4 
div =0.4

4 * 100.00 = 400.00

*/