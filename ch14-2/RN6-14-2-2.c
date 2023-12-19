#include<stdio.h>

main()
{
	
	char pass[50],eml[50],eml2[50],pass2[50];
	int i,cap=0,sml=0,sym=0,dg=0,sp=0,length=0,len=0,a=0,d=0,cap1=0,sml1=0,dg1=0,cmp1,cmp;
	
	
	printf("=================SIGN UP====================\n");
	
	printf("\n");
	printf("\n");
	
	printf("Enter Email: ");
	gets(eml);
	printf("Enter password : ");
	gets(pass);
		
	printf("\n");				

	len=strlen(eml);

	length=strlen(pass);
		
	for(i=0;i<len;i++)
	
	{
		if(eml[i]=='.')
		{
			d++;
		}
		else if(eml[i]==' '){
			sp++;
		}
		else if(eml[i]>=65 && eml[i]<=90)
		{
			cap1++;
		}
		else if(eml[i]>=97 && eml[i]<=122)
		{
			sml1++;
		}
		else if(eml[i]>=48 && eml[i]<=57)
		{
			dg1++;
		}
		else if (eml[i]=='@')
		{
			a++;
		}
		
	}
	
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
	
	if(sp==0 && cap>=1 && sml>=1 && dg>=1 && sym>=1 && length>=6 && cap1>=0 && sml1>=1 && dg1>=0 && a==1 && d==1)
			{
				printf("\n");
				printf("=============================LOG IN===========================\n");
				
				printf("\n");
				printf("\n");
				
				printf("Enter Email: ");
				gets(eml2);
				printf("Enter password : ");
				gets(pass2);
				cmp = strcmp(eml,eml2);
				cmp1 = strcmp(pass,pass2);
				
				if(cmp==0 && cmp1==0)
				{		
					printf("\n==============================================================\n");	
					printf("\nSuccessfully Login\n");
				}
				else if(cmp==0 && cmp1!=0)
				{
					printf("Password Is Wrong");
				}
				else if(cmp!=0 && cmp1==0)
				{
					printf("Email Is Wrong");
				}
				else if(cmp!=0 && cmp1!=0)
				{
					printf("Email And Password Are Wrong");
				}
			
			}
			
		if(sp==0 && cap1>=0 && sml1>=1 && dg1>=0 && a==1 && d==1)
			{
				printf("");
			}
		else
		{
			printf("\nInvalid Email\n");
		}
		
		if(sp==0 && cap>=1 && sml>=1 && dg>=1 && sym>=1 && length>=6)
			{
				printf("");
			}
		else
		{
			printf("\nInvalid Password\n");
		}
		
	
	
}
