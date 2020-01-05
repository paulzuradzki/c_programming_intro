// calculate n-factorial

#include <stdio.h>

int main (void)
{
  int n, fac;

  n = 4;
  fac = n;
  while (n > 1)
  {
    printf ("%i = %i*(%i-1)\n", fac, fac, n);
    fac = fac*(n-1);
    --n;
  }
  printf ("factorial: %i\n", fac);
}
