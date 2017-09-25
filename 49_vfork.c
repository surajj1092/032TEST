#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	int i=0,n,ret,p;
	printf("%s_begins with pid:%d\n",__func__,getpid());
	ret=vfork();
	if(ret==-1)
	{
		perror("vfork");
	}
	else if(ret==0)
	{
		printf("child pid:%d\n",getpid());
		i=5;
		sleep(5);
//		exit(8);
	}
	else
	{
		printf("parent running\n");
//		i=9;
//		sleep(3);
	}
	printf("i:%d\n",i);
	p=wait(&i);
	printf("ppp:%d return %d\n",ret,WEXITSTATUS(i));
	if(ret==0)
	printf("child_ends with pid:%d\n",getpid());
	else
	printf("%s_ends with pid:%d\n",__func__,getpid());
	printf("i:%d\n",i);
	return 0;
}
