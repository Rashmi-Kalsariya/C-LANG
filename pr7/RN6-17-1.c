#include<stdio.h>

int sum(int a,int b)
{
	printf("Enter A: ");
	scanf("%d",&a);
	printf("Enter B: ");
	scanf("%d",&b);
	return a+b;
}

int sub(int a,int b)
{
	printf("Enter A: ");
	scanf("%d",&a);
	printf("Enter B: ");
	scanf("%d",&b);
	return a-b;
}

int mul(int a,int b)
{
	printf("Enter A: ");
	scanf("%d",&a);
	printf("Enter B: ");
	scanf("%d",&b);
	return a*b;
}

int div(int a,int b)
{
	printf("Enter A: ");
	scanf("%d",&a);
	printf("Enter B: ");
	scanf("%d",&b);
	return a/b;
}

int mod(int a,int b)
{
	printf("Enter A: ");
	scanf("%d",&a);
	printf("Enter B: ");
	scanf("%d",&b);
	return a%b;
}

void calc()
{
	int a,b,choice;
	
	
	do
	{
		printf("\nPress 0 for EXIT\n");
		printf("Press 1 for SUM\n");
		printf("Press 2 for SUB\n");
		printf("Press 3 for MUL\n");
		printf("Press 4 for DIV\n");
		printf("Press 5 for MOD\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		
	switch(choice)
	{
		case 1:
				printf("\n================\n");
				printf("The Sum is:  %d",sum(a,b));
				printf("\n================\n");
				break;
				
		case 2:
				printf("\n================\n");
				printf("The Sub is:  %d",sub(a,b));
				printf("\n================\n");
				break;
				
		case 3:
				printf("\n================\n");
				printf("The mul is:  %d",mul(a,b));
				printf("\n================\n");
				break;
				
		case 4:
				printf("\n================\n");
				printf("The div is:  %d",div(a,b));
				printf("\n================\n");
				break;
				
		case 5:
				printf("\n================\n");
				printf("The mod is:  %d",mod(a,b));
				printf("\n================\n");
				break;
				
		case 0:
				printf("EXITING...");
				break;
	}
	}while(choice != 0);
}
