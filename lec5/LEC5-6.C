#include<stdio.h>
#include<conio.h>
main()
{
  int x=2,y=6,z=9,a;
  clrscr();
  a= (x*x*x)-(y*y*y)-(z*z*z)-3*(y+z)*(x-y)*(x-z);
  printf("a:%d",a);

 getch();
}