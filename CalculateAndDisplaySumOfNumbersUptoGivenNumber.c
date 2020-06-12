//wap to calculate and display sum of numbers from 1 to given number
#include <stdio.h>
void main()
{
	int a,b,f;
	printf("\n enter a value");
	scanf("%d",&b);
	f=(b*(b+1))/2;
	for(a=1;a<b;a++)
	{
	printf("%d +",a);
	}
	printf("%d =",b);
	printf("%d",f);
}
