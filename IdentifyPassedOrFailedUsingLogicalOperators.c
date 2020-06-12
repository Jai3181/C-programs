//wap to check if the student passed or failed
#include <stdio.h>
void main()
{
	char name[20];
	int m1,m2,m3,m4,m5;
	
	printf("\nenter student name");
	scanf("%s",name);
	
	printf("\nenter the marks");
	scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
	
	if(m1>=35 && m2>=35 && m3>=35 && m4>=35 && m5>=35)
		printf("\n%s has passed",name);
	else
		printf("\n%s has failed",name);
		
	printf("\n program over............");		
	
	
}
