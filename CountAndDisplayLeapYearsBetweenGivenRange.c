//wap to count and display leap years between given range of numbers
#include <stdio.h>
void main()
{
	int a,b,nol=0;
	printf("\n eneter two years");
	scanf("%d %d",&a,&b);
	for(;a<=b;a++)
	{
	if(a%4==0 || a%400==0&&a%100!=0)
	{
	
		printf("\n %d",a);
		nol++;
	}
	}
	
	printf("\n %d",nol);
	
}
