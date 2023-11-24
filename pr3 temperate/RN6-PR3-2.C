#include<stdio.h>
#include<conio.h>
main()
{
	int n,count=0;
	clrscr();

	printf("Enter n: ");
	scanf("%d",&n);

	while(n!=0)
	{
		n=n/10;
		count++;
	}
	printf("Total digit: %d",count);

	getch();

}