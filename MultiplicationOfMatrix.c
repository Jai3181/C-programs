//wap for multiplication of matrices
#include <stdio.h>
void main()
{
	int a[5][5],b[5][5],c[5][5],i,j,k,t,r1,c1,r2,c2;
	//first matrix
	printf("\n enter no. of rows for 1st matrix");
	scanf("%d",&r1);
	printf("\n enter no. of columbs for 1st matrix");
	scanf("%d",&c1);
	printf("\nenter %d values for 1st matrix",r1*c1);
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
	//second matrix
	printf("\n enter no. of rows for 2nd matrix");
	scanf("%d",&r2);
	printf("\n enter no. of columbs for 2nd matrix");
	scanf("%d",&c2);
	printf("\nenter %d values for 2nd matrix",r2*c2);
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n2nd matrix is:\n");
	for(i=0;i<r2;i++)
	{
		
		for(j=0;j<c2;j++)
		{printf("%-5d",b[i][j]);
		}
		printf("\n");
	}
	//multiplication matrix
	if(c1==r2)
	{
	printf("\n multiplication matrix is:\n");
	
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				for(k=0,t=0;k<c1;k++)
				{t=t+a[i][k]*b[k][j];}
				c[i][j]=t;
				printf("%-5d",c[i][j]);
			}
			printf("\n");
		}
	}
	else
	printf("\n multiplication not possible :( ");
	
	printf("\n %d =",c[0][0]);
	printf("\n %d =",c[0][1]);
	printf("\n %d =",c[1][0]);
	printf("\n %d =",c[1][1]);
	
	
}
