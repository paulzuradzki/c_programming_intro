#include <stdio.h>
#include <stdbool.h>

struct entry
{
  char word[15];
  char definition[50];
};

int compare_strings (const char s1[], const char s2[])
{
  int i = 0, answer;

  while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    ++i;

  if (s1[i] < s2[i])
    answer = -1;
  else if (s1[i] == s2[i])
    answer = 0;
  else
    answer = 1;
  return answer;
}

int lookup (const struct entry dictionary[], const char search[], const int entries)
{
  int low = 0;
  int high = entries - 1;
  int mid, result;
  int compare_strings (const char s1[], const char s2[]);

  while (low <= high)
  {
  mid = (low + high) / 2;
  result = compare_strings (dictionary[mid].word, search);

  if (result == -1)
    {
      low = mid + 1;
    }
  else if (result == 1)
    high = mid - 1;
  else
    return mid; // found it

  printf ("result: %i\n", result);
  printf ("LOW: %i, MID: %i, HIGH: %i \n", low, mid, high);
  printf ("LOW: %s, MID: %s, HIGH: %s \n", dictionary[low].word, dictionary[mid].word, dictionary[high].word);
  }
  return -1; // not found

}

int main (void)
{
  const struct entry dictionary[100] =
  {
    {"aardvark", "a burrowing African mammal"},
    {"abyss", "a bottomless pit"},
    {"acumen", "mentally sharp; keen"},
    {"addle", "to become confused"},
    {"aerie", "a high nest"},
    {"affix", "to append; attach"},
    {"agar", "a jelly made from seaweed"},
    {"ahoy", "a nautical call of greeting"},
    {"aigrette", "an ornamental cluster of feathers"},
    {"ajar", "partially opened"},
  };

  char word[10];
  int entries = 10;
  int entry;
  int lookup (const struct entry dictionary[], const char search[], const int entries);

  printf ("Enter word: ");
  scanf ("%14s", word);
  entry = lookup (dictionary, word, entries);

  if (entry != -1)
    printf ("%s\n", dictionary[entry].definition);
  else
    printf ("Sorry, the word %s is not in my dictionary.\n", word);

  return 0;
}
