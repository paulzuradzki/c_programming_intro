#include <stdio.h>

int main (void)
{
  int n, sign;
  printf ("type num:");
  scanf ("%i", &n);

  if (n < 0)
    sign = -1;
  else if (n == 0)
    sign = 0;
  else
    sign = 1;

  printf ("Sign = %i\n", sign);

  return 0;
}
