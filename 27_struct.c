struct req {
	int i:2;
	unsigned int j:2;
	unsigned int k:2;
};

#include<stdio.h>

int main()
{
	struct req a={2,-6,5};
	printf("a.i:%d\na.j:%d\na.k:%d\n",a.i,a.j,a.k);
//	printf("%zu\n",sizeof(a.i));	it cant be apply to bit field
	printf("%zu\n",sizeof(a));	
	return 0;
}
