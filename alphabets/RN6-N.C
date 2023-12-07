/*

*      *
* *    *
*  *   *
*   *  *
*    * *
*      *

*/

#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	clrscr();

	for(i=1;i<=6;i++)
	{
		for(j=1;j<=6;j++)
		{
			if(
				((j==1||j==6) && (i>=1 && i<=6)) ||
				((i==2) && (j==2)) ||
				((i==3) && (j==3)) ||
				((i==4) && (j==4)) ||
				((i==5) && (j==5))
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
}