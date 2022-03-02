#include<stdio.h>
#include<conio.h>
void main()
{
 int a[3][3],b[3][3],i,j,s[3][3];
 clrscr ();

 // 1st Matrix

  for (i=0; i<3; i++)         //row
   {
    for (j=0; j<3; j++)     //coloum
    {
     printf ("\nEnter value for a[%d][%d]:", i,j);
     scanf ("%d", &a[i][j]);
    }
   }
   clrscr ();

   // 2nd Matrix

   for (i=0; i<3; i++)         //row
   {
    for (j=0; j<3; j++)     //coloum
    {
     printf ("\nEnter value for b[%d][%d]:", i,j);
     scanf ("%d", &b[i][j]);
    }
   }
   clrscr ();

   // Printf matrix

   printf ("1st Matrix\n\n");
   for (i=0; i<3; i++)
   {
    for (j=0; j<3; j++)
       printf ("%d\t", a[i][j]);
    printf ("\n");
   }
  printf ("------------------------------------------------------\n");
    printf ("2st Matrix\n\n");
   for (i=0; i<3; i++)
   {
    for (j=0; j<3; j++)
       printf ("%d\t", b[i][j]);
    printf ("\n");
   }
printf ("--------------------------------------------------\n");

   //Sum of Matrix

   printf("Sum of MAtrix\n\n");
   for (i=0;  i<3; i++)
   {
     for (j=0; j<3; j++)
     {
       s[i][j]=a[i][j]+b[i][j];
     //  printf ("%d\n", s);
     }
   }
   for (i=0; i<3; i++)
   {
     for (j=0; j<3; j++)
     {
	printf ("%d\t", s[i][j]);
     }
     printf ("\n");
   }


 getch ();
}
