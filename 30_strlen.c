#include<stdio.h>
#include<string.h>
int main()
{
	char s[]="suraj";
	int i=0;
	printf("finding string len\n");
	while(s[i]!='\0')
	{
		i++;
	}
	printf("found string len:%d\n",i);
	printf("found string len:%d\n",strlen(s));
}
