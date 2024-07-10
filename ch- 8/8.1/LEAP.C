#include<stdio.h>
#include<conio.h>
main()
{
	 int a,n;
clrscr();
	  printf("Enter any number :");
	  scanf("%d",&a);
	  printf("Enter any number :");
	  scanf("%d",&n);

	  while (a<=n)
	  {
	  if(a%4==0)
	  printf("%d\t",a);
	  a++;
	  }
getch();
}