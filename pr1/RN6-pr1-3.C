#include<stdio.h>
#include<conio.h>
main()
{
    float BS,HRA,DA,TA,GS;
    clrscr();
    printf("Enter BS:");
    scanf("%f",&BS);

    HRA = BS*10/100;
    DA = BS*5/100;
    TA = BS*8/100;

    GS = BS+HRA+DA+TA;
    printf("Gross salary:%.2f",GS);
    getch();
}
