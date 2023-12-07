#include<stdio.h>
main()
{
	char choice,i,j;
	
	printf("Enter your choice...\n");
	printf("press A for 'A'\n");
	printf("press B for 'B'\n");
	printf("press C for 'C'\n");
	printf("press D for 'D'\n");
	printf("press E for 'E'\n");
	printf("press F for 'F'\n");
	printf("press G for 'G'\n");
	printf("press H for 'H'\n");
	printf("press I for 'I'\n");
	printf("press J for 'J'\n");
	printf("press K for 'K'\n");
	printf("press L for 'L'\n");
	printf("press M for 'M'\n");
	printf("press N for 'N'\n");
	printf("press O for 'O'\n");
	printf("press P for 'P'\n");
	printf("press Q for 'Q'\n");
	printf("press R for 'R'\n");
	printf("press S for 'S'\n");
	printf("press T for 'T'\n");
	printf("press U for 'U'\n");
	printf("press V for 'V'\n");
	printf("press W for 'W'\n");
	printf("press X for 'X'\n");
	printf("press Y for 'Y'\n");
	printf("press Z for 'Z'\n\n");
	printf("Enter The Character: ");
	scanf("%c",&choice);
	printf("\n");
	
	switch(choice)
	{
		case 'A':
				printf("You've Chosed A!!\n\n");
				for(i=1; i<=6; i++)
				{
					for(j=1; j<=5; j++)
				{		
					if(i==1||i==3||j==1||j==5||j==6)
					{
						printf("* ");
					}
					else
					{
						printf("  ");
					}
				}
				printf("\n");
				}
				break;
				
		case 'B':
				printf("You've Chosed B!!\n\n");
					for(i=1;i<=7;i++)
					{
						for(j=1;j<=3;j++)
						{
							if(
								((i==1||i==4||i==7) && (j==1||j==2)) ||
								((i==2||i==3||i==5||i==6) && (j==1||j==3))
			  				  )
							{
								printf("*  ");
							}
							else
							{
								printf("   ");
							}
						}
						printf("\n");
					}
					break;		
					
		case 'C':
				printf("You've Chosed C!!\n\n");
				for(i=1;i<=5;i++)
				{
					for(j=1;j<=4;j++)
					{
						if((i==1||i==5) && (j>=2 && j<=4)||
			   				(i>=2 && i<=4) && (j==1))
						{
							printf("* ");
						}
						else
						{
							printf("  ");
						}
					}
					printf("\n");
				}
				break;
				
		case 'D':
				printf("You've Chosed D!!\n\n");
				for(i=1;i<=5;i++)
				{
					for(j=1;j<=4;j++)
				{
					if(
						((i==1||i==5) && (j>=1 && j<=3)) ||
						((i==2||i==3||i==4) && (j==1||j==4))
					  )
					{
						printf("* ");
					}
					else
					{
						printf("  ");
					}
				}
				printf("\n");
				}
				break;
				
		case 'E':
				printf("You've Chosed E!!\n\n");
				for(i=1;i<=5;i++)
				{
					for(j=1;j<=5;j++)
					{
						if(
							((i==1||i==3||i==5) && (j>=1 && j<=5)) ||
							((i==2||i==4) && (j==1))
			  			  )
			  			{	
							printf("* ");
			  			}
			  			else
			  			{
							printf("  ");
			  			}
					}
					printf("\n");
				}
				break;
				
		case 'F':
				printf("You've Chosed F!!\n\n");
				for(i=1;i<=6;i++)
				{
					for(j=1;j<=5;j++)
					{
						if(
							((i==1||i==3) && (j>=1 && j<=5)) ||
							((i==2||i==4||i==5||i==6) && (j==1))
			  			  )
			  			{
							printf("* ");
			  			}
			  			else
			  			{
							printf("  ");
			  			}
					}
					printf("\n");
				}
				break;
				
		case 'G':
				printf("You've Chosed G!!\n\n");
				for(i=1;i<=7;i++)
				{
					for(j=1;j<=5;j++)
					{
						if(
							((i==1||i==7) && (j>=2 && j<=4)) ||
							((i==2||i==3) && (j==1)) ||
							((i==4) && (j==1||j>=3 && j<=5)) ||
							((i==5||i==6) && (j==1||j==5))
			  			  )
						{
							printf("* ");
						}
						else
						{
							printf("  ");
						}
					}
					printf("\n");
				}
				break;
				
		case 'H':
				printf("You've Chosed H!!\n\n");
				for(i=1;i<=6;i++)
				{
					for(j=1;j<=5;j++)
					{	
						if(
							((i==1) && (j>=1 && j<=5)) ||
							((j==3) && (i>=2 && i<=6))
			  			  )
						{
							printf("* ");
						}
						else
						{
							printf("  ");
						}
					}
					printf("\n");
				}
				break;
				
		case 'I':
				printf("You've Chosed I!!\n\n");
				for(i=1;i<=6;i++)
				{
					for(j=1;j<=3;j++)
					{
						if(
							((i==1||i==6) && (j>=1 && j<=3)) ||
							((i>=2 && i<=5) && (j==2))
			  			  )
						{
							printf("* ");
						}
						else
						{
							printf("  ");
						}
					}
					printf("\n");
				}
				break;
				
		case 'J':
				printf("You've Chosed J!!\n\n");
				for(i=1;i<=6;i++)
				{
					for(j=1;j<=4;j++)
					{
						if(
							((i==1) && (j>=2 && j<=4)) ||
							((i>=2 && i<=4) && (j==3)) ||
							((i==5) && (j==1||j==3)) ||
							((i==6) && (j>=1 && j<=3))
			  			  )
						{
							printf("* ");
						}
						else
						{
							printf("  ");
						}
					}
					printf("\n");
				}
				break;
				
		case 'K':
				printf("You've Chosed K!!\n\n");
				for(i=1;i<=7;i++)
				{
					for(j=1;j<=5;j++)
					{
						if(
							((j==1) && (i>=1 && i<=7)) ||
							((j==2) && (i==4)) ||
							((j==3) && (i==3||i==5)) ||
							((j==4) && (i==2||i==6)) ||
							((j==5) && (i==1||i==7))
			  			  )
						{
							printf("* ");
						}
						else
						{
							printf("  ");
						}
					}
					printf("\n");
				}
				break;
				
		case 'L':
				printf("You've Chosed L!!\n\n");
				for(i=1;i<=6;i++)
				{
					for(j=1;j<=4;j++)
					{
						if(
							((j==1) && (i>=1 && i<=6)) ||
							((j>=2 && j<=4) && (i==6))
			  			  )
						{
							printf("* ");
						}
						else
						{
							printf("  ");
						}
					}
					printf("\n");
				}
				break;
				
		case 'M':
				printf("You've Chosed M!!\n\n");
				for(i=1;i<=6;i++)
				{
					for(j=1;j<=11;j++)
					{
						if(
							((j==1||j==11) && (i>=1 && i<=6)) ||
							((i==2) && (j==2||j==10)) ||
							((i==3) && (j==3||j==9)) ||
							((i==4) && (j==4||j==8)) ||
							((i==5) && (j==5||j==7)) ||
							((i==6) && (j==6))
			  			  )
						{
							printf("* ");
						}
						else
						{
							printf("  ");
						}
					}
					printf("\n");
				}
				break;
				
		case 'N':
				printf("You've Chosed N!!\n\n");
				for(i=1;i<=6;i++)
				{
					for(j=1;j<=6;j++)
					{
						if(
							((j==1||j==6) && (i>=1 && i<=6)) ||
							((i==2) && (j==2)) ||
							((i==3) && (j==3)) ||
							((i==4) && (j==4)) ||
							((i==5) && (j==5))
			  			  )
						{
							printf("* ");
						}
						else
						{
							printf("  ");
						}
					}
					printf("\n");
				}
				break;
				
		case 'O':
				printf("You've Chosed O!!\n\n");
				for(i=1;i<=5;i++)
				{
					for(j=1;j<=5;j++)
					{
						if(
							((i==1||i==5) && (j>=2 && j<=4)) ||
							((j==1||j==5) && (i>=2 && i<=4))
			  			  )
						{
							printf("* ");
						}
						else
						{
							printf("  ");
						}
					}
					printf("\n");
				}
				break;
				
		case 'P':
				printf("You've Chosed P!!\n\n");
				for(i=1;i<=7;i++)
				{
					for(j=1;j<=4;j++)
					{
						if(
							((j==1) && (i>=1 && i<=7)) ||
							((i==1 || i==4) && (j==2 || j==3)) ||
							((i==2 || i==3) && (j==4))
			  			  )
						{
							printf("* ");
						}
						else
						{
							printf("  ");
						}
					}
					printf("\n");
				}
				break;
				
		case 'Q':
				printf("You've Chosed Q!!\n\n");
				for(i=1;i<=6;i++)
				{
					for(j=1;j<=6;j++)
					{
						if(
							((i==1) && (j>=2 && j<=4)) ||
							((j==1 || j==5) && (i>=2 && i<=4)) ||
							((i==5) && (j>=2 && j<=5)) ||
							(i>=3 && i==j)
			  			  )
						{
							printf("* ");
						}
						else
						{
							printf("  ");
						}
					}
					printf("\n");
				}
				break;
				
		case 'R':
				printf("You've Chosed R!!\n\n");
				for(i=1;i<=6;i++)
				{
					for(j=1;j<=4;j++)
					{
						if(
							((i==1 || i==3) && (j>=1 && j<=3)) ||
							((i==2 || i==5) && (j==1 || j==3)) ||
							((i==4) && (j==1 || j==2)) ||
							((i==6) && (j==1 || j==4))
			  			  )
						{
							printf("*  ");
						}
						else
						{
							printf("   ");
						}
		 			}
		 			printf("\n");
				}
				break;
				
		case 'S':
				printf("You've Chosed S!!\n\n");
				for(i=1;i<=7;i++)
				{
					for(j=1;j<=4;j++)
					{
						if(
							((i==1) && (j>=2 && j<=4)) ||
							((j==1) && (i==2 || i==3)) ||
							((i==4) && (j==2 || j==3)) ||
							((j==4) && (i==5 || i==6)) ||
							((i==7) && (j>=1 && j<=3))
			  			  )
						{
							printf("* ");
						}
						else
						{
							printf("  ");
						}
					}
					printf("\n");
				}
				break;
				
		case 'T':
				printf("You've Chosed T!!\n\n");
				for(i=1;i<=6;i++)
				{
					for(j=1;j<=5;j++)
					{
						if(
							((i==1) && (j>=1 && j<=5)) ||
							((j==3) && (i>=2 && i<=6))
			  			  )
						{
							printf("* ");
						}
						else
						{
							printf("  ");
						}
					}
					printf("\n");
				}
				break;
				
		case 'U':
				printf("You've Chosed U!!\n\n");
				for(i=1;i<=6;i++)
				{
					for(j=1;j<=4;j++)
					{
						if(
							((j==1||j==4) && (i>=1 && i<=5)) ||
							((i==6) && (j==2 || j==3))
			  			  )
						{
							printf("* ");
						}
						else
						{
							printf("  ");
						}
					}
					printf("\n");
				}
				break;
				
		case 'V':
				printf("You've Chosed V!!\n\n");
				for(i=1;i<=6;i++)
				{
					for(j=1;j<=11;j++)
					{
						if(
							((i==1) && (j==1 || j==11)) ||
							((i==2) && (j==2 || j==10)) ||
							((i==3) && (j==3 || j==9)) ||
							((i==4) && (j==4 || j==8)) ||
							((i==5) && (j==5 || j==7)) ||
							((i==6) && (j==6))
			  			  )
						{
							printf("*");
						}
						else
						{
							printf(" ");
						}
					}
					printf("\n");
				}
				break;
				
		case 'W':
				printf("You've Chosed W!!\n\n");
				for(i=1;i<=7;i++)
				{
					for(j=1;j<=5;j++)
					{
						if(
							((j==1||j==5) && (i>=1 && i<=7)) ||
							((i==6) && (j==2||j==4)) ||
							((i==5) && (j==3))
			  			  )
						{
							printf("* ");
						}
						else
						{
							printf("  ");
						}
					}
					printf("\n");
				}
				break;
				
		case 'X':
				printf("You've Chosed X!!\n\n");
				for(i=1;i<=5;i++)
			{
				for(j=1;j<=5;j++)
				{
					if(
						((i==1||i==5) && (j==1||j==5)) ||
						((i==2||i==4) && (j==2||j==4)) ||
						((i==3) && (j==3))
					  )
					{
						printf("* ");
					}
					else
					{
						printf("  ");
					}
				}
				printf("\n");
			}
			break;
	
	case 'Y':
				printf("You've Chosed Y!!\n\n");
					for(i=1;i<=8;i++)
				{
					for(j=1;j<=7;j++)
					{
						if(
							((j==4) && (i>=4 && i<=8)) ||
							((i==1) && (j==1||j==7)) ||
							((i==2) && (j==2 || j==6)) ||
							((i==3) && (j==3 || j==5))
						  )
						{
							printf("* ");
						}
						else
						{
							printf("  ");
						}
					}
					printf("\n");
				}
				break;
				
	case 'Z':
				printf("You've Chosed Z!!\n\n");
						for(i=1;i<=6;i++)
		{
					for(j=1;j<=6;j++)
					{
						if(
							((i==1 || i==6) && (j>=1 && j<=6)) ||
							((i==2) && (j==5)) ||
							((i==3) && (j==4)) ||
							((i==4) && (j==3)) ||
							((i==5) && (j==2))
						  )
						{
							printf("* ");
						}
						else
						{
							printf("  ");
						}
					}
					printf("\n");
				}
			break;
			
	default:
				printf("INVALID CHARACTER OF CHOICE!!");
				break;
	}
}
