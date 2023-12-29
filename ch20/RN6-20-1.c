#include<stdio.h>

struct student
{
	int id;
	char name[20];
	int age;
	char course[20];
	char city[20];
	int std;
	char school[20];
};
void main()
{
	int i;
	struct student s[3];
	fflush(stdin);
	
	for(i=0;i<3;i++){
	
	printf("Enter id\t : ");
	scanf("%d",&s[i].id);
	printf("Enter name\t : ");
	scanf("%s",&s[i].name);
	printf("Enter age\t : ");
	scanf("%d",&s[i].age);
	printf("Enter course\t : ");
	scanf("%s",&s[i].course);
	printf("Enter city\t : ");
	scanf("%s",&s[i].city);
	printf("Enter std\t : ");
	scanf("%d",&s[i].std);
	printf("Enter school\t : ");
	scanf("%s",&s[i].school);
	printf("\n");

	}
	
	for(i=0;i<3;i++){
	
		printf("\nName\t: %s\n",s[i].name);
		printf("ID\t: %d\n",s[i].id);
		printf("Age\t: %d\n",s[i].age);
		printf("cours\t: %s\n",s[i].course);
		printf("City\t: %s\n",s[i].city);
		printf("Std\t: %d\n",s[i].std);
		printf("School\t: %s",s[i].school);
		printf("\n");
	}
	
}
