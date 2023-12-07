#include<stdio.h>
main()
{
	int i,j,s;
	
	for(i=5;i>=1;i--)
	{
		for(s=5;s>=1-i;s--)
		{
			printf(" ");
		}
		for(j=i;j<=5;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
