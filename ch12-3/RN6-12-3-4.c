#include<stdio.h>
main()
{
	int r=5,c=5;
	
	int a[r][c],i,j;
	
	printf("====================\n");
	printf("Enter Elements: \n");
	printf("====================\n");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	int sum=0;
	
	printf("\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			if(i==0||i==r-1||j==0||j==c-1)
			{
				printf("%d ",a[i][j]);
				sum += a[i][j];
		    }
		    else
		    {
		    	printf("  ");
			}
		}
		printf("\n");
	}
	printf("\n\n------------------------------------\n");
	printf("The sum of all boundry elements: %d",sum);
	printf("\n------------------------------------\n");
}
