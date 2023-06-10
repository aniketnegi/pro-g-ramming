#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include "highest_prime.h"

int main(int argc, char **argv) {
  if (argc != 2) {
    fprintf(stderr,
            "ERR: Incorrect number of arguments :(\n<USAGE>: %s "
            "<number>\n",
            argv[0]);
    return EXIT_FAILURE; // :(
  }

  char *err_ptr;
  uint64_t number = strtol(argv[1], &err_ptr, 10);

  // check for str conversion errs
  if (err_ptr == argv[1]) {
    printf("Conversion failed. Invalid number.\n");
  } else if (*err_ptr != '\0') {
    printf("Conversion failed. Trailing characters after the number.\n");
  }

  uint64_t answer = solution(number);

  fprintf(stdout, "The highest prime factor of %lu is: %lu\n", number, answer);

  return 0;
}
