/*
 * Question: Write a program in C to find the longest line along with its length in a text file.
 */

#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

int main() {
    FILE *file;
    char filename[100];
    char currentLine[MAX_LINE_LENGTH];
    char longestLine[MAX_LINE_LENGTH];
    int maxLength = 0;
    int currentLength = 0;

    // Ask user for the filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file for reading
    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    // Initialize longestLine to empty
    longestLine[0] = '\0';

    // Read the file line by line
    while (fgets(currentLine, sizeof(currentLine), file) != NULL) {
        currentLength = strlen(currentLine);

        // Check if current line is longer than the max found so far
        if (currentLength > maxLength) {
            maxLength = currentLength;
            strcpy(longestLine, currentLine);
        }
    }

    fclose(file);

    if (maxLength > 0) {
        printf("\nLongest line (Length: %d):\n%s\n", maxLength, longestLine);
    } else {
        printf("File is empty or contains no lines.\n");
    }

    return 0;
}