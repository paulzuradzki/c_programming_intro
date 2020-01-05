#include <stdio.h>

int main (void)
{
  int p, d;
  _Bool is_prime;

  for (p = 2; p < 50; ++p)
    {
      printf ("===========================\n");
      printf ("===========================\n");
      printf ("outer loop p: %i\n", p);
      is_prime = 1;
      for (d = 2; d < p; ++d)
        {
          printf ("\ninner loop p & d: %i & %i", p, d);
        if (p % d == 0)
          printf (" ---- %i is divisible by %i", p, d);
          is_prime = 0;
        }
        if (is_prime !=0 )
          printf ("\n%i is prime\n", p);
    }

    printf ("\n");
    return 0;
}
