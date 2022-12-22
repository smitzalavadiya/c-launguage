#include<stdio.h>
#include<conio.h>
main()
{
  int x=5,y=10,z=15,c;
  clrscr();
  c =(x*x*x)+(y*y*y)+(z*z*z)-3((x+y+z)*((x*y)(x*z)(y*z))-(z*y*z));
  printf("z:%d",z);



  getch();
}