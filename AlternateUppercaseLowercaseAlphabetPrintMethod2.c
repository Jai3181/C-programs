//wap to to write the series  AbCdEfGh......
#include <stdio.h>
void main()
{
	int a;
	char c;
	for(a=1,c='A';a<=26;a++,c++)
	{
		if(a%2==0)
		printf("%c",c+32);
		else
		printf("%c",c);
	}
	
}
