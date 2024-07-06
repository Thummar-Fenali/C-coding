#include<stdio.h>
#include<conio.h>
main()
{
     int a;
     clrscr();
     printf("enter the grade:");
     scanf("%d",&a);
     (a>=91 && a<=100)
       ? printf("A")
       : (a>=81 && a<=90)
     ?printf("B")
     :(a>=71 && a<=80)
	       ?printf("C")
	      :(a>=61 && a<=70)
     ?printf("D")
     :(a>51 && a<=60)
		?printf("E")
		:printf("you are fail");


      getch();
}
