#include<stdio.h>
int fibo(int i)
{ 
	if(i==0)
	    return 0; 
	else if(i==1)
	    return 1; 
	else
	    return (fibo(i-1)+fibo(i-2));
} 
void main()
{ 
	int n, i; 
	printf("Enter the number of element you want in series :\n"); 
	scanf("%d",&n); 
	printf("fibonacci series is : \n");
	for(i=0;i<n;i++)
		printf("%d ",fibo(i));
}
 