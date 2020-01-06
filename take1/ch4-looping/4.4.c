// asking for user input

#include <stdio.h>
int main (void)
{
    int n, number, triNum;

    printf ("What triangular number do you want? ");
    scanf ("%i", &number);

    triNum = 0;

    for (n=0; n<=number; ++n)
    {
        triNum += n;
    };

    printf ("Triangular number %i is %i\n", number, triNum);

    return 0;
}