#include <stdio.h>
int gcd (int u, int v)
{
  int temp;

  printf ("gcd of %i and %i is ", u, v);

  while (v != 0)
    {
      temp = u % v;
      u = v;
      v = temp;
    }

  printf ("%i\n", u);
  return u;
}

int main (void)
{
  int result;

  result = gcd (150, 35);
  printf ("result = %i\n", result);
  result = gcd (1026, 405);
  printf ("result = %i\n", result);
  result = gcd (83, 240);
  printf ("result = %i\n", result);

  return 0;
}
