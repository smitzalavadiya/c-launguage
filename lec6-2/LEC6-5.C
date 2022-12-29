#include<stdio.h>
#include<conio.h>
main()
{
   int a,b,c,d;
   clrscr();
   printf("enter a:");
   scanf("%d",&a);
   printf("enter b:");
   scanf("%d",&b);
   printf("enter c:");
   scanf("%d",&c);
   printf("enter d:");
   scanf("%d",&d);

   (a>b)
	  ? (a>c)
		? (a>d)
		    ?  printf("a is big")
		    :  printf("d is big")
	  :(c>d)
		     ? printf("c is big")
		     : printf("d id big")
    : (b>c)
	   ? (b>d)
		? printf ("b is big")
		: printf("d is big")
	   :(c>d)
		    ? printf ("c is big")
		    : printf ("d is big") ;


  getch();
}