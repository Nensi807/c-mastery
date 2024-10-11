#include<stdio.h>

 
	  int add(int a,int b)
	{	
		return a+b;
	}
	
	int mul(int a,int b)
	{
		return a*b;
	}
	
	int div(int a,int b)
	{	
		return a/b;
	}
	
	int modual(int a,int b)
		{	
			return a%b;
		}
		
		int sub(int a,int b)
		{	
			return a-b;
		}
		int main()
		{
			int c,j;
			
			int a,b;
			
			do
			{
			
			printf("Simple Calculator\n");
			printf("1 for Add.\n");
			printf("2 for Sub.\n");
			printf("3 for Multi.\n");	
			printf("4 for Div.\n");
			printf("5 for Modules.\n");
			printf("0 for E\n");
			
			printf("\n\nEnter your choices :");
			scanf("%d",&c);
			
		
			
					switch(c)
					{
						case 1:
								printf("Enter 1 number:");
								scanf("%d",&a);
				
								printf("Enter 2 number:");
								scanf("%d",&b);
								printf("%d + %d = %d",a,b,add(a,b));
						break;
						
						case 2:
								printf("Enter 1 number:");
								scanf("%d",&a);
				
								printf("Enter 2 number:");
								scanf("%d",&b);
								printf("%d - %d = %d",a,b,sub(a,b));
						break;
						
						case 3:
								printf("Enter 1 number:");
								scanf("%d",&a);
				
								printf("Enter 2 number:");
								scanf("%d",&b);
								printf("%d * %d = %d",a,b,mul(a,b));
						break;
						
						case 4:
								printf("Enter 1 number:");
								scanf("%d",&a);
				
								printf("Enter 2 number:");
								scanf("%d",&b);
								printf("%.d / %.d = %.d",a,b,div(a,b));
						break;
						
						case 5:
								printf("Enter 1 number:");
								scanf("%d",&a);
				
								printf("Enter 2 number:");
								scanf("%d",&b);
								printf("%d %% %d = %d",a,b,modual(a,b));
						break;
						
					default: 
						printf("End Calculatur....");
				     	printf("\n");	
					}
				}while(c!=0);
				
			printf("\n");
		}
		
		
		
		

