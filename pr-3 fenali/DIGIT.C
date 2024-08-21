#include<stdio.h>
#include<conio.h>
main()
{
	  int i, sum =0,ld;
	  clrscr();
	  printf("Enter any digit number");
	  scanf("%d",&i);
	  ld=i%10;
	  while(i>=10)
	  {

	  i=i/10;
	  }
	  sum=ld+i;
	  printf("%d+%d=%d",ld,i,sum);

	 getch();
}