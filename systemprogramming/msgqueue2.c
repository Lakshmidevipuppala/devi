//...............message queue for server side....................//

#define MSG_TYPE 1
#define KEY 0x1998860
#include<stdio.h>
#include<sys/msg.h>
#include<string.h>
#include<stdlib.h>
struct msg
{
	long msgtype;
        long pid;
        char buf[100];
};
void main()
{
	int msqid,ret;
	char rbuf[100];
	struct msg message;
	msqid=msgget(KEY,IPC_CREAT|0640);
	printf("msqid=%d\n",msqid);
	if(msqid<0)
        {
                printf("failed to create msqid\n");
                exit(1);
        }
	ret=msgrcv(msqid,&message,100,MSG_TYPE,0);
	if(ret<0)
	{
		printf("failed to receive message\n");
		exit(2);
	}
	printf("recived message  : %s \n",message.buf);
}


