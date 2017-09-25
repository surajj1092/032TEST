#include<stdio.h>
#include<stdlib.h>
int mystrlen(char *s)
{
	int i=0;
	while(*(s+i)!='\0')
	{
		
		i++;
	}
	return i;
}
void mystrcpy(char *v,char *s)
{
	int i=0;
	while(*(s+i)!='\0')
	{
		*(v+i)=*(s+i);
		i++;
	}
	*(v+i-1)='\0';
}
void mystrncpy(char *v,char *s,int n)
{
	int i=0;
	while(i<n)
	{
		*(v+i)=*(s+i);
		i++;
	}
}
int main()
{
	char s[]="hello";
	char v[5];
	char z[5];
	int ret=0;
	printf("strlen:%zu\n",strlen(s));	//gives size 5
	printf("sizeof:%zu\n",sizeof(s));	//gives size including null character 6
	ret=mystrlen(s);
	printf("strlen ret:%d\n",ret);		//gives size 5
	mystrcpy(v,s);
	printf("v:%s\n",v);			//gives size 5
	mystrncpy(z,s,3);
	printf("v:%s\n",z);			//gives size 5
	return 0;
}
