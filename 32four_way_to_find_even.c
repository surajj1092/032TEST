#include<stdio.h>
int main()
{
	int no,num;
	printf("enter the number\n");
	scanf("%d",&no);
	if(no%2==0)
	{
		printf("modular:even\n");
	}
	else
	{
		printf("modular:not even\n");
	}
	if((no/2)*2==no)
	{
		printf("divide:even\n");
	}
	else
	{
		printf("divide:not even\n");
	}

	num=no;
	num=num>>1;
	num=num<<1;
	if(no==num)							//if((num>>1)<<1==num)
	{
		printf("shiting by one:even\n");
	}
	else
	{
		printf("shiting by one:not even\n");
	}
	if((no&1)==0)
	{
		printf("anding with one by one:even\n");
	}
	else
	{
		printf("anding with one by one:not even\n");
	}
	return 0;
}
