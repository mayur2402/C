#include<stdio.h>
#include<string.h>
int strcmpusr(char *,char *);
int main()
{
	char lname[20],sname[20];
	int com=0;
	puts("Enter first name");
	gets(lname);
	puts("Enter second name");
	gets(sname);
	com=strcmpusr(lname,sname);
	printf("\n%d\n",com);
	if(com==0)
	{
		printf("\n%s and %s are equal\n",lname,sname);
	}
	else
	{
		printf("\n%s and %s are not equal\n",lname,sname);
	}
	return 0;
}
int strcmpusr(char *l,char *s)
{
	int i=0,j=0;
	while(l[i]!='\0' || s[i]!='\0')
	{
		if(l[i]!=s[i])
		{
			return (l[i]-s[i]);
		}
		else
		{
			i++;
		}
	}
	return 0;
}
