// reverse digits of a number with While loop

#include <stdio.h>

int main (void)
{
    long int number, right_digit;

    printf ("Enter your number.\n");
    scanf ("%i", &number);


    do
    {
        right_digit = number % 10;
        printf ("%i", right_digit);
        number = number / 10;
    }
    while (number != 0 );

    printf ("\n");

    return 0;

}