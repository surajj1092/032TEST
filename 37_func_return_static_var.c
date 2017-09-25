#include<stdio.h>
int * func(void);
int * func1(void);
int main()
{
	int *ptr;
	ptr=func();
	printf("main:i:%d\n",*ptr);
	*ptr=*ptr+20;
	ptr=func();
	printf("main:i:%d\n",*ptr);
	ptr=func1();
	printf("main:i:%d\n",*ptr);
	*ptr=*ptr+20;
	printf("main after adding:i:%d\n",*ptr);
	ptr=func1();
	printf("main:i:%d\n",*ptr);
	return 0;
}
int* func(void)
{
	static int i=9;
	i++;
	printf("func :i:%d\n",i);
	int *ptr=&i;
	return ptr;
}
int* func1(void)
{
	int i=9;
	i++;
	printf("func1 :i:%d\n",i);
	int *ptr=&i;
	return ptr;
}
