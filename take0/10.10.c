#include <stdio.h>

struct entry
{
  int value;
  struct entry *next;
};

struct entry *find_entry (struct entry *list_pointer, int match)
{
  while (list_pointer != (struct entry *) 0 )
    if (list_pointer->value == match )
      return (list_pointer);
    else
      list_pointer = list_pointer->next;

    return (struct entry *) 0;
}

int main (void)
{
  struct entry *find_entry (struct entry *list_pointer, int match);
  struct entry n1, n2, n3;
  struct entry *list_pointer, *list_start = &n1;

  int search;

  n1.value = 100;
  n1.next = &n2;

  n2.value = 200;
  n2.next = &n3;

  printf ("enter value to locate: ");
  scanf ("%i", &search);

  list_pointer = find_entry (list_start, search);

  if (list_pointer != (struct entry *) 0)
    printf ("found %i.\n", list_pointer->value);
  else
    printf ("not found");

  return 0;
}
