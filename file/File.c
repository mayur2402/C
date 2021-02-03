#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int fd1 = 0,fd2 = 0;
	int bsize = 0,bsize1 = 0;

	char arr[20] ,brr[20];

	fd1 = creat("File1.txt",0777);

	fd2 = open("File1.txt",O_RDWR);

	if(fd2 == -1)
	{
		printf("Unable to open file\n");
	}
	else
	{
		printf("open successfully\n");
	}

	printf("\nEnter data to store in file\t");
	scanf("%[^'\n']s",arr);
	printf("%ld\n",strlen(arr));

	bsize = write(fd2,arr,strlen(arr));

	if(bsize == -1)
	{
		printf("Unable to write file\n");
	}
	else
	{
		printf("write successfully\n");
	}

	lseek(fd2,0,SEEK_SET);

	bsize1 = read(fd2,brr,bsize);

	printf("%s",brr);

	close(fd2);

	return 0;
}

