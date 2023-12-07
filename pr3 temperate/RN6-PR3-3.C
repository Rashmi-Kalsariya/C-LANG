#include<stdio.h>
#include<conio.h>
main()
{
	int n,fd,ld,sum=0;
	clrscr();

	printf("Enter any number: ");
	scanf("%d",&n);

	ld=n%10;

	while(n>10)
	{
		n=n/10;
	}
	fd=n;
	sum=fd+ld;

	printf("\n===========================");
	printf("\nTHE SUM OF FD AND LD IS: %d",sum);
	printf("\n===========================");


	getch();
}
