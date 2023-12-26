#include<stdio.h>

main()
{
	int x,y;
	int *p1,*p2;
	
	p1=&x;
	p2=&y;
	
	printf("Enter X:");
	scanf("%d",p1);
	printf("Enter Y:");
	scanf("%d",p2);
	
	*p1=*p1+*p2;
	*p2=*p1-*p2;
	*p1=*p1-*p2;
	
	printf("\nX: %d\nY: %d",*p1,*p2);
	
}

