#include <stdio.h>

int minimum (int values[], int num_elems)
{
  int min_val, i;
  min_val = values[0];
  for (i=1; i < num_elems; ++i)
    if (values[i] < min_val)
      min_val = values[i];
  return min_val;
}

int main (void)
{
  int array1[5] = { 157, -28, -37, 26, 10 };
  int array2[7] = { 12, 45, 1, 10, 5, 3, 22};
  int minimum (int values[], int num_elems);

  printf ("array1 min: %i\n", minimum (array1, 5));
  printf ("array2 min: %i\n", minimum (array2, 7));

  return 0;
}
