#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
pthread_t tid,tid1;
int *mywriteth(void *f)
{
	char buff[]="suraj singh";
	int fd;
	printf("%s begins\n",__func__);
	fd=*(int*)f;
	printf("fd:%d\n",fd);
	write(fd,buff,strlen(buff));
	printf("%s ends\n",__func__);
	pthread_exit("written");
}
int *myreadth(void *f)
{
	void *status;
	int fd;
	char buff[100];
	fd=*(int*)f;
	pthread_join(tid,&status);
	printf("%s begins\n",__func__);
	printf("fd:%d\n",fd);
	lseek(fd,0,SEEK_SET);
	read(fd,buff,5);
	printf("buff:%s\n",buff);
	printf("%s ends\n",__func__);
	pthread_exit("written");
	pthread_exit("read");
}

int main()
{
	int fd;
	void *status;
	printf("%s begins\n",__func__);
	fd=open("file",O_RDWR | O_CREAT);
	if(fd==-1)
	{
		perror("open");
		exit(1);
	}
	pthread_create(&tid, NULL,(void*)mywriteth, (void*)&fd);
	pthread_create(&tid1, NULL,(void*)myreadth,(void*)&fd);
	pthread_join(tid1, &status);
	printf("%s ends\n",__func__);
	return 0;
}
