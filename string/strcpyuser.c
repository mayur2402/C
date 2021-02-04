#include<stdio.h>
#include<string.h>
char* strcpyusr(char *name1,char *copy1);
int main()
{
	char name[20],copy[20];
	printf("\nEnter name\t:");
	scanf("%s",&name);
	printf("%s",name);
	strcpyusr(name,copy);
	return 0;
}
char* strcpyusr(char* name1,char* copy1)
{
	int i=0,j=0;
	while(name1[i]!='\0')
	{
		i++;
		copy1[i]=name1[i];
	}
	printf("\ncopied\t%s",copy1);
}
