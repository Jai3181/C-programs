//wap to display entered values in matrix form of given format
#include <stdio.h>
void main()
{
	int a[5][5],i,j,r,c;
	printf("\n enter no. of rows");
	scanf("%d",&r);
	printf("\n enter no. of columbs");
	scanf("%d",&c);
	
	printf("\nenter %d values",r*c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n matrix is:\n");
	for(i=0;i<r;i++)
	{
		
		for(j=0;j<c;j++)
		{printf("%-5d",a[i][j]);
		}
		printf("\n");
	}
	
	//transpose matrix
	printf("\n transpose matrix is:\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{printf("%-5d",a[j][i]);
		}
		printf("\n");
	}
	
	
}
