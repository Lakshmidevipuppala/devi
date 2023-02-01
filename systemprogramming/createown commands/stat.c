//...................create our own stat commmand....................//

#include<stdio.h>
#include<signal.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>
#include<string.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
	int ret,fd;
	struct stat buf[10];
	fd=open(argv[1],O_RDONLY,0664);
	if(fd<0)
	{
		printf("failed to open\n");
		exit(1);

	}
	ret=stat(argv[1],buf);
	printf("%d\n",ret);
	if(ret<0)
	{
		printf("failed to readstatus\n");
		exit(2);
	}
	printf("device:%ld\n",buf->st_dev);
	printf("file serial number:%ld\n",buf->st_ino);
	printf("file mode:%ld\n",buf->st_mode);
	printf("link count:%ld\n",buf->st_nlink);
	printf("user ID of the files owner:%lu\n",buf->st_uid);
	printf("optimal block size for i/o:%d\n",buf->st_blksize);
	printf("group ID of the files group:%lu\n",buf->st_gid);
	printf("size of files in bytes:%ld\n",buf->st_size);
}






