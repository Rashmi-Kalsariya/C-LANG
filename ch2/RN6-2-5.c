#include<stdio.h>
#include<conio.h>
main()
{
	float r,perimeter;
	const float pi=3.14;
	printf("Enter radius: ");
	scanf("%f",&r);

	perimeter = 2*pi*r;
	printf("perimeter of circle: %.2f",perimeter);
	getch();
}
