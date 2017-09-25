#include<stdio.h>
int main()
{
	int a[8]={6,30,5,4,20,3,2,1};
	int i=0,v1,v2,l=0,sl=0,len,loc,loc1,lo;
	len=(sizeof(a)/4);
	l=a[0];
	sl=a[0];
	printf("len:%d\n",len);
	for(i=0;i<8;i++)
	{
		if ( l<a[i] )
		{
			l=a[i];
			loc=i;	
		}
	}
	for(i=0;i<8;i++)
	{
		if(sl<a[i] && l!=a[i])
		{
			sl=a[i];
			loc1=i;
		}
	}
	printf("l:%d\n",l);
	printf("sl:%d\n",sl);
	v1=l;
	v2=sl;
	if(loc>loc1)
		lo=loc;
	else
		lo=loc1;
	for(i=lo;i>=0;i--)
	{
		if(a[i-1]!=sl && a[i-1]!=l)
		{
			a[i]=a[i-1];	
		}
		else
		{	
			i++;
		}
	}
	for(i=0;i<8;i++)
		printf("a[%d]:%d\n",i,a[i]);
	return 0;
}
