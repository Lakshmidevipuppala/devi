//.......................threads concept normal program ...............//

/*#include<pthread.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
void *mythread(void *ptr);
void main()
{
	pthread_t ti;
	int i,ret,loop=1000;
	ret=pthread_create(&ti,0,mythread,&loop);
	printf("thread is created\n");
	sleep(1);
	printf("ret=%d\n",ret);
	exit(0);
}
void *mythread(void *ptr)
{
	int i;
	printf("my thread is invoked\n");
	for(i=0;i<=*(int *)ptr;i++)
	{
		printf("i=%d\n",i);
	}
}*/



//...................threads concept instead of sleep and exit function we have to use pthread_exit....................//


/*#include<pthread.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
void *mythread(void *ptr);
void main()
{
        pthread_t ti;
      	int i,ret,loop=1000;
        ret=pthread_create(&ti,0,mythread,&loop);
	printf("ret=%d\n",ret);
        printf("thread is created\n");
	pthread_exit(&ret);

}
void *mythread(void *ptr)
{
        int i;
        printf("my thread is invoked\n");
        for(i=0;i<=*(int *)ptr;i++)
        {
                printf("i=%d\n",i);
        }
}*/



//....................threads concept without sleep function...................//


/*#include<pthread.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
void *mythread(void *ptr);
void main()
{
        pthread_t ti;
        int i,ret,loop=1000;
        ret=pthread_create(&ti,0,mythread,&loop);
        printf("thread is created\n");
        printf("ret=%d\n",ret);
}
void *mythread(void *ptr)
{
        int i;
        printf("my thread is invoked\n");
        for(i=0;i<=*(int *)ptr;i++)
        {
                printf("i=%d\n",i);
        }
}*/


//....................threads concept with sleep...............//

/*#include<pthread.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
void *mythread(void *ptr);
void main()
{
        pthread_t ti;
        int i,ret,loop=1000;
        ret=pthread_create(&ti,0,mythread,&loop);
        printf("thread is created\n");
	sleep(1);
        printf("ret=%d\n",ret);
}
void *mythread(void *ptr)
{
        int i;
        printf("my thread is invoked\n");
        for(i=0;i<=*(int *)ptr;i++)
        {
		sleep(1);
                printf("i=%d\n",i);
        }
}*/


//....................threads use exit function in main thread.........................//

#include<pthread.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
void *mythread(void *ptr);
void main()
{
        pthread_t ti;
        int i,ret,loop=1000;
        ret=pthread_create(&ti,0,mythread,&loop);
        printf("thread is created\n");
        printf("ret=%d\n",ret);
	exit(0);
}
void *mythread(void *ptr)
{
        int i;
        printf("my thread is invoked\n");
        for(i=0;i<=*(int *)ptr;i++)
        {
                printf("i=%d\n",i);
        }
}




