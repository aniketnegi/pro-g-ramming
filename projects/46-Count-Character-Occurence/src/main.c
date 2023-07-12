#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "char_count.h"

int main(int argc, char **argv) {
  if (argc != 3) {
    fprintf(stderr,
            "ERR: Incorrect number of arguments :(\n<USAGE>: %s <string> <char "
            "to search>\n",
            argv[0]);
    return EXIT_FAILURE; // :(
  } else if (strnlen(argv[2], 1) != 1) {
    fprintf(stderr,
            "ERR: Please ensure to enter a character for the search term!\n");
    return EXIT_FAILURE; // :(
  }

  uint8_t answer = solution(argv[1], *argv[2]);

  printf("\"%c\" occurs %u times in the string - \"%s\"\n", *argv[2], answer,
         argv[1]);

  return 0;
}
