#include<stdio.h>

int main()
{
	typedef long no, *ptrtono;
	no n;
	ptrtono p;
	int i=32, j=0x20, k, l, m;
	k=i|j;
	l=i&j;
	m=k^l;
	printf("%d, %d, %d, %d, %d\n", i, j, k, l, m);
	int a= (2,5);
	printf("a:%d\n",a);
	return 0;
}
