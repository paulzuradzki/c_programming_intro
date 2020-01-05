#include <stdio.h>

int main (void)
{
  int num_grades, i, grade;
  int grade_total = 0;
  int fail_count = 0;
  float average;

  printf ("How many grades? ");
  scanf ("%i", &num_grades);

  for (i = 1; i <= num_grades; ++i)
    {
      printf ("Enter grade: ");
      scanf ("%i", &grade);

      grade_total += grade;

      if (grade < 65)
        ++fail_count;
    }

  average = (float) grade_total / num_grades;

  printf ("\nGrade average: %.2f\n", average);
  printf ("Fail count: %i\n", fail_count);

  return 0;
}
