#include <stdio.h>

int minimum (int values[10])
{
  int min_val, i;

  min_val = values[0];

  for (i=0; i < 10; ++i)
    if (values[i] < min_val)
      min_val = values[i];

  return min_val;
}

int main (void)
{
  int scores[10], i, min_score;
  int minimum (int values[10]);

  printf ("enter 10 scores: \n");

  for (i = 0; i < 10; ++i)
    scanf ("%i", &scores[i]);

  min_score = minimum (scores);
  printf("============\n");
  printf ("min is: %i\n", min_score);
}
