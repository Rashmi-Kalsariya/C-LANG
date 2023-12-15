#include<stdio.h>

void div()
{
	int n;
	printf("Enter Any Number: ");
	scanf("%d",&n);
	
	if(n%5==0 && n%3==0)
	{
		printf("================================");
		printf("\nTHIS NUMBER IS DIVISIBLE BY 3&5");
		printf("\n================================");
	}
	else
	{
		printf("===================================");
		printf("\nTHIS NUMBER IS NOT DIVISIBLE BY 3&5");
		printf("\n===================================");
	}
}

void main()
{
	div();
}
