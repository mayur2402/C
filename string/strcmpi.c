#include<stdio.h>
#include<string.h>
int main()
{
	char lname[20],sname[20];
	int com=0;
	puts("Enter first name");
	gets(lname);
	puts("Enter second name");
	gets(sname);
	com=strcmpi(lname,sname);
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
