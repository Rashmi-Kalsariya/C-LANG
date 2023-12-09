#include<stdio.h>
main()
{
	int r,c,sum=0;
	printf("Enter Row: ");
	scanf("%d",&r);
	printf("Enter Col: ");
	scanf("%d",&c);
	
	int a[r][c],i,j,n1,n2;
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	
	printf("Enter row no: ");
	scanf("%d",&n1);
	
	for(i=n1; i<=n1; i++)
	{
		printf("Elements of row %d: ",i);
		for(j=0; j<c; j++)
		{
			printf("%d",a[i][j]);
			sum += a[i][j];		
		}
	}
	
	printf("\nTHE SUM ROW %d: %d",i,sum);
	
	printf("\n");
	printf("\n");
	
	printf("Enter col no: ");
	scanf("%d",&n2);
	
	for(j=n2; j<=n2; j++)
	{
		printf("Elements of col %d: ",j);
		for(i=0; i<r; i++)
		{
			printf("%d",a[i][j]);
			sum += a[i][j];		
		}
	}
	
	printf("\nTHE SUM COL %d: %d",j,sum);
}
