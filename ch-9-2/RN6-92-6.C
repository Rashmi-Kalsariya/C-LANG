<<<<<<< HEAD
#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,s;
	clrscr();

	for(i=1;i<=5;i++)
	{
		for(s=1;s<=i;s++)
		{
			printf(" ");
		}

		for(j=5;j>=i;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	getch();
=======
#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,s;
	clrscr();

	for(i=1;i<=5;i++)
	{
		for(s=1;s<=i;s++)
		{
			printf(" ");
		}

		for(j=5;j>=i;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	getch();
>>>>>>> 925e6435e0d914ec1f370d7ae6cd2bb01c18f3e8
}