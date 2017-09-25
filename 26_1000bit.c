#include<stdio.h>
int main()
{
	char ch;
	ch=ch|0x40;
	printf("ch:%d\n",ch);
	unsigned char c[2123];
	c[124]=0x80;
	printf("ch:%d\n",c);
	printf("ch:%d\n",c[124]);
	return 0;
}
