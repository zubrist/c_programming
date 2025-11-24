/**
 * @file cu_s1_q6.c
 * @brief A program to reverse the contents of a user-specified file.
 *
 * This program prompts the user for a filename, opens that file, and reads its
 * contents in reverse order (from the end of the file to the beginning).
 * The reversed content is displayed on the standard output (console) and
 * simultaneously written to a new file named "reversed_output.txt".
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp, *fp_out;
    char filename[100];
    char ch;
    long fileSize, i;

    // Ask user for the filename
    printf("Enter the filename to reverse: ");
    scanf("%s", filename);

    // Open the source file in read mode
    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    // Open the destination file in write mode
    fp_out = fopen("reversed_output.txt", "w");
    if (fp_out == NULL) {
        printf("Could not create output file.\n");
        fclose(fp);
        return 1;
    }

    // Move file pointer to the end of the file
    fseek(fp, 0, SEEK_END);

    // Get the position of the file pointer (file size)
    fileSize = ftell(fp);

    printf("Reversed content of %s:\n", filename);

    // Loop backwards from the end of the file to the beginning
    // We start at fileSize - 1 because file positions are 0-indexed
    for (i = 1; i <= fileSize; i++) {
        // Move pointer to (End - i)
        fseek(fp, -i, SEEK_END);
        
        // Read the character
        ch = fgetc(fp);
        
        // Print the character to console
        printf("%c", ch);

        // Write the character to the output file
        fputc(ch, fp_out);
    }

    printf("\n");
    printf("Reversed content saved to 'reversed_output.txt'\n");

    // Close the files
    fclose(fp);
    fclose(fp_out);

    return 0;
}