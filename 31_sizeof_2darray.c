#include<stdio.h>
int main()
{
	int a[2][2];
	int **ptr=&a;
	printf("%zu\n",sizeof(a));
	printf("%zu\n",sizeof(ptr));
	return 0;
}
