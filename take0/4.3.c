#include <stdio.h>

int main (void)
{
  int n, triang_num;

  printf ("---\t---------------\n");
  printf ("TABLE OF TRIANGULAR NUMBERS\n\n");
  printf ("n\tSum from 1 to n\n");
  printf ("---\t---------------\n");

  triang_num = 0;

  for (n = 1; n <=10; ++n)
    {
      triang_num += n;
      printf ("%2i\t%i\n", n, triang_num);
    }
}
