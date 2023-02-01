//........write a program to communicate with server and client process.......................//

//................SERVER COMMUNICATION.............//

#include<stdio_ext.h>
#include<unistd.h>
#include<sys/stat.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
void main()
{
	while(1)
	{
	int ret,fd;
	char rbuf[20];
	char wbuf[20];
	fd=open("servfifo",O_RDONLY);
	printf("fd=%d\n",fd);
	if(fd<0)
	{
		ret=mkfifo("servfifo",0664);
		printf("ret=%d\n",ret);
		if(ret<0)
		{
			printf("failed to create fifo object\n");
			exit(0);
		}
		else
		{
			fd=open("servfifo",O_RDONLY);
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
		exit(3);
	}
	ret=write(1,rbuf,ret);
	if(ret<0)
	{
		printf("failed to perform write operation\n");
		exit(4);
	}
	printf("\n");

	printf("enter the msg\n");
	__fpurge(stdin);
	scanf("%[^\n]s",wbuf);
	fd=open("clientfifo",O_WRONLY);
	if(fd<0)
	{
		printf("failed to open\n");
		exit(0);
	}
	ret=write(fd,wbuf,strlen(wbuf));
	if(ret<0)
	{
		printf("failed to perform write operation\n");
		exit(5);
	}
	
	close(fd);
	
	}
}
