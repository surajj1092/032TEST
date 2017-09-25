#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,*p1,*p2;
	char *p3,*p4;
	p1=(int *)malloc(sizeof(int)*1);// if we take 7 den it gives 16 extra bytes
	p2=(int *)malloc(sizeof(int)*1);
	printf("%d\n",p1);
	for(i=0;i<8;i++)
	{
		printf("p1:%d\n",(p1+i));
		*(p1+i)=i;
	}
	for(i=0;i<8;i++)
	{
		printf("p2:%d\n",(p2+i));
		*(p2+i)=i;
	}
	p3=(char *)malloc(sizeof(char)*25);// after 24  den it gives 16 extra bytes
		printf("p3:%d\n",p3);
	p4=(char *)malloc(sizeof(char)*1);
		printf("p4:%d\n",p4);
	return 0;
}
