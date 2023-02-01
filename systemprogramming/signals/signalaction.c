//.....................signal action .................//

#include<stdio.h>
#include<signal.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
void myhandler(int);
/*struct sigaction
{
	void (*sa_handler)(int);
	sigset_t sa_mask;
	int sa_flags;
	};*/
void main()
{
	int i=0;
	struct sigaction act;
	act.sa_handler=myhandler;
	act.sa_flags=0;
	sigemptyset(&act.sa_mask);
	sigaddset(&act.sa_mask,14);
	//sigaddset(&act.sa_mask,2);            // if we block the signal then myhandkler function also block even we change default signal
	sigprocmask(SIG_BLOCK,&act.sa_mask,0);
	sigaction(2,&act,0);
	while(i<=30)
	{
		sleep(1);
		printf("i=%d\n",i);
		i++;
	}
	sigdelset(&act.sa_mask,14);      
	sigprocmask(SIG_UNBLOCK,&act.sa_mask,0);  // as soon as signal is unblock signal acts as myhandler
	alarm(3);
	sleep(4);
	i=0;
	while(i<=100)
	{
		sleep(1);
		printf("i=%d\n",i);
		i++;
	}
}
void myhandler(int signo)
{
	printf("signal-%d is rececived\n",signo);
}





