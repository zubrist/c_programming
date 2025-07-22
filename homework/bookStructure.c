// /*Book Structure Management : 
// Create a structure named Book to store book details like title, author, and price. Write a C program to input details for three books, find the most expensive and the lowest priced books, and display their information.
// */
// #include<stdio.h>
// #include<string.h>
// #include<math.h>
// struct book{
//     char title[50];
//     char author[50];
//     int price;
// };
// int main(){
//     int m,l,n;
//     printf("Enter the no. of books : ");
//     scanf("%d",&n);
//     struct book BookArray[n]; // Creating an array of structures to hold book details
//     for(int i=1;i<=n;i++){
//         struct book BookArray[i]; //why again ??
//         printf("Enter the title of the book : ");
//         scanf("%s",&BookArray[i].title);
//         printf("Enter the name of the author of the book : ");
//         scanf("%s",&BookArray[i].author);
//         printf("Enter the price of the book : ");
//         scanf("%d",&BookArray[i].price);
//     }
//     for(int i=1;i<=n;i++){
//         if(BookArray[i].price>BookArray[i+1].price && BookArray[i].price>BookArray[i+2].price){
//             m=BookArray[i].price;
//             printf("The most expensive book : \n");
//             printf("Title : %s\n",BookArray[i].title);
//             printf("Author : %s\n",BookArray[i].author);
//             printf("Price : %d\n",BookArray[i].price);
//             if(BookArray[i+1].price>BookArray[i+2].price){
//                 l=BookArray[i+2].price;
//                 printf("The lowest priced book : \n");
//                 printf("Title : %s\n",BookArray[i+2].title);
//                 printf("Author : %s\n",BookArray[i+2].author);
//                 printf("Price : %d\n",BookArray[i+2].price);
//             }
//             else{
//                 l=BookArray[i+1].price;
//                 printf("The lowest priced book : \n");
//                 printf("Title : %s\n",BookArray[i+1].title);
//                 printf("Author : %s\n",BookArray[i+1].author);
//                 printf("Price : %d\n",BookArray[i+1].price);
//             }
//         }
//         else if(BookArray[i+1].price>BookArray[i].price && BookArray[i+1].price>BookArray[i+2].price){
//             m=BookArray[i+1].price;
//             printf("The most expensive book : \n");
//             printf("Title : %s\n",BookArray[i+1].title);
//             printf("Author : %s\n",BookArray[i+1].author);
//             printf("Price : %d\n",BookArray[i+1].price);
//             if(BookArray[i+2].price>BookArray[i].price){
//                 l=BookArray[i].price;
//                 printf("The lowest priced book : \n");
//                 printf("Title : %s\n",BookArray[i].title);
//                 printf("Author : %s\n",BookArray[i].author);
//                 printf("Price : %d\n",BookArray[i].price);
//             }
//             else{
//                 l=BookArray[i+2].price;
//                 printf("The lowest priced book : \n");
//                 printf("Title : %s\n",BookArray[i+2].title);
//                 printf("Author : %s\n",BookArray[i+2].author);
//                 printf("Price : %d\n",BookArray[i+2].price);
//             }
//         }
//         else{
//             m=BookArray[i+2].price;
//             printf("The most expensive book : \n");
//             printf("Title : %s\n",BookArray[i+2].title);
//             printf("Author : %s\n",BookArray[i+2].author);
//             printf("Price : %d\n",BookArray[i+2].price);
//             if(BookArray[i].price>BookArray[i+1].price){
//                 l=BookArray[i+1].price;
//                 printf("The lowest priced book : \n");
//                 printf("Title : %s\n",BookArray[i+1].title);
//                 printf("Author : %s\n",BookArray[i+1].author);
//                 printf("Price : %d\n",BookArray[i+1].price);
//             }
//             else{
//                 l=BookArray[i].price;
//                 printf("The lowest priced book : \n");
//                 printf("Title : %s\n",BookArray[i].title);
//                 printf("Author : %s\n",BookArray[i].author);
//                 printf("Price : %d\n",BookArray[i].price);
//             }
//         }
//     }
//     return 0;
// }
/*Book Structure Management : 
Create a structure named Book to store book details like title, author, and price. Write a C program to input details for three books, find the most expensive and the lowest priced books, and display their information.
*/
#include <stdio.h>
#include <string.h>

struct book {
    char title[50];
    char author[50];
    int price;
};

int main() {
    int n, max, min, m = 0, l = 0;

    printf("Enter the number of books: ");
    scanf("%d", &n);

    struct book BookArray[n];

    for (int i = 0; i < n; i++) {
        printf("Enter the title of the book: ");
        scanf("%s", BookArray[i].title); // Replace with fgets() for space support
        printf("Enter the author's name: ");
        scanf("%s", BookArray[i].author); // Replace with fgets() for space support
        printf("Enter the price: ");
        scanf("%d", &BookArray[i].price);
    }

    max = min = BookArray[0].price;

    for (int i = 0; i < n; i++) {
        if (BookArray[i].price > max) {
            max = BookArray[i].price;
            m = i;
        }
        if (BookArray[i].price < min) {
            min = BookArray[i].price;
            l = i;
        }
    }

    printf("\nThe most expensive book:\n");
    printf("Title: %s\n", BookArray[m].title);
    printf("Author: %s\n", BookArray[m].author);
    printf("Price: %d\n", BookArray[m].price);

    printf("\nThe lowest priced book:\n");
    printf("Title: %s\n", BookArray[l].title);
    printf("Author: %s\n", BookArray[l].author);
    printf("Price: %d\n", BookArray[l].price);

    return 0;
}
