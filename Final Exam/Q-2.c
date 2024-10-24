#include<stdio.h>
main()
{
	float temp , ans ;
	
	printf("Enter the  temperature in  Celsius :");
	scanf("%f",&temp);
	
	ans = temp * 9/5 + 32 ;
	
	printf("The temperature in farenhit :%.2f ",ans);

	}
