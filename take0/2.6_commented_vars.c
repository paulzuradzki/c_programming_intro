/*
This program adds two variables and prints them with their sum.
*/

#include <stdio.h>

// start function
int main (void)
{
  // declare variables
  int val1, val2, sum;

  // define variables
  val1 = 5;
  val2 = 3;
  sum = val1 + val2;

  // print variables
  printf ("%i plus %i equals %i\n", val1, val2, sum);
  return 0;
}
