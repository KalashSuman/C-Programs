#include<stdio.h>
#include<conio.h>
void main()
{
     int a,b,c;
     clrscr();
     printf ("Enter three numbers");
     scanf ("%d%d%d", &a,&b,&c);
     if((a>b) && (a>c))

     {
      printf ("a is greatest number");
     }
     else if ((b>a) && (b>c))
     {
      printf("b is greatest number");
      }
      else
      {
	printf ("c is greatest number");
	}
      getch();
 }
