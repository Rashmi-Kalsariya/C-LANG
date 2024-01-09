#include<stdio.h>

struct subject
{
	int chem;
	int phy;
	int maths;
};

struct student
{
	int roll;
	char name[20];
	struct subject sub;
	int total;
	float per;
};

void main()
{
	
	struct student s[5];
	int i;
	
	for(i=0;i<5;i++)
	{
	system("cls");
	printf("Enter Student %d Information\n",i+1);
	printf("Enter Roll No :");
	scanf("%d",&s[i].roll);
	fflush(stdin);
	printf("Enter Name :");
	scanf("%s",&s[i].name);
	printf("Enter Marks Of Subjects \n");
	printf("Chemistry :");
	scanf("%d",&s[i].sub.chem);
	printf("Physics :");
	scanf("%d",&s[i].sub.phy);
	printf("Mathematics :");
	scanf("%d",&s[i].sub.maths);	
	
	s[i].total=(s[i].sub.chem + s[i].sub.phy + s[i].sub.maths);
	
	s[i].per = s[i].total/3.00;	
	}  
	
	system("cls");
	
	printf("RollNo\t\tName\t\tChemistry\tPhysics\t\tMaths\t\tTotal\t\tPercentage\n");
	
	for(i=0;i<5;i++)
	{
		
		printf("%d\t\t%s\t\t%d\t\t%d\t\t%d\t\t%d\t\t%.2f\n",s[i].roll,s[i].name,s[i].sub.chem,s[i].sub.phy,s[i].sub.maths,s[i].total,s[i].per);
		
	}
}
