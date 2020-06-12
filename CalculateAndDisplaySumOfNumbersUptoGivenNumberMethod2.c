//calculate and display sum
#include<stdio.h>
void main()
{
	int a,b,c=0;
	printf("\n enter a number");
	scanf("%d",&b);
	for(a=1;a<b;a++)
	{
		printf("%d +",a);
		c=a+c;
	}
	c=b+c;
	printf("%d = %d",b,c);
}
