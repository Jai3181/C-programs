#include <stdio.h>
void main()
{
	int a[10][10],i,j,o;
	o=1;
	for(i=0;i<10;i++)
	{
		j=0;
		do
		{
			if(j==0 || j==i+1)
			printf("%-3d",o);
			else
			{
				printf("%-3d ",a[i-1][j]+a[i-1][j-1]);
			}
			j++;
		}
		while(j<=i+1);
		
		printf("\n");
	}
	
	
}
