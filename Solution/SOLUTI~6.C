	/*  WAP to enter 5 string and print it in shorting order */
#include<stdio.h>
#include<conio.h>
void main()
{
  char s[3][20],t[10];
  int i,j;
  clrscr ();
  for (i=0; i<3; i++)
  {
     printf ("\Enter string s[%d]:", i);
     flushall();
     gets(s[i]);
  }
    for (i=0; i<3; i++)
    {
       for (j=0; j<3; j++)
       {
	  if (strcmp(s[i],s[j])<0)
	  {
	    t[i]=s[i];
	    s[i]=s[j];
	    s[j]=t[j];

	    /*strcpy(t,s[i]);
	    strcpy(s[i],s[j]);
	    strcpy(s[j],t);*/
	  }
       }
    }
    printf ("\n\t\tSHORTING");
  for (i=0; i<3; i++)
     printf ("\n%s", s[i]);
 getch ();
}
