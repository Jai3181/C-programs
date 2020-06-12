//wap to identify if the number is perfect number or not
#include <stdio.h>
void main()
{
	int a,b,c;
	c=0;
	printf("\n enter a number");
	scanf("%d",&b);
	for(a=1;a<b;a++)
		{
			if(b%a==0)
		 		{
				 c+=a;		//c=c+a
		 		 
				}
		}
	if(c==b)
	printf("\n %d is a perfect number",b);
	else
	printf("\n %d is not a perfect number",b);
	
}
