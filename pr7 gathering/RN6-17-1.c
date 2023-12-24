#include<stdio.h>

int sum(int a,int b)
{
	printf("\nEnter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	return a+b;
}

int sub(int a,int b)
{
	printf("\nEnter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	return a-b;
}

int mt(int a,int b)
{
	printf("\nEnter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	return a*b;
}

int div(int a,int b)
{
	printf("\nEnter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	return a/b;
}

int mod(int a,int b)
{
	printf("\nEnter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	return a%b;
}

void calc()
{
	int a,b,choice;
	
	do
	{
		printf("press 0 = EXIT");
		printf("\npress 1 = SUM");
		printf("\npress 2 = SUB");
		printf("\npress 3 = MUL");
		printf("\npress 4 = DIV");
		printf("\npress 5 = MOD\n\n");
		
		printf("Enter your choce: ");
		scanf("%d",&choice);
		
	switch(choice)
	{
		case 0:
		 	printf("\n============");
			printf("\nEXITING...");
			printf("\n============\n");
			break;
			
		case 1: 
			printf("\n===================");
			printf("\n THE SUM IS : %d\n",sum(a,b));
			printf("\n===================\n\n");
			break;
		
		case 2: 
			printf("\n===================");
			printf("\n THE SUB IS : %d\n",sub(a,b));
			printf("\n===================\n\n");
			break;
			
		case 3: 
			printf("\n===================");
			printf("\n THE MUL IS : %d\n",mt(a,b));
			printf("\n===================\n\n");
			break;
			
		case 4: 
			printf("\n===================");
			printf("\n THE DIV IS : %d\n",div(a,b));
			printf("\n===================\n\n");
			break;
			
		case 5: 
			printf("\n==================");
			printf("\n THE MOD IS : %d\n",mod(a,b));
			printf("\n===================\n\n");
			break;	
			
		default:
			printf("\n===================");
			printf("\nINVALID NUMBERS....\n");
			printf("\n===================\n\n");
			break;
	}
	
	}while(choice!=0);
}
