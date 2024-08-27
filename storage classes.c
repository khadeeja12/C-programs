#include<stdio.h>
int a=3;
void disp()
{
	static int i=1;
	printf("%d \t",i);
	i++;
}
int main()
{
	int b=4;
	printf("\n %d is a local variable",b);
	printf("\n %d is a global variable",a);
	printf("\n static variable is : ");
	disp();disp();disp();
	a=a+b;
	printf("\n %d is a register variable",a);
	return 0;
}