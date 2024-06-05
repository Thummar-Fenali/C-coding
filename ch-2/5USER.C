#include<stdio.h>
#include<conio.h>
main()
{
    int r;
    float pi =3.14;
    clrscr();
    printf("Enter the value of r:");
    scanf("%i",&r);
    printf("\n\n");
    printf("%f * %f * %i = %f",pi,pi,r,pi*pi*r);
    getch();
}
