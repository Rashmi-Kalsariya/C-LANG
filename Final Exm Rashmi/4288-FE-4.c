#include<stdio.h>
main()
{
	 int n;
	  
	 printf("Enter Size: ");
	 scanf("%d", &n);
	 printf("\n");
	 
	 int a[10],b[10],i;
	 
	 for(i=0; i<n; i++)
	  {
	      printf("a[%d]: ",i);
		  scanf("%d",&a[i]);
	  }
	   
	 for(i=0; i<n; i ++)
	  {
	      printf("b[%d]: ",i);
		  scanf("%d",&b[i]);
	  }

	 for(i=0; i<n; i++)
	 {
	    a[i] = a[i] + b[i];
	    b[i] = a[i] - b[i]; 
	    a[i] = a[i] - b[i];
	 }
	
	 printf("\n\n---After Swaping---");
	 printf("\n========================");
	 printf("\nArray A's Elements: \n");
	 for(i=0; i<n; i++)
	  {
	      printf("%d ",a[i]);
	  }
	  	printf("\n========================"); 
	printf("\n========================");
	printf("\nArray B's Elements: \n");
	 for(i=0; i<n; i++)
	  {
	      printf("%d ",b[i]);
	  }	
	printf("\n========================"); 
} 
