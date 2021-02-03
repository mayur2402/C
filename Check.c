#include<stdio.h>
#include<ctype.h>
void main()
{
	char ch='\0';
	printf("\npress any value\t:");
	ch=getchar();
	if(isalpha(ch))
	{
		printf("\nCharacter\n");
		if(isupper(ch))
		{
			printf("\nUppercase\n");
			putchar(tolower(ch));
		}
		else if(islower(ch))
		{
			printf("\nLowercase\n");
			putchar(toupper(ch));
		}
	}
	else if(isdigit(ch))
	{
		printf("\nDigit\n");
	}
	else
	{
		printf("\nSymbol\n");
	}
}
