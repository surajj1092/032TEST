#include<stdio.h>
int main()
{
	char *s="hello";
	const char *p="hello";// in case of string these two are same
	char *const y="hello";
	printf("%s\n",s);
//	s[1]='d'; can,t change
	s="bye";
	p="bye";
	printf("%s\n",s);
	printf("%s\n",p);
//	y="bye";  error: assignment of read-only variable ‘y’
	printf("%s\n",y);
	char q[]="hello";
	printf("%s\n",q);
	q[1]='n';
	printf("%s\n",q);
	const char r[]="suraj";
	printf("r:%s\n",r);
//	r[1]='n';//error: assignment of read-only location ‘r[1]’  r[1]='n';
	char *ss=r;
	printf("r:%s\n",r);
	*(ss+1)='l';
	printf("r:%s\n",r);
	return 0;
}
