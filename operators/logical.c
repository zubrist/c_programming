// Logical Operator . 
// helps us to control the flow of the program .

// they retun true or false .

// Type of Logical Operator :

/*
symbol    |     Name            | Description
--------------------------------------------------
&&        |  Logical AND        | returns true if both the operands are true
||        |  Logical OR         | returns true if any of the operands is true
!         |  Logical NOT        | returns true if the operand is false

*/
// Logocal AND Operator :
/*

x   |   y    | x && y
---------------------
T   |   T    |   T
T   |   F    |   F
F   |   T    |   F
F   |   F    |   F


*/

// Logical OR Operator :
/*

x   |   y    | x || y
---------------------
T   |   T    |   T
T   |   F    |   T
F   |   T    |   T
F   |   F    |   F


*/

// logical NOT Operator :
/*

x   |   !x
--------------
T   |   F
F   |   T


*/

#include<stdio.h>

int main()
{
    
    int a = 10 , b = 20 ; // variable dec and init.
    if(a > 0 && b > 0){ //( true && false = FALSE )  // if (condition){ -> jodi condition true hoy tahole}
        printf("Both are positive . \n"); // printing in the console
    }
    if(a>0 && b<0){ //( true && true = TRUE )
        printf("a is positive and b is negative . \n");
    }

    if (a<0 && b<0){ 
        printf("Both are negative . \n");
    }
    if (a<0 && b>0){ // (true && true = TRUE )
        printf("a is negative and b is positive . \n");
    }
    // --- AND ends here ----


    if(a>0 || b>0){ // (false || true = TRUE)
        printf("At least one of them is positive . \n");
    }
    if (a<0 || b<0){ // (true || false = TRUE)
        printf("At least one of them is negative . \n");
    }
    

    //  --- OR ends here ----

    if( !(a>0)){ // (  !(true)) = (false)
        printf("a is negative . \n");
    }
    else{
        printf("a is positive . \n");  
    }

    return 0;
}

/*
take 2 numbers .
and check both numbers are even or odd

2 , 6 
6 % 2 = 0 -> 6/2 , remainder = 0
*/