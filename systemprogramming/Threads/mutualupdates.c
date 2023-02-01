//............to overcome the updation issues we have to use mutex locks..................//


#include<stdio.h>
#include<unistd.h>
#include<signal.h>
#include<pthread.h>
void *thread_fun1(void *arg);
void *thread_fun2(void *arg);
pthread_mutex_t mtx=PTHREAD_MUTEX_INITIALIZER;
int glob=0;
void main()
{
	pthread_t t1,t2;
	int res,loop=100;
	void *ret;
	pthread_create(&t1,0,thread_fun1,&loop);
	pthread_create(&t2,0,thread_fun2,&loop);
	printf("main thread is created=%d\n",glob);
	pthread_join(t1,&ret);
	printf("blocking call thread1 completed\n");
	pthread_join(t2,&ret);
	printf("blocking call thread2 completed\n");
	printf("glob=%d\n",glob);

}
void *thread_fun1(void *arg)
{
	int local,i,loop;
	loop=*(int *)arg;
	for(i=0;i<loop;i++)
	{
		printf("i before executing the lock for thread1=%d\n",i);	
		pthread_mutex_lock(&mtx);
		local=glob;
		local++;
		glob=local;
		printf("thread1 glob=%d\n",glob);
		pthread_mutex_unlock(&mtx);
		printf("i after executing the unlock  for thread1=%d\n",i);
	}
}
void *thread_fun2(void *arg)
{
        int local,i,loop;
        loop=*(int *)arg;
        for(i=0;i<loop;i++)
        {
		printf("i before executing the lock for thread2=%d\n",i);
                pthread_mutex_lock(&mtx);
                local=glob;
                local++;
                glob=local;
		printf("thread2 glob=%d\n",glob);
                pthread_mutex_unlock(&mtx);
		printf("i after executing the unlock  for thread2=%d\n",i);
        }
}
	                                                            

