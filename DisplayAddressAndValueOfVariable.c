//wap to display variable address and value using & and *
#include <stdio.h>
void main()
{
	int a;
	int *p;
	a=10;
	p=&a;
	printf("\n value of a = %d", *(&a));
	printf("\n address of a = %d",&a);
}
