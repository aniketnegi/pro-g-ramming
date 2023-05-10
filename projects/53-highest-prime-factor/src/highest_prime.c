#include "highest_prime.h"
#include <stdint.h>
#include <stdlib.h>

static uint64_t *sieve(uint64_t number) {
  uint64_t *temp_arr = malloc(3 * sizeof(uint64_t));

  for (int i = 0; i < 3; i++) {
    temp_arr[i] = (uint64_t)i;
  }

  return temp_arr;
}

uint64_t highest_prime(uint64_t number) {

  // return the number if the number is itself prime, i.e its own highest prime
  // fac.

  // generate an array of primes using sieve or erasthothenes.
  uint64_t *sieve_arr = sieve(number);

  return 0;
}
