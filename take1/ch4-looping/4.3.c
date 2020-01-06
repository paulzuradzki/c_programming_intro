// generate table of triangular numbers

/*
++n: increments by 1
%2i: field width specification
*/

#include <stdio.h>

int main (void)
{
    int n, triNum;

    printf ("TABLE OF TRIANGULAR NUMBERS\n\n");
    printf (" n    Sum from 1 to n\n");
    printf ("---   ---------------\n");

    triNum = 0;
    for (n=0; n<=10; ++n)
    {
        triNum += n;
        printf ("%2i    %i\n", n, triNum);
        // left-aligned with minus sign
        // printf ("%-2i    %i\n", n, triNum);
    }
    return 0;
}