#include<stdio.h>
main()
{
	int n;
	printf("Enter Total size: ");
	scanf("%d",&n);
	
	int a[n],i;

	for(i=0; i<n; i++)
		{
			printf("Enter Element : ");
			printf("a[%d]: ",i);
			scanf("%d",&a[i]);
		}
	printf("\nLength of an Array : %d",n);
	
		
}
