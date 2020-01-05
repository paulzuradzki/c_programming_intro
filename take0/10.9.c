// using pointers to exchange values

#include <stdio.h>

void exchange (int * const pint1, int * const pint2) // pointers will not be changed by the function
{
  int temp;
  temp = *pint1;
  *pint1 = *pint2;
  *pint2 = temp;
  printf ("exchange: *pint1: %i, *pint2 = %i\n", *pint1, *pint2);
}

int main (void)
{
  void exchange (int * const pint1, int * const pint2);
  int i1 = -5, i2 = 66, *p1 = &i1, *p2 = &i2;

  printf ("i1 = %i, i2 = %i\n", i1, i2);
  printf ("*p1 = %i, *p2 = %i\n", *p1, *p2);

  exchange (p1, p2);
  printf ("i1 = %i, i2 = %i\n", i1, i2);
  printf ("*p1 = %i, *p2 = %i\n", *p1, *p2);

  exchange (&i1, &i2);
  printf ("i1 = %i, i2 = %i\n", i1, i2);
  printf ("*p1 = %i, *p2 = %i\n", *p1, *p2);

  return 0;
}
