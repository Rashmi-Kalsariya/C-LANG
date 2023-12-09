#include<stdio.h>
main()
{
	int r,c;
	printf("Enter Row: ");
	scanf("%d",&r);
	printf("Enter Col: ");
	scanf("%d",&c);
	
	int a[r][c],b[r][c],i,j;
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			b[j][i]=a[i][j];
		}
	}
	
	printf("\n\n\t -- TRANSPOSE MATRIX -- \n");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
	
}
