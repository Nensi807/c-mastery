#include<stdio.h>
#include<conio.h>
main()
{
	int num ,a;
	clrscr();
		 printf("Enter any table to write its table :\n");
		 scanf("%d",&num);


		 for(a=1; a<=10; a++)
		 { printf("%d * %d = %d\n",num,a,num*a);
		 }


	getch();
}