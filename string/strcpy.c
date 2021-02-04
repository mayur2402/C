#include<stdio.h>
#include<string.h>
int main()
{
	char name[20],copy[20];
	printf("\nEnter name\t:");
	scanf("%s",&name);
	printf("%s",name);
	strcpy(copy,name);
	printf("\nCopied name is %s\n",copy);
	return 0;
}
