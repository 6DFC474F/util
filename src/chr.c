#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

typedef enum { false = 0, true = 1 } bool;

bool zgetl (char *s, int *x) {
  char *endptr;
  assert (s && x);
  *x = strtol (s, &endptr, 0);
  return !(endptr && *endptr == '\0');
}

int main (int argc, char *argv[]) {
  int ret = EXIT_SUCCESS, i;
  for (i = 1; i < argc; ++i) {
    int ord;
    if (zgetl (argv[i], &ord)) {
      fprintf (stderr, "%s: %s: not a number.\n", argv[0], argv[i]);
      ret = EXIT_FAILURE;
    } else {
      printf ("%c", ord); fflush (stdout);
    }
  }
  return ret;
}
