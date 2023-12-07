/*

 * * *
*
*
*
 * * *
 
*/

#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	clrscr();

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=4;j++)
		{
			if((i==1||i==5) && (j>=2 && j<=4)||
			   (i>=2 && i<=4) && (j==1))
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
}
