#include<stdio.h>
main()
{
	int n;
	printf("Enter the array A size: ");
	scanf("%d",&n);
	printf("-------------------------\n");

	int a[n],b[n],c[n],i;

	printf("\n=============================\n");
	printf("Enter the array A's elements: \n");
	printf("=============================\n");

	for(i=0; i<n; i++)
	{
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n\nEnter the array B size: ");
	scanf("%d",&n);
	printf("-------------------------\n");

	printf("\n=============================\n");
	printf("Enter the array B's elements: \n");
	printf("=============================\n");

	for(i=0; i<n; i++)
	{
		printf("a[%d]: ",i);
		scanf("%d",&b[i]);
	}
	
	for(i=0; i<n; i++)
	{
		c[i] = a[i];
		printf("a[%d]: ",c[i]);
	}
	
	for(i=0; i<n; i++)
	{
		c[i+n] = b[i];
		printf("b[%d]: ",c[i]);
	}
}
