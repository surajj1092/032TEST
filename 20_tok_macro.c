#include<stdio.h>
#define g(x,y) x##y
int main()
{
	int x=5,y=10,xy=20;
	printf("%d\n",xy+g(x,y));
	return 0;
}
