#include<stdio.h>
#include<stdlib.h>
int main()
{
	int r=3,c=4,i,j,count=0;
	int *a[r];
	for(i=0;i<r;i++)
	{
		a[i]=(int*)malloc(c*sizeof(int));
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			*(*(a+i)+j)=count++;
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("a[%d][%d]:%d\t",i,j,*(*(a+i)+j));
		printf("\n");
	}
	return 0;
}
