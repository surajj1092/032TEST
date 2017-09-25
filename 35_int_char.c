#include<stdio.h>
int main()
{
	int i=300;
	char *ptr=(char*)&i;
	printf("%d\n",*ptr);
	i=128;
	printf("%d\n",*ptr);
	i=129;
	printf("%d\n",*ptr);
	return 0;
}
