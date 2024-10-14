#include<stdio.h>
main()
{
	int row,column;
	printf("enter row size :");
	scanf("%d",&row);
	printf("enter row column:");
	scanf("%d",&column);
	
	int i,j;
	int a[row][column];
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("enter elements a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	int large=0;
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			if(a[i][j]>large)
			{
				large=a[i][j];
			}
		}
	}
	printf("large=%d",large);
}
