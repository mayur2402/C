#include<stdio.h>
#include <stdlib.h>
void main()
{
	int i,n,m[50],s;
	printf("Enter how many numbers");
	scanf("%d",&n);
	printf("Enter the numbers");
	for(i=0;i<n;i++)
		scanf("%d",&m[i]);
	printf("Enter the number to be search");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(m[i]==s)
		{
			printf("%d is found at %d\n",s,i);
			exit(0);
		}
	}
	printf("not found\n");	
}
