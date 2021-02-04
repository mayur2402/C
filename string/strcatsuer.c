#include<stdio.h>
#include<string.h>
char *strcatusr(char *,char *);
int main()
{
	char lname[20],sname[20];
	puts("Enter first name");
	gets(lname);
	puts("Enter surname");
	gets(sname);
	strcatusr(lname,sname);
	puts(lname);
	return 0;
}
char *strcatusr(char *dest,char *source)
{
	int i=0,j=0;
	while(dest[i]!='\0')
	{
		i++;
	}
	while(source[j]!='\0')
	{
		dest[i]=source[j];
		i++;
		j++;
	}
	dest[i]='\0';
	return dest;
}
