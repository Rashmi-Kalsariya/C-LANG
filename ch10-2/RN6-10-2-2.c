#include<stdio.h>
int main()
{
	char string[100];
	int i,length=0;
	
	printf("Enter String: ");
	scanf("%s",string);
	
	for(i=0; string[i]!=NULL; i++)
	{
		length++;
	}
	
	printf("\n\n================================\n");
	printf("Length of Input String: %d",length);
	printf("\n================================\n");
	
	return 0;
}
