/*
if(codi1){
    if(codi2){

        if (condi3){
            
        }
        else {
            
        }
    }
    else {
        
    }


}
else {

}

*/

// checking eligibilty for scholarship
#include <stdio.h>
int main()
{

    int marks;
    int pass = 60;
    int scholarship = 90 ;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= pass){ // false
        if (marks >= scholarship){
            printf("You are eligible for scholarship\n");
            if(marks>= 95)
            {
                printf("you are class monitor");
            }
            else{
                printf("you are passed but not class monitor\n");
            }
        }
        else {
            printf("you are passed but not eligible for scholarship\n");
        }
    }
    else{
        printf("you failed the exam\n");
    }

    return 0;
}