#include<stdio.h>
#include<conio.h>
main()
{
   int a,b,c,d,e;
   clrscr();
   printf("enter a:");
   scanf("%d",&a);
   printf("enter b:");
   scanf("%d",&b);
   printf("enter c:");
   scanf("%d",&c);
   printf("enter d:");
   scanf("%d",&d);
    printf("enter e:");
   scanf("%d",&e);


   (a>b)
	  ? (a>c)
		   ? (a>d)
			   ? (a>e)
				? printf("a is big")
				: printf("e is big")
			   : (d>e)
				? printf ("d is big")
				: printf ("e is big")
		   :(c>d)
			  ? (c>e)
				 ? printf ("c is big")
				 : printf ("e is big")

			  : (d>e)
				? printf ("d is big")
				: printf ("e is big")

   :(b>c)
	  ? (b>d)
	       ? (b>e)
		     ? printf ("b is big")
		     : printf ("e is big")

	       : (d<e)
		  ? printf ("d is big")
		  : printf ("e is big ")
	 : (c>d )
	       ?(c>e)
		 ? printf (" c is big")
		 : printf (" e is big")
	       :(d>e)
		 ? printf ("d is big")
		 : printf ("e is big");


   getch();
}