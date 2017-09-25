#include<stdio.h>
#include<pthread.h>
#include<signal.h>
#include<fcntl.h>
#include <unistd.h>
#include<stdlib.h>
int fd;
int flag=0;
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

}
void * even( )
{
	char a='A';
	int i=0;
	while(i<5)
	{
		if(flag==0)
		{
			printf("even\n");
			pthread_mutex_lock(&lock);
			write(fd,&a,1);
			a++;
			i++;
			flag=1;
			pthread_mutex_unlock(&lock);
		}

	}

}
void * odd( )
{
	char a='0';
	int i=0,s=2;
	while(i<5)
	{
		if(flag)
		{
			printf("odd\n");
			pthread_mutex_lock(&lock);
			write(fd,&a,1);
			a++;
			i++;
			pthread_mutex_unlock(&lock);
			flag=0;
		}
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
	pthread_cond_init (&cond , 0);
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
