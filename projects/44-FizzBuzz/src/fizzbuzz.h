#ifndef _FIZZBUZZ_H_
#define _FIZZBUZZ_H_

#include <stddef.h>

void solution(size_t n, char **result);

char **safe_result_alloc(size_t length);

void destroy_result(size_t length, char **result);

#endif // !DEBUG
