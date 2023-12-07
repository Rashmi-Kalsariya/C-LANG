/*

* * 
*   *
*   *
* *
*   *
*   *
* *

*/

#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	clrscr();

	for(i=1;i<=7;i++)
	{
		for(j=1;j<=3;j++)
		{
			if(
				((i==1||i==4||i==7) && (j==1||j==2)) ||
				((i==2||i==3||i==5||i==6) && (j==1||j==3))
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
