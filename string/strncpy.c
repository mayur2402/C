#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20];
	char str2[20];
	int n;
	printf("\nEnter String\t:");
	scanf("%s",str1);
	printf("\nEntered string is %s",str1);
	printf("\nEnter number of words do you want to copy(<20)\t");
	scanf("%d",&n);
	strncpy(str2,str1,n);
	str2[n]='\0';
	printf("\nCopied string is %s:",str2);
	return 0;
}
