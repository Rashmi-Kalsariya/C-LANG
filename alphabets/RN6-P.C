/*

* * *
*    *
*    *
* * *
*
*
*

*/

#include<stdio.h>
#include<conio.h>
main()
{
	char i,j;
	clrscr();

	for(i=1;i<=7;i++)
	{
		for(j=1;j<=4;j++)
		{
			if(
				((j==1) && (i>=1 && i<=7)) ||
				((i==1 || i==4) && (j==2 || j==3)) ||
				((i==2 || i==3) && (j==4))
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