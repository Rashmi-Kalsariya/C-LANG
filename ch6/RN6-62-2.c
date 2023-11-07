#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d;
	clrscr();
	
	printf("Enter The Number A:");
	scanf("%d",&a);
	printf("Enter The Number B:");
	scanf("%d",&b);
	printf("Enter The Number C:");
	scanf("%d",&c);
	printf("Enter The Number D:");
	scanf("%d",&d);
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("A is maximum");
			}
			else
			{
				printf("D is maximum");
			}
		}
		else
		{
			if(c>d)
			{
				printf("C is maximum");
			}
			else
			{
				printf("D is maximun");
			}
		}

	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("B is maximum");
			}

			else
			{
				printf("D is maximum");
			}
		}
		else
		{
			if(c>d)
			{
				printf("C is maximum");
			}
			else
			{
				printf("D is maximum");
			}
		}
	}
	getch();

}
