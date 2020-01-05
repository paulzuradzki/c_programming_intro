#include <stdio.h>
int main (void)
{
  void scalar_mult (int matrix[3][5], int scalar);
  void display_matrix (int matrix[3][5]);
  int sample_matrix[3][5] =
  {
    {7, 16, 55, 13, 12 },
    {12, 10, 52, 0, 7},
    {-2, 1, 2, 4, 9}
  };

  printf ("Original matrix:\n");
  display_matrix (sample_matrix);

  scalar_mult (sample_matrix, 2);
  printf ("doubled:\n");
  display_matrix (sample_matrix);

  scalar_mult (sample_matrix, -1);
  printf ("less 1:\n");
  display_matrix (sample_matrix);

  return 0;
}

void scalar_mult (int matrix[3][5], int scalar)
{
  int row, col;

  for (row = 0; row < 3; ++row)
    for (col = 0; col < 5; ++col)
      matrix[row][col] *= scalar;
}

void display_matrix (int matrix[3][5])
{
  int row, col;

  for (row=0; row<3; ++row)
    {
      for (col=0; col<5; ++col)
      printf ("%5i", matrix[row][col]);
    printf ("\n");
    } // careful on parens 
}
