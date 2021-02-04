#include<stdio.h>
#include<string.h>
int main()
{
	char str[20]={'\0'};
	puts("\nEnter String");
	gets(str);
	puts("\nEnter String is");
	puts(str);
	puts("Lenght of String is");
	printf("%d",strlen(str));
	return 0;
}
