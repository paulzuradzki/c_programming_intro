// convert Fahrentheit to Celsius

#include <stdio.h>

int main (void)
{
  float f, c;
  f = 80;
  c = (f - 32) / 1.8;
  printf ("temp %gF = %gC\n", f, c);

  return 0;
}
