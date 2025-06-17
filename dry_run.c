#include <stdio.h>

int main() {
    int score; //variable declaration


    
    printf("Enter the student's score: ");
    scanf("%d", &score); // scanf function to read input %d -> entered value is integer, 20
                         // %f  --> enterd value is a deciaml , 20.5

                         // score = 20; // variable initialization
    // Determine the grade using if conditions

    if (score >= 90)
    { // true/false  -> false 
        printf("Grade: A\n"); // printf function to print output
    } 
    
    else if (score >= 80) {  // false
        printf("Grade: B\n");
    } else if (score >= 70) { // false
        printf("Grade: C\n");
    } else if (score >= 60) { // false
        printf("Grade: D\n");
    } else { // true
        printf("Grade: F\n");
    }

    return 0;
}
