#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
pthread_mutex_t lock=PTHREAD_MUTEX_INITIALIZER ;
pthread_t pth1,pth2;
pthread_cond_t cond=PTHREAD_COND_INITIALIZER;
int count=0;
void * even()
{
    while(1)
    {
        pthread_mutex_lock(&lock);
        if(count % 2 == 0)
        {
            printf("count %d\n",count);
            count++;
            pthread_cond_signal(&cond);
        }
        else
        {
            pthread_cond_wait(&cond,&lock);
        }
        pthread_mutex_unlock(&lock);

        if(count >= 100) return NULL;
    }
}


void * odd()
{
    while(1)
    {
        pthread_mutex_lock(&lock);
        if(count % 2 == 1)
        {
            printf("count %d\n",count);
            count++;
            pthread_cond_signal(&cond);
        }
        else
        {
            pthread_cond_wait(&cond,&lock);
        }
        pthread_mutex_unlock(&lock);

        if(count >= 100) return NULL;
    }
}
int main()
{
	printf("Started\n");
	pthread_create(&pth1,NULL,&even,NULL);
	pthread_create(&pth2,NULL,&even,NULL);
	pthread_join(pth2,NULL);
	return 0;
}
