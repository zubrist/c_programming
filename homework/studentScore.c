#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    int roll_no;
    char name[30];
    float score;
};

int main() 
{
    FILE *file;
    struct student s, max;
    int size, i;
    
    // Initialize max struct with minimum possible score
    max.score = -1;
    
    // Open for read/write: create new or truncate existing
    file = fopen("example2.txt", "w+");
    if (file == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    printf("Enter the number of students: ");
    if (scanf("%d", &size) != 1 || size <= 0)
    {
        printf("Invalid number.\n");
        fclose(file);
        return 1;
    }

    // Write phase
    for (i = 0; i < size; i++)
    {
        printf("\nEnter roll no.: ");
        scanf("%d", &s.roll_no);

        printf("Enter name (no spaces): ");
        scanf("%29s", s.name);

        printf("Enter score: ");
        scanf("%f", &s.score);

        // Update max if current student has higher score
        if (s.score > max.score)
        {
            max = s;
        }

        fprintf(file, "roll: %d , name: %s , score: %.2f\n", s.roll_no, s.name, s.score);
    }
    
    // Reset file pointer to beginning for reading
    rewind(file);

    printf("\n=====================\n");
    printf("\nThe Highest score");
    printf("\nRoll no.: %d", max.roll_no);
    printf("\nName: %s", max.name);
    printf("\nScore: %.2f\n", max.score);
    
    printf("\n=====================\n");
    printf("All student records:\n");

    // Read and display all records
    char line[100];
    while (fgets(line, sizeof(line), file) != NULL)
    {
        printf("%s", line);
    }

    fclose(file);
    return 0;
}