/*
Syntax 

struct StructureName{
   data_type member1;
   data_type member2;
   }


 struct StructureName s1, s2, s3; // Declare variables of type StructureName
 struct StructureName arrayName[size]; // Declare an array of structures
*/

// problem statement: Store details of 3 students using structure and display their details
#include<stdio.h>
#include<string.h>

// Define a structure named Student
struct Student {
    int roll_no;
    char name[50];
    float marks;
};

int main(){
    struct Student studentArray[3]; // Declare an array of 3 Student structures
    
    // Student 1 details
    studentArray[0].roll_no = 1;
    strcpy(studentArray[0].name, "Alice");
    studentArray[0].marks = 85.5;

    // Student 2 details
    studentArray[1].roll_no = 2;
    strcpy(studentArray[1].name, "Bob");
    studentArray[1].marks = 90.0;

    // Student 3 details
    studentArray[2].roll_no = 3;
    strcpy(studentArray[2].name, "Charlie");
    studentArray[2].marks = 78.0;

    // Display details of all students
    for(int i = 0; i < 3; i++) {
        printf("Student %d`s Roll No: %d\n", i+1, studentArray[i].roll_no);
        printf("Student Name: %s\n", studentArray[i].name);
        printf("Student Marks: %.2f\n", studentArray[i].marks);
        printf("-------------------------\n");
    }
}