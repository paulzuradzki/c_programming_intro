// modulus operator

#include <stdio.h>

int main (void)
{
    int a = 25, b = 5, c = 10, d = 7;

    printf ("%i\n", a % b);
    printf ("%i\n", a % c);
    printf ("%i\n", a % d);
    printf ("%i\n", a / d * d + a % d);

    return 0;
}

//0
//5
//4
//25/7*7+3=int arith: 3*7+4=25