#include<stdio.h>
int func(char []);
int main()
{
	char s[]="123";
	func(s);
	return 0;
}
int func(char a[])
{
	if (a[1]=='\0') return 0;
//	printf("before a[1]:%c\n",a[1]);
/	func(a+1);
//	printf("after one tym a[1]:%c\n",a[1]);
	func(a+1);
	printf("after two tym a[1]:%c\n",a[1]);
//	printf("a[0]:%c\n",a[0]);
}
