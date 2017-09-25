#include<stdio.h>
int flag =0;
int main()
{
	int a[]={11,22,44,105,33,99,66,88};
	int i,l=a[0],sl=a[0],loc,sloc,c;
	int size=(sizeof(a)/4);
	for(i=0;i<size;i++)
	printf("a[%d]:%d\n",i,a[i]);
	for(i=0;i<size;i++)
	{
		if(l<a[i])
		{
			l=a[i];
			loc=i;
		}
	}
	for(i=0;i<size;i++)
	{
		if(sl<a[i] && l!=a[i])
		{
			sl=a[i];
			sloc=i;
		}
	}
	printf("l:%d,location:%d\n",l,loc);
	printf("sl:%d,location:%d\n",sl,sloc);
	if(loc>sloc)
		c=loc;
	else
		c=sloc;
	for(i=c;i>1;i--)
	{
		if(a[i-1]!=sl && a[i-1]!=l && flag==0)
			a[i]=a[i-1];
			
		else
			flag=1;
		if(flag==1)
			a[i]=a[i-2];
		
	}
	a[0]=l;
	a[1]=sl;
	for(i=0;i<size;i++)
	printf("a[%d]:%d\n",i,a[i]);
	return 0;
}
