#include <stdio.h>

int main(void)
{
  int integer_var = 100;
  float float_var = 3.14;
  double double_var = 3.14e10;
  char char_var = 'w';

  _Bool bool_var = 1;

  printf ("integer_var is %i\n", integer_var);
  printf ("float_var is %f\n", float_var);
  printf ("double_var is %f\n", double_var);
  printf ("double_var is %e\n", double_var);
  printf ("double_var is %g\n", double_var);
  printf ("char_var is %c\n", char_var);
  printf ("bool_var is %i\n", bool_var);

  return 0;
}
