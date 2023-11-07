#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;

	clrscr();
	printf("Enter a,b & c :");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a<b)
	{
		if(a<c)
		{
			 printf("A is small");
		}
	    else
	    {
			printf("C is small");
	 	}
	}
	else
	{
		if(b<c)
		{
			 printf("B is small");
		}
		else
		{
			printf("C is small");
		}
	}

	getch();
}
