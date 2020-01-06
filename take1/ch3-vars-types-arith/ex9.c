#include <stdio.h>

int main (void)
{
    int i = 365;
    int j = 7;
    int next_multiple = i + j - i % j;
    printf ("i: %i, j: %i --> %i\n", i,j, next_multiple);

    i = 12258;
    j = 23;
    next_multiple = i + j - i % j;
    printf ("i: %i, j: %i --> %i\n", i,j, next_multiple);

    i = 996;
    j = 4;
    next_multiple = i + j - i % j;
    printf ("i: %i, j: %i --> %i\n", i,j, next_multiple);

   return 0;
}

