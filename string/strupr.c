#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	printf("\nEnter String\t");
	scanf("%s",str);
	printf("Before Converting lowercase\t%s",str);
	strupr(str);
	printf("After Converting lowercase\t%s",str);
	return 0;
}
