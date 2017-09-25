#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
pthread_attr_t attr=PTHREAD_INITIALZER;
pthread_cond_t even,odd;
pthread_mutex_t lock;
int i=0;
void func_attributes(void )
{
	pthread_attr_setdetachstate(&attr,PTHREAD_JOINABLE);
	pthread_cond_init(&even);
	pthread_cond_init(&odd);
	pthread_mutex_init(&lock,NULL);
}
void even(void* arg)
{	
	while(i<10)
	{
		pthread_mutex_lock(&lock);
		pthread_cond_wait(&even,&lock);
		printf("even_i:%d\n",i);
		i++;
		pthread_cond_signal(&odd);
		pthread_mutex_unlock(&lock);
	}
}
void odd(void* arg)
{	
	pthread_cond_signal(&even);
	while(i<10)
	{
		pthread_mutex_lock(&lock);
		pthread_cond_wait(&odd,&lock);
		printf("odd_i:%d\n",i);
		i++;
		pthread_cond_signal(&even);
		pthread_mutex_unlock(&lock);
	}
}
int main()
{
	pthread_t even_thid,odd_thid;
	printf("%s_Thread_begins\n",__func__);
	func_attributes();
	pthread_create(&even_thid,&attr,even,NULL);
	pthread_create(&odd_thid,&attr,odd,NULL);
	pthread_join(even_thid,NULL);
	pthread_join(odd_thid,NULL);
	printf("%s_Thread_ends\n",__func__);
	return 0;
}

