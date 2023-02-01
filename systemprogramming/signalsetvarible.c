//..................signal set variable-------------signal set of functions............//

#include<stdio.h>
#include<signal.h>
#include<unistd.h>
void main()
{
	int i=0;
	sigset_t signalset;

	sigemptyset(&signalset);
	printf("empty set:%lx\n",signalset);

	sigaddset(&signalset,2);
	printf("set the 2nd bit value:%llx\n",signalset);

	sigaddset(&signalset,14);
	printf("set the 14th bit value:%llx\n",signalset);
	sigprocmask(SIG_BLOCK,&signalset,NULL);
	while(i<50)
	{
		sleep(1);
		printf("i=%d\n",i);
		i++;
	}
	sigdelset(&signalset,14);
	sigprocmask(SIG_UNBLOCK,&signalset,NULL);
}


