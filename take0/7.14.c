#include <stdio.h>
int main (void)
{

  void scalar_multiply (int n_rows, int n_cols,
                        int matrix[n_rows][n_cols], int scalar);
  void display_matrix (int n_rows, int n_cols, int matrix[n_rows][n_cols]);
  int sample_matrix[3][5] =
    {
      {7,16,55,13,12},
      {12,10,52,0,7},
      {-2,1,2,4,9}
    };

    printf ("original matrix:\n");
    display_matrix (3, 5, sample_matrix);

    scalar_multiply (3, 5, sample_matrix, 2);
    printf ("new matrix:\n");
    display_matrix (3,5, sample_matrix);

    scalar_multiply(3, 5, sample_matrix, -1);
    printf ("new matrix:\n");
    display_matrix (3,5, sample_matrix);

    return 0;

}

void scalar_multiply  (int n_rows, int n_cols, int matrix[n_rows][n_cols], int scalar)
{
  int row, col;

  for (row = 0; row < n_rows; ++row)
    for (col = 0; col < n_cols; ++col)
      matrix[row][col] *= scalar;
}

void display_matrix (int n_rows, int n_cols, int matrix[n_rows][n_cols])
{
  int row, col;

  for (row=0; row<n_rows; ++row)
    {
      for (col=0; col<n_cols; ++col)
      printf ("%5i", matrix[row][col]);
    printf ("\n");
    } // careful on parens
}
