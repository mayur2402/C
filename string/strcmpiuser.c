#include<stdio.h>
#include<string.h>
int strcmpiuser(char *,char *);
int main()
{
	char lname[20],sname[20];
	int com=0;
	puts("Enter first name");
	gets(lname);
	puts("Enter second name");
	gets(sname);
	com=strcmpiuser(lname,sname);
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
int strcmpiuser(char *f,char *l)
{
	int i=0,j=0;
	while(f[i]!='\0' || l[i]!='\0')
	{
		if((f[i]==l[i]) || (f[i]-l[i]==32) || (f[i]-l[i]==-32))
		{
			i++;
		}
		else
		{
			return (f[i]-l[i]);
		}
	}
	return 0;
}
