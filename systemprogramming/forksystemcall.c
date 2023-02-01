//.............fork system call..............//

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
void main()
{
	pid_t pid;
	pid=fork();
	if(pid<0)
	{
		printf("failed to create\n");
		exit(1);
	}
	if(pid>0)
	{
		printf("parent:%d\n",getpid());
		printf("parent:child process pid:%d\n",pid);
	        sleep(20);
		while(1)
			printf("111");
	}
	else
	{
		printf("child:%d\n",getpid());
		printf("child:%d\n",getpid());
		printf("child:%d\n",pid);
		sleep(40);
		while(1)
			printf("222");
	}
}
