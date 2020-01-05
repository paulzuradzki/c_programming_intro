#include <stdio.h>

int main (void)
{
  int i;
  char line[81];
  void read_line (char buffer[]);

  for (i = 0; i < 3; ++i)
  {
    read_line(line);
    printf ("%s\n", line);
  }

  return 0;
}

void read_line (char buffer[])
{
  char character;
  int i = 0;

  do
  {
    character = getchar ();
    buffer[i] = character;
    printf ("char is: %c\n", character);
    ++i;
  }
  while ( character != '\n');

  buffer[i-1] = '\0';
}
