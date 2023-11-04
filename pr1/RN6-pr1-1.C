#include<stdio.h>
#include<conio.h>
main()
{
    float f,c;
    clrscr();
    printf("Enter c:");
    scanf("%f",&c);
    
    f= (c*9/5)+32;
    
    printf("temperature in fahrenheit:%.2f",f);
    getch();
}
