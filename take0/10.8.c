#include <stdio.h>

void test (int *int_pointer)
{
  *int_pointer = 100;
}

int main (void)
{
  void test (int *int_pointer);
  int i = 50, *p = &i;

  printf ("Before the call to test i - %i\n", i);
  printf ("Before the call to test *p - %i\n", *p);

  test (p);

  printf ("After the call to test i - %i\n", i);
  printf ("After the call to test *p - %i\n", *p);

  return 0;
}
