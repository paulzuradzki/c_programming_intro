#include <stdio.h>

int main (void)
{
  int n;

  printf ("type num: ");
  scanf ("%i", &n);

  if (n < 0)
    n = -n;

  printf ("Absolute value is: %i\n", n);

  return 0;
}
