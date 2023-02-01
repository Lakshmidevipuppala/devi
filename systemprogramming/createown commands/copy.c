//...........................copy command..........................//

#include<stdio_ext.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
#include<sys/wait.h>
void main()
{
	int fd,fd1,fd2,ret;
	char src[30];
	char buf[1000];
	char dst[30];
	printf("enter the source file\n");
	scanf("%[^\n]s",src);
	__fpurge(stdin);
	printf("enter the destination file\n");
	scanf("%[^\n]s",dst);
	fd1=open(src,O_RDONLY);
	printf("fd1=%d\n",fd1);
	if(fd1<0)
	{
		printf("failed to open\n");
		exit(1);
	}
	fd2=open(dst,O_RDWR);
	//printf("%d\n",fd);
	if(fd2<0)
	{
		fd=open(dst,O_CREAT|O_RDWR|O_TRUNC,0777);
	//	printf("%d\n",fd1);
	}
	ret=read(fd1,buf,999);
	if(ret<0)
	{
		printf("failed to read\n");
	}
	ret=write(fd2,buf,strlen(buf));
	if(ret<0)
	{
		printf("failed to write\n");
	}
	close(fd);
	close(fd1);
	
}

