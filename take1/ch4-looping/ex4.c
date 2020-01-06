// factorial for 1-10 using loop
// (as opposed to recursive function)

#include <stdio.h>

int main (void)
{

    for (int i=1; i<=10; ++i)
    {
            int n, init_n, fact;
            n = i;
            init_n = n;
            fact = n;

            while (n > 1)
            {
                fact = fact * (n-1);    int n, init_n, fact;
    n = 6;
    init_n = n;
    fact = n;

    while (n > 1)
    {
        fact = fact * (n-1);
        --n;
    }

    printf ("%i! = %i\n", init_n, fact);

                --n;
            }

            printf ("%i! = %i\n", init_n, fact);

    }

    return 0;
}