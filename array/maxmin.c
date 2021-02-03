#include<stdio.h>
int num[20],max=0,min=0,i=0,n=0;
int main()
{
	printf("\nHow many elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter %d element",i+1);
		scanf("%d",&num[i]);
	}
	printf("\nNumbers are\n");
	for(i=0;i<n;i++)
	{
		printf("\n%d",num[i]);
	}
	max=min=num[0];
	for(i=0;i<n;i++)
	{
		if(num[i]>max)
		{
			max=num[i];
		}
	}
	printf("\nMax is %d",max);
	for(i=0;i<n;i++)
	{
		if(num[i]<min)
		{
			min=num[i];
		}
	}
	printf("\nMin is %d",min);
	return 0;
}
