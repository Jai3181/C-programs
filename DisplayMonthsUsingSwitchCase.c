#include <stdio.h>
void main()

{
	int a;
	printf("\n enter a number");
	scanf("%d",&a);
	
	switch(a)
		{
		case 1:
			printf("\n january");
			break;
			
		case 2:
			printf("\n febuary");
			break;
		
		case 3:
			printf("\n march");
			break;
			
		case 4:
			printf("\n april");
			break;
			
		case 5:
			printf("\n may");
			break;
			
		case 6:
			printf("\n june");
			break;
			
		case 7:
			printf("\n july");
			break;
			
		case 8:
			printf("\n august");
			break;		
			
		case 9:
			printf("\n september");
			break;
			
		case 10:
			printf("\n october");
			break;
			
		case 11:
			printf("\n november");
			break;
			
		case 12:
			printf("\n december");	
			break;		
			
		default:
			printf("\n invalid input");							
		}
}
