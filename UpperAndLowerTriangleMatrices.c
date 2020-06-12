#include <stdio.h>
void main()
{
	int a[5][5],r1,c1,i,j,z=0;
	printf("\n enter no. of rows for matrix");
	scanf("%d",&r1);
	printf("\n enter no. of columbs for matrix");
	scanf("%d",&c1);
	if(r1==c1)
	{
	printf("\nenter %d values for matrix",r1*c1);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n 1st matrix is:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{printf("%-5d",a[i][j]);
		}
		printf("\n");
	}
	//upper triangle
	printf("\n upper triangle matrix is:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			if(j>=i)
			printf("%-5d",a[i][j]);
			else
			printf("%-5d",z);
		}
		printf("\n");
	}
	//lower triangle
	printf("\n lower triangle matrix is:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			if(j<=i)
			printf("%-5d",a[i][j]);
			else
			printf("%-5d",z);
		}
		printf("\n");
	}
	}
		
}
