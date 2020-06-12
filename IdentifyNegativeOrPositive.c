// wap to check whether a number is negative or not
#include <stdio.h>
void main()
{
int num;
printf("enter a number  :  ");
scanf("%d",&num);
if (num<0)
{
printf("\n%d is -ve", num);
}
else if(num>0)
{
printf("\n%d is +ve", num);
}
else
{
printf("\n%d is 0", num);
}
printf("\nprogram over...");
}
