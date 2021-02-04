#include<stdio.h>
#include<string.h>
void main()
{
	char s1[30],s2[30],up[30],lw[30],re[30];
	int choice,l;
	printf("Enter the string");
	gets(s1);
	do
	{
		printf("\n1:length of string");
		printf("\n2:copy the string");
		printf("\n3:convert the string to uppercase");
		printf("\n4:convert the string to lowercase");
		printf("\n5:reverse the string");
		printf("\n6:compare the string");
		printf("\n7:exit");
		printf("\nEnter your choice");
		scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
		printf("Length of string is %d",strlen(s1));
		break;
	
		case 2:
		printf("copied string is %s",strcpy(s2,s1));
		break;

		case 3:
		printf("string in uppercase is %s",strupr(s1));
		break;

		case 4:
		printf("string in lowercase is %s",strlwr(s1));
		break;

		case 5:
		printf("reverese string is %s",strrev(s1));
		break;

	}
}while(choice!=5);
}
