
// #include <stdio.h>
// int main (){
//     char name[50];
//     printf("Enter your name: ");
//     scanf("%s",&name); // %s reads a string until whitespace
//     printf("Hello, %s\n", name);
//     return 0;
// }


// solution 

#include <stdio.h>

int main() {
    char name[50];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // fgets reads a line of text including spaces
    // Remove newline character if present
    printf("Hello, %s", name);
    return 0;
}
