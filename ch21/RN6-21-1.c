#include<stdio.h>
#include<string.h>

main()
{
	
	FILE *r,*n;
	char name[20];
	
	r = fopen("D:\\RASHMI1\\RASHMI\\C LANGUAGE\\4288-Rashmi Kalsariya\\ch21\\folder1\\r.txt","w");
	
	n = fopen("D:\\RASHMI1\\RASHMI\\C LANGUAGE\\4288-Rashmi Kalsariya\\ch21\\folder1\\n.txt","w");
	
	fgets(name,20,r);
	printf("%s",name);
	fprintf(r,"%s",name);
	
	fclose(r);
	fclose(n);
		
}
