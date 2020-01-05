#include <stdio.h>

int main (void)
{
  int a = 25;
  int b = 2;

  float c = 25.0;
  float d = 2.0;

  printf ("6 + a / 5 * b = %i\n", 6 + a / 5 * b); // 16
  printf ("a / b * b = %i\n", a / b * b); // 12*2=24
  printf ("c / d * d = %f\n", c / d * d); // 25.0000
  printf ("c / d * 2 = %f\n", c / d * 2; // 25.0000
  printf ("-a = %i\n", -a); // -25

  return 0;
}
