#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	clrscr();

	for(i=1,j=10;i<=10,j>=1;i++,j--)
	{
		printf("%d   %d\n",i,j);
	}

	getch();
}