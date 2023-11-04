#include<stdio.h>
#include<conio.h>
main()
{
	float p,r,t,interest;
	clrscr();

	printf("Enter principl amount: ");
	scanf("%f",&p);
	printf("Enter rate of interest: ");
	scanf("%f",&r);
	printf("Enter time: ");
	scanf("%f",&t);

	interest = (p*r*t)/100;
	printf("simple interest: %.2f",interest);
	getch();
}
