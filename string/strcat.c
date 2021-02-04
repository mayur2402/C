#include<stdio.h>
#include<string.h>
int main()
{
	char lname[20],sname[20];
	puts("Enter first name");
	gets(lname);
	puts("Enter surname");
	gets(sname);
	strcat(lname,sname);
	puts(lname);
	return 0;
}
