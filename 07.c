#include<stdio.h>
int main()
{
	char a[]="%d\n";
	a[1]='c';		//it makes a[]="%c\n"becouse a[1]was d which is replace by c
	printf(a,65);
}
