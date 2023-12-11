#include<stdio.h>
main()
{
	char r[20];
	int i;
	
	printf("Enter Your name: ");
	scanf("%s",r);
	
	for(i=0; i<20; i++)
	{
		if(r[i]>=65 && r[i]<=90)
		{
			r[i] += 32;
		}
		else if(r[i]>=97 && r[i]<=122)
		{
			r[i] -= 32;
		}
	}
	
	printf("Character: %s",r);

}
