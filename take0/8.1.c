# include <stdio.h>

int main (void)
{
  struct date
  {
      int month;
      int day;
      int year;
  };

  struct date today;
  today.month = 1;
  today.day = 1;
  today.year = 2019;

  printf ("Today's date is %i/%i/%.2i.\n", today.month, today.day,
          today.year % 100);

  return 0;
}
