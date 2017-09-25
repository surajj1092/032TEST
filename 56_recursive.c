#include<stdio.h>
void func()
{
	printf("func called\n");
}
int main(int i)
{
	if(i<5)
	{
		i++;
		printf("i:%d\n",i);
		main(i);
		sleep(1);
		func();
	}
	return 0;
}
