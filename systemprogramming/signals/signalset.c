//.......................signal set variable..............//

#include<stdio.h>
#include<signal.h>
#include<stdlib.h>
void binary(unsigned long int k);
void main()
{
	int i=0;
	unsigned long int  signalset; 
	binary(signalset);

	sigemptyset(&signalset);
	binary(signalset);

	sigaddset(&signalset,2);
	binary(signalset);

	sigaddset(&signalset,14);
	binary(signalset);

	sigprocmask(SIG_BLOCK,&signalset,NULL);
	binary(signalset);

	while(i<10)
	{
		sleep(1);
		printf("i=%d\n",i);
		i++;
	}
	sigdelset(&signalset,14);
	binary(signalset);

	sigprocmask(SIG_UNBLOCK,&signalset,NULL);
	binary(signalset);
}

void binary(unsigned long int k)
{
	int i;
	for(i=64;i>=0;i--)
	{
		if(k&(0x1<<i))
			printf("1");
		else
			printf("0");
	}
	printf("\n");
}

