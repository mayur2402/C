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
	puts("Before Reverse");
	puts(lname);
	puts(sname);
	strrev(lname);
	strrev(sname);
	puts("After Reverse");
	puts(lname);
	puts(sname);
	return 0;
}
