#include <stdio.h>

#include <stdbool.h>
struct date
{
  int month;
  int day;
  int year;
};

int main (void)
{
  struct date today, tomorrow;
  int number_of_days (struct date d);

  printf ("Enter today's date (mm dd yyyy): ");
  scanf ("%i%i%i", &today.month, &today.day, &today.year);

  if (today.day != number_of_days (today) )
    {
      tomorrow.day = today.day + 1;
      tomorrow.month = today.month;
      tomorrow.year = today.year;
    }
  else if ( today.month ==12 )
    {
      tomorrow.day = 1;
      tomorrow.month = 1;
      tomorrow.year = today.year + 1;
    }
  else
    {
      tomorrow.day = 1;
      tomorrow.month = today.month + 1;
      tomorrow.year = today.year;
    }

  printf ("Tomorrow is: %i/%i/%i\n", tomorrow.month, tomorrow.day, tomorrow.year % 100);

  return 0;
}

int number_of_days (struct date d)
{
  int days;
  bool is_leap_year (struct date d);
  const int days_per_month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  if ( is_leap_year (d) == true && d.month == 2 )
    days = 29;

  else
    days = days_per_month[d.month - 1];
  return days;
}

bool is_leap_year (struct date d)
{
  bool leap_year_flag;

  if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0 )
    leap_year_flag = true; // it's a leap year
  else
    leap_year_flag = false;

  return leap_year_flag;
}
