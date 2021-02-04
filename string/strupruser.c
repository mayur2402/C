#include<stdio.h>
#include<string.h>
char *struprusr(char *);
int main()
{
	char str[20];
	printf("\nEnter String\t");
	scanf("%s",str);
	printf("\nBefore Converting lowercase\t%s",str);
	struprusr(str);
	printf("\nAfter Converting lowercase\t%s",str);
	return 0;
}
char *struprusr(char *s)
{
	int i=0;
	while(s[i]!='\0')
	{
		if(s[i]>=97 && s[i]<=122)
		{
			s[i]=s[i]-32;
		}
		i++;
	}
	return s;
}
