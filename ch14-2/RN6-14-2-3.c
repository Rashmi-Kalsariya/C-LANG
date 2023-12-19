#include<stdio.h>
#include<string.h>
main()
{
	char str[20];
	
	printf("Enter Name: ");
	gets(str);
	
	if(str[0]>=97 && str[0]<=122)
	{
		str[0] -= 32;
	}
	printf("Name: %s",str);
}
