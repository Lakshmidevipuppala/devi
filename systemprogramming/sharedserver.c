//................shared memory server.................//

#define KEY 0x1998860
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/shm.h>
void main()
{
	char *ptr;
	int shmid,ret,cpid;
	char buf[100];
	shmid=shmget(KEY,512,IPC_CREAT|0660);
	printf("shmid=%d\n",shmid);
	if(shmid<0)
	{
		printf("failed to create shmid\n");
		exit(1);
	}
	ptr=shmat(shmid,NULL,0);
	ptr[0]='\0';
	sleep(1);
	printf("%s\n",ptr);
	ret=shmdt(ptr);
	if(ret<0)
	{
		printf("failed to create\n");
		exit(2);
	}
	printf("ownership and permissions=%d\n",buf->shm_perm);
	printf("size of segment=%d\n",buf->shm_segsz);
	printf("last attach time=%d\n",buf->shm_atime);
	printf("last detach=%d\n",buf->shm_dtime);
	printf("creation time=%d\n",buf->shm_ctime);
	printf("PID of creator=%d\n",buf->shm_cpid);
	printf("PID of last shmat=%d\n",buf->shm_lpid);
	printf("no.of current attaches=%d\n",shm_nattch);


}


