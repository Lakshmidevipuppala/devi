//.....................wait call()...................//

#include<stdio.h>
#include<sys/wait.h>
#include<stdlib.h>
#include<unistd.h>
void main()
{
	pid_t pid,cpid;
	int stat=0,i=0;
	pid=fork();
	if(pid<0)
	{
		printf("failed to create child process\n");
		exit(1);
	}
	else if(pid>0)
	{
		cpid=wait(&stat);
	//	sleep(20);
		printf("parent:child:%d\n",cpid);
		if(WIFEXITED(stat)==0)
		{
			printf("normal termination:%d\n",WEXITSTATUS(stat));
		}
		if(WIFSIGNALED(stat))
		{
			printf("abnormal termination:%d\n",WTERMSIG(stat));
		}
		printf("%d\n",stat);
		if(WCOREDUMP(stat))
		{
			printf("hai--%d\n",WCOREDUMP(stat));
		}

	}
	else
	{
		//sleep(10);
		printf("child:pid:%d\n ",getpid());
		while(i<=50)
		{
			//printf("ppp");
			//i=i/0;
			
			//abort();
	//	int *ptr=NULL;
	//	printf("%d\n",*ptr);
	        printf("i=%d\n",i);
			i++;
			sleep(1);
		}
		//exit(10);
	}
}
