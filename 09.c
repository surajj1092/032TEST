#include<stdio.h>
struct check{
	int num;
}s;
s.num=10;//we can't assign value global
int main()
{
	printf("num:%d\n",s.num);
	return 0;
}
