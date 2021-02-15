#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	if (argc != 2){
		printf("Enter only one argument\n");
		exit(-1);
	}

	char *p;
	long toLong = strtol(argv[1],&p,10);

	if (*p != 0) {
		printf("%s\n",p);
		printf("Error please enter number\n");
		exit(-1);
	}
		
	for (int i = 1; i <= 10; i++) {
		printf("%ld\n",i*toLong);
	}
	return 0;
}