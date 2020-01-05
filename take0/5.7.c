#include <stdio.h>

int main (void)
{
  char c;

  printf ("enter a single character: \n");
  scanf ("%c", &c);

  if (( c >= 'a' && c <= 'z' ))
    printf ("it's a letter: %c\n", c);
  else if (( c >= 'A' && c <= 'Z' ))
      printf ("it's a big letter: %c\n", c);
  else if (( c >= '0' && c <= '9' ))
    printf ("it's a number: %c\n", c);
  else
    printf ("wtf. it's special: %c\n", c);

  return 0;
}
