//.........system programming note book programs..........//

#include<stdio.h>
#include<unistd.h>
void main()
{
	int pid,ppid;
	pid=getpid();
	printf("process pid=%d\n",pid);
	ppid=getppid();
	printf("parent process pid=%d\n",ppid);
	while(1);

}
