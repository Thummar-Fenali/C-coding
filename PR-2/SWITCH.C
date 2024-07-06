#include<stdio.h>
#include<conio.h>
main()
{
int a;
char grade;
     clrscr();
     printf("enter the grade:");
     scanf("%d",&grade);
     if(grade>=91 && grade<=100)
     {
       grade='A';
     }
     else if(grade>=81 && grade <=90)
     {
	  grade ='B';
       }


     else if (grade>=71 && grade<=80)
     {
	    grade ='C';
	    }

     else if (grade>=61 && grade<=70)
     {
		 grade ='D';
	       }
     else if (grade>=61 &&   grade<=50)
     {
		  grade ='E';
		  }
		  else
		  {
		  grade='F';
		  }


switch (grade)
{
case 'A':
printf("grade a is excellent work ");
break;
case 'B':
printf("grade b is well done");
break;
case'C':
printf("grade c is good job ");
break;
case 'D':
printf("grade d is you passed ");
break;
case  'E':
printf("grade e is you could be do it better  ");
break;
case'F':
printf("sorry you are failed");

}
getch();
}
