#include<stdio.h>
#include<conio.h>
main()
{
      float a,b,c;
      clrscr();
      printf("Enter first angle:");
      scanf("%f",&a);
      printf("Enter second angle:");
      scanf("%f",&b);
      
      c = (180 - (a+b));
      
      printf("third angle:%.2f",c);
      getch();
}
