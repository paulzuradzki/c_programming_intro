// 4.2.c

#include <stdio.h>

int main (void)
{
  int n, triang_num;

  triang_num = 0;

  for ( n = 1; n <= 20; n = n + 1 )
      {
        triang_num = triang_num + 1;
        printf ("triang_num: %i\n", triang_num);
      }
  return 0;
}
