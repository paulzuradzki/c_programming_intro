#include <stdio.h>

int main (void)
{
  int u, v, temp;

  printf ("Type two non-consecutive integers: ");
  scanf ("%i%i", &u, &v);

  while ( v != 0)
    {
      temp = u % v;
      u = v;
      v = temp;
    }

  printf ("GCD is: %i\n", u);

    return 0;
}
