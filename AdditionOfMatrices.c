#include <stdio.h>
void main()
{
	int a[5][5],b[5][5],i,j,r,c;
	printf("\n enter no. of rows");
	scanf("%d",&r);
	printf("\n enter no. of columbs");
	scanf("%d",&c);
	
	//first matrix
	printf("\nenter %d values for 1st matrix",r*c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n 1st matrix is:\n");
	for(i=0;i<r;i++)
	{
		
		for(j=0;j<c;j++)
		{printf("%-5d",a[i][j]);
		}
		printf("\n");
	}
	//second matrix
	printf("\nenter %d values for 2nd matrix",r*c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n2nd matrix is:\n");
	for(i=0;i<r;i++)
	{
		
		for(j=0;j<c;j++)
		{printf("%-5d",b[i][j]);
		}
		printf("\n");
	}
	//addition matrix
	printf("\naddition matrix is:\n");
	for(i=0;i<r;i++)
	{
		
		for(j=0;j<c;j++)
		{printf("%-5d",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
	//sub matrix
	printf("\nsub matrix is:\n");
	for(i=0;i<r;i++)
	{
		
		for(j=0;j<c;j++)
		{printf("%-5d",a[i][j]-b[i][j]);
		}
		printf("\n");
	}
}
	
