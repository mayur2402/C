#include<stdio.h>
void main()
{
	int i,n,num[50];
	printf("How many element");
	scanf("%d",&n);
	printf("Enter the element");
	for(i=0;i<n;i++)
	scanf("%d",&num[i]);
	printf("Even numbers are\n");
	for(i=0;i<n;i++)
	{	
	if(num[i]%2==0)
	printf("%d\n",num[i]);
	}
} 
