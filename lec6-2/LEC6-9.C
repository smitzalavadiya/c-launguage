#include<stdio.h>
#include<conio.h>
main()
{
   char a;
   clrscr();
   printf ("enter value a:");
   scanf("%c",&a);

   if (a>='A' && a<='Z ')
   {
	   printf ("%c is upper case",a);
   }
   else if (a>='a'&& a<='z')
   {
	   printf ("%c is lower case",a);
   }
   else if (a>='0' && a<='9')
   {
	   printf("%c is digital",a);
   }
   else
   {
	    printf("%c is special charecter",a);
   }







  getch();
}