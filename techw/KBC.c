#include<stdio.h>
main()
{
	int Ans,a;
	
	printf("press 1 for Question 1\n");
	printf("press 2 for Question 2\n");
	printf("press 3 for Question 3\n");
	printf("press 4 for Question 4\n");
	printf("press 5 for Question 5\n");
	printf("Enter Question number: ");
	scanf("%d",&Ans);

	
	switch(Ans)
	{
		case 1: Que1:
					system("cls");
					printf("\n1. Who is the father of computers?\n");
					printf("1) Charles bebej\n2) dennis R.\n3) jay G.\n4) Vrajesh Rank\n");
					scanf("%d",&a);
					switch(a)
					{
					case 1:		goto Que2;
					break;
					case 2:		goto Que1;
					break;
					case 3:		goto Que1;
					break;
					case 4:		goto Que1;
					break;
					}
				
					break;
					
		case 2: Que2:
					system("cls");
					printf("\nwho is founder of c language?\n");
					printf("1) Charles bebej.\n2) dennis Richie\n3) jay G.\n4) Vrajesh Rank\n");
					scanf("%d",&a);
					
					switch(a)
					{
					case 1:		goto Que2;
					break;
					case 2:		goto Que3;
					break;
					case 3:		goto Que2;
					break;
					case 4:		goto Que2;
					break;
					}
			
					break;
				
		case 3: Que3:
					system("cls");
					printf("\n3. what is th full form of RBI?\n");
					printf("1) reserve bank of rajasthan\n2) reserve bank of mumbai\n3) reserve bank of India\n4) united bank of kolkata\n");
					scanf("%d",&a);
					
					switch(a)
					{
					case 1:		goto Que3;
					break;
					case 2:		goto Que3;
					break;
					case 3:		goto Que4;
					break;
					case 4:		goto Que3;
					break;
					}
					
					break;
					
		case 4: Que4:
					system("cls");
					printf("\n4. which city is known as pink city?\n");
					printf("1) udaipur\n2) mumbai\n3) india\n4) non of above\n");
					scanf("%d",&a);
					
					switch(a)
					{
					case 1:		goto Que4;
					break;
					case 2:		goto Que4;
					break;
					case 3:		goto Que4;
					break;
					case 4:		goto Que5;
					break;
					}
				
					break;
					
		case 5: Que5:
				system("cls");
				printf("\n5. which festival is the famous in india most?\n");
				printf("1) ganesh chahurthi\n2) janmastmi\n3) utarayan\n4) navratri\n");
					scanf("%d",&a);
					
				switch(a)
					{
					case 1:		goto Que5;
					break;
					case 2:		goto Que5;
					break;
					case 3:		goto Que5;
					break;
					case 4:	
							printf("\nYOU HAVE PLAYED THIS GAME VERY WELL!!\nIF YOU WANT TO CONTINUE THIS GAME THEN PREE ANY NUMBER OF YOU'RE CHOICE FROM GIVEN CHOICES!!\n\n");
							scanf("%d",&a);
								switch(a)
								{
								case 1: goto Que1;
								break;
								case 2: goto Que2;
								break;
								case 3: goto Que3;
								break;
								case 4: goto Que4;
								break;
								case 5: goto Que5;
								break;
								default:
										goto exit;
								}
					break;
				}
					break;
					
		default: exit:
				printf("PRESS ANY KEY TO EXIT!!");
							
	}
				
					
}
	
	



					
	
	
	
	
	 

