#include<stdio.h>
int facto(int n)
{
    if(n!=0)
        return n*facto(n-1);
    else
        return 1;
}
int main()
{
    int n=5,i,fact=1;
    printf("Recursive Factorial = %d",facto(n));
    for(i=1;i<=5;i++)
        fact*=i;
    printf("\nNon-Recursive Factorial = %d",fact);
    
    return 0;
}
