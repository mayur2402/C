#include<stdio.h>
#include<stdlib.h>
void generate(int a[20],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		a[i]=rand()%100;
	}
}
void display(int a[20],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
int binary(int a[20],int n,int key)
{
	int mid;
	int top=0;
	int bottom=n-1;
	while(top<=bottom)
	{
	
		mid=(top+bottom)/2;
		if(a[mid]==key)
		return mid;
		else
		if(key<a[mid])
		bottom=mid-1;
		else
		top=mid+1;
	}
	return -1;
}
int main()
{
	int a[20],n,key,pos;
	printf("\nEnter the how many numbers\t:");
	scanf("%d",&n);
	generate(a,n);
	printf("\nNumbers are\t:");
	display(a,n);
	
	printf("\nEnter the number to be search\t");
	scanf("%d",&key);
	pos=binary(a,n,key);
	if(pos==-1)
	{
		printf("\nnot found ");
	}
	else
	{
		printf("\nNumber found at %d",pos);
	}
}
