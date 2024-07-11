#include<stdio.h>
#include<conio.h>
main(){
	float R, ans;
	clrscr();
	printf("Perimeter of circle.\n");
	printf("\n");
	printf("Enter the value of R: ");
	scanf("%f",&R);
	ans = 2 * 3.14 *R ;
	printf("The perimeter of circle. %.2f",ans);
	getch();
}
