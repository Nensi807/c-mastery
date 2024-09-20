#include<stdio.h>
#include<conio.h>
main()

{
	int i,j,s=11;
	 clrscr();
	for(i=1 ;i<=4 ;i++)
	{
		for(j=1 ;j<=i ;j++)
		{
		printf("  %d",s);
		s++ ;
		}
	printf("\n");
	}
	getch();
}