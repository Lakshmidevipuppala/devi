//........write a program to communicate with server and client process communication..............//

//...............CLIENT COMMUNICATION....................//

#include<stdio_ext.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	while(1)
	{
	int ret,fd;
	char rbuf[20];
	char wbuf[20];
	printf("enter msg\n");
	__fpurge(stdin);
	scanf("%[^\n]s",wbuf);
	fd=open("servfifo",O_WRONLY);
	printf("fd=%d\n",fd);
	if(fd<0)
	{
		printf("failed to open\n");
		exit(0);
	}
	ret=write(fd,wbuf,strlen(wbuf));
	if(ret<0)
	{
		printf("failed to write\n");
		exit(2);
	}

	fd=open("clientfifo",O_RDONLY);
	if(fd<0)
	{
		ret=mkfifo("clientfifo",0664);
		if(ret<0)
		{
			printf("failed to create fifo object\n");
			exit(0);
		}
		else
		{
			fd=open("clientfifo",O_RDONLY);
			if(fd<0)
			{
				printf("failed to open\n");
				exit(2);
			}
		}
	}
	ret=read(fd,rbuf,20);
	if(ret<0)
	{
		printf("failed to perform read operation\n");
		exit(4);
	}

	ret=write(1,rbuf,ret);
	if(ret<0)
	{
		printf("failed to perform write operation\n");
		exit(5);
	}
	printf("\n");
	
	close(fd);
	}
}


















