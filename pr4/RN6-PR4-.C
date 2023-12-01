#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,R=11;
	clrscr();

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",R++);
		}
		printf("\n");
	}
	getch();
}

