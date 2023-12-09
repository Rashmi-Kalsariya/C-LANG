#include<stdio.h>
main()
{
	int r,c;
	printf("Enter the row size: ");
	scanf("%d",&r);
	printf("Enter the col size: ");
	scanf("%d",&c);
	
	int a[r][c],i,j,larg=0;
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)	
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			if(a[i][j]>larg)
			{
			larg=a[i][j];
		    }
		}
	}
	printf("\n");
	printf("The largest elements is:%d ",larg);
	
}
