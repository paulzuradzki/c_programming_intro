#include <stdio.h>

int main (void)
{
    float c, f;

    f = 60;
    c = (f - 32) / 1.8;

    printf ("%g (F) -> %g (C)\n", f, c);

    return 0;
}