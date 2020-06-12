//wap to reverse the string characters upto given no. of characters
#include <stdio.h>
void main()
{
	int a,b,c;
	char s[30];
	char *p;
	printf("enter a string:");
	gets(s);
	for(a=0;s[a]!='\0';a++)
	c++;
	printf("enter the no. of characters upto which you want to reverse the string:");
	scanf("%d",&b);
	p=&s[b-1];
	for(a=b;a>0;a--)
	{
		printf("%c",*p);
		p--;
	}
	p=&s[b];
	for(a=b;a<c;a++)
	{
		printf("%c",*p);
		p++;
	}
}
	
