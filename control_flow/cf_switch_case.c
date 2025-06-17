/*
switch(expression){

    case constant1:
        statement(s);
        break;

    case constant2:
        statement(s);
        break;

    ...
    default:
        statement(s);
        
}

*/

/*
day == 7
if(day=='monday')
    printf("Today is Monday");
if(day=='tuesday')
    print("its Tuesda") 
    
.
.
.
.

else
    print("sunday")

*/



#include<stdio.h>
int main()
{
    int day; // storing day
    printf("Enter the day: (1-7 || 1== monday) ");
    scanf("%d",&day);

    switch(day){
        case 1: 
            printf("Today is Monday");
            break; 
        case 2: 
            printf("Today is Tuesday");
            break;
        
        case 3:
            printf("Today is Wednesday");   
            break;
        case 4:
            printf("Today is Thursday");
            break;
        case 5:
            printf("Today is Friday");
            break;
        case 6:
            printf("Today is Saturday");
            break;
        default:
            printf("Today is Sunday");
            
        
    }
    // break

    return 0;

}


/*
Homework:

1. take a char from terminal and print if vowel or consonant using switch case

switch (letter){
      case 'a': case 'A': case 'e' : case 'E': case 'i': case 'I': case 'o': case 'O': case 'u': case 'U':
      print ("vowel");
      break;
}

2. check students grade using switch case
*/