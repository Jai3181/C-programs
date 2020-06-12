//wap to check if the candidate is eligible or not as per the conditions given conditions
# include <stdio.h>
void main()
{
	char gen;
	int age;
	printf("\n enter the gender");
	scanf("%c",&gen);
	printf("\n enter the age");
	scanf("%d",&age);
	if(gen=='m')
	{
		if(age>=25)
			printf("\neligible");
		else
			scanf("\n not eligible");
	}
	else if(gen=='f')
	{
		if(age>=20)
			printf("\neligible");
		else
			printf("\n not eligible");
	}
	else
		printf("\n not eligible");
	
	printf("\n program over");
}
