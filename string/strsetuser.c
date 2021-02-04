#include<stdio.h>
#include<string.h>
char *strsetusr(char *,char);
int main()
{
	char name[20];
	char ch='c';
	puts("Enter name");
	gets(name);
	printf("Before strset");
	puts(name);
	strsetusr(name,ch);
	printf("After strset");
	puts(name);
}
char *strsetusr(char *n,char c)
{
	int i=0;
	while(n[i]!='\0')
	{
		n[i]=c;
		i++;
	}
	return n;
}
