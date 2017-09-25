//Registers are faster than memory to access, so the variables which are most frequently used in a C program can be put in registers using register keyword. The keyword register hints to compiler that a given variable can be put in a register. It’s compiler’s choice to put it in a register or not. Generally, compilers themselves do optimizations and put the variables in register.

//1) If you use & operator with a register variable then compiler may give an error or warning (depending upon the compiler you are using), because when we say a variable is a register, it may be stored in a register instead of memory and accessing address of a register is invalid. Try below program.



//2) register keyword can be used with pointer variables. Obviously, a register can have address of a memory location. There would not be any problem with the below program.


//3) Register is a storage class, and C doesn’t allow multiple storage class specifiers for a variable. So, register can not be used with static . Try below program.

#include<stdio.h>
int main()
{
	int i = 10;
//	register static b;  //error: multiple storage classes in declaration specifiers register static b;
 	register int *a = &i;
  	printf("%d\n", *a);
	register int f=10;
	//int *ptr=&f;  error: address of register variable ‘f’ requested int *ptr=&f;

	return 0;
}
