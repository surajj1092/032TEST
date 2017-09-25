#include<stdio.h>
const int i=10;
int main()
{
	int *ptr;
	ptr=&i;
//	*ptr=12; segmentation fault
//	(*ptr)++;
	printf("i:%d\n",*ptr);
	return 0;
}
