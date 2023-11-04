#include<stdio.h>
#include<conio.h>

main()
{
       float b,h,area;
       clrscr();

       printf("Enter the base: ");
       scanf("%f",&b);
       printf("Enter the height: ");
       scanf("%f",&h);
       area = 0.5*b*h;
       printf("The area of triangle: %.2f",area);
       getch();
 }
