#include <stdio.h>


struct time
{
  int hour;
  int minutes;
  int seconds;
};

int main (void)
{
  struct time time_update (struct time now);
  struct time now, next;

  printf ("Enter the time (hh:mm:ss): ");
  scanf ("%i:%i:%i", &now.hour, &now.minutes, &now.seconds);

  next = time_update (now);

  printf ("Next minute is: %i:%i:%i\n", next.hour, next.minutes, next.seconds);
  return 0;
}

struct time time_update (struct time now)
{
  ++now.seconds;

  if (now.seconds == 60)
  {
    now.seconds = 0;
    ++now.minutes;

    if (now.minutes == 60)
    {
      now.minutes = 0;
      ++now.hour;
        if ( now.hour == 24)
          now.hour = 0;
    }
  }
  return now;
}
