#include <stdio.h> 
#include <string.h> 
int main()  
     { 
            char name[100]; 
            int i; 
             // Prompt user to enter full name 
             printf("Enter full name: "); 
             fgets(name, sizeof(name), stdin); // Read input string with spaces 
 
             // Remove newline character at the end if present 
               for (i = 0; name[i] != '\0'; i++)  
                        { 
                             if (name[i] == '\n')  
                      { 
                                         name[i] = '\0'; 
                                           break; 
                                   } 
                       } 
                     printf("Abbreviation: "); 
                      // Print the first character (if it's not a space) 
                       if (name[0] != ' ')  
                               { 
                                            printf("%c. ", name[0]); 
                                } 
                             // Traverse the name to find initials after each space 
                         for (i = 1; name[i] != '\0'; i++)  
                                     { 
                                           if (name[i - 1] == ' ' && name[i] != ' ')  
                                     { 
                                                           printf("%c. ", name[i]); 
                                                  } 
 
                                       } 
                                    printf("\n"); 
                                    return 0; 
                               }