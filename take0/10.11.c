#include <stdio.h>

int array_sum (int array[], const int n)
{
  int sum = 0, *pointer;
  int * const array_end = array + n;

  // equivalent
  // pointer = array;
  // pointer = &array[0]

  for (pointer = array; pointer < array_end; ++pointer)
    {
      // printf ("pointer points to %i\n", pointer[0]);
      // printf ("pointer points to %i\n", *(pointer));
      // printf ("pointer points to %i\n", *pointer);
    sum += *pointer;
    }
  return sum;
}

int main (void)
{
  int array_sum (int array[], const int n );
  int values[10] = { 3, 7, -9, 3, 6, -1, 7, 9, 1, -5};

  printf ("The sum is %i\n", array_sum (values, 10));

  return 0;
}
