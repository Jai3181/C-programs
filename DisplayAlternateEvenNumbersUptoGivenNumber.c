//wap to display alternate even numbers upto given number
#include <stdio.h>
void main()
{	char v;
	int a,b;
	v='j';
	printf("\n enter a number");
	scanf("%d",&b);
	for(a=1;a<=b;a++)
	{	
		if(a%2==0 && v=='j')
		{
		   	printf("\n %d",a);	
			v='s';	
		}
		else if(a%2==0 && v=='s')
		{		
			v='j';	
		}
	}	
}
