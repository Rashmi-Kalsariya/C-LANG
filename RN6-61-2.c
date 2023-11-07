#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	clrscr();
	printf("Enter n: ");
	scanf("%d",&n);

	if(n > 0)
	{
		printf("\n=======================\n");
		printf("THIS IS POSITIVE NUMBER");
		printf("\n=======================");
	}
	else if(n == 0)
	{
		printf("\n=======================\n");
		printf("THIS IS NUTERAL NUMBER");
		printf("\n=======================");
	}
	else
	{
		printf("\n=======================\n");
		printf("THIS IS NEGATIVE NUMBER");
		printf("\n=======================");
	}

	getch();
}
