#include <stdio.h>
struct student
{	char name[15],grade[3],result[5];
	int marks[5],total;
	float avg;	
};
void main()
{
	int i,j;
	struct student s[5];
	for(j=0;j<5;j++)
	{	
	//input block
		printf("\n enter student name:");
		fflush(stdin);
		gets(s[j].name);
		for(i=1;i<=5;i++)
		{
			printf("enter marks of subject %d: ",i);
			scanf("%d",&s[j].marks[i-1]);		
		}
		//validation block
		s[j].total=0;
		for(i=1;i<5;i++)
		{
			s[j].total+=s[j].marks[i];
		}
		if(s[j].marks[0]>=35&&s[j].marks[1]>=35&&s[j].marks[2]>=35&&s[j].marks[3]>=35&&s[j].marks[4]>=35)
			strcpy(s[j].result,"pass");
		else
			strcpy(s[j].result,"fail");
			
		s[j].avg=s[j].total/5;
		if(s[j].avg>=90)
		strcpy(s[j].grade,"A+");
		else if(s[j].avg>=80)
		strcpy(s[j].grade,"A");
		else if(s[j].avg>=70)
		strcpy(s[j].grade,"B+");
		else if(s[j].avg>=60)
		strcpy(s[j].grade,"B");
		else
		strcpy(s[j].grade,"C");
	}
	//output block
		printf("\n__________________________________________________________________");
		printf("\n________________________________REPORT__________________________________");
		printf("\n_____________________________ABC school__________________________________");
		
		for(j=0;j<5;j++)
	{printf("\n");
		printf("%15s |",s[j].name);
		for(i=0;i<5;i++)
		{
			printf("%-5d |",s[j].marks[i]);
		}
		printf("%-5d |",s[j].total);
		printf("%-.2f|",s[j].avg);
		printf("%-7s |",s[j].grade);
		printf("%-7s |",s[j].result);
		printf("\n");
	}
}



