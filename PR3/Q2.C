#include <stdio.h>
#include <conio.h>

main()
{
 int a,n=0;
 clrscr();
 printf("Enter any number");
 scanf("%d",&a);
 while(a!=0)
 {
  a=a/10;
  n++;
 }
  printf("%d",n);
  getch();

}
