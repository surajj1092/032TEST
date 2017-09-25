#include<stdio.h>
int* func(void);
int* func1(void);
int main()
{
	int *ptr,v;
	ptr=func();
	printf("ptr:%d\n",*ptr);
	ptr=func1();
	printf("ptr:%d\n",*ptr);
	return 0;
}
int* func()
{
	int a=22,*ptr;
	a++;
	ptr=&a;
	return ptr;
}
int* func1()
{
	static int a=10,*ptr;
	a++;
	ptr=&a;
	return ptr;
}
