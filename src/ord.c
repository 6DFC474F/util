#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
  int i;
  for (i = 1; i < argc; ++i) {
    char *s;
    for (s = argv[i]; *s; ++s) {
      printf ("%d ", *s);
    }
    printf ("\n");
  }
  exit (EXIT_SUCCESS);
}
