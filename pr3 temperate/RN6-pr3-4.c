#include<stdio.h>

main()
{

    int i,j,count=0,n;
    printf("Enter n: ");
    scanf("%d",&n);

    for(j=1;j<=n;j++)
	{

         count = 0;

         for(i=2;i<=j/2;i++)
		 {
             if(j%i==0)
			 {
                 count++;
                 break;
             }
        }
        
         if(count==0 && j!= 0)
             printf("%d ",j);
    }
  
}
