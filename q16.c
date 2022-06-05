#include <stdio.h>
int main()
{
    char i='A',j;
    int n;
    printf("\nEnter the number of rows you want = ");
    scanf("%d", &n);
    for(i=((char)65+n);i>='A';i--)
    {
       for(j='A';j<=i;j++)
        printf("%c\t",j);
       printf("\n");       
    }
    for(i=((char)65+n);i>='A';i--)
    {
       for(j='A';j<=i;j++)
        printf("%c\t",j);
       printf("\n");       
    }
    return 0;
}