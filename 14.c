#include<stdio.h>
int g(int x)
{
	return x=x+2;
}
int f(int x)
{
	return x=x*3;
}
int main()
{
	int x=2,ret;
//	ret=f(f(x),g(x));
	ret=(f(x),g(x));
	printf("ret:%d\n",ret);
	int a=(6,4,7);
	printf("a:%d\n",a);
	return 0;
}
