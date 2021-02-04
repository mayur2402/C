#include<stdio.h>
#include<string.h>
char *strrevusr(char *);
int main()
{
	char str[20];
	printf("\nEnter String\t:");
	scanf("%s",str);
	strrevusr(str);
	printf("\nReverse of string\n");
	printf("%s",str);
	return 0;
}
char *strrevusr(char *s)
{
	int i=0,j=0;
	char temp;
	while(s[i]!='\0')
	{
		i++;
	}
	i--;
	while(i>j)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
		j++;
		i--;
	}
	return s;
	
}
