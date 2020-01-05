#include <stdio.h>

int converted_num[64];
long int num_to_convert;
int base;
int digit = 0;

void get_num_and_base (void)
{
  printf ("Number to convert: ");
  scanf ("%li", &num_to_convert);

  printf ("Base? \n");
  scanf ("%i", &base);

  if ( base < 2 || base > 16 )
    {
      printf ("Bad base - must be between 2 and 15\n");
      base = 10;
    }
}

void convert_num (void)
{
  do {
    converted_num[digit] = num_to_convert % base;
    ++digit;
    num_to_convert /= base;
  }
  while ( num_to_convert != 0);
}

void display_converted_num (void)
{
  const char base_digits[16] =
    {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

  int next_digit;

  printf ("converted num: \n");

  for (--digit; digit>=0; --digit)
    {
      next_digit = converted_num[digit];
      printf ("%c", base_digits[next_digit]);
    }
    printf ("\n");
}

int main (void)
{
  void get_num_and_base (void), convert_num (void),
       display_converted_num (void);

  get_num_and_base ();
  convert_num ();
  display_converted_num ();

  return 0;
}
