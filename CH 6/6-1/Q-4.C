#include<stdio.h>
#include<conio.h>

main()
{
	float Gujarati,English,Maths,ans;

	clrscr();
	printf("Enter your mark of Gujarati :");
	scanf("%f",&Gujarati);


	printf("Enter your mark of English :");
	scanf("%f",&English);

	printf("Enter your mark of Maths :");
	scanf("%f",&Maths);

	ans = ((Gujarati + English + Maths)/3);
	printf("You Have Got %.2f percentage.",ans);

getch();

}