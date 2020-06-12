//wap to validate student marks 
//input : marks name
//output : name,marks,result,total,avg,grade
#include <stdio.h>
int m[5],i,t,avg;
char name[15],grade;
void in();
void validate();
void out();
void main()
{
	in();
	validate();
	out();
}

void in()
{
	printf("\n enter name");
	gets(name);
	printf("\nenter marks of 5 subjects");
	for(i=0;i<5;i++)
	scanf("%d",&m[i]);
}

void validate()
{	
	for(i=0,t=0;i<5;i++)
	{
		if(m[i]>=35)
			t=t+m[i];
		else 
			{t=0;
			break;}
	}
	avg=t/5;
	if(avg>=90)
	grade='A';
	else if(avg>=80)
	grade='B';
	else if(avg>=70)
	grade='C';
	else if(avg>=60)
	grade='D';
	else if(avg>=50)
	grade='E';
	else
	grade='F';
}

void out()
{	printf("\n \n                                 REPORT CARD \n");	

	printf("\n name : %s",name);
	for(i=0;i<5;i++)
	printf("\n marks of subject %d = %d",i+1,m[i]);
	printf("\naverage=%d",avg);
	printf("\ngrade= %c",grade);
	printf("\ntotal = %d",t);
}
