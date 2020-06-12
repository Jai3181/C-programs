//wap to display alternate alphabets from a-z
#include <stdio.h>
void main()
{
	char a,v;
	v='J';
	for(a='a';a<='z';a++)
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
