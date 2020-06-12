//wap to take 10 names and display alternate names in reverse order
#include <stdio.h>
void main()
{
	int a,b;
	char n[10][10],v;
	v='j';
	printf("enter 10 names");
	for(a=0;a<10;a++)
	gets(n[a]);
	printf("reverse alternate are: ");
	for(a=0;a<10;a++)
	{
		if(v=='j')
		{
			printf("%s",n[a]);
			v='s';
			printf("\n");
		}
		else if(v=='s')
		{
			b=0;
			for(b=0;n[a][b]!='\0';b++);
			b--;
			for(;b>=0;b--)
			{
				printf("%c",n[a][b]);
				v='j';
			}
			printf("\n");
		}
	}
}
