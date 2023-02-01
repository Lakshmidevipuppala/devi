//..............vfork system call..................//

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int x=10;
void main()
{
	pid_t pid;
	pid=vfork();
	if(pid<0)
	{
		printf("failed to create\n");
		exit(1);
	}
	else if(pid>0)
	{
		sleep(20);
		printf("%p-%d\n",&x,x);
		exit(0);
	}
	else
	{
		sleep(50);
		x=20;
		printf("%p-%d\n",&x,x);
		exit(0);
	}
}
