/*
check students grade using switch case

input()-> 79

switch(input){

    case 1:
        FAILED 
    case 2
       FAILED

    case 40
        FAILED

    case 41 
          grade D 
          
    
    case 50 
        grade c       

}
90-100 => A
80-89 => B
70-79 => C

marks = 70 =C
marks = 71 = C
marks = 72 = C
marks = 79 = C

70-79  /10   = 7  

80-89 /10  = 8 


switch( marks /10 )

 case 7 : grade c 
 case 8 : grade b
 case 9 : case 10 : grade a

*/

//check students grade using switch case
#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,total,per;
	char grd;
	printf("\nEnter the marks for 5 subject:\n");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	total=m1+m2+m3+m4+m5;
	per=(total*100)/500; // 70, 71 , 72 ... 79 => C ( devide by 10 = 7)
	// printf("The percentage of %d & %d & %d & %d & %d:%d",m1,m2,m3,m4,m5,per);
	// printf("\nEnter your choice: ");
	// scanf("%c",&grd);
	switch(per/10)
	{
		case 7:
			printf("grade C");
			break;
		case 8:
			printf("grade B");
			break;
		case 9:
			printf("B+");
			break;
    
	}
	return 0;
}