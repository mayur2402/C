#include<stdio.h>
int main()
{
	int arr[20];
	int n=0,i=0,count=0,j=0,k=0;
	printf("\nHow many elements in array\t:");
	scanf("%d",&n);
	printf("\nEnter element in array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}		
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<i-1;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
			}
		}
		for(k=i+1;k<n;k++)
		{
			if(arr[i]==arr[k])
			{
				count++;
			}
		}
		if(count==0)
		{
			printf("%d",arr[i]);
		}
	}
	return 0;
}
