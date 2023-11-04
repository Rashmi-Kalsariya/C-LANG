#include<stdio.h>
#include<conio.h>
main()
{
	const float pi=3.14;
	float r,area;
	clrscr();

	printf("Enter the radius: ");
	scanf("%f",&r);
	area = pi * r * r;

	printf("Area of circle: %.2f",area);

	getch();
}

