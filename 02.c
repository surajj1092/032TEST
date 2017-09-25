#include<stdio.h>
typedef void v;
typedef int i;

int main()
{
    v fun(i, i);
    fun(2, 3);
    return 0;
}
v fun(i a, i b)
{
    i s=2;
    float i;
    printf("%zu,", sizeof(i));
    printf(" %d\n", a*b*s);
}
