<<<<<<< HEAD
/*

* * * * *
    *
    *
    *
    *
    *

*/

#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	clrscr();

	for(i=1;i<=6;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(
				((i==1) && (j>=1 && j<=5)) ||
				((j==3) && (i>=2 && i<=6))
			  )
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}

	getch();
=======
/*

* * * * *
    *
    *
    *
    *
    *

*/

#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	clrscr();

	for(i=1;i<=6;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(
				((i==1) && (j>=1 && j<=5)) ||
				((j==3) && (i>=2 && i<=6))
			  )
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}

	getch();
>>>>>>> 925e6435e0d914ec1f370d7ae6cd2bb01c18f3e8
}