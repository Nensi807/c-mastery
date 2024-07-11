#include<stdio.h>
#include<conio.h>
main(){
	float l , ans ,h;
	clrscr();
	printf("Enter the value of L: ");
	scanf("%f",&l);
	printf("Enter the value of h: ");
	scanf("%f",&h);
	ans = 0.5* l * h;
	printf("The area of triangle %.2f",ans);
	getch();
}
