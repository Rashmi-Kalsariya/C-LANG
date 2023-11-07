#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	clrscr();

	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);

	if(a<b)
	{
		printf("\n============\n");
		printf("A is minimum");
		printf("\n============");
	}
	else
	{
		printf("\n===========\n");
		printf("B is minmum");
		printf("\n===========");
	}
	getch();
}

