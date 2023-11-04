#include<stdio.h>
#include<conio.h>
main()
{
	float l,h;
	clrscr();

	printf("Enter length: ");
	scanf("%f",&l);
	printf("Enter height: ");
	scanf("%f",&h);

	printf("The area of rectangle: %.2f",l*h);
	getch();
}
