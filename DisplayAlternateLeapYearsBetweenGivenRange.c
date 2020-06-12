//wap to count and display alternate leap years between given range of numbers
#include <stdio.h>
void main()
{	
	char v;
	int a,b;
	v='j';
	printf("\n eneter two years");
	scanf("%d %d",&a,&b);
	for(;a<=b;a++)
	{
		if((a%4==0 || a%400==0&&a%100!=0) && v=='j')
		{
			printf("\n %d",a);
			v='s';
		}
		else if((a%4==0 || a%400==0&&a%100!=0) && v=='s')
			v='j';
	}

	
}
