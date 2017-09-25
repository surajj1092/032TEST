#include<stdio.h>
int main()
{
	printf("Checking\n");
	func();
	func();
	static int i;//each func will creat their own i variable everyone will have different address but will be in data segment
	printf("address :%u\ti:%d\n",&i,i);
	func1();
	func1();
	return 0;
}
func()
{
	static int i=10;
	printf("address :%u\ti:%d\n",&i,i);
	i++;
}
func1()
{
	static int i=210;
	printf("address :%u\ti:%d\n",&i,i);
	i++;
}
