//................fork system call using copy on write technique.............//

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int x=10;
void main()
{
	pid_t pid;
	printf("%p-%d\n",&x,x);
	pid=fork();
	if(pid<0)
	{
		printf("failed to create\n");
		exit(1);
	}
 	 if(pid>0)
	{
		printf("%p-%d\n",&x,x);
		x=20;
		printf("parent:%p-%d\n",&x,x);
		exit(0);
	}
	else
	{
		sleep(5);
		printf("child:%p-%d\n",&x,x);
		exit(0);
	}
}

