/*
int fclose(file_pointer) - Close a file.

Return value 
0 on success,
EOF(ENd of File) on failure.
*/


#include <stdio.h>
int main(){

   FILE *file;
   file = fopen("example.txt", "r");

   if (file == NULL) {
       printf("Error opening file");
       return 1;
   }

   if( fclose(file)==0 ){
    printf("File closed successfully\n");
   }
    else {
         printf("Error closing file\n");
         return 1;
    }


}