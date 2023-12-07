<<<<<<< HEAD
#include<stdio.h>
main()
{
		int n;
		
		printf("Enter the Array size: ");
		scanf("%d",&n);
		
		int i,a[n];
		
		printf("Elements: \n");
    		for (i = 0; i < n; i++)
    		{
        		printf("a[%d]: ",i);
        		scanf("%d",&a[i]);
			}
    printf("\nTHE SQAURES ARE: \n\n");
    		for (i = 0; i < n; i++)
        	{	
				printf("%d ", a[i] * a[i]);
			}
}
=======
#include<stdio.h>
main()
{
		int n;
		
		printf("Enter the Array size: ");
		scanf("%d",&n);
		
		int i,a[n];
		
		printf("Elements: \n");
    		for (i = 0; i < n; i++)
    		{
        		printf("a[%d]: ",i);
        		scanf("%d",&a[i]);
			}
    printf("\nTHE SQAURES ARE: \n\n");
    		for (i = 0; i < n; i++)
        	{	
				printf("%d ", a[i] * a[i]);
			}
}
>>>>>>> 925e6435e0d914ec1f370d7ae6cd2bb01c18f3e8
