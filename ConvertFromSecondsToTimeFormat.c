#include <stdio.h>
void main()
{
	int sec;
	printf("/n enter seconds");
	scanf("%d",&sec);
	printf("\n hours=%d",sec/3600);
	printf("\n minutes=%d",(sec%3600)/60 );
	printf("\n secounds=%d",(sec%3600)%60);
	printf("\n %d:%d:%d", sec/3600,(sec%3600)/60,(sec%3600)%60);
	printf("\n program over");
}
