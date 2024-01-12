#include<stdio.h>
main()
{
	int i,j,r=1;
	
	for(i=1; i<5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",r++);
		}
		printf("\n");
	}
}
