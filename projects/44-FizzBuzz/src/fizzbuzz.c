#include "fizzbuzz.h"

#include <stdio.h>
#include <stdlib.h>

#define SIZE_STR_FIZZBUZZ (9)

void solution(size_t n, char **result) {
  for (size_t i = 1; i <= n; i++) {
    if (i % 3 == 0 && i % 5 == 0)
      sprintf(result[i - 1], "FizzBuzz");
    else if (i % 3 == 0)
      sprintf(result[i - 1], "Fizz");
    else if (i % 5 == 0)
      sprintf(result[i - 1], "Buzz");
    else
      sprintf(result[i - 1], "%ld", i);
  }
}

char **safe_result_alloc(size_t length) {
  char **result = (char **)calloc(length, sizeof(char *));

  // handle calloc failure
  if (result == NULL) {
    fprintf(stderr, "Error: Memory allocation failed.\n");
    exit(EXIT_FAILURE);
  }

  for (size_t i = 0; i < length; i++) {
    result[i] = (char *)calloc(SIZE_STR_FIZZBUZZ, sizeof(char));
    if (result[i] == NULL) {
      fprintf(stderr, "Error: Memory allocation failed.\n");
      destroy_result(length, result);
      exit(EXIT_FAILURE);
    }
  }

  return result;
}

void destroy_result(size_t length, char **result) {
  for (size_t i = 0; i < length; i++) {
    free(result[i]);
  }

  free(result);
}
