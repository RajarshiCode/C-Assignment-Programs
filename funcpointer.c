#include <stdio.h>
int addTwoNumbers(int x, int y)
{
    return x + y;
}
int main()
{
    int a, b, sum;   
    int (*ptr_sum)(int, int);  
    ptr_sum = addTwoNumbers;
    a = 10;
    b = 20;    
    sum = (*ptr_sum)(a, b);
    printf("Sum is: %d\n", sum);
    return 0;
}
