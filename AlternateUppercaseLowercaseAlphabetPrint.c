//wap to to write the series  AbCdEfGh......
#include <stdio.h>
void main()
{
	int a;
	char c,v;
	v='j';
	for(c='A';c<='Z';c++)
	{
		if(v=='j')
		{printf("%c",c);
		v='s';}
		else if(v=='s')
		{printf("%c",c+32);
		v='j';}
	}
	
}
