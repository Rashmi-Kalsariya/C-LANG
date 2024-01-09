#include<stdio.h>

void main()
{
	
	FILE *even,*odd;
	
	even = fopen("D:\\RASHMI1\\RASHMI\\C LANGUAGE\\4288-Rashmi Kalsariya\\pr9\\new\\even.txt","w");
	
	odd = fopen("D:\\RASHMI1\\RASHMI\\C LANGUAGE\\4288-Rashmi Kalsariya\\pr9\\new\\odd.txt","w");
	
	int i;
	
	for(i=50;i<=70;i++)
	{
		
		if(i%2==0)
		{
			
			fprintf(even,"%d ",i);	
			
		}
		
		else if(i%2!=0)
		{
			
			fprintf(odd,"%d ",i);
			
		}
	}
	
	fclose(even);
	fclose(odd);
	
}
