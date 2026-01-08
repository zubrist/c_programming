/*
Representations of Polynomials using Arrays
Evaluating the polynomial when x is given 
*/

#include <stdio.h>

#define DEGREE 3


void displayPolynomial(int coeffs[], int degree) {// araay and degree of the polynomial
    for (int i = degree; i >= 0; i--) {
        if (coeffs[i] != 0) {
            if (i != degree && coeffs[i] > 0) {
                printf(" + ");
            }
            if (i == 0) {
                printf("%d", coeffs[i]);
            } else if (i == 1) {
                printf("%dx", coeffs[i]);
            } else {
                printf("%dx^%d", coeffs[i], i);
            }
        }

    }
    printf("\n");
}
int main() {

    //  2x^3 - 4x^2 + 3x^1 + 5x^0  
    // step 1 - find the degree = 3

    //int coeffs[size] = {1,2,3,4}  //  | 1 | 2  | 3 | 4 |
    int coeffs[DEGREE + 1] = {0,0,0,0}; // | 0 | 0  | 0 | 0 |   

    // Example polynomial: 2x^3 - 4x^2 + 3x + 5
    coeffs[3] = 2;  // | 0 | 0  | 0 | 2 | 
    coeffs[2] = -4; // | 0 | 0  | -4| 2 |
    coeffs[1] = 3;  // | 0 | 3  | -4| 2 |
    coeffs[0] = 5;  // | 5 | 3  | -4| 2 |
    printf("The polynomial is: ");
    displayPolynomial(coeffs, DEGREE);

    int x;
    printf("Enter the value of x: ");
    scanf("%d", &x);  // 2

    // Evaluating the polynomial for the given x
    int result = 0;

    /*
    2x^3 - 4x^2 + 3x^1 + 5x^0   , x= 2
    2*2^3 - 4*2^2 + 3*2^1 + 5 
    */
    for (int i = 0; i <= DEGREE; i++) {
        int term = coeffs[i];
        for (int j = 0; j < i; j++) {
            term *= x;  // term = coeffs[i] * (x^i)
        }
        result += term;
    }

    printf("The result of the polynomial for x = %d is: %d\n", x, result);
    return 0;  
}

