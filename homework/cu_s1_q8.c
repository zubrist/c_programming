/*
Question:
Write a C program to read integers from a file named "data.txt".
Calculate the sum of all integers present in the file.
Append the calculated sum to the end of the same file.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char filename[] = "data.txt";
    int num;
    int sum = 0;

    // Open the file for reading
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Could not open file %s for reading.\n", filename);
        printf("Please ensure the file exists and contains integers.\n");
        return 1;
    }

    // Read integers from the file and calculate sum
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
    }

    // Close the file to reset the pointer or switch modes safely
    fclose(fp);

    // Open the file in append mode to add the sum
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open file %s for appending.\n", filename);
        return 1;
    }

    // Append the sum to the file
    fprintf(fp, " %d", sum);
    printf("Sum %d has been appended to %s\n", sum, filename);

    fclose(fp);

    return 0;
}