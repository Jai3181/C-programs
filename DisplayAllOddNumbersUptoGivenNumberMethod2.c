#include <stdio.h>
void main()
{
	int a,b;
	printf("\n enter a number");
	scanf("%d",&b);
	for(a=1;a<=b;a++)
	{
		if(a%2!=0)
		printf("\n %d",a);
	}
	
}
