//wap to take 10 names ad display alternate names in capital letters
#include <stdio.h>
void main()
{
	char n[10][10],v;
	int a,b,c;
	printf("\n enter 10 names");
	for(a=0;a<10;a++)
	gets(n[a]);
	v='j';
	printf("\n alternate capital are: ");
	for(a=0;a<10;a++)
	{
		if(v=='j')
		{
			printf("%s",n[a]);
			v='s';
			printf("\n");
		}
		else 
		{	
			for(b=0;n[a][b]!='\0';b++)
			{printf("%c",n[a][b]-32);}
			v='j';
			printf("\n");
		}
	}
}
