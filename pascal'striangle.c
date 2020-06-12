#include <stdio.h>
void main()
{
	int a[20][20],i,j,o;
	o=1;
	for(i=0;i<10;i++)
	{
		j=0;
		do
		{
			if(j==0 || j==i)
			a[i][j]=o;
			else
			a[i][j]=a[i-1][j]+a[i-1][j-1];
			j++;
		}
		while(j<=i+1);
	}
	
	
	for(i=0;i<10;i++)
	{
		for(j=1;j<=10-i;j++)
		printf("%-4s","");
		
		
		for(j=0;j<=i;j++)
		printf("%-8d",a[i][j]);
		printf("\n");
	}
}
