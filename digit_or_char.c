#include<stdio.h>
void main()
{
	char ch;
	printf("Enter the charactar");
	scanf("%c",&ch);
	
	if(ch>='A'&&ch<='Z')
	{
		printf("\n The given Character %c is alphabate and it is in uppercase",ch);
	}
	else if(ch>='a'&&ch<='z')
	{
		printf("\nThe given character %c is alphabate and it is in lowercase",ch);
	}
	else if(ch>='0'&&ch<='9')
	{
		printf("\nThe given character %c is digit",ch);
	}
	else
	{
		printf("\nThe given character %c is symbols",ch);
	}
} 
