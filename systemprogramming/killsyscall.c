//.........kill system call using signals...........//

#include<stdio.h>
//#include<signal.h>
#include<unistd.h>
void main()
{
	pid_t pid;
	while(1)
	printf("%d\n",getpid());
}
