#include <stdio.h>
#include <stdlib.h>

int main(int argc,char const *argv[]) {

	if (argc == 1) {
		printf("Please enter array elements\n");
		exit(-1);
	}

	long arr[argc - 1];
	int j = 0;
	char *ch;

	for (int i = 1; i < argc; i++) {
		arr[j] = strtol(argv[i],&ch,10);
		j++;
		if (*ch != 0){
			printf("Enter valid number\n");
			exit(-1);
		}
	}

	for(int i = 0;i < argc-1;i++){
		printf("%ld\t",arr[i]);
	}
	printf("\n");

	for (int i = 0; i < argc-1; i++) {
		for (int j = 0;j < argc-2-i;j++) {

			if(arr[j] > arr[j+1]) {
				long temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	for(int i = 0;i < argc-1;i++){
		printf("%ld\t",arr[i]);
	}
	printf("\n");

	return 0;
}