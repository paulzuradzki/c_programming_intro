// using arithmetic operators

#include <stdio.h>

int main (void)
{
    int a = 10;
    int b = 4;
    int c = 3;
    int d = 12;
    int result;

    result = a - b;
    printf ("a - b = %i\n", result);

    result = a + b * d;
    printf ("a + b * d = %i\n", result);

    result = (c-d) + (a+b);
    printf ("(c-d) + (a+b) = %i\n", result);

    return 0;

}