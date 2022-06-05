//3. Write a program in C to find the maximum number between two numbers using a pointer.
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
    printf("GOAT between two = %lf",((*ptr1>*ptr2)?*ptr1:*ptr2));    
    return 0;
}    