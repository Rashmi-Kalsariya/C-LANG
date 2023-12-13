#include<stdio.h>
#include<string.h>
main()
{
	
	char a[50];
	int i,l,j,count;
	int b[50];

	printf("Enter: ");
	gets(a);
	
	l=strlen(a);
		
	printf("\n");

	for(i=0;i<l;i++)
	{
		b[i]=0;
	}
	
	for(i=0;i<l;i++)
	{
		count=1;
		for(j=i+1;j<l;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				b[j] = -1;
			}
		}
		if(b[i]==0)
		{
			b[i]=count;
		}
	}
	
	for(i=0;i<l;i++)
	{
		if(b[i]>0)
		{
			printf("%c => %d \n",a[i],b[i]);
		}
	}
	
}
