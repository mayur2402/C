#include<stdio.h>
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
int linear(int a[20],int n,int key)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			return i;
		}
		/*else
		{
			return -1;
		}*/
	}return -1;
}
int main()
{
	int key,pos,n,a[20];
	printf("\nHow many numbers\t:");
	scanf("%d",&n);
	generate(a,n);
	printf("\nNumbers are\t");
	display(a,n);
	
	printf("\nEnter the number to be search\t:");	
	scanf("%d",&key);
	pos=linear(a,n,key);
	if(pos==-1)
	{
		printf("\nNumber not found\n");
	}
	else
	{
		printf("\nNumber found at %d",pos);
	}
}
