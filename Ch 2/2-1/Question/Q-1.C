#include<stdio.h>
#include<conio.h>
main()
{
    float r,ans;
    clrscr();

    printf("Enter a  radius :");
    scanf("%f",&r);

    ans = 3.14* r * r;
    printf("Area of cicrle :%.2f\n",ans);

    getch();



}
