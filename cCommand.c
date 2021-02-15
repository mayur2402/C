#include <stdio.h>

int main(int argc, char const *argv[])
{
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	printf("length is  %d\n", argc);
	return 0;
}