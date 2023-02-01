//.................shared memory client....................//

#define KEY 0x1998860
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/shm.h>
void main()
{
	char *ptr;
	int shmid,ret;
	shmid=shmget(KEY,512,0);
	printf("shmid=%d\n"shmid);
	ptr=shmat(shmid,NULL,0);
	strcpy(ptr,"hello");
	ret=shmdt(ptr);
	if(ret<0)
	{
		printf("failed to create\n");
		exit(1);
	}
}

