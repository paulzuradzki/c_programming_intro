#include <stdio.h>

int main (void)
{
  int year, remainder, rem_4, rem_100, rem_400;

  printf ("Enter test year: ");
  scanf ("\n%i", &year);

  rem_4 = year % 4;
  rem_100 = year % 100;
  rem_400 = year % 400;

  if ( (rem_4 == 0 && rem_100 - 100 ) || rem_400 == 0 )
    printf ("LEAP YEAR!!!\n");
  else
    printf ("Nope. Sorry it' not your leap year.\n");

  return 0;
}
