//..............pipes.....................//

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
void main()
{
        pid_t pid;
        int fd[2];
        int ret;
        char buf[100];
        ret=pipe(fd);
        pid=fork();
        if(pid<0)
        {
                printf("failed to create child\n");
                exit(1);
        }
        else if(pid>0)
        {
                printf("parent received\n");
                close(fd[0]);
                ret=write(fd[2],"hi",strlen("hi"));
		printf("ret=%d\n",ret);
                close(fd[1]);
                exit(0);
        }
        else
        {
                printf("child rececived\n");
                close(fd[1]);
                ret=read(fd[0],buf,100);
//		printf("ret=%d\n",ret);
                write(1,buf,ret);
                close(fd[0]);
                exit(0);
        }
}
                           
