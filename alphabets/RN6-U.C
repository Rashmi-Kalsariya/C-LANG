/*

*     *
*     *
*     *
*     *
*     *
  * *
*/

#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	clrscr();

	for(i=1;i<=6;i++)
	{
		for(j=1;j<=4;j++)
		{
			if(
				((j==1||j==4) && (i>=1 && i<=5)) ||
				((i==6) && (j==2 || j==3))
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