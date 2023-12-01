/*

* * *
*   *
* * *
* *
*   *
*     *

*/

#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,s;
	clrscr();

	for(i=1;i<=6;i++)
	{
		for(j=1;j<=4;j++)
		{
			if(
				((i==1 || i==3) && (j>=1 && j<=3)) ||
				((i==2 || i==5) && (j==1 || j==3)) ||
				((i==4) && (j==1 || j==2)) ||
				((i==6) && (j==1 || j==4))
			  )
			{
				printf("*  ");
			}
			else
			{
				printf("   ");
			}
		 }
		 printf("\n");
	}

	getch();
}