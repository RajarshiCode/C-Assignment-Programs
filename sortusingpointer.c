/*#include <stdio.h>

int main()
{
	int n=5,temp,i,j;
	int a[5]={6,1,9,10,100};
	for(i = 0; i < n; i++)
	{
	  for(j = i+1; j < n; j++)
		{
			if(a[i] < a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for(int i=0;i<n;i++)
		printf("%d\t",a[i]);

	return 0;
}
**********************************************************************
#include<stdio.h>

void show(int x[5]);

int main()
{
	int x[5];

	int i,j,t;
	for (i=0;i<5;i++)
	{
		printf ("ENTER ELEMENT : ");
		scanf ("%d",&x[i]);
	}

	printf("BEFORE SORTING  ");
	show(x);

	for (i=1;i<5;i++)
	{
		for(j=0;j<5-i;j++)
		{
			if ( x[j+1] > x[j] )
			{
				t = x[j];
				x[j] = x[j+1];
				x[j+1] = t;
			}
		}
	}

	printf("AFTER SORTING  ");
	show(x);

	return 0;
}

void show(int x[5])
{
	int i;
	for (i=0;i<=4;i++)
		printf ("%d ",x[i]);
	printf("\n");
}

https://www.javatpoint.com/bubble-sort



https://www.youtube.com/watch?v=bBTVOA5rc_I

*/
#include <stdio.h>
void sort(int n, int* ptr)
{
	int i, j, temp;	
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
		printf("\nvalue at ar[%d] = %d ", i, *(ptr + i));
}
int main()
{
	int n, i, j, temp;
	int *ptr;
	printf("Enter the number of pockets of the array = ");
	scanf("%d", &n);
	int ar[n];
	printf("\n::::::::::::::::::::Enter the number in the array:::::::::::::::::");
	for (i = 0; i < n; i++)
	{
		printf("\nvalue at ar[%d] = ", i);
		scanf("%d", &ar[i]);
	}	
	printf("\nSorting the array using pointer");
	sort(n,ar);	
	return 0;
}