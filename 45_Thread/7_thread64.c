#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>
sem_t sem_f,sem_s;
int i=0,flag=0;
int j=9;
pthread_t mth,cth;
void* pthread(void * arg) 
{
	while(i<9)
	{
		i++;
		pthread_create(&cth,NULL,&pthread,NULL);
		printf("thread_num_create:%d\n",i);
		if(i!=9)
		{
			pthread_join(cth,NULL);
		}
		printf("thread_num:%d exits\n",j);
		j--;
		pthread_exit("bye");
	}
}
int main()
{
	printf("%s begins\n",__func__);
	sem_init(&sem_f,0,0);
	sem_init(&sem_s,0,0);
	pthread_create(&mth,NULL,pthread,NULL);
	printf("Main_thread\n");
	pthread_join(mth,NULL);
	printf("%s ends\n",__func__);
}
