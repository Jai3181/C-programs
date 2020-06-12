#include <stdio.h>
void main()
{
	int a,b,n;
	printf("\n enter a number");
	scanf("%d",&b);
	n=0;
	 for(a=1;a<=b;a++)
	 {
	 	if(b%a==0)
	 	n++;
	 }
	if(n==2)
	 printf("\n %d is a prime number",b); 
	 else if(n==1)
	 printf("\n %d is neither prime nor composite number",b);
	 else
	 printf("\n %d is a composite number",b); 
	 
}
