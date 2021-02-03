#include<stdio.h>
#include<math.h>
int n=0,i=0;
float sum=0,sum1=0,sum2=0,num[20],mean,var,sd;
int main()
{
	printf("\nHow many numbers");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter %d element:",i+1);
		scanf("%f",&num[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+num[i];
	}
	mean=sum/n;
	printf("\nMean is %f",mean);
	for(i=0;i<n;i++)
	{
		sum1=sum1+(num[i]-mean)*(num[i]-mean);
	}
	var=sum1/n;
	printf("\nVariance is %f",var);
	sd=sqrt(var);
	printf("\nStandard Deviation is %f",sd);
	return 0;
}
