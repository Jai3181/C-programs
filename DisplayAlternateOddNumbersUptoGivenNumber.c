//wap to display alternate odd numbers upto given number
#include <stdio.h>
void main()
{
	int a,b;
	char v;
	v='j';
	printf("\n enter a number");
	scanf("%d",&b);
	for(a=1;a<=b;a++)
	{
		if(a%2!=0 && v=='j')
		{printf("\n %d",a);
		 v='s';
		}
		else if(a%2!=0 && v=='s')
		 v='j';
	}	
 } 
