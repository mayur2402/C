#include<stdio.h>
#include<string.h>
char *strchrusr(char *,char);
int main()
{
	char str[20],ch;
	char *com;
	printf("\nEnter String\t");
	gets(str);
	printf("String is \t%s",str);
	printf("\nEnter character to search\t:");
	scanf("%c",&ch);
	com=strchrusr(str,ch);
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
char *strchrusr(char *s,char c)
{
	int i=0;
	while(s[i]!='\0')
	{
		if(s[i]==c)
		{
			printf("%d",i);
			return ((char *)s+i);
		}
	}
	return NULL;
}
