#include<stdio.h>
#include<conio.h>
main(){
	float P , ans ,R,N;
	clrscr();
	printf("Enter the value of P: ");
	scanf("%f",&P);
	printf("Enter the value of R: ");
	scanf("%f",&R);
	printf("Enter the value of N:");
	scanf("%f",&N);
	ans = P * R * N/100;
	printf("The Simple interest. %.2f",ans);
	getch();
}
