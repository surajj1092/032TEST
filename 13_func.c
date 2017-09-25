#include<stdio.h>
int g(int x)
{
	return x=x+2;
}
int f(int x)
{
	return x=x*2;
}
int main()
{
	int x=2,ret;
	ret=f(f(x)-g(f(x)));
	printf("ret:%d\n",ret);
	return 0;
}
