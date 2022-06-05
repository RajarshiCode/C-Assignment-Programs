#include <stdio.h>

// Function to sort the numbers using pointers
void sort(int n, int* ptr)
{
	int i, j, temp;

	// Sort the numbers using pointers
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

	// print the numbers
	for (i = 0; i < n; i++)
		printf("\nvalue at ar[%d] = %d ", i, *(ptr + i));
}

// Driver code
int main()
{
	int n = 5;
	int arr[] = { 0, 23, 14, 12, 9 };

	sort(n, arr);

	return 0;
}
