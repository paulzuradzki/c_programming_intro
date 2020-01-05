#include <stdio.h>

int main (void)
{
  struct date
  {
    int month;
    int day;
    int year;
  };

  struct date today, *date_pointer;

  date_pointer = &today;

  date_pointer->month = 9;
  date_pointer->day=25;
  date_pointer->year = 2015;

  // alternative syntax
  // (*date_pointer).month = 9;
  // (*date_pointer).day = 25;
  // (*date_pointer).year = 2015;

  printf ("Today's date is %i/%i/%.2i.\n",
          date_pointer->month, date_pointer->day, date_pointer->year);

  return 0;
}
