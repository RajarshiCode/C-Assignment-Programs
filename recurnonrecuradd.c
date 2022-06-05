#include<stdio.h>
int addnum(int n)
{
    if(n!=0)
        return n+addnum(n-1);
    else
        return n;
}
int main()
{
    int n=5,i,sum=0;
    printf("Recursive addtion of natural numbers = %d",addnum(n));
    for(i=1;i<=5;i++)
        sum+=i;
    printf("\nnon Recursive addition of natural numbers = %d",sum);
    
    return 0;
}