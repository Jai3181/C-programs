#include <stdio.h>
void main()

{
	int a,b,c;
	char o;
	printf("\n enter two numbers");
	scanf("%d %d", &a,&b);
	fflush(stdin);
	
	printf("\n enter the operator");
	scanf("%c",&o);
		
	if(o=='+')
	 printf("\n %d",c=a+b);
	else if(o=='-')
	 printf("\n %d",c=a-b);
	else if(o=='*')
	 printf("\n %d",c=a*b);
	else if(o=='/')
	 printf("\n %d",c=a/b);
	else if(o=='%')
	 printf("\n %d",c=a%b);
	else
	 printf("\n invalid operator"); 
	 									
}
