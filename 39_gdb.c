#include<stdio.h>
int i=10;
int main()
{
	while(1)
	{
		printf("i:%d\n",i);
		sleep(10);
		i++;
	}
	return 0;
}
