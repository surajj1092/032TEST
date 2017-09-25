#include<stdio.h>
const struct ss{
	int i;
}a={10};
const int func()
{
	printf("%s_begins\n",__func__);
	printf("%s_begins\n",__func__);
	return 10;
}
int main()
{
//	a.i++; error readonly 
	const struct ss *p;
	printf("a.i:%d\n",a.i);
	p=&a;
	p->i=1;
	printf("%s_begins\n",__func__);
	int ret=func();
	printf("ret:%d\n",ret);
	ret++;
	printf("ret:%d\n",ret);
	printf("%s_begins\n",__func__);
	return 0;
}
