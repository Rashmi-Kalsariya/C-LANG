#include<stdio.h>
#include<conio.h>
main()
{
	float u,bill,total;
	clrscr();
	printf("Enter used unit:");
	scanf("%f",&u);

	if(u>0 && u<=50)
	{
		bill=u*0.5;
		printf("The bill is: %.2f",bill);
	}
	else if(u>=51 && u<=150)
	{
		u=u-50;
		bill=(u*0.75)+25;
		printf("The bill is: %.2f",bill);
	}
	else if(u>=151 && u<=250)
	{
		u=u-150;
		bill = (u*1.20)+100;
		printf("The bill is: %.2f",bill);
	}
	else if(u>=250)
	{
		u=u-250;
		bill = (u*1.50)+220;
		printf("The bill is: %.2f",bill);
	}
	else
	{
		printf("Invlid Number");
	}

	total=bill+(bill*0.20);
	printf("The Total bill is: %.2f",total);


	clrscr();
	printf("================================================================================\n");
	printf("\tunit\t\tbill\t\t total bill\n");
	printf("\t%.2f\t\t%.2f\t\t   %.2f",u,bill,total);
	getch();
}




