<<<<<<< HEAD
#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,s;
	clrscr();

	for(i=5;i>=1;i--)
	{
		for(s=5;s>=1-i;s--)
		{
			printf(" ");
		}
		for(j=i;j<=5;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	getch();
=======
#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,s;
	clrscr();

	for(i=5;i>=1;i--)
	{
		for(s=5;s>=1-i;s--)
		{
			printf(" ");
		}
		for(j=i;j<=5;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	getch();
>>>>>>> 925e6435e0d914ec1f370d7ae6cd2bb01c18f3e8
}