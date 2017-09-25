#include<stdio.h>
void func(int *ptr)
{
	if(*ptr==10)
		(*ptr)++;
	else
		*ptr=15;
}
int main()
{
	const int i=10; //herer also if we are taking i global then changes cannot be done
	func(&i);
	printf("i:%d\n",i);
	func(&i);
	printf("i:%d\n",i);
}
