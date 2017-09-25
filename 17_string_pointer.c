#include<stdio.h>
int main()
{
	char *ptr="suraj";//code segment 	
	char a[]="suraj";	//data segment
	ptr++;
//	ptr='a'; not possible because "suraj" in case of pointer is in code segment
	printf("ptr:%s\n",ptr);
	a[1]='Q';
	printf("%s\n",a);
	return 0;
}
