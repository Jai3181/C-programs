#include <stdio.h>
void main()

{
	char v;
	printf("\n enter an alphabet: ");
	scanf("%c",&v);
	
	switch(v)
	{
		case 'a':
		case 'e':
		case 'i':	
		case 'o':			
		case 'u':
			printf("\n %c is a vowel",v);
			break;	
		default:
		    printf("\n %c is a consonant",v);	
						
	}
}
