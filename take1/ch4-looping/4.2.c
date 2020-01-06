/* Program to calculate the 200th triangular number
   Introduction of the `for` statement              */

#include <stdio.h>
int main (void)
{
    int n, triangNum;

    triangNum = 0;

    for (n = 1; n <= 200; n += 1 )
        triangNum += n;

    printf ("The 200th triangular number is %i\n", triangNum);

    return 0;
}


/*

// for loop incrementing n+=1 is same as n=n+1:
    for (n = 1; n <= 200; n = n + 1 )
        triangNum = triangNum + n;

*/