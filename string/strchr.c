#include<stdio.h>
#include<string.h>
int main()
{
	char str[20],ch;
	char *com;
	printf("\nEnter String\t");
	gets(str);
	printf("String is \t%s",str);
	printf("\nEnter character to search\t:");
	scanf("%c",&ch);
	com=strchr(str,ch);
	if(com==NULL)
	{
		printf("\nNot found");
	}
	else
	{
		printf("\nfound at %d",com-str);
	}
	return 0;
}
