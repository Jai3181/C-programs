#include <stdio.h>
void main()
{
	char name[20];
	int m1,m2,m3,m4,m5;
	
	printf("\n enter student name:");
	scanf("%s",name);
	
	printf("\nenter marks");
	scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
	
	if(m1<35||m2<35||m3<35||m4<35||m5<35)
		printf("\n%S has failed",name);
	else
		printf("\n%s has passed",name);
	
	printf("\n [program over.........");			
	
	
	
}
