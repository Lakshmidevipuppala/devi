//.................kill system call using signals...........//

#include<stdio.h>
#include<signal.h>
void main()
{
	int ret;
	pid_t pid;
	scanf("%d",&pid);
	ret=kill(pid,31);
}
