#include<stdio.h>

int main(int arc, char *argv[])
{
	int i;
	printf("arc:%d\n",arc);
	for(i=0;i<arc;i++)
		printf("arg[%d]:%s\n",i, argv[i]);
	return 0;
}
