// basic conversions in C

#include <stdio.h>

int main (void)
{
  float f1 = 123.124, f2;
  int i1, i2 = -150;
  char c = 'a';

  i1 = f1;
  printf ("%f1 assigned to int makes %i\n", f1, i1);

  f1 = i2 / 100;
  printf ("%i divided by 100 makes %f\n", i2, f1);

  // i2 = i2 / 100;
  // printf ("%i divided by 100 makes %\n", i2, i2);

  f2 = i2 / 100.0;
  printf ("%i divided by 100.0 makes %f\n", i2, f2);

  f2 = (float) i2 / 100; // type cast operator
  printf ("(float) %i divided by 100 produces %f\n", i2, f2);

  return 0;
}
