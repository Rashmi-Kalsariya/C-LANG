#include<stdio.h>

main()
{
	int n,i;
	printf("Enter Array Size: ");
	scanf("%d",&n);
	
	int a[n];
	int *p;
	
	p=&a;
	
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]",i);
		scanf("%d",p+i);
	}
	
	printf("\n========================");
	printf("\nSQUARE OF AN ARRAY IS: \n");
	printf("========================\n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = %d\n",i,*(p+i) * *(p+i));
	}
}
