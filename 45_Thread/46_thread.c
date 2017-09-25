#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
int i=0;
pthread_t th1,th2;
void *even()
{
	while(i<100)
	{
		if(i%2==0)
		{
			printf("ei:%d\n",i);
			i++;
		}
	}
}
void* odd()
{
	while(i<100)
	{
		if(i%2!=0)
		{
			printf("i:%d\n",i);
			i++;
		}
	}
	pthread_join(th1,NULL);
}
int main()
{
	printf("Started\n");
	pthread_create(&th1,NULL,&even,NULL);
	pthread_create(&th2,NULL,&odd,NULL);
	pthread_join(th2,NULL);
	return 0;
}
