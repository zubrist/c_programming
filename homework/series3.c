#include<stdio.h>
long denom(int n)
{
    int i,d;
    for(i=0;i<=n;i++)
    {
        d/=i; // 0/1
    }
    return d;
}
int main()
{
    int sign=1,numer=1,x,i;
    double term=0.0,a;
    printf("\nEnter the number: ");
    scanf("%d",&x);
    for(i=1;i<=x;i++) // 1 
    {
        if(i%2==0)
        term+=(-1)*(numer/denom(i));
        else
        term+=numer/denom(i);  1/ 
        a+=term;
    }
    sign-=1;
    printf("\nThe sum of the series is:%.2lf",a);
    return 0;
}