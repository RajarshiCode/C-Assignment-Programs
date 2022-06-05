#include <stdio.h>
#include <string.h>
void main()
{
    char str[20];
    int i, temp = 0, len;
    printf("\nEnter the String to be Reversed = ");
    gets(str);
    printf("\nThe String Before it has been reversed = ");
    puts(str);
    printf("\nThe String After it has been reversed = ");
    puts(strrev(str));
    len = strlen(str);
    for (i = 0; i < len; i++)
    {
        if (str[i] != str[len - i - 1])//we are comparing first character with last character and second character with second last character using for loop and so on until we reach at middle.
        {
            temp = 1;
            break;
        }
    }
    if (temp == 0)    
        printf("\nString is a palindrome");    
    else    
        printf("\nString is not a palindrome");
    
}