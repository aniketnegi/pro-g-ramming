#include "highest_prime.h"
#include <math.h>
#include <stdint.h>

uint64_t solution(uint64_t number) {
  uint64_t last_factor;

  if (number % 2 == 0) {
    last_factor = 2;
    number /= 2;
    while (number % 2 == 0) {
      number /= 2;
    }
  } else {
    last_factor = 1;
  }

  uint64_t factor = 3;

  uint64_t max_factor = (uint64_t)sqrt((double)number);

  while (number > 1 && factor <= max_factor) {
    if (number % factor == 0) {
      number /= factor;
      last_factor = factor;
      while (number % factor == 0) {
        number /= factor;
      }
      max_factor = (uint64_t)sqrt((double)number);
      ;
    }

    factor += 2;
  }

  if (number == 1) {
    return last_factor;
  } else {
    return number;
  }
}
