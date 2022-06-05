#include<stdio.h>
#include<math.h>
int digicount(int n)
{
    int c=0;    
    while(n!=0)
    {
        n=n/10;
        ++c;        
    }
    return c;
}
int armstrong(int n)
{
    int r,m;
    float sum=0.0;
    m=n;
    while(m!=0)
    {
        r=m%10;
        sum+=pow(r,digicount(n));
        m=m/10;
    }
    if(n==(int)sum)
        return 1;
    else
        return 0;    
}
void main()
{
   printf("\nEnter the Number = ");
   int num;
   scanf("%d",&num);
   if(armstrong(num)==1)
    printf("The number %d is an Armstrong Number",num);
   else
    printf("The number %d is Not an Armstrong Number",num);          
}