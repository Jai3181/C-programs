#include <stdio.h>
void main()
{
	int a,b;
	char o;
	printf("\n enter the operator");
	scanf("%c",&o);
	printf("/n enter first number");
	scanf("%d",&a);
	printf("\n enter second number");
	scanf("%d",&b);
	
	printf("%d", (o=='+')?a+b:(o=='-')?a-b:(o=='*')?a*b:(o=='/')?a/b:(o=='%')?a%b:0);
	
}


