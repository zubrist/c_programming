/*

for ( ; ; ){ // outer loop

    for (; ; ){} // inner loop
}
*/



/*
inner struct
-----------------
 struct InnerStruct{
    datatype member1;
    datatype member2;   
    
    }

 struct OuterStruct{
        struct  InnerStruct nestedMember; // Declare a member of type InnerStruct
        datatype member1;
        datatype member2;
    }
    

*/


/*
dob = "01/01/2000"

struct Date{
    int day;
    int month;
    int year;
};


mail = xyz @gmail.com

struct mail{
    char name[100],
    chat domain[100];
    };

struct Fullname{
    char firstName[50];
    char lastName[50];
};


stdunt {
    name{
     firname,
     lastname
     },
    age, 
    dob{
        day,
        month,
        year
     },
     mail{
        name,
        domain
     },
     address{
        street,
        city,
        state,
        country
     },
     bloodGroup,
     phoneNumber,   
*/


#include <stdio.h>
#include <string.h>

struct Fullname {
    char firstName[50];
    char lastName[50];
};

struct Date {
    int day;
    int month;
    int year;
};
struct Mail {
    // zubrist@gmail.com
    char username[100];
    char domain[100];
};

struct Student {
    int age;
    struct Fullname name;
    struct Date DOB;
    struct Mail mail;
}; // nested structure


int main(){

    struct Student Reja;// declare a variable of type Student

    Reja.age = 25;
    strcpy(Reja.name.firstName, "Ahmed");
    strcpy(Reja.name.lastName, "Reja");
    Reja.DOB.day = 1;
    Reja.DOB.month = 1;
    Reja.DOB.year = 2000;

    printf("enter your username: ");
    scanf("%s", Reja.mail.username); // using firstName for username
    printf("enter your domain:(e.g - @example.com) ");
    scanf("%s", Reja.mail.domain); // using lastName for domain






    printf("Student Name: %s %s\n", Reja.name.firstName, Reja.name.lastName);
    printf("Student Age: %d\n", Reja.age);
    printf("Student DOB: %d/%d/%d\n", Reja.DOB.day, Reja.DOB.month, Reja.DOB.year);
    // printf("Student Username: %s\n", Reja.mail.username);
    // printf("Student Domain: %s\n", Reja.mail.domain);
    printf("Student Email: %s%s\n", Reja.mail.username, Reja.mail.domain);


    return 0;
}