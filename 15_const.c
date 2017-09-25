#include<stdio.h>
int main()
{
	const int i=10;
	int *ptr;
	ptr=&i;
	*ptr=12;
	(*ptr)++;
	printf("i:%d\n",*ptr);
	return 0;
}
