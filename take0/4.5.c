#include <stdio.h>

int main (void)
{
  int n, number, triang, counter;

  for ( counter = 1; counter <=5; ++counter)
    {
      printf ("ITER %i\n", counter);
      printf ("What triang num do you want? ");
      scanf ("%i", &number);

      triang = 0;

      for (n = 1;  n <= number; ++n)
        triang += n;

      printf("Triang num is %i\n\n", triang);
    }

  return 0;
}
