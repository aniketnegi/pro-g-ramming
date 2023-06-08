#include <stdio.h>
#include <stdlib.h>

#include "fizzbuzz.h"

int main(int argc, char **argv) {
  if (argc != 2) {
    fprintf(stderr,
            "ERR: Incorrect number of arguments :(\n<USAGE>: %s "
            "<number upto which fizzbuzz to be printed>\n",
            argv[0]);
    return EXIT_FAILURE; // :(
  }

  char *err_ptr;
  size_t max_lim = strtol(argv[1], &err_ptr, 10);

  // check for str conversion errs
  if (err_ptr == argv[1]) {
    printf("Conversion failed. Invalid number.\n");
  } else if (*err_ptr != '\0') {
    printf("Conversion failed. Trailing characters after the number.\n");
  }

  char **result = safe_result_alloc(max_lim);

  solution(max_lim, result);

  for (int i = 0; i < max_lim; i++) {
    printf("%s\n", result[i]);
  }

  destroy_result(max_lim, result);

  return 0;
}
