#include<stdio.h>
int main()
{
	int i=90;
	int *p=&i;
	int **pt=&p;
	printf("%u:%u:%u\n",i,p,pt);
	return 0;
}
