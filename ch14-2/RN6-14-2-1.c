#include<stdio.h>
#include<string.h>
main()
{
	char pass[50];
	int i,cap=0,sml=0,sym=0,dg=0,sp=0,length=0;
		
	printf("Enter password : ");
	scanf("%[^\n]",&pass);
	
	printf("\n");				
	
	length=strlen(pass);
	
	for(i=0;i<length;i++)
	{
		if(pass[i]==' '){
			sp++;
		}
		else if(pass[i]>=65 && pass[i]<=90)
		{
			cap++;
		}
		else if(pass[i]>=97 && pass[i]<=122)
		{
			sml++;
		}
		else if(pass[i]>=48 && pass[i]<=57)
		{
			dg++;
		}
		else
		{
			sym++;
		}
	}
	
		if(sp==0 && cap>=1 && sml>=1 && dg>=1 && sym>=1 && length>=8)
			{
				printf("Your Password is Stronger");
			}
		else
		{
			printf("Your Password is Not Stronger");
		}
}

