#include<stdio.h>
main()
{
	int r,c;
	
	printf("Enter row: ");
	scanf("%d",&r);
	
	printf("Enter column: ");
	scanf("%d",&c);
	
	int a[r][c],i,j,sum=0;
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n---Diagonal Elements---\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			if(i==j)
			{
				printf("%d",a[i][j]);
				sum += a[i][j];
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	
		printf("\n\n---Anti-Diagonal Elements---\n");
		
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			if((i+j)==(r-1))
			{
				printf("%d",a[i][j]);
				sum += a[i][j];
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	printf("\n\n======================================\n");
	printf("Sum of Diagonal & Anti-Diagonal is: %d",sum);
	printf("\n======================================\n");

}
