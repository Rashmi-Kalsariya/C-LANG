#include <stdio.h>


void cube(int *a, int r, int c) 
{
    int i,j;
    
	for (i=0; i<r; i++) 
	{
        for (j=0; j<c; j++) 
		{
            *(a + i * c + j) = 
			(*(a + i * c + j)) * 
			(*(a + i * c + j)) * 
			(*(a + i * c + j));
        }
    }
}

void main() 
{
    int r,c;
	int i,j;
    printf("Enter the number of Rows : ");
    scanf("%d", &r);

    printf("Enter the number of Columns: ");
    scanf("%d", &c);

    int a[r][c];

    printf("\n\nEnter the elements: \n");
    for (i=0; i<r; i++) 
	{
        for (j=0; j<c; j++) 
		{
            printf("a[%d]: ",i,j);
			scanf("%d", &a[i][j]);
        }
    }

    cube(&a[0][0], r, c);
	
    printf("\n======================\n");
	printf("Cubes of all elements : \n\n");
    for (i=0; i<r; i++) 
	{
        for (j=0; j<c; j++) 
		{
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n======================\n");


}
