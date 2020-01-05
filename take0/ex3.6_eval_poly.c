// evaluate polynomial

#include <stdio.h>

int main (void)
{
  float x=2.55, result;

  result = 3*(x*x*x) + 5*(x*x) + 6;
  printf ("result of [3*x^3 + 5*x^2 + 6] is %f:\t\n", result);

  return 0;
}
