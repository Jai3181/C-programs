#include <stdio.h>
void main()

{
	char o;
	int a,b;
	


	printf("\n enter two numbers");
	scanf("%d %d",&a,&b);
	fflush(stdin);
		printf("\n enter the operator");
	scanf("%c",&o);
	switch(o)
	{
		case '+':
			printf("\n %d+%d=%d",a,b,a+b);
			break;
		case '-':
			printf("\n %d-%d=%d",a,b,a-b);
			break;
		case '*':
			printf("\n %d*%d=%d",a,b,a*b);
			break;
		case '/':
			printf("\n %d/%d=%d",a,b,a/b);	
			break;	
		case '%':
			printf("\n %d %% %d=%d",a,b,a%b);
			break;
		default:
			printf("\n invalid operator");		
	}
}
