#include <stdio.h>

int main (void)
{
  int n, triang_num;

  triang_num = 0;

  for (n=1; n<=200; ++n)
      {
        triang_num += n;
        // printf ("num: %i\n", triang_num);
      }
  printf ("trian_num is %i\n", triang_num);
  return 0;
}
