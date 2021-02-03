#include<stdio.h>
#include<stdlib.h>

int main()
{
	int size=0,i=0,sum=0;
	int *arr=NULL;

	printf("Enter number of elements\t:");
	scanf("%d",&size);

	arr=(int *)malloc(sizeof(int)*size);

	if(arr==NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}

	printf("\nEnter values\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("\nElements are\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}

	for(i=0;i<size;i++)
	{
		sum=sum+arr[i];
	}

	printf("\nSum of array element is\t:%d\n",sum);

	free(arr);
	return 0;
}

