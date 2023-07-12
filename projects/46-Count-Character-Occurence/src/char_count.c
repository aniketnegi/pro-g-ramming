#include "char_count.h"

uint8_t solution(char *string, char srch_qeury) {
  uint8_t count = 0;
  for (char *c = string; *c != '\0'; c++) {
    if (*c == srch_qeury) {
      count++;
    }
  }

  return count;
}
