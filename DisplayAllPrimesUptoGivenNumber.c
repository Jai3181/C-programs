#include <stdio.h>
void main()
{
	int a,b,n,num,lc;
	printf("\n enter a number");
	scanf("%d",&num);
	
		lc=0;
		for(b=2;b<=num;b++)
		{
		
			n=0;
			for(a=1;a<=b;a++)
			{
				lc++;
				if(b%a==0){				
					n++;
				}
			}
			
			if(n==2)
			printf("   %d",b);
		}
		printf("\n loop count= %d",lc);
}

