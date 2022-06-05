//1. Write a C program to swap two values using pointers.
#include<stdio.h>
int main()
{
    int a,b,temp;
    int *ptr1,*ptr2;
    printf("Enter the values of the two numbers = \n");
    printf("first number = ");
    scanf("%d",&a);
    printf("seocond number = ");
    scanf("%d",&b);
    printf("\n**********************before swapping***********************\n");
    printf("first number = %d",a);
    printf("\nseocond number = %d",b);    
    printf("\n**********************after swapping***********************\n");
    ptr1=&a;
    ptr2=&b;
    // temp=*ptr1;
    // *ptr1=*ptr2;
    // *ptr2=temp;
    *ptr1=*ptr1 + *ptr2;
    *ptr2=*ptr1 - *ptr2;
    *ptr1=*ptr1-*ptr2;    
    printf("first number = %d",a);
    printf("\nseocond number = %d",b);    
    return 0;
}