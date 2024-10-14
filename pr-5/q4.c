#include<stdio.h>
main()
{
	int row,column;
	int i,j;
	printf("enter row size :");
	scanf("%d",&row);
	printf("enter row column:");
	scanf("%d",&col);
	
	int a[row][column];
	
for(i=0;i<row;i++)
{
	for(j=0;j<column;j++)
	{
		printf("enter the element a[i][j] =",i,j);
		scanf("%d",&a[i][j]);
	}
	printf("\n");
}

for (i=0;i<row;i++)	
{
	for(j=0;j<col;j++)
	{
		printf("%d",a[i][j]);
	}
	printf("\n");
}

int r,rowsum=0;

printf("enter value of r =");
scanf("%d",&r);

for(i=0;i<row;i++)
{
	for (j=0;j<col;j++)
	{
		if(i==r)
		{
			printf("%d",a[i][j]);
			rowsum += a [i][j];
		}
	}
	printf("\nsum : %d",rowsum);
}

int c,columnsum=0;

printf("enter value of c :");
scanf("%d",&c);

for(i=0;i<row;i++)
{
	for (j=0;j<col;j++)
	{
		if(i==c)
		{
			printf("%d",a[j][i]);
			columnsum += a[j][i];
		}
	}
	printf("\nsum : %d",columnsum);
}
}
