/*wap to rearrange the values of array as given below
(a)arrange all evens followed by odds
(b)asc sorting of even followed by des sorting of odd*/
#include <stdio.h>
void main()
{
	int a[10],b,e,o,c[10],d[10],f,g,i,A[10],B[10],sv;
	printf("\n enter 10 numbers");
	for(b=0;b<10;b++)
	scanf("%d",&a[b]);
	
	printf("\ninput array is:");
	for(b=0;b<10;b++)
	printf("%d ",a[b]);
	
	for(b=0,e=0;b<10;b++)
	{
		if(a[b]%2==0)
		e++;
		o=10-e;
	}
	printf("\n no of even inputs: %d",e);
	printf("\n no of odd inputs: %d",o);
	
	for(b=0,f=0,g=0;b<10;b++)
	{
		if(a[b]%2==0)
		{
			 c[f]=a[b]; //evens
			 f++;
		}
		else if(a[b]%2!=0)
		{
			 d[g]=a[b]; //odds
			 g++;
		}
	}
	printf("\n odd array is: ");
	for(g=0;g<o;g++)
	printf("%d ",d[g]);
	
	printf("\n even array is: ");
	for(f=0;f<e;f++)
	printf("%d ",c[f]);
	
	for(f=0,i=0;f<e;f++)
	{
		A[i]=c[f];
		i++;
	}
	for(g=0;g<o;g++)
	{
		A[i]=d[g];
		i++;
	}
	printf("\n array for (1) is: ");
	for(i=0;i<10;i++)
	printf("%d ",A[i]);
	
	for(b=0;b<e;b++)
	{
		for(f=0;f<e-b;f++)
		{
			if(c[f]>c[f+1])
			{
				sv=c[f];
				c[f]=c[f+1];
				c[f+1]=sv;
			}
		}
	}
	for(b=0;b<o;b++)
	{
		for(g=0;g<o-b;g++)
		{
			if(d[g]<d[g+1])
			{
				sv=d[g];
				d[g]=d[g+1];
				d[g+1]=sv;
			}
		}
	}
	for(f=0,i=0;f<e;f++)
	{
		B[i]=c[f];
		i++;
	}
	for(g=0;g<o;g++)
	{
		B[i]=d[g];
		i++;
	}
	printf("\n array for (2) is: ");
	for(i=0;i<10;i++)
	printf("%d ",B[i]);
	
	
}
