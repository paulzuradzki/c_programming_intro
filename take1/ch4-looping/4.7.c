/* Find the greatest common divisor of two non-negative
   integers using Euclid's algorithm

    Problem:

    Find the greatest common divisor of two nonnegative integers u and v.

    Step 1:

    If v equals 0, then you are done and the gcd is equal to u.

    Step 2:

    Calculate temp = u % v, u = v, v = temp, and go back to step 1.      */

#include <stdio.h>

int main (void)
{

    int u, v, temp;

    printf ("Enter two non-negative intergers.\n");
    scanf ("%i%i", &u, &v);

    while ( v != 0 )
    {
      temp  = u % v;
      u = v;
      v = temp;

    };

    printf ("GCD is: %i\n", u);

    return 0;
}



