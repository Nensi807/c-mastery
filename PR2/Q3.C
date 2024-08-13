#include<stdio.h>
#include<conio.h>

main()
{
  int m ;
  char s;
  clrscr();
  printf("please enter the marks .");
  scanf("%d",&m);

  s = (m>=91 && m<=100)
	 ? 'A'

	 : (m>=80&&m<=90)

		 ? 'B'

		 : (m>=75&&m<=81)
			? 'C'
			: (m>=50&&m<=74)
				? 'D'

				: (m>=30&&m<=49)
				    ? 'E'

				    : 'F';




     switch(s)
     {
	case 'A':
		printf("your grade is A,Excellent Work !!");
		break;

	case 'B':
		printf("your grade is B,Well Done !!");
		break;

	case 'C':
		printf("your grade is c,Good job!!");
		break;
	case 'D':
		printf("your grade is d,Good !!");
		break;

	case 'E':
		printf("your grade is E,You pass but you could do better !!\n");
		break;

	case 'F':
		printf("your grade is F, Sorry you failed !!\n");
		break;

       default:
	 printf("Invalid Marks .....");
     }

     if(s>='A'&& s<='E' )
     {
       printf("Congratulation !! you are eligible for the next level ....");
     }
     else
     {
      printf("Please try again next time ......");
     }
	  getch();




}