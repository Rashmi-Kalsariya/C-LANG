#include<stdio.h>
main()
{
	int r,c;
	printf("Enter the row size: ");
	scanf("%d",&r);
	printf("Enter the column size: ");
	scanf("%d",&c);
	
	printf("------------------------\n");
	
	int a[r][c],b[r][c],sum[r][c],i,j;
	printf("\n\n=============================\n");
	printf("Enter the Array A's elements: \n");

	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n\n\==========================\n");
	printf("Enter Array B's elements: \n");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("b[%d][%d]: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
        }
    }
    
    printf("\n\n=========\n");
	printf("THE SUM: \n");
	printf("=========\n");
    for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d",sum[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
}
