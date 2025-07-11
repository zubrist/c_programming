#include<stdio.h>
#include<string.h>

// Define a structure named Student
struct Student {
    int roll_no;
    char name[50];
    float marks;
};



int main(){
    // int  number = 10; 
    // float   marks = 102.5; 
    // char    grade = 'A';

   struct Student s1 ; // Declare a variable of type Student
   struct Student s2 ;
   // struct Student s1 , s2 ;

// Assign values to the members of s1
    s1.roll_no = 01;
    s1.marks = 95.5;
    strcpy(s1.name, "John Doe"); // s1.name = "John Doe";



    // Didplay the values of s1
    printf("Student Roll No: %d\n", s1.roll_no);   // String  name = 'AMIT' ;   // name[A|M|I|T]
    printf("Student Name: %s\n", s1.name);
    printf("Student Marks: %.2f\n", s1.marks);

    return 0;
}