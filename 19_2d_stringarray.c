#include<stdio.h>
int main()
{
	char *a[2]={"hello","bye"};
	printf("%s\n",a[0]);
	printf("%s\n",(*(a+0)+1));//ello
//	printf("%s\n",*(*(a+0)+1)); segmentation
	printf("%s\n",a[0]+1);
	return 0;
}
