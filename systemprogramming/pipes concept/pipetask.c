//.................using 2 pipes parent process to child process to convert upper case to lower case....................//

#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>
#include<stdlib.h>
void toggle(char *src,int l);
void main()
{
	pid_t pid;
	int ret1, ret2;
	int fd1[2];
	int fd2[2];
	char buf[100];
	ret1=pipe(fd1);
	ret2=pipe(fd2);
	pid=fork();
	if(pid<0)
	{
		printf("failed to create child\n");
		exit(1);
	}
	else if(pid>0)
	{
		close(fd1[0]);
		ret1=write(fd1[1],"hiDEVI",strlen("hiDEVI"));
		printf("ret1=%d\n",ret1);
		close(fd1[1]);
		close(fd2[1]);
		ret2=read(fd2[0],buf,100);
		write(1,buf,ret2);
		close(fd2[0]);
		exit(0);
	}
	 else 
        {
                close(fd1[1]);
		ret1=read(fd1[0],buf,100);
                printf("ret1=%d\n",ret1);
		toggle(buf,ret1);
                close(fd1[0]);
                close(fd2[0]);
		ret2=write(fd2[1],buf,strlen(buf));
		close(fd2[1]);
		exit(2);
                
                
        }
}
void toggle(char *src,int l)
{
        int i;
        for(i=0;i<l;i++)
        {
                if((src[i]>=65)&&(src[i]<=90))
                {
                        src[i]=src[i]+32;
                }
                else if((src[i]>=97)&&(src[i]<=122))
                {
                        src[i]=src[i]-32;
                }
        }
}




