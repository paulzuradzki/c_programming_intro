//Write a program to evaluate the polynomial shown here:
//3*x**3 - 5*x**2 + 6
//x = 2.55

#include <stdio.h>
#include <math.h>

int main (void)
{
    float x = 2.55;
    float y;

//    float pow(float x, float y);

    y = 3*pow(x,3) - 5*pow(x,2) + 6;

    printf ("f(%f) = %f\n", x, y);

    return 0;

}