#include<stdio.h>
void main()
{
	int i,n,m[50],s,count=0;
	printf("Enter how many numbers");
	scanf("%d",&n);
	printf("Enter the numbers");
	for(i=0;i<n;i++)
	scanf("%d",&m[i]);
	printf("Enter the number to be count");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
	if(m[i]==s)
	count++;
	}
	printf("%d occurs %d times",s,count);
}

