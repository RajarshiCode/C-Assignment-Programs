#include <stdio.h>

int main()
{
    int n=7,max,max2,i;
    int ar[]={1,5,9,7,3,6,4};
    max=ar[0];
    for(i=0;i<n;i++)
    {
        if(ar[i]>max)
        {   max2=max;
            max=ar[i];
        }
        else if(ar[i] > max2 && ar[i] < max)
            max2 = ar[i];
    }
    printf("\nSecond Largst = %d",max2);
    printf("\nLargst = %d",max);
    return 0;
}