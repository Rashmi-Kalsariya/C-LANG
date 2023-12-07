#include<stdio.h>
#include<conio.h>
main()
{
	int num;
	clrscr();
	printf("Enter the number:");
	scanf("%d",&num);

	(num%2==0)
		?printf("number is even")
		:printf("number is odd");
	getch();
}
