//wap to rotate arrays
#include <stdio.h>
void main()
{
	int a[5],b,c,d,e;
	printf("\n enter 5 numbers: ");
	for(b=0;b<5;b++)
	scanf("%d",&a[b]);
	
	printf("enter the number of times you want to rotate: ");
	scanf("%d",&e);
	
	for(d=1;d<=e;d++)
	{
		c=a[0];
		for(b=0;b<4;b++)
		{   
			a[b]=a[b+1];
		}
		a[4]=c;
		printf("\n new array is: ");
		for(b=0;b<5;b++)
		printf("%d",a[b]);
	}
}
