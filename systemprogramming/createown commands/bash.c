//..................create own bash command............//

#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	pid_t pid;
	char src[100];
	char *ptr[10];
	int i,j=1,stat=0;
	printf("LAKSHMI BASH:$\n");
	scanf("%[^\n]s ",src);
	ptr[0]=src;
	for(i=0;src[i];i++)
	{
		if(src[i]==' ')
		{
			src[i]='\0';
			if(src[i+1]!='\0')
			{
				ptr[j]=&src[i+1];
			j++;
			}
		}
	}
	ptr[j]='\0';
	pid=fork();
	if(pid<0)
	{
		printf("falied to create child\n");
		exit(1);
	}
	if(pid>0)
	{
		wait(&stat);
		printf("parent:%d\n",pid);
	}
	else
	{
		printf("child:%d\n",pid);
		execvp(ptr[0],ptr);
	}
}

