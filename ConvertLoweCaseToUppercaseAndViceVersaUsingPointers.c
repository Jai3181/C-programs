//wap to convert small<-->caps in the given string using pointers
#include <stdio.h>
void main()
{
	int a,c;
	char s[30];
	char *p;
	printf("enter a string:");
	gets(s);
	for(a=0,c=0;s[a]!='\0';a++)
	 	{
			p= &s[a];
			if(*p>=65 && *p<=90)
			printf("%c",*p+32);
			else if(*p>=97 && *p<=122)
			printf("%c",*p-32);
			else
			printf("%c"); 
		}	
}
