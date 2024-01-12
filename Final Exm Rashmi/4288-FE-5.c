#include<stdio.h>

struct p
{
	int id,Price,Qty;
	char name[20];
	float Disc;
};
main()
{
	FILE *f;
	
	f=fopen("C:\\Users\\r28\\Desktop\\Final Exm Rashmi\\Bill\\bill.txt","w");
	
	int n,i;
	printf("Enter Employs: ");
	scanf("%d",&n);
	
	struct p a[n];
	
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		printf("Enter ID : ");
		scanf("%d",&a[i].id);
		printf("Enter Name : ");
		scanf("%s",&a[i].name);
		printf("Enter price : ");
		scanf("%d",&a[i].Price);
		printf("Enter Quantity : ");
		scanf("%d",&a[i].Qty);
		printf("Enter Discount : ");
		scanf("%f",&a[i].Disc);
	}
	
	fprintf(f,"ID\t\tName\t\tprice\t\tQty\t\tDiscount\n");
	for(i=0;i<n;i++)
	{
		fprintf(f,"%d\t\t%s\t\t%d\t\t%d\t\t%.2f",a[i].id,a[i].name,a[i].Price,a[i].Qty,a[i].Disc);
		fprintf(f,"\n");
	}
	
	fprintf(f,"ID\t\tName\t\tprice\t\tQty\t\tDiscount\n");
	for(i=0;i<n;i++)
	{
		fprintf(f,"%d\t\t%s\t\t%d\t\t%d\t\t%.2f",a[i].id,a[i].name,a[i].Price,a[i].Qty,a[i].Disc);
		fprintf(f,"\n");
	}
	
}
