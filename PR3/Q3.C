#include <stdio.h>
#include <conio.h>

main()
{
 int a,digit,sum=0;
 clrscr();
 printf("Enter any number");
 scanf("%d",&a);
 digit=a%10;
 while(a>=10)
 {
  a=a/10;
 }
  sum=a+digit;
  printf("%d+%d=%d",a,digit,sum);
  getch();

}
