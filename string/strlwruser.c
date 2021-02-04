#include<stdio.h>
#include<string.h>
char *strlwrusr(char *);
int main()
{
	char str[20];
	printf("\nEnter String\t");
	scanf("%s",str);
	printf("\nBefore Converting lowercase\t%s",str);
	strlwrusr(str);
	printf("\nAfter Converting lowercase\t%s",str);
	return 0;
}
char *strlwrusr(char *s)
{
	int i=0,j=0;
	while(s[i]!='\0')
	{
		if(s[i]>=65 && s[i]<=90)
		{
			s[i]=s[i]+32;
		}
		i++;
	}
	return s;
}
