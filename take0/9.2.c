#include <stdio.h>

int string_length (const char string[])
{
  int count = 0;

  while (string[count] != '\0')
    ++count;

  return count;
}

int main (void)
{
  int string_length (const char string[]);
  const char word1[] = {'a', 's', 't', 'e', 'r', '\0'};
  const char word2[] = {'a', 't', '\0'};
  const char word3[] = {'a', 'w', 'e', '\0'};

  printf ("%i    %i    %i\n", string_length (word1),
                             string_length (word2),
                             string_length (word3));

  return 0;
}
