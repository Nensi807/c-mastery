#include <stdio.h>
#include <conio.h>

main()
{
 char A='a',B='z';
 clrscr();
 do
 {
  printf("%c\t",A);
  A+=4;
 }while(A<=B);
 getch();
}
