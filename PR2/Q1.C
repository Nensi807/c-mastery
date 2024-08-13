#include<stdio.h>
#include<conio.h>
main()
{
  int m;
  clrscr();
  printf("please enter the marks .");
  scanf("%d",&m);

  (m>91 && m<=100)
	 ? printf("your grade is A")

	 : (m>80&&m<=90)

		 ? printf("Your grade is B.")

		 : (m>75&&m<=81)
			? printf(" Your garde is C.")

			: (m>50&&m<=74)
				? printf("Your grade is D")

				: (m>30&&m<=49)
				    ? printf("Your grade is E .")

				    :printf("yoyr grade is F.");

	  getch();

}