#include<stdio.h>
#include<conio.h>
main()
{
	float a,b,ans;
	clrscr();
	
	printf("Enter a:");
	scanf("%f",&a);
	printf("Enter b:");
	scanf("%f",&b);
	
	ans=a+b;
	ans += ans*0.18;
	
	printf("Answer: %.2f",ans);
	getch(); 
}
