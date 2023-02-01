//.........................implement our own CAT command...........................................//

#include<stdio.h>
#include<unistd.h>
#include<sys/mman.h>
#include<sys/stat.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
void main()
{
	struct stat buf;
	int fd;
	char *ptr;
	fd=open("file.txt",O_RDWR);
	fstat(fd,&buf);
	ptr=mmap(NULL,buf.st_size,PROT_READ|PROT_WRITE,MAP_SHARED,fd,0);
	write(1,ptr,buf.st_size);
}


