#include<stdio.h>

void main()
{
	int n,i,j;
	printf("Enter Array Size: ");
	scanf("%d",&n);
	
	int a[n],b[n];
	int *r[n];
	int *k[n];
	
	for(i=0;i<n;i++)
	{
		r[i]=&a[i];
		k[i]=&b[i];
		printf("a[%d] : ",i);
		scanf("%d",r[i]);
	}
	
	
	printf("\n===================================");
	printf("\nThe Reversed Array Elements Are: \n");
	printf("===================================\n");
	
	for(i=0,j=n-1;i<n,j>=0;i++,j--)
	{
			*k[i]=*r[j];
	}
		printf("\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] : %d \n",i,*k[i]);
	}
}
