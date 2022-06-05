#include<stdio.h>
#include<string.h>

int main()
{
    int i=0,l=0;
    char str[50],*ptr;    
    gets(str);
    ptr=str;
    // for(i=0;str[i]!='\0';i++) 
    //above using normal method
    for(i=0;*(ptr+i)!='\0';i++)//using pointer    
        l++;      
    puts(str);
    printf("\nLength of the above string is  = %d",l);    
    return 0;
}