#include <stdio.h>

void sort (int a[], int n)
{
  int i, j, temp;

  for ( i = 0; i < n - 1; ++i)
    for ( j = i + 1; j < n; ++j )
      if (a[i] > a[j])
        {
          temp = a[i];
          a[i] = a[j];
          a[j] = temp;
        }
}

int main (void)
{
  int i;
  int array[16] = {34, -5, 6, 0, 12, 100, 56, 22,
                   44, -3, -9, 12, 17, 22, 6, 11};
  void sort (int a[], int n);

  printf ("\narray before:\n");

  for (i = 0; i < 16; ++i)
    printf ("%i ", array[i]);

  sort (array, 16);

  printf ("\n\narray after: \n");
  for (i = 0; i < 16; ++i)
    printf ("%i ", array[i]);

  printf ("\n");

  return 0;
}
