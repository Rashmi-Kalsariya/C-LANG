#include <stdio.h>
int main() 
{
   int r,i,j,s,n = 1;
   
   printf("Enter Number: ");
   scanf("%d",&r);
   
   for (i=1;i<=r;i++) 
   {
      for(s=1;s<=r-i;s++)
      {
      	printf(" ");
	  }
	  for (j=1;j<=i;++j) 
	  {
         printf("%d",n);
         ++n;
      }
      printf("\n");
   }
}
