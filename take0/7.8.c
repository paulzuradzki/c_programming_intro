#include <stdio.h>

float abs_val (float x)
{
  if (x < 0)
    x = -x;
  return (x);
}

float my_sqrt (float x)
{
  const float epsilon = .00001;
  float guess = 1.0;

  while (abs_val (guess * guess - x) >= epsilon)
    guess = (x / guess + guess) / 2.0;

  return guess;
}

int main (void)
{
  printf("square root of (2.0) = %f\n", my_sqrt (2.0));
  printf("square root of (144.0) = %f\n", my_sqrt (144.0));
  printf("square root of (17.5) = %f\n", my_sqrt (17.5));

  return 0;
}
