#include<stdio.h>
#include<conio.h>
 main()
 {
       int a,b,ans;
       clrscr();
       printf("Enter the first number.");
       scanf("%d",&a);
       printf("Enter the second number.");
       scanf("%d",&b);
       ans=(a*a*a)+(3*a*a*b)+(3*a*b*b )+(b*b*b);
       printf("Answer:%d",ans);
       getch();


 }