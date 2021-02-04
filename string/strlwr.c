#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	printf("\nEnter String\t");
	scanf("%s",str);
	printf("Before Converting lowercase\t%s",str);
	strlwr(str);
	printf("After Converting lowercase\t%s",str);
	return 0;
}
