//wap to display all perfect numbers upto given number
#include <stdio.h>
void main()
{
	int a,b,c,d;
	
	printf("\n enter a number");
	scanf("%d",&d);
	for(b=1;b<=d;b++)
	{
		c=0;
		for(a=1;a<b;a++)
			{
				if(b%a==0)
			 		{
					 c+=a;		//c=c+a
			 		 
					}
			}
		if(c==b)
		printf("\n %d ",b);
	}
		
}
