//wap to display alternate prime numbers upto given number
#include <stdio.h>
void main()
{	char v;
	int a,b,n,c;
	printf("\n enter a number");
	scanf("%d",&c);
	v='j';
	
		for(b=2;b<=c;b++)
		{
		
			n=0;
			for(a=1;a<=b;a++)
			{
				if(b%a==0)			
				n++;
			}
			
			if(n==2 && v=='j')
			{
			printf("   %d",b);
			v='s';
			}
			else if(n==2 && v=='s')
			v='j';
		}
}
