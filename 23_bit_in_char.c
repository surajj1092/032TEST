#include<stdio.h>
int main()
{
	char s[2];
 	char c;	
//	s=s>>10;
	s[12]=1;
//	s=s<<10;
	c=c>>4;
	c=c|1;
	c=c<<4;
	printf("c:%d\n",c);
	printf("s:%d\n",s);
	return 0;
}
