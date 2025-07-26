/*
filename = scores.txt

write score of  5 students to file
roll: <roll_number> , name: <student_name> , score: <score>

read the scores from file and print them

// */
// #include <stdio.h>
// #include <string.h>

// int main() {
//     FILE *file;
//     int size, i;
//     int roll_no;
//     char name[30];
//     float score;

//     // Open for read/write: create new or truncate existing
//     file = fopen("example.txt", "w+");
//     if (file == NULL) {
//         perror("Error opening file");
//         return 1;
//     }

//     printf("Enter the number of students: ");
//     if (scanf("%d", &size) != 1 || size <= 0) {
//         printf("Invalid number.\n");
//         fclose(file);
//         return 1;
//     }

//     // Write phase
//     for (i = 0; i < size; i++) {
//         printf("\nEnter roll no.: ");
//         scanf("%d", &roll_no);

//         printf("Enter name (no spaces): ");
//         scanf("%29s", name);

//         printf("Enter score: ");
//         scanf("%f", &score);

//         fprintf(file, "roll: %d , name: %s , score: %.2f\n",
//                 roll_no, name, score);
//     }

//     // Reset file pointer to beginning for reading
//     rewind(file);

//     printf("\n=====================\n");

//     // Read phase
//     for (i = 0; i < size; i++) {
//         if (fscanf(file,
//                    "roll: %d , name: %29s , score: %f\n",
//                    &roll_no, name, &score) == 3)
//         {
//             printf("Your roll no.: %d\n", roll_no);
//             printf("Your name: %s\n", name);
//             printf("Your score: %.2f\n\n", score);
//         } else {
//             printf("Error reading record %d\n", i+1);
//         }
//     }

//     fclose(file);
//     return 0;
// }



#include<stdio.h>
int main()
{
    FILE *file;
    file=fopen("example.txt","w+");
    // file=fopen("example.txt","r");
    if(file==NULL)
    {
        printf("\nError opening file");
        return 1;
    }
    char name[30];
    int roll_no,size,i;
    float score;
    fprintf(file,"\nRoll_no.:%d,Name:%s,Score:%d",1,"Sristi",56.5);
    fprintf(file,"\nRoll_no.:%d,Name:%s,Score:%d",2,"Rai",34.7);
    fprintf(file,"\nRoll_no.:%d,Name:%s,Score:%d",3,"Ankita",76.4);
    fprintf(file,"\nRoll_no.:%d,Name:%s,Score:%d",4,"Ruma",76.89);
    fprintf(file,"\nRoll_no.:%d,Name:%s,Score:%d",5,"Priyanka",56.3);
    for(i=0;i<5;i++)
    {
    if(fscanf(file,"\nRoll No.:%d,Name:%s","Score:%f",&roll_no,name,&score)==3)
    {
         printf("\nRoll No.:%d,Name:%s,Score:%.2f",roll_no,name,score);
    }
    else
    {
        printf("\nError reading from file.");
        fclose(file);
        return 1;
    }
        // fscanf(file,"Roll No.:%d,Name:%s,Score:%.2f",roll_no,name,score);
        //
    fclose(file);


    }
    return 0;
}
