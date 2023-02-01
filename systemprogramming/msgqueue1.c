//............message queue client side..........//

#define MSG_TYPE 1
#define KEY 0x1998860
#include<stdio.h>
#include<sys/msg.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
struct msg
{
	long msgtype;
	long pid;
	char buf[100];
};
void main()
{
	int msqid,ret;
	struct msg message;
	msqid=msgget(KEY,0);
	printf("msqid=%d\n",msqid);
	if(msqid<0)
	{
		printf("failed to create msqid\n");
		exit(1);
	}
	message.msgtype=MSG_TYPE;
	message.pid=getpid();
	strcpy(message.buf,"hellomoschip");
	ret=msgsnd(msqid,&message,(2*sizeof(long int ))+strlen(message.buf)+1,0);
	if(ret<0)
	{
		printf("failed to create msg\n");
		exit(2);
	}
}

