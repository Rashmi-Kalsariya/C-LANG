#include<stdio.h>
#include<conio.h>
main()
{
	int n, n1=0, n2=1, n3,i;
	clrscr();

	printf("Enter any number: ");
	scanf("%d",&n);

	if(n > 2)
	{
		printf("%d %d ",n1,n2);
		while(n >= 3)
		{
			n3 = n1 + n2;
			printf("%d ",n3);
			n1=n2;
			n2=n3;
			n--;
		}
	}
	else
	{
		if(n>=i)
		{
			printf("%d",i-1);
			i++;
		}
	}

	getch();
}

