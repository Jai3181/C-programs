//wap to display alternate alphabets from z-a
#include <stdio.h>
void main()
{
	char a,v;
	v='J';
	for(a='z';a>='a';a--)
	{
		if(v=='J')
		{
		printf("%c ",a);
		v='S';
		}
		else
		v='J';
	}
}
