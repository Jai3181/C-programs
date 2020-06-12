//wap to split an array into two small arrays
#include <stdio.h>
void main()
{
	int a[10],b[5],c[5],d,e;
	
	printf("\n enter 10 values");
	for(d=0;d<10;d++)
	scanf("%d",&a[d]);
	
	for(d=0,e=0;d<5;d++)
	{
		b[d]=a[e];
		c[d]=a[e+1];
		e+=2;
	}
	printf("\n first array is: ");
	for(d=0;d<5;d++)
	printf("%d ",b[d]);
	
	printf("\nsecond array is: ");
	for(d=0;d<5;d++)
	printf("%d ",c[d]);
}
