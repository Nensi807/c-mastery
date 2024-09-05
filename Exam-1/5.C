#include<stdio.h>
#include <conio.h>
main()
{
  int length, width ,ans ;

	 clrscr();
	 printf("perimeter of Rectangle ...\n");
	 printf("Enter the length of rectangle :");
	 scanf("%d",&length);
	 printf("Enter the width of recatngle :");
	 scanf("%d",&width);

	 ans = 2 * (length+width);

	 printf("The perimeter of recatangle is %d .,",ans);
	 getch();
}