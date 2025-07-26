/*

fopen() - Open a file . 

fopen("filename.txt","mode")


modes:
"r " - Read mode
"w " - Write mode (creates a new file or truncates an existing one)
"a " - Append mode (writes to the end of the file)
"r+" - Read and write mode (file must exist)

syentax:

FILE *fp = fopen(const char *filename, const char *mode);


*/

#include <stdio.h>
int main(){

   FILE *file;
   file = fopen("example.txt", "r");

   if (file == NULL) {
       printf("Error opening file");
       return 1;
   }

   fclose(file);


}