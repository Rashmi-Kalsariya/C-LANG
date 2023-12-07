#include<stdio.h>
main()
{
	int n;
	printf("Enter the array's size: ");
	scanf("%d",&n);
	printf("-------------------------\n");

	int a[n],b[n],c[n],i,j;

	printf("\n=============================\n");
	printf("Enter the array A's elements: \n");
	printf("=============================\n");

	for(i=0; i<n; i++)
	{
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
	}

	printf("-----------------------------\n");
	printf("\n");

	printf("\n=============================\n");
	printf("Enter the Array B's elements: \n");
	printf("=============================\n");

	for(i=0; i<n; i++)
	{
		printf("b[%d]: ",i);
		scanf("%d",&b[i]);
	}

	for(i=0; i<n; i++)
	{
		c[i] = a[i]+b[i];
	}
	printf("------------------------------\n\n\n");


	printf("==============================\n");
	printf("array c: \n");
	printf("==============================\n\n");

	for(i=0; i<n; i++)
	{
		printf("%d ",c[i]);
	}
	printf("\n");
}
