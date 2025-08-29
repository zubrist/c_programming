/*
fpritnf() - Write formatted output to a file instead of screen.
*/

#include <stdio.h>
int main(){

   FILE *file;
   file = fopen("example.txt", "w");

   if (file == NULL) {
       printf("Error opening file");
       return 1;
   }
    // Example of writing to a file
    printf("Enter your name: "); // prompting the user 
    printf("name: %s ,  age: %d\n", "John", 30);
    fprintf(file,"name: %s ,  age: %d\n", "John", 30);
    fclose(file);
}