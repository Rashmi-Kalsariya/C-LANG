#include<stdio.h>
main()
{
	int r,c;
	printf("Enter the Array's row and col:  ");
	scanf("%d",&r);
	c=r;
	
	printf("------------------------------------\n\n");
	
	int a[r][c],i,j;
	
	printf("=====================================\n");
	printf("Enter the array's elements: \n");
	printf("=====================================\n");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	
	int sum=0;
	
	printf("\n\n======================\n");
	printf("The diagonal elements: \n");
	printf("======================\n");
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
	        	printf("  ");
			}
        } 
		printf("\n"); 	
	}
	
	printf("\n------------------------------------");
	printf("\nThe sum of all diagonal elements: %d\n",sum);
	printf("------------------------------------\n");		
	
	
}
