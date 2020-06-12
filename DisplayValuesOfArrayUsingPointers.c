//wap to display value of array using pointers
#include <stdio.h>
void main()
{
	int a[10],b;
	int *p;
	printf("enter 10 values:");
	for(b=0;b<10;b++)
	scanf("%d",&a[b]);
	p= &a[0];
	for(b=0;b<10;b++)
	{
		printf("%d \t",*p);
		p++;
	}
}

