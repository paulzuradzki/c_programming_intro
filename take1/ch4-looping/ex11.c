// calculate sum of digits in an integer

// modulus 10 gets us right digit
// integer division by 10 gets us all but the last digit

#include <stdio.h>

int main (void)
{
    int n;
    printf ("Enter number: ");
    scanf ("%i", &n);
    printf ("sum of digits in %i = \n", n);

    int right_digit;
    int sum = 0;

    while (n / 10 != 0)
    {
        right_digit = n % 10;
        sum += right_digit;
        n = n / 10;
    }

    // loop breaks at first digit
    // so we add first digit after
    sum += n;

    printf ("%i\n", sum);
}