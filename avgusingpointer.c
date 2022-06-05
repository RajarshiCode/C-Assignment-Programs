//2. Write a program to calculate average of numbers between m and n using pointer.
#include<stdio.h>
int main()
{
    double m,n;
    double *ptr1=&m,*ptr2=&n;
    printf("Enter the values of the two numbers = \n");
    printf("first number = ");
    scanf("%lf",&m);
    printf("seocond number = ");
    scanf("%lf",&n);    
    printf("Averege of two numbers m and n = %lf",((*ptr1+*ptr2)/2));    
    return 0;
}    