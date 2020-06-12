// wap to check if the number is even or odd
#include <stdio.h>
void main()
{
	int num;
	printf("enter a number :");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("\n%d is even",num);
	}
	else 
	{
		printf("\n%d is odd",num);
	}
	printf("\nprogram over");
}
