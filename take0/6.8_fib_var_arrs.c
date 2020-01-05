// Generate Fibonacci numbers using variable length arrays

#include <stdio.h>

int main (void)
{
  int i, num_fibs;

  printf ("How many Fibonacci numbers do you want (between 1 and 75)?\n");
  scanf ("%i", &num_fibs);

  if (num_fibs < 1 || num_fibs > 75)
    {
      printf ("Bad number, sorry!]n");
      return 1;
    }

  unsigned long long int fibonacci[num_fibs];

  fibonacci[0] = 0;
  fibonacci[1] = 1;

  for (i=2; i < num_fibs; ++i)
    fibonacci[i] = fibonacci[i-2] + fibonacci[i-1];

  for (i=0; i < num_fibs; ++i)
    printf ("%llu.....", fibonacci[i]);

  printf ("\n");

  return 0;
}
