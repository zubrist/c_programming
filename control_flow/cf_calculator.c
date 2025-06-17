#include<stdio.h>

int main()
{

    int num1, num2, result;
    char op;

    printf("Enter the first number: "); 
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the operator:(+ , - , * , /): ");// $, {}
    scanf(" %c", &op);

    switch(op) // op = '+' or '-' or '*' or '/'
    {
        case '+':
            result = num1 + num2;
            printf("The result is: %d\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("The result is: %d\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("The result is: %d\n",result);
            break;
        
        case '/':
            result = num1 / num2;
            printf("The result is: %d\n", result);
            break;

        default:
            printf("Invalid operator\n");
        
    }


    return 0;
}