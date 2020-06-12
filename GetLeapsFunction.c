#include <stdio.h>
void getleaps(int,int);
void main()
{
	getleaps(2000,2900);
}

void getleaps(int a,int b)
{
	int i;
	for(i=a;i<=b;i++)
	{
		if(i%400==0 || i%4==0&&i%100!=0)
		printf("\t %d",i);
	}
}
