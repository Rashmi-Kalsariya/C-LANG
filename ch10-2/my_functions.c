void ArrayLength(int a[],int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("Enter Your Array Size: ");
		scanf("%d",&a[i]);
	}
}


//Printing Pointer//

void ptr(int a[],int n)
{
	int i;
	int *ptr;
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]: ",i);
		scanf("%d",ptr+i);
	}
}

//Element sum in array//

void Arraysum()
{
	int n;
	printf("Enter Array size: ");
	scanf("%d",&n);
	
	int a[n],i,sum=0;
	
	printf("Enter Elements: \n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		sum += a[i];
	}
	
	printf("\n\n====================================");
	printf("\nThe Sum of Array Element is: %d",sum);
	printf("\n====================================\n");
	
}

//Length of Strinbg//

int StrLength()
{
	char string[50];
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

