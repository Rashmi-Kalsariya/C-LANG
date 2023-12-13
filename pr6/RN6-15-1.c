#include<stdio.h>
#include<string.h>
main()
{
	char pali[20],rpali[20];
	int i,len=0,j=0,r=0;
	
	printf("Enter String: ");
	scanf("%s",pali);
	
	for(i=0;pali[i]!=NULL;i++)
	{
		len++;
	}
	
	for(i=len-1;i>=0;i--)
	{
		rpali[j]=pali[i];
		j++;
	}
	
	for(i=0;i<len;i++)
	{
		if(pali[i]!=rpali[i])
		{
			r=1;
		}
	}
	if(r==0)
	{
		printf("String is palindrom");
	}
	else
	{
		printf("String is not Palindrome");
	}
}
