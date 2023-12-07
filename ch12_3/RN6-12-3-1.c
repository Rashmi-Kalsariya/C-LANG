#include<stdio.h>
main()
{
	int r,c;
	float sum=0,average;
	
	
	printf("Enter the array's row: ");
	scanf("%d",&r);
	printf("Enter the array's col: ");
	scanf("%d",&c);
	printf("\n");
	
	int a[r][c],i,j;
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("Enter a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
		
	/*for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d " ,a[i][j]);
		}
		printf("\n");
	}*/
			
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			sum += a[i][j];
		}
	}
    
	average = sum/(r*c);
	printf("\naverage of array : %.2f\n",average);
}
