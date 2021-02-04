#include<stdio.h>
#include<string.h>
int mystrlen(char* str1);
int main()
{
	char str[20]={'\0'};
	puts("\nEnter String");
	for(int i=0;i<20;i++)
	scanf("%s",&str[i]);
	puts("\nEnter String is");
	puts(str);
	puts("Lenght of String is");
	mystrlen(str);
	return 0;
}
int mystrlen(char *str1)
{
	int count=0;
	while(*str1!='\0')
	{
		count++;
	}
	printf("%d",count);
}
