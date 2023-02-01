//........................cat command...................//

#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>
#include<fcntl.h>
void main(int argc,char *argv[])
{
	char buf[100];
	int fd,ret;
	fd=open(argv[1],O_RDONLY);
	if(fd<0)
	{
		printf("failed to open\n");
		exit(1);
	}
	while(ret=read(fd,buf,99))
	{
		if(ret<0)
		{
			printf("failed to read\n");
			exit(2);
		}
		buf[ret]='\0';
		printf("%s\n",buf);
	}
}
