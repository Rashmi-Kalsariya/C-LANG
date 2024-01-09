#include<stdio.h>
main()
{
	FILE *r;
	int i;
	
	r = fopen("D:\\RASHMI1\\RASHMI\\C LANGUAGE\\4288-Rashmi Kalsariya\\ch21\\folder\\div.txt","w");
	
	for(i=1;i<=50;i++)
	{
		
		if(i%3==0 && i%5==0)
		{
			fprintf(r,"%d\n",i);
		}
		
	}
	fclose(r);
}
