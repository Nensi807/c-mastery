#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	clrscr();

	printf("Enter any number :");
	scanf("%d",&a);

	printf("Enter any second number :");
	scanf("%d",&b);

	if(a<b)
	{
	   clrscr();
	   printf("%d is minimum number",a);
	 }
	  else
	  {
	  clrscr();
	    printf("%d is minimum number",b);
	  }
	getch();

}