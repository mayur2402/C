#include<stdio.h>
#include<string.h>
int strstrusr(char *,char *);
int main()
{
	int ptr=0;
	char str1[20]={'\0'};
	char str2[20]={'\0'};
	printf("\nEnter First String\t:");
	scanf("%s",str1);
	printf("\nEnter second String\t:");
	scanf("%s",str2);
	printf("\nFirst String is %s",str1);
	printf("\nsecond String is %s",str2);
	ptr=strstrusr(str1,str2);
	if(ptr==0)
	{
		printf("\n%s is not in %s\n",str2,str1);
	}
	else
	{
		printf("\n%s is found in %s at %d\n",str2,str1,ptr);
	}
	return 0;
}
int strstrusr(char *st1,char * st2)
{
	int i=0,j=0,k=0;
	while(st1[i]!='\0')
	{
		k=i;
		while(st2[j]='\0')
		{
			if(st1[k]!=st2[j])
			{
				break;
			}
			k++;
			j++;
		}
		printf("\n%d",i);
		if(st2[j]=='\0')
		{
			return i;
			printf("\n%d",i);
		}
		else
		{
			i++;
			j=0;
		}
	}
	return 0;
}
