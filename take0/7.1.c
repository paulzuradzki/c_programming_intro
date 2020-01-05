#include <stdio.h>

void print_message (void)
{
  printf ("hello world\n");
}

void print_loop (int n)
{
  printf ("I'm in a loop: %i\n", n);
}


int main (void)
{
  int i, j;
  print_message();
  print_message();

  for (i=1; i<=4; ++i)
  {
    print_loop(i);
    for (j=1; j<=5; ++j)
      printf ("\t --> inner loop %i\n", j);
  }
  return 0;
}
