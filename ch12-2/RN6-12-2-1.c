<<<<<<< HEAD
#include<stdio.h>
main()
{
	int n1;
	printf("Enter A's size: ");
	scanf("%d",&n1);
	
	int i,a[n1];
	
	for(i=0;i<n1;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	
	int n2;
	printf("\n\nEnter B's size: ");
	scanf("%d",&n2);
	
	int b[n2];
	for(i=0;i<n2;i++)
	{
		printf("b[%d]: ",i);
		scanf("%d",&b[i]);
	}
	
	int c[n1 + n2];
	
	for(i=0;i<n1;i++)
	{
		c[i] = a[i];
	}
	for(i=0;i<b[n2];i++)
	{
		c[i + n1] = b[i];
	}
	
	printf("\n\nThe Array is: ");
	for(i=0; i<n1+n2;i++)
	{
		printf("%d",c[i]);
	}
}
=======
#include<stdio.h>
main()
{
	int n1;
	printf("Enter A's size: ");
	scanf("%d",&n1);
	
	int i,a[n1];
	
	for(i=0;i<n1;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	
	int n2;
	printf("\n\nEnter B's size: ");
	scanf("%d",&n2);
	
	int b[n2];
	for(i=0;i<n2;i++)
	{
		printf("b[%d]: ",i);
		scanf("%d",&b[i]);
	}
	
	int c[n1 + n2];
	
	for(i=0;i<n1;i++)
	{
		c[i] = a[i];
	}
	for(i=0;i<b[n2];i++)
	{
		c[i + n1] = b[i];
	}
	
	printf("\n\nThe Array is: ");
	for(i=0; i<n1+n2;i++)
	{
		printf("%d",c[i]);
	}
}
>>>>>>> 925e6435e0d914ec1f370d7ae6cd2bb01c18f3e8
