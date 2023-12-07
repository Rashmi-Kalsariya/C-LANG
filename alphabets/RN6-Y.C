/*

*           *
  *       *
    *   *
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

	for(i=1;i<=8;i++)
	{
		for(j=1;j<=7;j++)
		{
			if(
				((j==4) && (i>=4 && i<=8)) ||
				((i==1) && (j==1||j==7)) ||
				((i==2) && (j==2 || j==6)) ||
				((i==3) && (j==3 || j==5))
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