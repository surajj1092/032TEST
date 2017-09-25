#include<stdio.h>
int main()
{
	char a='\n';
	char b='\n';
	int *ptr=(int*)&b;
	printf("%d\n",*ptr);
	return 0;
}
