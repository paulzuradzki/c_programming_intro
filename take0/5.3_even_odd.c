#include <stdio.h>

int main (void)
{
  int n, remainder;

  printf ("Number to check is: ");
  scanf ("%i", &n);

  if (n % 2 == 0)
    printf ("even");
  else
    printf ("odd");

  printf ("\n");

  return 0;
}
