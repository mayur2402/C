#include<stdio.h>
#include<string.h>
int main()
{
	char *ptr=NULL;
	char str1[20]={'\0'};
	char str2[20]={'\0'};
	printf("\nEnter First String\t:");
	scanf("%s",str1);
	printf("\nEnter second String\t:");
	scanf("%s",str2);
	printf("\nFirst String is %s",str1);
	printf("\nsecond String is %s",str2);
	ptr=strstr(str1,str2);
	if(ptr==NULL)
	{
		printf("\n%s is not in %s\n",str2,str1);
	}
	else
	{
		printf("\n%s is found in %s at %ld\n",str2,str1,ptr-str1);
	}
	return 0;
}
