//.............exec family of calls...........//

//.......execlp............//

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
void main()
{
	//printf("process is replaced \n");
	//execlp("ps","ps","-ef",0);   //......created file......//
	
	pid_t pid,cpid;
	int stat=0;
	pid=fork();
	if(pid<0)
	{
		printf("failed to create new child\n");
		exit(1);
	}
	else if(pid==0)
	{
		cpid=(&stat);
		printf("child process gets terminated\n");
	        printf("child:%d\n",getpid(),pid);
		execlp("ps","ps","-ef",0);
	}
	else
	{
		printf("parent:%d-%d\n",getpid(),pid);
		exit(0);
	}
}


