#include<stdio.h>
#include<semaphore.h>
#include<pthread.h>
#include<signal.h>
#include<fcntl.h>
#include <unistd.h>
#include<stdlib.h>
int fd,i;
sem_t sem_even,sem_odd;
pthread_mutex_t lock;
pthread_t even_thd,odd_thd;
pthread_cond_t cond;
void attr_func(pthread_attr_t *attr)
{
	int ret=pthread_attr_init(attr);
	if(ret!=0)
		perror("pthread_attr_init");
	ret=pthread_attr_setdetachstate(attr,PTHREAD_CREATE_JOINABLE);
	if(ret!=0)
		perror("pthread_attr_setdeatchstate");
	sem_init(&sem_even,0,0);
	sem_init(&sem_odd,0,0);

}
void * even( )
{
	while(i<5)
	{
			sem_wait(&sem_even);
			printf("even:i:%d\n",i);
			i++;
			sem_post(&sem_odd);

	}

}
void * odd( )
{
	sem_post(&sem_even);
	while(i<5)
	{
			sem_wait(&sem_odd);
			printf("odd :i:%d\n",i);
			i++;
			sem_post(&sem_even);
	}

}
int main()
{
	pthread_attr_t attr;
	if(pthread_mutex_init(&lock,NULL)!=0)
	{
		perror("init");
		exit(0);
	}
	printf("%s_Thread_running\n",__func__);	
	fd=open("even_oddfile",O_CREAT|O_RDWR|O_TRUNC);
	if(fd==-1)
	{
		perror("open");
		exit(1);
	}
	attr_func(&attr);
	pthread_create(&even_thd,&attr,even,NULL);
	pthread_create(&odd_thd,&attr,odd,NULL);
	pthread_join(even_thd,NULL);
	pthread_join(odd_thd,NULL);
	printf("%s_Thread_exiting\n",__func__);	
	return 0;
}
