// single line comment
/* 
multi line comment
*/

/*
variables : a container to store data
data types : int, float, char, 

data types : the datatype of an *object* in memory determinees the set 
of values it can have and what operations can be performed on it.

declaration : datatype variable_name;
        ex : int  *age* ;    range of int : -2147483648 to 2147483647 - > 32bit memory      [10] 32  
        operation : Interger Number -> add , sub , mul , div , mod, avg ...

        ex:  char *name* ;   range of char : 0 to 255 - > 8bit memory 
             chat *surname* 
        operation : character -> add  : name + surname = name surname

        int sum = int(age) + char(name) = error  , 1000 , 01000, 001000, 

initialization: age = 10 ;  // 10 -> (000000000..28)1010         
*/
#include <stdio.h>

int age; // global variable
int main()
{
    int age = 10; // local variable
    char name = 'A';
    char surname = 'B';
    float height = 5.5;

    printf("age : %d\n", age);
    printf("name : %c\n", name);
    printf("surname : %c\n", surname);
}

printf("age : %d\n", age); // Error -> variable age is not declared in this scope
/*
scope of a variable : the region of the program where the variable is accessible
*/

/*
life time of a variable : the duration for which the variable is stored in memory.

*/

/*
Type conversion/casting: changing one type of data to another type of data.

why ? it happens when different datatypes need to work together in a opration .


int a = 10;
float b = 20.5;
float result = a + b; // 30.5 ; a in converted to float
// implicit type conversion
--> 10 -> 10.0    

implicit type conversion : compiler automatically converts one type to another type.
int --> float
float --> double
char --> int
char --> float

char c = 'A';
int a = c; // 65   ASCII value of 'A' is 65 , 'B' --> 66  , a --> 97 b--> 98 , '0' --> 48
float a = c; // 65.0
int b = 10;
int result = b + c // 75
char c = a ; 'A'
*/

/*
explicit type conversion : programmer manually converts one type to another type.

float num = 10.00000001;
int a = (int)num; // 10  // syntax : (type)variable .


int a = 10;
float b = (float)a; // 10.0

*/