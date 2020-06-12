//wap to add and display
#include <stdio.h>
void main()
{
	int a,b,c,n;
	printf("\n enter a number");
	scanf("%d",&n);
	a=0;
	b=0;
	c=a+b;
	for(b=0;b<=n;b++)
	{ 
		printf(" %d",c);
		a=c;
		c=a+b;
	
	}
}
