#include<stdio.h>
main()
{
	int n;
	float sum=0,average;
	printf("Enter the array: ");
	scanf("%d",&n);
	
	int a[n],i;
	
	
	for(i=0; i<n; i++)
	{
		printf("Enter a[%d]: ",i);
		scanf("%d",&a[i]);
		sum += a[i];
	}
	
	average = sum/n;
	
	printf("average of an array: %.2f\n",average);
}
	

