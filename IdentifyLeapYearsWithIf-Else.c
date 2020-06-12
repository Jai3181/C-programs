//WAP to check if the given 
#include <stdio.h>
void main()
{
	int year;
	printf("\nenter the year");
    scanf("%d",&year);
    
    if(year%400==0)    
		printf("\n%d is a leap year",year);	
    else if(year%100!=0)
    {
    	if(year%4==0)
    		printf("\n%d is a leap year",year);
    	
    	else 
    		printf("\n%d is not a leap year",year);
	}
	else
		printf("\n%d is not a leap year",year);
	
	printf("\nprogram over");
}

