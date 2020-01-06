// using nested for loops

#include <stdio.h>

int main (void)
{
    int num, triNum;

    for (int counter=1; counter<=5; ++counter)
    {

    printf ("What triangular number do you want? ");
    scanf ("%i", &num);

    triNum = 0;

    for (int n=1; n<=num; ++n)
        triNum += n;

    printf ("Triangular number %i is %i\n\n", num, triNum);

    }

    return 0;
}

/*

for loop variants

multiple expressions
for ( i = 0, j = 0;  i < 10;  ++i )
for  ( i = 0, j = 100;  i < 10;  ++i, j = j - 10 )

omitting fields
for  (  ;  j != 100;  ++j )
     ...

declaring variables
for ( int  counter = 1; counter <= 5; ++counter )
for ( int  n = 1, triangularNumber = 0; n <= 200; ++n )
     triangularNumber += n;

*/