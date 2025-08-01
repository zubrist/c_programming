/*

sum = 1/1 - 1/2 + 1/3 - 1/4 + ... + (-1)^(n+1)/n

n= 5
sum = 1/1 -1/2 + 1/3 - 1/4 + 1/5 
sum = 1 - 0.5 + 0.3333 - 0.25 + 0.2 = 0.7833
*/

// #include <stdio.h>

// int main(){

//     int last_term ; // this is the last term i.e n
//     double sum = 0.0;

//     printf("Enter the last term of the series: ");
//     scanf("%d", &last_term);

//     for(int i = 1 ; i <=last_term ; i++){
//         double term = 1.0/i;

//         if( i%2 ==0){
//             term = -term;
//         }
//         sum += term;

//     }
//     printf("The sum of the series is: %.4lf\n", sum);

//     return 0;
// }

#include <stdio.h>

int main(){

    int n ;
    float sum = 0.0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            sum -= (1.0 / i); // subtracting for even terms
        } else {
            sum += (1.0 / i); // adding for odd terms
        }
    }
    printf("The sum of the series is: %.4f\n", sum); // 0.7833 for n=5

    return 0;

}
