#include <stdio.h>
int runtimeadd(int a, int b) {
    return a+b;    
}
int runtimesub(int a, int b) {
    return a-b;    
}
int main()
{
    printf("Addition of two Numbers = %d",runtimeadd(3,5));
    printf("\nSubstraction of two Numbers = %d",runtimesub(3,5));
    return 0;
}