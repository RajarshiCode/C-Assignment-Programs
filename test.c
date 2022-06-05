/*#include <stdio.h>
int main()
{
    int n = 5,i,j,temp,*ptr;
    int ar[] = { 0, 23, 14, 12, 9 };
    *ptr=&ar;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(*(ptr+j)>*(ptr+j+1))
            {
                temp=*(ptr+j+1);
                *(ptr+j+1)=*(ptr+j);
                *(ptr+j)=temp;
            }
        }
    }
    for (i = 0; i < n; i++)
        printf("%d ",*(ptr+i));

    return 0;
}*/
#include <stdio.h>

struct Point
{
    int x;
};

int main()
{
    struct Point ar[10];

    // Accessing members of point p1
    ar[10].x;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&ar[i].x);
    }
    for(int i=0;i<10;i++)
    {
        printf("%d\t",ar[i].x);
    }

    return 0;
}
//https://www.geeksforgeeks.org/structures-c/#:~:text=A%20structure%20is%20a%20key,used%20to%20create%20a%20structure.
