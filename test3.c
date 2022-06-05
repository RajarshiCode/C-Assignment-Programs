#include<stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void main()
{
    int a=5,b=3;
    printf("\nA=%d and B=%d",a,b);
    swap(&a,&b);
    printf("\nA=%d and B=%d",a,b);
}
