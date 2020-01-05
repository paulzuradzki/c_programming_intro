#include <stdio.h>

int main (void)
{
  const char base_digits[16] =
  {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
  'A', 'B', 'C', 'D', 'E', 'F'};
  int converted_num[64];
  long int num_to_convert;
  int next_digit, base, index=0;

  // get number and base
  printf ("Number? ");
  scanf ("%ld", &num_to_convert);
  printf ("\nBased? ");
  scanf ("%i", &base);

  // convert to indicated base

  do {
    printf ("converted[%i] = %li %% %i = %li\n", index, num_to_convert, base, num_to_convert % base);
    converted_num[index] = num_to_convert % base;
    ++index;
    num_to_convert = num_to_convert / base;
    printf ("num_to_convert is now: %li\n", num_to_convert);
  }
  while (num_to_convert !=0);

  // display results in reverse

  // printf ("converted number = \n");

  for (--index; index >=0; --index)
    {
      printf ("next_digit = converted_num[%i]\n", index);
      next_digit = converted_num[index];
      printf ("base_digits[%i] = %i\n", index, base_digits[next_digit]);
      printf ("%c\n", base_digits[next_digit]);
    }

    printf ("\n");
    return 0;
}
