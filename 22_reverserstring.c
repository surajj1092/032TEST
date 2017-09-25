#include<stdio.h>
void rev(char *r)
{
	int i=0,n=0;
	char *rev;
	while(r[i]!='\0')
	{
		rev[i]=r[i];
		i++;
	}
	n=i;
	printf("size of char is:%d\n",n);
	for(i=1;i<=n;i++)
	{
		r[i-1]=rev[n-i];
	}
	r[i+1]='\0';
}
int main()
{
	char s[12]="suarj singh";
	printf("before reversing:%s\n",s);
	printf("Calling reverser func\n");
	rev(s);
	printf("after reversing:%s\n",s);
	return 0;
}
