#include<stdio.h>
void main()
{
	char ch;
	printf("Enter the character");
	scanf("%c",&ch);
	if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='u')
	{
	  printf("chracter is vowel");
	}
	else
	{
	  printf("character is consonants");
	}
}
