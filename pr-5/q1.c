#include<stdio.h>
main()
{
	int size; 
	printf("emter the array's size :");
	scanf("%d",&size);
	
	int a[size];
	int i;
	
	printf("\n");
	
	for(i=0;i<size;i++)
	{
		printf("enter the elements %d :",i);
		scanf("%d",&a[i]);
	}
	
	printf("array input\n");
	for(i=0;i<size;i++)
	{
		if(a[i]<0)
		{
			printf("nagative elements from array %d:",a[i]);
		}
    }
}
