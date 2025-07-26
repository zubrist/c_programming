/*

fscanf(file_pointer, format, variable) - Read formatted input from a file.
*/


#include <stdio.h>
int main() {

    FILE *file;
    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Error opening file");
        return 1;
    }
    char name[50];
    int age;

    // Example of reading from a file
    //scanf("%d", &age);

    if (fscanf(file,"name: %s ,  age: %d",name, &age)==2) {
        printf("Read from file successfully\n");
    } else {
        printf("Error reading from file\n");
        fclose(file);
        return 1;
    }
    printf("name: %s , age: %d\n", name, age);

    fclose(file);

}