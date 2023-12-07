#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,choice,y;
	clrscr();

	do
	{

	printf("press.....\n");
	printf("1)ADDTION\n");
	printf("2)SUBTRACTION\n");
	printf("3)MULTIPLICATION\n");
	printf("4)DIVISON\n");
	printf("0)EXIT\n");

	printf("\nEnter your choice: ");
	scanf("%d",&choice);


		switch(choice)
		{
			case 1:
				printf("\n================\n");
				printf("Enter a & b: ");
				scanf("%d%d",&a,&b);
				printf("================\n");
				printf("----------\n");
				printf("Sum is: %d",a+b);
				printf("\n----------\n");
				printf("\nPress any key for next...>>>");
				getch();
				clrscr();
				break;

			case 2:
				printf("\n================\n");
				printf("Enter a & b: ");
				scanf("%d%d",&a,&b);
				printf("\n================\n");
				printf("----------\n");
				printf("Sub is: %d",a-b);
				printf("\n----------\n");
				printf("\nPress any key for next...>>>");
				getch();
				clrscr();
				break;

			case 3:
				printf("\n================\n");
				printf("Enter a & b: ");
				scanf("%d%d",&a,&b);
				printf("================\n");
				printf("----------\n");
				printf("Mul is: %d",a*b);
				printf("\n----------\n");
				printf("\nPress any key for next...>>>");
				getch();
				clrscr();
				break;

			case 4:
				printf("\n================\n");
				printf("Enter a & b: ");
				scanf("%d%d",&a,&b);
				printf("================\n");
				printf("------------\n");
				printf("Div is: %.2f",(float)a/(float)b);
				printf("\n------------\n");
				printf("\nPress any key for next...>>>");
				getch();
				clrscr();
				break;

			case 0:

				printf("\n-----------------------------\n");
				printf("THANKS FOR USING OUR SYSTEM!!\n");
				printf("-----------------------------\n\n");
				printf("ARE YOU SURE TO LEAVE THIS SYSTEM ?\n");
				printf("Press any key to EXIT...\n");

				break;

			default:
				printf("\nINVALID CHOICE OF NUMBERS!!");
				printf("\nPRESS ANY KEY TO CONTINUE...\n\n");
				getch();
				clrscr();


		}

	}while(choice != 0);

	getch();
}
