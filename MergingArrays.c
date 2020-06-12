//wap to merge 2 arrays
#include <stdio.h>
void main()
{
	int a[5],b[5],c[10],d,e;
	
	printf("\n enter 5 values : ");
	for(d=0;d<5;d++)
	scanf("%d",&a[d]);
	
	printf("\n enter 5 values : ");
	for(d=0;d<5;d++)
	scanf("%d",&b[d]);
	
	
	for(d=0,e=0;d<5;d++)
	{
		c[e]=a[d];
		c[e+1]=b[d];
		e+=2;
	}
	printf("\n first array is: ");
	for(d=0;d<5;d++)
	printf("%d ",a[d]);
	
	printf("\n second array is: ");
	for(d=0;d<5;d++)
	printf("%d ",b[d]);
	
	printf("\n merged array is :");
	for(e=0;e<10;e++)
	printf("%d ",c[e]);
}
