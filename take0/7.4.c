#include <stdio.h>

void calc_triang_num (int n)
{
  int i, triang_num=0;

  for (i = 1; i <= n; ++i)
      triang_num += i;

  printf ("Triangular number %i is --> %i\n", n, triang_num);
}

int main (void)
{
  calc_triang_num(10);
  calc_triang_num(20);
  calc_triang_num(50);

  return 0;
}
