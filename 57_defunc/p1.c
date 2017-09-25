#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	int ret,i=0,s;
	while(1)
	{
		ret = fork();
		if(ret)
		{
			printf("parent pid:%d\n",getpid());
			s=wait(&i);
		}
		else if(ret==0)
		{
			printf("child pid:%d\n",getpid());
			execl("./p2",NULL);
		}
	}
	printf("ends\n");
	return 0;
}
